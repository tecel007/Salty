#pragma once
#include "natives.hpp"
#include "gta/joaat.hpp"
#include "gta/enums.hpp"
#include "gta/replay.hpp"
#include "gta/player.hpp"

namespace big::misc
{
	const bool LOG_NATIVE = false;

	extern void log_clone(bool __log, rage::CNetGamePlayer* src, const char* type, int16_t object_type, int16_t object_id, int16_t object_flag, int32_t timestamp, int32_t ack_code, bool blocked, const char* status);
	extern void log_generic(bool __log, const char* type, bool blocked, const char* status);
	extern void log_buff(bool __log, int32_t sync_type, int16_t object_type, int index, int length, uint32_t value, bool blocked, const char* status);
	extern void log_model(bool __log, const char* type, int16_t object_type, uint32_t object_hash, bool blocked, const char* status);

	extern void log_network_event(bool __log, rage::CNetGamePlayer* src, int16_t event_type, int32_t event_id, int32_t bitset, int32_t n, uint8_t* data, bool block, const char* status);
	extern void log_script_event(bool __log, int32_t group, int32_t event_id, int64_t n, int64_t* data, bool block);

	extern bool model_valid(rage::netSyncTree* netSyncTree, int16_t object_type);
	
	extern bool object_location(rage::netSyncTree* netSyncTree, int32_t sync_type, int32_t sync_flag, int16_t object_type);
	extern bool object_close(rage::netSyncTree* netSyncTree, int32_t sync_type, int32_t sync_flag, int16_t object_type);
	extern bool object_limit(int16_t object_type);

	extern bool flood_create(rage::CNetGamePlayer* src, int32_t sync_type);
	extern bool flood_script(rage::CNetGamePlayer* src, int32_t sync_type, int32_t sync_flag);
	extern bool flood_respawn(rage::CNetGamePlayer* src, int16_t event_type);
	extern bool flood_pack(rage::CNetGamePlayer* src);
	extern bool flood_event(rage::CNetGamePlayer* src, int16_t event_type, uint32_t bitset);
	extern bool event_time(rage::CNetGamePlayer* src, int32_t timestamp);

	extern bool block_proto(rage::CNetGamePlayer* src, int32_t sync_type, int16_t object_type, int16_t object_id);
	extern bool block_proto(rage::CNetGamePlayer* src, int16_t event_type);
	extern bool block_user(rage::CNetGamePlayer* src, bool blocked = false);
	extern bool block_crash(int32_t n, const uint8_t* data);

	extern void set_global(uint32_t address, int64_t value);

	extern bool value(int32_t event_id);
	extern bool range(int64_t script);
	extern bool range(int32_t n, const int64_t* data);

	extern uint32_t read32(uint8_t* data, int pos, int len);
	extern void* vtable(void* object, int function);
	extern void vtable(void* object, int function, void* detour);
	extern std::string pointer(void* function);
	extern std::string get_address(uint32_t ip, uint16_t port);

	extern std::string CSV(int8_t i);
	extern std::string CSV(uint8_t i);
	extern std::string CSV(int32_t i);
	extern std::string CSV(uint32_t i);
	extern std::string CSV(int64_t i);
	extern std::string CSV(uint64_t i);
	extern std::string CSV(float i);
	extern std::string CSV(std::string s);

	extern void log_green(bool __log, const char* _log, bool warn);
	extern void log_blue(bool __log, const char* _log, bool warn);

	extern void NETWORK_CAN_BAIL(rage::scrNativeCallContext* src);
	extern void REQUEST_SCRIPT(rage::scrNativeCallContext* src);
	extern void NETWORK_SESSION_GET_KICK_VOTE(rage::scrNativeCallContext* src);
	extern void STAT_SET_BOOL_MASKED(rage::scrNativeCallContext* src);
	extern void STAT_SET_INT(rage::scrNativeCallContext* src);

#define FIND(value, list) misc::find(value, sizeof(list) / sizeof(list[0]), list)
#define IS(value, list) FIND(value, list)
#define LEN(list) (sizeof(list) / sizeof(list[0]))

	const int64_t blocked_user[] =
	{
		-2, -1, 0, 1, 2
	};

	const uint32_t blocked_stat[] =
	{
		RAGE_JOAAT("MPPLY_BECAME_CHEATER_NUM"),RAGE_JOAAT("MPPLY_GRIEFING"),RAGE_JOAAT("MPPLY_VC_ANNOYINGME"),RAGE_JOAAT("MPPLY_VC_HATE"),RAGE_JOAAT("MPPLY_TC_ANNOYINGME"),RAGE_JOAAT("MPPLY_TC_HATE"),
		RAGE_JOAAT("MPPLY_OFFENSIVE_LANGUAGE"),RAGE_JOAAT("MPPLY_OFFENSIVE_TAGPLATE"),RAGE_JOAAT("MPPLY_OFFENSIVE_UGC"),RAGE_JOAAT("MPPLY_BAD_CREW_NAME"),
		RAGE_JOAAT("MPPLY_BAD_CREW_MOTTO"),RAGE_JOAAT("MPPLY_BAD_CREW_STATUS"),RAGE_JOAAT("MPPLY_BAD_CREW_EMBLEM"),RAGE_JOAAT("MPPLY_GAME_EXPLOITS"),RAGE_JOAAT("MPPLY_EXPLOITS"),
		RAGE_JOAAT("MPPLY_DM_CHEAT_START"),RAGE_JOAAT("MPPLY_DM_CHEAT_END"),RAGE_JOAAT("MPPLY_DM_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_RACE_CHEAT_START"),RAGE_JOAAT("MPPLY_RACE_CHEAT_END"),
		RAGE_JOAAT("MPPLY_RACE_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_MC_CHEAT_START"),RAGE_JOAAT("MPPLY_MC_CHEAT_END"),RAGE_JOAAT("MPPLY_MC_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_MGAME_CHEAT_START"),
		RAGE_JOAAT("MPPLY_MGAME_CHEAT_END"),RAGE_JOAAT("MPPLY_MGAME_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_VOTED_OUT"),RAGE_JOAAT("MPPLY_VOTED_OUT_DELTA"),RAGE_JOAAT("MPPLY_VOTED_OUT_QUIT"),
		RAGE_JOAAT("MPPLY_CAP_CHEAT_START"),RAGE_JOAAT("MPPLY_CAP_CHEAT_END"),RAGE_JOAAT("MPPLY_CAP_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_SUR_CHEAT_START"),RAGE_JOAAT("MPPLY_SUR_CHEAT_END"),
		RAGE_JOAAT("MPPLY_SUR_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_LTS_CHEAT_START"),RAGE_JOAAT("MPPLY_LTS_CHEAT_END"),RAGE_JOAAT("MPPLY_LTS_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_PARA_CHEAT_START"),
		RAGE_JOAAT("MPPLY_PARA_CHEAT_END"),RAGE_JOAAT("MPPLY_PARA_CHEAT_QUIT"),RAGE_JOAAT("MPPLY_FMEVN_CHEAT_START"),RAGE_JOAAT("MPPLY_FMEVN_CHEAT_END"),RAGE_JOAAT("MPPLY_FMEVN_CHEAT_QUIT"),
	};

	const std::string blocked_script[] =
	{
		"DISABLED-MainTransition", "DISABLED-cellphone_controller"
	};

	const int16_t blocked_network[] =
	{
		//REMOTE_SCRIPT_LEAVE_EVENT,			//super common
		//REMOTE_SCRIPT_INFO_EVENT,
		//SCRIPTED_GAME_EVENT,
		//NETWORK_TRAIN_REPORT_EVENT,
		//NETWORK_ENTITY_AREA_STATUS_EVENT,

		//PLAYER_CARD_STAT_EVENT,				//lobby organiseation + clear areas
		//SCRIPT_WORLD_STATE_EVENT,
		//CLEAR_AREA_EVENT
		//CLEAR_RECTANGLE_AREA_EVENT

		//NETWORK_CHECK_EXE_SIZE_EVENT,			//join/system
		//NETWORK_CHECK_CATALOG_CRC,
		//NETWORK_CRC_HASH_CHECK_EVENT,
		//SCRIPT_ARRAY_DATA_VERIFY_EVENT,

		//CACHE_PLAYER_HEAD_BLEND_DATA_EVENT,	//sent before they have a player
		//OBJECT_ID_FREED_EVENT,
		GAME_WEATHER_EVENT,

		NETWORK_REQUEST_SYNCED_SCENE_EVENT,
		NETWORK_START_SYNCED_SCENE_EVENT,
		NETWORK_STOP_SYNCED_SCENE_EVENT,
		//NETWORK_UPDATE_SYNCED_SCENE_EVENT,
		NETWORK_SHOUT_TARGET_POSITION,
		BREAK_PROJECTILE_TARGET_LOCK_EVENT,		//general weird messages
		//MARK_AS_NO_LONGER_NEEDED_EVENT,
		//OBJECT_ID_REQUEST_EVENT,				//could be causing create resends

		FIRE_EVENT,								//person trolling
		EXPLOSION_EVENT,
		WEAPON_DAMAGE_EVENT,
		UPDATE_PLAYER_SCARS_EVENT,
		GIVE_PED_SCRIPTED_TASK_EVENT,
		GIVE_PED_SEQUENCE_TASK_EVENT,
		NETWORK_CLEAR_PED_TASKS_EVENT,
		NETWORK_START_PED_ARREST_EVENT,
		NETWORK_START_PED_UNCUFF_EVENT,
		REMOVE_WEAPON_EVENT,
		REMOVE_ALL_WEAPONS_EVENT,
		GIVE_WEAPON_EVENT,
		RAGDOLL_REQUEST_EVENT,					//freese
		INCIDENT_ENTITY_EVENT,
		START_PROJECTILE_EVENT,
		INFORM_SILENCED_GUNSHOT_EVENT,
		ALTER_WANTED_LEVEL_EVENT,
		VOICE_DRIVEN_MOUTH_MOVEMENT_FINISHED_EVENT,

		//GIVE_CONTROL_EVENT,
		REQUEST_CONTROL_EVENT,					//car trolling
		REQUEST_DETACHMENT_EVENT,
		VEHICLE_COMPONENT_CONTROL_EVENT,
		MODIFY_VEHICLE_LOCK_WORD_STATE_DATA,
		BLOW_UP_VEHICLE_EVENT,
		ACTIVATE_VEHICLE_SPECIAL_ABILITY_EVENT,

		KICK_VOTES_EVENT,						//kick
		//REPORT_MYSELF_EVENT,
		REPORT_CASH_SPAWN_EVENT,
		NETWORK_INCREMENT_STAT_EVENT,

		NETWORK_PTFX_EVENT,						//modding and crashes
		GIVE_PICKUP_REWARDS_EVENT,
	};

	const int64_t blocked_script_0[] =
	{
		-1
	};

	const int64_t blocked_script_2[] =
	{
		7
	};

	template<typename T>
	bool zero(int32_t n, const T* data)
	{
		for (int32_t i = 0; i < n; i++)
		{
			if (data[i] != 0) return false;
		}
		return true;
	}

	template<typename T>
	bool find(T item, int n, const T* data)
	{
		for (int i = 0; i < n; i++)
		{
			if (data[i] == item) return true;
		}
		return false;
	}
	template<typename T>
	int index(T item, int n, const T* data)
	{
		for (int i = 0; i < n; i++)
		{
			if (data[i] == item) return i;
		}
		return -1;
	}

	static std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler> natives_replace =
	{
		{ 0x580CE4438479CC61, &NETWORK_CAN_BAIL},
		{ 0x6EB5F71AA68F2E8E, &REQUEST_SCRIPT},
		{ 0xD6D09A6F32F49EF1, &NETWORK_SESSION_GET_KICK_VOTE},
		{ 0x5BC62EC1937B9E5B, &STAT_SET_BOOL_MASKED},
		{ 0xB3271D7AB655B441, &STAT_SET_INT},
	};
}
