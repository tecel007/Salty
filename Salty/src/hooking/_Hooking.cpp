/*
 * This file is part of the CitizenFX project - http://citizen.re/
 *
 * See LICENSE and MENTIONS in the root of the source tree for information
 * regarding licensing.
 */

#include "common.hpp"
#include "_Hooking.h"

namespace hook
{
#ifndef _M_AMD64
	void inject_hook::inject()
	{
		inject_hook_frontend fe(this);
		m_assembly = std::make_shared<FunctionAssembly>(fe);

		put<uint8_t>(m_address, 0xE9);
		put<int>(m_address + 1, (uintptr_t)m_assembly->GetCode() - (uintptr_t)get_adjusted(m_address) - 5);
	}

	void inject_hook::injectCall()
	{
		inject_hook_frontend fe(this);
		m_assembly = std::make_shared<FunctionAssembly>(fe);

		put<uint8_t>(m_address, 0xE8);
		put<int>(m_address + 1, (uintptr_t)m_assembly->GetCode() - (uintptr_t)get_adjusted(m_address) - 5);
	}
#else

#if defined(IS_RDR3)
	static uintptr_t g_currentStub = 0x148000000;
#else
	static uintptr_t g_currentStub = 0x146000000;
#endif

	void* AllocateFunctionStub(void* ptr, int type)
	{
#if defined(GTA_FIVE) || defined(IS_RDR3)
		char* code = (char*)g_currentStub + hook::baseAddressDifference;

		DWORD oldProtect;
		VirtualProtect(code, 20, PAGE_EXECUTE_READWRITE, &oldProtect);

		*(uint8_t*)code = 0x48;
		*(uint8_t*)(code + 1) = 0xb8 | type;

		*(uint64_t*)(code + 2) = (uint64_t)ptr;

		*(uint16_t*)(code + 10) = 0xE0FF | (type << 8);

		*(uint64_t*)(code + 12) = 0xCCCCCCCCCCCCCCCC;

		g_currentStub += 20;

		return code; 
#else
		return ptr;
#endif
	}

	void* AllocateStubMemory(size_t size)
	{
#if defined(GTA_FIVE) || defined(IS_RDR3)
		char* code = (char*)g_currentStub + hook::baseAddressDifference;

		DWORD oldProtect;
		VirtualProtect(code, size, PAGE_EXECUTE_READWRITE, &oldProtect);

		g_currentStub += size;

		return code;
#else
		return nullptr;
#endif
	}
#endif

	ptrdiff_t baseAddressDifference;
}