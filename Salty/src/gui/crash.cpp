#include"gta/joaat.hpp"
#include"gta/natives.hpp"
#include"gta/array.hpp"
#include "memory/all.hpp"
#include "hooking/_Hooking.h"
#include "crash.hpp"
#include "logger.hpp"

namespace big::crash
{
	struct sysPerformanceTimer
	{
		char name[16];
		LARGE_INTEGER totalTime;
		LARGE_INTEGER startTime;
		bool isRunning;
	};

	static float* rage__sysTimerConsts__TicksToMilliseconds;
	static float (*g_origsysPerformanceTimer__GetElapsedTimeMS)(sysPerformanceTimer* self);
	static float sysPerformanceTimer__GetElapsedTimeMS(sysPerformanceTimer* self)
	{
		LARGE_INTEGER curTime; 
		QueryPerformanceCounter(&curTime);

		return (curTime.QuadPart - self->startTime.QuadPart) * *rage__sysTimerConsts__TicksToMilliseconds;
	}

	static int (*g_origGetHandlingByHash)(const uint32_t& hash, bool ye);
	static int GetHandlingByHashStub(const uint32_t& hash, bool ye)
	{
		int a = g_origGetHandlingByHash(hash, ye);

		if (a == -1)
		{
			a = g_origGetHandlingByHash(RAGE_JOAAT("adder"), true);
		}

		return a;
	}
	static int GetGpuCount1()
	{
		return 1;
	}

	static int GetGpuCount2(char* self)
	{
		*(uint32_t*)(self + 56) = 1;
		return 1;
	}

	static volatile void* g_dummyState;

	static void* ProbePointer(char* pointer)
	{
		__try
		{
			g_dummyState = **(volatile void***)pointer;

			return *(void**)pointer;
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			static bool hasCrashedBefore = false;

			if (!hasCrashedBefore)
			{
				hasCrashedBefore = true;
			}

			return nullptr;
		}
	}

	static void* (*origGetModelInfo)(void*);
	static void* (*origGetFrag)(void*);

	static void* GetModelInfoOnlyIfFrag(void* data)
	{
		void* retval = origGetModelInfo(data);

		if (retval)
		{
			if (origGetFrag(retval))
			{
				return retval;
			}
		}

		return nullptr;
	}

	static intptr_t(*origVerifyNetObj1)(void*, int);
	static intptr_t(*origVerifyNetObj2)(void*, int);

	intptr_t VerifyNetObj1(char* a1, int a2)
	{
		if (*(void**)(a1 + 176) == 0)
		{
			return 0;
		}

		return origVerifyNetObj1(a1, a2);
	}

	intptr_t VerifyNetObj2(char* a1, int a2)
	{
		if (*(void**)(a1 + 176) == 0)
		{
			return 0;
		}

		return origVerifyNetObj2(a1, a2);
	}

	struct grcVertexProgram
	{
		void* vtbl;
		const char* name;
		char pad[568];
	};

	struct grmShaderProgram
	{
		char pad[48];
		rage::atArray<grcVertexProgram> vertexPrograms;
	};

	struct grmShaderFx
	{
		void* padParams;
		grmShaderProgram* program;
	};

	static void(*g_origDrawModelGeometry)(grmShaderFx* shader, int a2, void* a3, int a4, bool a5);

	static void DrawModelGeometryHook(grmShaderFx* shader, int a2, void* a3, int a4, bool a5)
	{
		if (shader->program && shader->program->vertexPrograms.count() && shader->program->vertexPrograms[0].name && strstr(shader->program->vertexPrograms[0].name, "_batch:") != nullptr)
		{
			return;
		}

		g_origDrawModelGeometry(shader, a2, a3, a4, a5);
	}

	static bool(*g_origLoadFromStructureChar)(void* parManager, const char* fileName, const char* extension, void* structure, void** outStruct, void* unk);

	static bool LoadFromStructureCharHook(void* parManager, const char* fileName, const char* extension, void* structure, void** outStruct, void* unk)
	{
		bool result = g_origLoadFromStructureChar(parManager, fileName, extension, structure, outStruct, unk);

		if (result && !*outStruct)
		{
			result = false;
		}

		return result;
	}

	static void(*g_origCText__LoadSlot)(void* text, void* name, int slot, int a4);

	static void CText__LoadSlotHook(void* text, void* name, int slot, int a4)
	{
		if (slot > 20)
		{
			return;
		}

		return g_origCText__LoadSlot(text, name, slot, a4);
	}

	static bool(*g_origCText__IsSlotLoaded)(void* text, int slot);

	static bool CText__IsSlotLoadedHook(void* text, int slot)
	{
		if (slot > 20)
		{
			return true;
		}

		return g_origCText__IsSlotLoaded(text, slot);
	}

	static void(*g_origCText__UnloadSlot)(int slotId, bool a2);

	static void CText__UnloadSlotHook(int slotId, bool a2)
	{
		if (slotId > 20)
		{
			return;
		}

		g_origCText__UnloadSlot(slotId, a2);
	}

	static void (*g_origDrawListMgr_ClothFlush)(void*);
	static LPCRITICAL_SECTION g_clothCritSec;

	static void CDrawListMgr_ClothCleanup(char* mgr)
	{
		if (g_clothCritSec->DebugInfo)
		{
			EnterCriticalSection(g_clothCritSec);
		}

		rage::atArray<void*>& refs = *(rage::atArray<void*>*)(mgr + 1608);

		for (int i = 0; i < refs.count(); i++)
		{
			if (refs[i] == nullptr)
			{
				// move the last item to the current position
				--refs.m_count;
				refs[i] = refs[refs.m_count];

				// iterate this one again
				--i;
			}
		}

		g_origDrawListMgr_ClothFlush(mgr);

		if (g_clothCritSec->DebugInfo)
		{
			LeaveCriticalSection(g_clothCritSec);
		}
	}

	void enable()
	{
		hook::set_base();

		//{
		//	auto location = hook::get_pattern("83 C8 FF 84 D2 74 10", -4);
		//	MH_CreateHook(location, GetHandlingByHashStub, (void**)&g_origGetHandlingByHash);
		//	MH_EnableHook(location);
		//}

		//{
		//	auto location = hook::get_pattern("66 44 3B A9 50 06 00 00 0F 83", -0x25);
		//	MH_CreateHook(location, CDrawListMgr_ClothCleanup, (void**)&g_origDrawListMgr_ClothFlush);
		//	g_clothCritSec = hook::get_address<LPCRITICAL_SECTION>(hook::get_pattern("48 8B F8 48 89 58 10 33 C0 8D 50 10", -0x21));
		//	MH_EnableHook(location);
		//}

		//{
		//	auto location1 = hook::get_pattern("4C 8B EA 48 8B F1 E8 ? ? ? ? 40 B5 01 48 8B F8", -0x2D);
		//	auto location2 = hook::get_pattern("EB 08 C7 44 24 20 01 00 00 00 45 33 C9", -0x17);
		//	auto location3 = hook::get_pattern("75 0D F6 84 08 ? ? 00 00", -0xB);
		//	auto location4 = hook::get_pattern("41 BD D8 00 00 00 39 6B 60 74", -0x30);

		//	MH_CreateHook(location1, LoadFromStructureCharHook, (void**)&g_origLoadFromStructureChar);
		//	MH_CreateHook(location2, CText__LoadSlotHook, (void**)&g_origCText__LoadSlot);
		//	MH_CreateHook(location3, CText__IsSlotLoadedHook, (void**)&g_origCText__IsSlotLoaded);
		//	MH_CreateHook(location4, CText__UnloadSlotHook, (void**)&g_origCText__UnloadSlot);

		//	MH_EnableHook(location1);
		//	MH_EnableHook(location2);
		//	MH_EnableHook(location3);
		//	MH_EnableHook(location4);
		//}

		//{
		//	auto location = hook::pattern("41 0F B6 80 4A 03 00 00 3B D0").count(2);

		//	auto v0 = location.get(0).get<void>(-12);
		//	auto v1 = location.get(1).get<void>(-12);

		//	MH_CreateHook(v0, VerifyNetObj1, (void**)&origVerifyNetObj1);
		//	MH_CreateHook(v1, VerifyNetObj2, (void**)&origVerifyNetObj2);
		//	MH_EnableHook(v0);
		//	MH_EnableHook(v1);
		//}

		//{
		//	auto location = hook::get_pattern("4D 8B F0 44 8A 44 24 50 41 8B", -0x19);

		//	MH_CreateHook(location, DrawModelGeometryHook, (void**)&g_origDrawModelGeometry);
		//	MH_EnableHook(location);
		//}
	}
	void disable()
	{
	}
}