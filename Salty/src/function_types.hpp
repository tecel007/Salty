#pragma once
#include "gta/natives.hpp"
#include "gta/player.hpp"
#include "gta/net_object_mgr.hpp"
#include "gta/invite.hpp"

namespace big::functions
{
	using game_invite_t = bool (*)(rage::CGameInvite* invite, void* unk);
	using unregister_object_t = void (*)(rage::CNetworkObjectMgr* mgr, rage::netObject* netObject, int reason, bool force1, bool force2);

	using clone_create_ack_t = void (*) (rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, uint16_t object_id, int32_t ack_code);
	using clone_sync_ack_t = void (*) (rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, rage::datBitBuffer* buffer, uint16_t object_id, int32_t ack_code);
	using clone_remove_ack_t = void (*) (rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, uint16_t object_id, int32_t ack_code);

	using buffer_int_t = void (*)(rage::datBitBuffer* buffer, uint32_t* value, int32_t length, int32_t unk);
	using clone_pack_t = void (*) (rage::CNetworkObjectMgr* mgr, rage::netObject* netObject, rage::CNetGamePlayer* src, rage::datBitBuffer* buffer);
	using clone_create_t = bool (*) (rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t object_type, int32_t object_id, int32_t object_flag, rage::datBitBuffer* buffer, int32_t timestamp);
	using clone_sync_t = bool (*) (rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t object_type, int32_t object_id, rage::datBitBuffer* buffer, int32_t unk, int32_t timestamp);
	using clone_remove_t = void (*) (rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t object_id, int32_t unk);
	using sync_read_t = bool (*)(rage::netSyncTree* self, int32_t sync_type, int32_t sync_flag, rage::datBitBuffer* buffer, void* netLogStub);
	using sync_can_apply_t = bool (*)(rage::netSyncTree* netSyncTree, rage::netObject* netObject);

	using network_event_t = bool(*)(void* event_manager, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t event_type, int32_t event_id, uint32_t bitset, int64_t unk, rage::datBitBuffer* buffer);
	using script_event_t = bool(*)(int32_t group, int32_t event_id, int64_t* data, int32_t n);

	/////////////////////////////////

	using get_owner_t = rage::CNetGamePlayer* (*)(rage::netObject* netObject);
	using get_network_object_t = rage::netObject* (*) (rage::CNetworkObjectMgr*, int16_t, bool);
	using get_network_object_for_player_t = rage::netObject* (*) (rage::CNetworkObjectMgr*, int16_t, rage::CNetGamePlayer*, bool);

	using node_read_t = bool(*)(void* node, int32_t sync_flag, void* mA0, rage::datBitBuffer* buffer, rage::netObject* object);
	
	using handle_event_t = bool (*)(rage::netGameEvent* evt, rage::datBitBuffer* buffer, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst);
	using game_event_t = void(*)(void* event_manager, rage::netGameEvent* evt, rage::datBitBuffer* buffer, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t event_type, int32_t event_id, uint32_t bitset);
	
	using run_script_threads_t = bool(*)(uint32_t ops_to_execute);
	using get_native_handler_t = rage::scrNativeHandler(*)(rage::scrNativeRegistrationTable*, rage::scrNativeHash);
	using fix_vectors_t = void(*)(rage::scrNativeCallContext*);
}
