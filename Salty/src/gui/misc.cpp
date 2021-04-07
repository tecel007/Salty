#include "common.hpp"
#include "misc.h"
#include "natives_logging.hpp"
#include "logger.hpp"
#include "pointers.hpp"
#include "gta_util.hpp"
#include "gui/features.hpp"
#include "gta/net_object_mgr.hpp"
#include "gta/structs.hpp"

//#include "script.hpp"

namespace big::misc
{
	#define PERIOD_USER		60000
	#define PERIOD_LOCATION	1000
	#define PERIOD_SCRIPT	1000
	#define PERIOD_RESPAWN	1000
	#define PERIOD_PACK		100
	#define PERIOD			1000

	#define EVENT_FLOOD		50
	#define CREATE_FLOOD	10
	#define EVENT_SERIAL	10

	#define SPAWN_RADIUS	2.0
	
	const bool LOG_ALL = true;

	struct user
	{
		int32_t event, create;

		int32_t timestamp;

		ULONGLONG block_time;
		ULONGLONG script_time;
		ULONGLONG respawn_time;
		ULONGLONG pack_time;

		bool is_friend;
		bool is_joining;

		int16_t player_id;
		int16_t object_type[1 << 13];
		int object_id[1 << 13];

		ULONGLONG event_time[EVENT_FLOOD];
		ULONGLONG create_time[CREATE_FLOOD];

		user(int64_t user_id) :
			event(0), create(0),
			timestamp(0), 
			block_time(0), script_time(0), respawn_time(0), pack_time(0),
			is_friend(false), is_joining(false), player_id(0)
		{
			memset(create_time, 0, sizeof(create_time));
			memset(event_time, 0, sizeof(event_time));

			memset(object_type, 0, sizeof(object_type));
			memset(object_id, 0, sizeof(object_id));
		}
	};

	std::unordered_map <int64_t, user*> users;
	std::unordered_map <uint32_t, bool> _log;

	bool block_proto(rage::CNetGamePlayer* src, int32_t sync_type, int16_t object_type, int16_t object_id)
	{
		if (src != nullptr)
		{
			int64_t user_id = src->get_net_data()->m_rockstar_id;
			if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
			ULONGLONG now = GetTickCount64();

			bool blocked = false;

			////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

			//update player
			if (users[user_id]->player_id == 0 && object_type == rage::PLAYER && sync_type == rage::CREATE)
			{
				users[user_id]->is_joining = false;
			}
			if (users[user_id]->player_id == 0 && object_type == rage::PLAYER)
			{
				users[user_id]->player_id = object_id;
			}
			//update object
			if (users[user_id]->object_id[object_id] == 0)
			{
				users[user_id]->object_type[object_id] = object_type;
			}
			//update objects on startup
			if (users[user_id]->object_id[object_id] == 0 && sync_type == rage::SYNC)
			{
				users[user_id]->object_id[object_id] = 1;
			}

			////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

			//any sync event with -1 player_index
			if (src->player_id == -1) blocked = true;

			//if joining, create player first
			if (users[user_id]->is_joining && sync_type == rage::CREATE && object_type != rage::PLAYER) blocked = true;

			//if joining, no sync or remove
			if (users[user_id]->is_joining && (sync_type == rage::SYNC || sync_type == rage::REMOVE)) blocked = true;

			//remove player id
			if (sync_type == rage::REMOVE && object_id == users[user_id]->player_id) blocked = true;

			//duplicate object, ignoring the odd repeats
			if (sync_type == rage::CREATE && object_type != rage::DOOR && users[user_id]->object_id[object_id]++ >= 3) blocked = true;

			//change object type
			if (sync_type == rage::SYNC && users[user_id]->object_type[object_id] != object_type) blocked = true;

			////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

			//remove objects
			if (sync_type == rage::REMOVE) users[user_id]->object_id[object_id] = 0;

			return blocked;
		}
		return false;
	}	
	
	bool block_proto(rage::CNetGamePlayer* src, int16_t event_type)
	{
		if (src != nullptr)
		{
			int64_t user_id = src->get_net_data()->m_rockstar_id;
			if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
			ULONGLONG now = GetTickCount64();

			bool blocked = false;

			//events other than join with -1
			//if (src->player_index == -1 && event_type != NETWORK_CHECK_EXE_SIZE_EVENT) blocked = true;

			//first message apart from the sync PACK
			if (event_type == NETWORK_CHECK_EXE_SIZE_EVENT)
			{
				users[user_id]->is_joining = true;
				users[user_id]->player_id = 0;
				memset(users[user_id]->object_id, 0, sizeof(users[user_id]->object_id));
				memset(users[user_id]->object_type, 0, sizeof(users[user_id]->object_type));
			}
			//sending junk during join
			if (users[user_id]->is_joining && event_type == NETWORK_ENTITY_AREA_STATUS_EVENT) blocked = true;
			//if (users[user_id]->is_joining && event_type == CACHE_PLAYER_HEAD_BLEND_DATA_EVENT) blocked = true;
			if (users[user_id]->is_joining && event_type == GAME_WEATHER_EVENT) blocked = true;
			if (users[user_id]->is_joining && event_type == UPDATE_PLAYER_SCARS_EVENT) blocked = true;
			if (users[user_id]->is_joining && event_type == OBJECT_ID_FREED_EVENT) blocked = true;
			if (users[user_id]->is_joining && event_type == NETWORK_TRAIN_REPORT_EVENT) blocked = true;

			return blocked;
		}
		return false;
	}

	bool flood_script(rage::CNetGamePlayer* src, int32_t sync_type, int32_t sync_flag)
	{
		//source is valid
		if (src != nullptr)
		{
			if (sync_type == rage::CREATE && sync_flag == 1)
			{
				int64_t user_id = src->get_net_data()->m_rockstar_id;
				if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
				ULONGLONG now = GetTickCount64();

				if (now > users[user_id]->script_time)
				{
					users[user_id]->script_time = now + PERIOD_SCRIPT;
					return false;
				}
				return true;
			}
		}
		return false;
	}

	bool flood_respawn(rage::CNetGamePlayer* src, int16_t event_type)
	{
		//source is valid
		if (src != nullptr)
		{
			if (event_type == RESPAWN_PLAYER_PED_EVENT)
			{
				int64_t user_id = src->get_net_data()->m_rockstar_id;
				if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
				ULONGLONG now = GetTickCount64();

				if (now > users[user_id]->respawn_time)
				{
					users[user_id]->respawn_time = now + PERIOD_RESPAWN;
					return false;
				}
				return true;
			}
		}
		return false;
	}

	bool flood_pack(rage::CNetGamePlayer* src)
	{
		//source is valid
		if (src != nullptr)
		{
			int64_t user_id = src->get_net_data()->m_rockstar_id;
			if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
			ULONGLONG now = GetTickCount64();

			if (now > users[user_id]->pack_time)
			{
				users[user_id]->pack_time = now + PERIOD_PACK;
				return false;
			}
			return true;
		}
		return false;
	}

	bool block_user(rage::CNetGamePlayer* src, bool blocked)
	{
		//source is valid
		if (src != nullptr 
			//&& src->is_valid() 
			//&& src->get_net_data()->m_rockstar_id != gta_util::get_local_playerinfo()->m_rockstar_id 
			//&& src->get_net_data()->m_host_token > (1 << 16)
			//&& src->get_net_data()->m_online_port == 6672
			)
		{
			int64_t user_id = src->get_net_data()->m_rockstar_id;
			if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
			ULONGLONG now = GetTickCount64();

			if (blocked)
			{
				//notify
				if (now > users[user_id]->block_time) features::add_user(src->get_net_data()->m_name);

				users[user_id]->block_time = now + PERIOD_USER;
			}
			return now < users[user_id]->block_time; // && !users[user_id]->is_friend && 
		}
		return true;
	}

	std::string get_address(uint32_t ip, uint16_t port)
	{
		return fmt::format("{}.{}.{}.{}:{}", (ip >> 24) & 0xff, (ip >> 16) & 0xff, (ip >> 8) & 0xff, ip & 0xff, port);
	}

	void log_buff(bool __log, int32_t sync_type, int16_t object_type, int index, int length, uint32_t value, bool blocked, const char* status)
	{
		if (__log)
		{
			std::string log = CSV(blocked ? (std::string("BUFF,") + status).c_str() : "BUFF,OK");
			std::string hash;

			std::string _sync_type = sync_type >= rage::PACK && sync_type < rage::END ? rage::name_sync_type[sync_type] : CSV("INVALID");

			log += CSV(_sync_type);

			log += CSV(",,,,");

			log += CSV(object_type >= 0 && object_type < LEN(rage::name_object_type) ? rage::name_object_type[object_type] : _sync_type);
			log += CSV("");
			log += CSV("");

			log += CSV(index);
			log += CSV(length);
			log += CSV(value);

			if (length == 32)
			{
				if (FIND(value, rage::player)) hash += CSV("player");
				if (FIND(value, rage::ped)) hash += CSV("ped");
				if (FIND(value, rage::pickup_model)) hash += CSV("pickup_model");
				if (FIND(value, rage::pickup)) hash += CSV("pickup");
				if (FIND(value, rage::door)) hash += CSV("door");
				if (FIND(value, rage::object)) hash += CSV("object");
				if (FIND(value, rage::weapon_component)) hash += CSV("weapon_component");
				if (FIND(value, rage::death)) hash += CSV("death");
				if (FIND(value, rage::boat)) hash += CSV("boat");
				if (FIND(value, rage::heli)) hash += CSV("heli");
				if (FIND(value, rage::plane)) hash += CSV("plane");
				if (FIND(value, rage::trailer)) hash += CSV("trailer");
				if (FIND(value, rage::train)) hash += CSV("train");
				if (FIND(value, rage::bike)) hash += CSV("bike");
				if (FIND(value, rage::submarine)) hash += CSV("submarine");
				if (FIND(value, rage::weapon)) hash += CSV("weapon");
				if (FIND(value, rage::car)) hash += CSV("car");
			}
			//else if (length == 13)
			//{
			//	rage::CNetworkObjectMgr* mgr = g_pointers->m_network_object_manager();

			//	if (mgr != nullptr)
			//	{
			//		rage::netObject* object = g_pointers->m_get_network_object(mgr, value, true);

			//		if (object != nullptr)
			//		{
			//			if (value == gta_util::get_local_ped()->m_net_object->object_id)
			//			{
			//				hash += CSV("me");
			//			}
			//			else
			//			{
			//				hash += CSV("entity");
			//			}
			//		}
			//	}
			//}
			//if (hash.length() > 0)
			//{
			log += hash;
			log_green(true, log.c_str(), blocked);
			//}
		}
	}

	void log_clone(bool __log, rage::CNetGamePlayer* src, const char* type, int16_t object_type, int16_t object_id, int16_t object_flag, int32_t timestamp, int32_t ack_code, bool blocked, const char* status)
	{
		if (__log)
		{
			std::string log = CSV(std::string("SYNC") + (blocked ? (std::string(",") + status).c_str() : ",OK"));
			log += CSV(type);

			if (src != nullptr)
			{
				log += CSV(src->player_id);
				log += CSV(std::string("\"") + src->get_net_data()->m_name + std::string("\""));
				log += CSV(src->get_net_data()->m_rockstar_id);
				log += CSV(src->get_net_data()->m_host_token);
				log += CSV(get_address(src->get_net_data()->m_online_ip.m_raw, src->get_net_data()->m_online_port));
			}
			else
			{
				log += CSV(",,,,");
			}
			log += CSV(object_type >= 0 && object_type < LEN(rage::name_object_type) ? rage::name_object_type[object_type] : "INVALID");
			log += CSV(object_id);
			log += CSV(object_flag);
			log += CSV(timestamp);
			log += CSV(ack_code);

			log_blue(true, log.c_str(), blocked);
		}
	}

	void log_generic(bool __log, const char* type, bool blocked, const char* status)
	{
		if (__log)
		{
			std::string log = CSV(std::string("SYNC") + (blocked ? (std::string(",") + status).c_str() : ",OK"));
			log += CSV(type);

			log_blue(true, log.c_str(), blocked);
		}
	}

	void log_model(bool __log, const char* type, int16_t object_type, uint32_t object_hash, bool blocked, const char* status)
	{
		if (__log)
		{
			std::string log = CSV(std::string("SYNC") + (blocked ? (std::string(",") + status).c_str() : ",OK"));
			log += CSV(type);

			log += CSV(",,,,");

			log += CSV(object_type >= 0 && object_type < LEN(rage::name_object_type) ? rage::name_object_type[object_type] : "INVALID");
			log += CSV(object_hash);

			log_blue(true, log.c_str(), blocked);
		}
	}

	void log_network_event(bool __log, rage::CNetGamePlayer* src, int16_t event_type, int32_t event_id, int32_t bitset, int32_t n, uint8_t* data, bool blocked, const char* status)
	{
		if (__log)
		{
			std::string log = CSV(blocked ? (std::string("NETWORK,") + status + ",").c_str() : "NETWORK,OK,") + rage::name_network_event[event_type];

			if (src != nullptr)
			{
				log += CSV(src->player_id);
				log += CSV(std::string("\"") + src->get_net_data()->m_name + std::string("\""));
				log += CSV(src->get_net_data()->m_rockstar_id);
				log += CSV(src->get_net_data()->m_host_token);
				log += CSV(get_address(src->get_net_data()->m_online_ip.m_raw, src->get_net_data()->m_online_port));
			}
			else
			{
				log += CSV(",,,,");
			}
			log += CSV(",,,,");
			log += CSV(event_id);
			log += CSV(bitset);

			log_green(true, log.c_str(), blocked);
		}
	}

	void log_script_event(bool __log, int32_t group, int32_t event_id, int64_t n, int64_t* data, bool blocked)
	{
		if (__log)
		{
			std::string log = CSV(blocked ? "SCRIPT,BLOCKED,SCRIPT" : "SCRIPT,OK,SCRIPT");

			log += CSV(",,,,,,,,DATA");

			for (uint32_t i = 0; i < n; i++)
			{
				log += CSV(data[i]);
			}

			log_blue(true, log.c_str(), blocked);
		}
	}

	bool model_valid(rage::netSyncTree* netSyncTree, int16_t object_type)
	{
		uint32_t model = netSyncTree->m_sync_tree_node->model(object_type);

		switch (object_type)
		{
			case rage::CAR: return IS(model, rage::car) || IS(model, rage::trailer);
			case rage::BIKE: return IS(model, rage::bike);
			case rage::BOAT: return IS(model, rage::boat);
			case rage::DOOR: return IS(model, rage::door);
			case rage::HELI: return IS(model, rage::heli);
			case rage::OBJECT: return IS(model, rage::object);
			case rage::PED: return IS(model, rage::ped);
			case rage::PICKUP: return 
				(model == 0 || IS(model, rage::pickup_model)) &&
				(netSyncTree->m_sync_tree_node->pickup() ==0 || IS(netSyncTree->m_sync_tree_node->pickup(), rage::pickup)) &&
				(netSyncTree->m_sync_tree_node->weapon_component() == 0 || IS(netSyncTree->m_sync_tree_node->weapon_component(), rage::weapon_component));
			case rage::PICKUP_PLACEMENT: return true;
			case rage::PLANE: return IS(model, rage::plane);
			case rage::SUBMARINE: return IS(model, rage::submarine);
			case rage::PLAYER: return IS(model, rage::player) || IS(model, rage::ped);
			case rage::TRAILER: return IS(model, rage::car) || IS(model, rage::trailer);
			case rage::TRAIN: return IS(model, rage::train);
		}
		return false;
	}

	float distance(rage::netSyncTree* netSyncTree, int16_t object_type)
	{
		float* a = netSyncTree->m_sync_tree_node->pos(object_type);
		rage::vector3 b = gta_util::get_local_ped()->m_navigation->m_position;
		rage::vector3 c = { a[0] - b.x, a[1] - b.y, a[2] - b.z };

		return sqrt(c.x * c.x + c.y * c.y + c.z * c.z);
	}

	bool object_location(rage::netSyncTree* netSyncTree, int32_t sync_type, int32_t sync_flag, int16_t object_type)
	{
		if (sync_type == rage::CREATE && sync_flag == 1)
		{
			static std::unordered_map <std::string, ULONGLONG> spawn;
			float* a = netSyncTree->m_sync_tree_node->pos(object_type);
			bool has_location = a[0] != 0 || a[1] != 0 || a[2] != 0;
			std::string key = fmt::format("{}-{}-{}", (int)a[0], (int)a[1], (int)a[2]);
			ULONGLONG now = GetTickCount64();

			bool blocked = has_location && spawn.find(key) != spawn.end() && spawn[key] > now - PERIOD_LOCATION;

			spawn[key] = now;

			return blocked;
		}
		return false;
	}

	bool object_close(rage::netSyncTree* netSyncTree, int32_t sync_type, int32_t sync_flag, int16_t object_type)
	{
		if (sync_type == rage::CREATE && sync_flag == 1)
		{
			return distance(netSyncTree, object_type) < SPAWN_RADIUS;
		}
		return false;
	}

	bool object_limit(int16_t object_type)
	{
		switch (object_type)
		{
			case rage::DOOR:
			case rage::OBJECT:
				return g_pointers->m_replay->m_object->m_cur > g_pointers->m_replay->m_object->m_max * 9 / 10;
			case rage::PED:
				return g_pointers->m_replay->m_ped->m_cur > g_pointers->m_replay->m_ped->m_max * 9 / 10;
			case rage::PICKUP:
				return g_pointers->m_replay->m_pickup->m_cur > g_pointers->m_replay->m_pickup->m_max * 9 / 10;
			case rage::PICKUP_PLACEMENT:
				return true;
			case rage::PLAYER:
				return false;
		}
		return g_pointers->m_replay->m_vehicle->m_cur > g_pointers->m_replay->m_vehicle->m_max * 9 / 10;
	}

	bool flood_create(rage::CNetGamePlayer* src, int32_t sync_type)
	{
		if (src != nullptr && sync_type == rage::CREATE)
		{
			int64_t user_id = src->get_net_data()->m_rockstar_id;
			if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
			ULONGLONG now = GetTickCount64();
			int flood = 0;

			//events / second
			for (int i = 0; i < CREATE_FLOOD; i++)
			{
				if (users[user_id]->create_time[i] > now - PERIOD) flood++;
			}
			if (flood < CREATE_FLOOD)
			{
				users[user_id]->create_time[users[user_id]->create++ % CREATE_FLOOD] = now;
			}

			return flood == CREATE_FLOOD;
		}
		return false;
	}

	bool flood_event(rage::CNetGamePlayer* src, int16_t event_type, uint32_t bitset)
	{
		static int16_t allowed[] = { -1 };// GIVE_CONTROL_EVENT, REMOTE_SCRIPT_INFO_EVENT, REMOTE_SCRIPT_LEAVE_EVENT

		if (src != nullptr && !FIND(event_type, allowed))
		{
			int64_t user_id = src->get_net_data()->m_rockstar_id;
			if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);
			ULONGLONG now = GetTickCount64();
			int flood = 0;

			//events / second
			for (int i = 0; i < EVENT_FLOOD; i++)
			{
				if (users[user_id]->event_time[i] > now - PERIOD) flood++;
			}	
			
			if (flood < EVENT_FLOOD)
			{
				users[user_id]->event_time[users[user_id]->event++ % EVENT_FLOOD] = now;
			}

			return flood == EVENT_FLOOD || bitset > 10;
		}
		return false;
	}

	bool event_time(rage::CNetGamePlayer* src, int32_t timestamp)
	{
		if (src != nullptr)
		{
			int64_t user_id = src->get_net_data()->m_rockstar_id;
			if (users.find(user_id) == users.end()) users[user_id] = new user(user_id);

			bool blocked = timestamp <= 0 || timestamp < users[user_id]->timestamp - 100000 || users[user_id]->timestamp > 0 && timestamp > users[user_id]->timestamp + 100000;

			users[user_id]->timestamp = timestamp;

			return blocked;
		}
		return false;
	}

	bool block_crash(int32_t n, const uint8_t* data)
	{
		//#define SIG(index, a) {index, LEN(a), a}

		//struct signature
		//{
		//	int32_t index;
		//	int32_t n;
		//	uint8_t* data;
		//};

		//static uint8_t luna_0_0[] = {0x03,0xe8,0x40,0x00,0x00,0x00,0x03};	//long standing crash
		//static uint8_t luna_0_1[] = {0x00,0x8a,0xe0,0x00,0x00,0x00,0x01};	//long standing crash
		//static uint8_t luna_0_2[] = {0x03,0xe8,0x00,0x00,0x00,0x00,0x03};	//long standing crash

		//static uint8_t luna_7_0[] = {0x03,0xe8,0x00,0x7c};
		//static uint8_t luna_7_1[] = {0x07,0xd0,0x40,0xf8};
		//static uint8_t luna_7_2[] = {0x07,0xd0,0x61,0xa2};
		//static uint8_t luna_7_3[] = {0x03,0xe8,0x41,0x10};
		//static uint8_t luna_7_4[] = {0x03,0xe8,0x40,0x00};

		//static uint8_t luna_13_0[] = {0x43,0xc1,0x3f,0x75};
		//static uint8_t luna_13_1[] = {0xc7,0xe0,0x3f,0x4c};

		//static uint8_t luna_14_0[] = {0xc1,0x3f,0x51,0x7f};

		//static uint8_t luna_17_0[] = {0x3f,0xcd,0x2e,0xaf};
		//static uint8_t luna_17_1[] = {0xbf,0xcd,0x2e,0xaf};

		//static signature crashes[] =
		//{
		//	SIG(7, luna_0_0),
		//	SIG(7, luna_0_1),
		//	SIG(7, luna_0_2),

		//	//SIG(7, luna_7_0),
		//	//SIG(7, luna_7_1),
		//	//SIG(7, luna_7_2),
		//	//SIG(7, luna_7_3),
		//	//SIG(7, luna_7_4),

		//	//SIG(13, luna_13_0),
		//	//SIG(13, luna_13_1),

		//	//SIG(14, luna_14_0),

		//	//SIG(17, luna_17_0),
		//	//SIG(17, luna_17_1),
		//};

		//for (int i = 0; i < LEN(crashes); i++)
		//{
		//	if (n >= crashes[i].index + crashes[i].n && 0 == memcmp(data + crashes[i].index, crashes[i].data, crashes[i].n))
		//	{
		//		return true;
		//	}
		//}
		return false;
	}

	void set_global(uint32_t address, int64_t value)
	{
		g_pointers->m_script_globals[(address >> 0x12) & 0x3F][address & 0x3FFFF] = value;
	}

	bool value(int32_t event_id)
	{
		return event_id > 5;
	}

	bool range(int64_t item)
	{
		return item < std::numeric_limits<int32_t>::min() || item > std::numeric_limits<int32_t>::max();
	}

	bool range(int32_t n, const int64_t* data)
	{
		for (int32_t i = 0; i < n; i++)
		{
			if (range(data[i])) return true;
		}
		return false;
	}

	uint32_t read32(uint8_t* data, int pos, int len)
	{
		uint32_t result = 0;

		for (int i = pos, bit = 0; i < pos + len; i++)
		{
			result |= (((uint32_t)data[i >> 3] << (i & 7)) & 0x80) << 24 >> bit++;
		}
		return result >> (32 - len);
	}
	void* vtable(void* object, int function)
	{
		return ((void***)object)[0][function];
	}
	void vtable(void* object, int function, void* detour)
	{
		((void***)object)[0][function] = detour;
	}

	std::string pointer(void* function)
	{
		return fmt::format("GTA5.exe+0x{:x}", (PBYTE)function - (PBYTE)GetModuleHandle(NULL));
	}

	std::string CSV(int8_t i)
	{
		return fmt::format(",{}", i);
	}
	std::string CSV(uint8_t i)
	{
		return fmt::format(",{:#04x}", i);
	}
	std::string CSV(int32_t i)
	{
		return fmt::format(",{}", i);
	}
	std::string CSV(uint32_t i)
	{
		return fmt::format(",{:#x}", i);
	}
	std::string CSV(int64_t i)
	{
		return fmt::format(",{}", i);
	}
	std::string CSV(uint64_t i)
	{
		return fmt::format(",{:#x}", i);
	}
	std::string CSV(float i)
	{
		return fmt::format(",{:.2f}", i);
	}
	std::string CSV(std::string s)
	{
		return std::string(",") + s;
	}

	void log_green(bool __log, const char* log, bool warn)
	{
		if (__log)
		{
			uint32_t hash = rage::joaat(log);

			if (LOG_ALL || _log.find(hash) == _log.end())
			{
				LOG(warn ? WARNING : HACKER) << log;
				_log[hash] = true;
			}
		}
	}

	void log_blue(bool __log, const char* log, bool warn)
	{
		if (__log)
		{
			uint32_t hash = rage::joaat(log);

			if (LOG_ALL || _log.find(hash) == _log.end())
			{
				LOG(warn ? WARNING : INFO) << log;
				_log[hash] = true;
			}
		}
	}

	void NETWORK_CAN_BAIL(rage::scrNativeCallContext* src)
	{
		char __b[256] = ""; sprintf(__b, ",NATIVE,OVERRIDE,NETWORK_CAN_BAIL,,,,,,,,%s,", SCRIPT::GET_THIS_SCRIPT_NAME());
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(FALSE);
	}

	void REQUEST_SCRIPT(rage::scrNativeCallContext* src)
	{
		const char* _scriptName = src->get_arg<const char*>(0);

		bool blocked = FIND(std::string(_scriptName), misc::blocked_script);

		if (blocked)
		{
			char __b[256] = ""; sprintf(__b, ",NATIVE,OVERRIDE,REQUEST_SCRIPT,,,,,,,,%s,%s", SCRIPT::GET_THIS_SCRIPT_NAME(), _scriptName);
			misc::log_green(LOG_NATIVE, __b, true);
		}
		else
		{
			char __b[256] = ""; sprintf(__b, ",NATIVE,OK,REQUEST_SCRIPT,,,,,,,,%s,%s", SCRIPT::GET_THIS_SCRIPT_NAME(), _scriptName);
			misc::log_green(LOG_NATIVE, __b, false);
			SCRIPT::REQUEST_SCRIPT(_scriptName);
		}
	}

	extern void NETWORK_SESSION_GET_KICK_VOTE(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		char __b[256] = ""; sprintf(__b, ",NATIVE,OVERRIDE,NETWORK_SESSION_GET_KICK_VOTE,,,,,,,,%s,0x%X", SCRIPT::GET_THIS_SCRIPT_NAME(), _player);
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(FALSE);
	}

	void STAT_SET_INT(rage::scrNativeCallContext* src)
	{
		Hash _statName = src->get_arg<Hash>(0);
		int _value = src->get_arg<int>(1);
		BOOL _save = src->get_arg<BOOL>(2);

		if (FIND(_statName, blocked_stat))
		{
			char __b[256] = ""; sprintf(__b, ",NATIVE,OVERRIDE,STAT_SET_INT,,,,,,,,%s,0x%X,%d,%s", SCRIPT::GET_THIS_SCRIPT_NAME(), _statName, _value, _save == 0 ? "FALSE" : "TRUE");
			misc::log_green(LOG_NATIVE, __b, true);
			src->set_return_value<BOOL>(TRUE);
		}
		else
		{
			static uint32_t ignore[] = { 0x7A68D788, 0x8E7DE238, 0xA8254104, 0xC969AB28, 0x778C9A54 };

			if (!FIND(_statName, ignore))
			{
				char __b[256] = ""; sprintf(__b, ",NATIVE,OK,STAT_SET_INT,,,,,,,,%s,0x%X,%d,%s", SCRIPT::GET_THIS_SCRIPT_NAME(), _statName, _value, _save == 0 ? "FALSE" : "TRUE");
				misc::log_green(LOG_NATIVE, __b, false);
			}
			src->set_return_value<BOOL>(STATS::STAT_SET_INT(_statName, _value, _save));
		}
	}

	void STAT_SET_BOOL_MASKED(rage::scrNativeCallContext* src)
	{
		Hash _statName = src->get_arg<Hash>(0);
		BOOL _value = src->get_arg<BOOL>(1);
		int _mask = src->get_arg<int>(2);
		BOOL _save = src->get_arg<BOOL>(3);

		if (FIND(_statName, blocked_stat))
		{
			char __b[256] = ""; sprintf(__b, ",NATIVE,OVERRIDE,STAT_SET_BOOL_MASKED,,,,,,,,%s,0x%X,%s,%d,%s", SCRIPT::GET_THIS_SCRIPT_NAME(), _statName, _value == 0 ? "FALSE" : "TRUE", _mask, _save == 0 ? "FALSE" : "TRUE");
			misc::log_green(LOG_NATIVE, __b, true);
			src->set_return_value<BOOL>(TRUE);
		}
		else
		{
			char __b[256] = ""; sprintf(__b, ",NATIVE,OK,STAT_SET_BOOL_MASKED,,,,,,,,%s,0x%X,%s,%d,%s", SCRIPT::GET_THIS_SCRIPT_NAME(), _statName, _value == 0 ? "FALSE" : "TRUE", _mask, _save == 0 ? "FALSE" : "TRUE");
			misc::log_green(LOG_NATIVE, __b, false);
			src->set_return_value<BOOL>(STATS::STAT_SET_BOOL_MASKED(_statName, _value, _mask, _save));
		}
	}
}