#pragma once
#include "gui/misc.h"

namespace fx::sync
{
	struct MessageBuffer
	{
		uint8_t* data;
		uint32_t n, pos;

		int GetCurrentBit()
		{
			return pos;
		}
		void SetCurrentBit(int _pos)
		{
			pos = _pos;
		}

		template<typename T>
		inline T ReadSigned(int length)
		{
			int sign = Read<int>(1);
			int data = Read<int>(length - 1);

			return T{ sign + (data ^ -sign) };
		}

		template<typename T>
		inline T Read(int length)
		{
			T value = (T) big::misc::read32(data, pos, length);

			pos += length;

			return value;
		}
		inline bool ReadBit()
		{
			return Read<int>(1) != 0;
		}
		inline float ReadSignedFloat(int length, float divisor)
		{
			auto integer = ReadSigned<int>(length);

			float max = (1 << (length - 1)) - 1.0f;
			return ((float)integer / max) * divisor;
		}

		inline float ReadFloat(int length, float divisor)
		{
			auto integer = Read<int>(length);

			float max = (1 << length) - 1.0f;
			return ((float)integer / max) * divisor;
		}

		MessageBuffer(uint32_t _n, uint8_t* _data) : n(_n), data(_data), pos(0){}
	};

	struct SyncParseState
	{
		MessageBuffer buffer;
		int sync_type;
		int object_flags;

		SyncParseState(uint32_t _sync_type, uint16_t _object_flags, uint32_t n, uint8_t* data) : sync_type(_sync_type), object_flags(_object_flags), buffer(n, data)
		{

		}
	};
}