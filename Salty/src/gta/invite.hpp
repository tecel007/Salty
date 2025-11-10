#pragma once
#include "extensible.hpp"
#include "vector.hpp"

#pragma pack(push, 1)
namespace rage
{
	//48 89 5c 24 ? 57 48 81 ec ? ? ? ? 8b 81 ? ? ? ? 48 8b fa

	//bool HK_GAME_INVITE_HANDLE(CGameInvite * pEvent, void* a2)
	//{
	//	// _f = 0x128
	//	if ((pEvent->_f & 0x2000) == 0x2000) {
	//		return false;
	//	}

	//	return OG_GAME_INVITE_HANDLE(pEvent, a2);
	//}

	class CGameInvite
	{
	public:
		char pad_0008[0x128];	//0x008
		int16_t _f;				//0x128 + 0x008
	};
}
#pragma pack(pop)