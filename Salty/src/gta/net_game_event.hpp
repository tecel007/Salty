#pragma once
#include <cstdint>
#include "pointers.hpp"
#include "fwddec.hpp"

#pragma pack(push, 1)
namespace rage
{
	class netPlayer;
	class datBitBuffer
	{
	public:
		inline datBitBuffer(uint8_t* data, uint32_t size)
		{
			m_data = data;
			m_f8 = 0;
			m_maxBit = size * 8;
			m_unkBit = 0;
			m_curBit = 0;
			m_unk2Bit = 0;
			m_flagBits = 0;
		}

		inline uint32_t GetPosition()
		{
			return m_unkBit;
		}

		inline bool Seek(uint32_t bits)
		{
			if (bits >= 0)
			{
				uint32_t length = (m_flagBits & 1) ? m_maxBit : m_curBit;

				if (bits <= length)
				{
					m_unkBit = bits;
				}
			}

			return false;
		}

		inline int GetDataLength()
		{
			int leftoverBit = (m_curBit % 8) ? 1 : 0;

			return (m_curBit / 8) + leftoverBit;
		}

		inline bool ReadByte(uint8_t* integer, int bits)
		{
			//uint32_t read;
			//if (big::g_pointers->m_read_bitbuf_dword(this, &read, bits))
			//{
			//	*integer = read;
			//	return true;
			//}
			return false;
		}

		inline bool ReadWord(uint16_t* integer, int bits)
		{
			//uint32_t read;
			//if (big::g_pointers->m_read_bitbuf_dword(this, &read, bits))
			//{
			//	*integer = read;
			//	return true;
			//}
			return false;
		}

		inline bool ReadDword(uint32_t* integer, int bits)
		{
			return false;// big::g_pointers->m_read_bitbuf_dword(this, integer, bits);
		}

		inline bool ReadInt32(int32_t* integer, int bits)
		{
			int32_t v8;
			int32_t v9;
			if (ReadDword((uint32_t*)&v8, 1u) && ReadDword((uint32_t*)&v9, bits - 1))
			{
				*integer = v8 + (v9 ^ -v8);
				return true;
			}
			return false;
		}

		inline bool ReadQWord(uint64_t* integer, int bits)
		{
			if (bits <= 32)
			{
				uint32_t v10{};
				if (ReadDword(&v10, bits))
				{
					*integer = v10;
					return true;
				}
				return false;
			}
			else
			{
				uint32_t v10{}, v11{};
				if (ReadDword(&v11, 32u) && ReadDword(&v10, bits - 32u))
				{
					*integer = v11 | ((uint64_t)v10 << 32);
					return true;
				}
				return false;
			}
		}

		inline bool ReadInt64(int64_t* integer, int bits)
		{
			uint32_t v8;
			uint64_t v9;
			if (ReadDword(&v8, 1u) && ReadQWord(&v9, bits - 1))
			{
				*integer = v8 + (v9 ^ -(int64_t)v8);
				return true;
			}
			return false;
		}

		inline bool ReadArray(PVOID array, int size)
		{
			return false;// big::g_pointers->m_read_bitbuf_array(this, array, size, 0);
		}

	public:
		uint8_t* m_data; //0x0000
		uint32_t m_f8; //0x0008
		int32_t m_maxBit; //0x000C
		int32_t m_unkBit; //0x0010
		uint32_t m_curBit; //0x0014
		uint32_t m_unk2Bit; //0x0018
		uint8_t m_flagBits; //0x001C
	};

	class netGameEvent
	{
	public:
		virtual ~netGameEvent() = 0;

		virtual const char* GetName() = 0;

		virtual bool IsInScope(CNetGamePlayer* player) = 0;

		virtual bool TimeToResend(uint32_t) = 0;

		virtual bool CanChangeScope() = 0;

		virtual void Prepare(rage::datBitBuffer* buffer, CNetGamePlayer* player, CNetGamePlayer* unkPlayer) = 0;

		virtual void Handle(rage::datBitBuffer* buffer, CNetGamePlayer* player, CNetGamePlayer* unkPlayer) = 0;

		virtual bool Decide(CNetGamePlayer* sourcePlayer, void* connUnk) = 0;

		virtual void PrepareReply(rage::datBitBuffer* buffer, CNetGamePlayer* replyPlayer) = 0;

		virtual void HandleReply(rage::datBitBuffer* buffer, CNetGamePlayer* sourcePlayer) = 0;

		virtual void PrepareExtraData(rage::datBitBuffer* buffer, bool isReply, CNetGamePlayer* player, CNetGamePlayer* unkPlayer) = 0;

		virtual void HandleExtraData(rage::datBitBuffer* buffer, bool isReply, CNetGamePlayer* player, CNetGamePlayer* unkPlayer) = 0;

		virtual void m_60() = 0;

		virtual void m_68() = 0;

		virtual void m_70() = 0;

		virtual void m_78() = 0;

		virtual bool Equals(const netGameEvent* event) = 0;

		virtual bool NotEquals(const netGameEvent* event) = 0;

		virtual bool MustPersist() = 0;

		virtual bool MustPersistWhenOutOfScope() = 0;

		virtual bool HasTimedOut() = 0;

	public:
		uint16_t eventType; // +0x8

		uint8_t requiresReply : 1; // +0xA

		uint8_t pad_0Bh; // +0xB

		char pad_0Ch[24]; // +0xC

		uint16_t eventId; // +0x24

		uint8_t hasEventId : 1; // +0x26
	};
}

class CScriptedGameEvent : public rage::netGameEvent
{
public:
	char m_padding[0x40];      // 0x30
	int64_t m_args[54];   // 0x70
	uint32_t m_bitset;    // 0x220
	uint32_t m_args_size; // 0x224
};

class CNetworkIncrementStatEvent : public rage::netGameEvent
{
public:
	Hash m_stat;    // 0x30
	uint32_t m_ammount; // 0x34
};
#pragma pack(pop)