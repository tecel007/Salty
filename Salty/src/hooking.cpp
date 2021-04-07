#include "common.hpp"

#include "hooking.hpp"
#include "memory/module.hpp"
#include "gta/net_game_event.hpp"
#include "gta/net_object_mgr.hpp"
#include "gta/array.hpp"
#include "gta/script_thread.hpp"
#include "script.hpp"
#include "gta_util.hpp"
#include "pointers.hpp"
#include "renderer.hpp"
#include "script_mgr.hpp"
#include "vmt_hook.hpp"

#include "gui/misc.h"
#include "gui.hpp"
#include "gui/features.hpp"
#include "gui/natives_logging.hpp"

namespace big
{
	int32_t sync_timestamp = 0;
	rage::CNetGamePlayer* sync_src = nullptr;
	int32_t sync_type;
	int32_t sync_flag;
	int32_t sync_object_type;

	int32_t buffer_n = 0;
	uint8_t buffer_data[1 << 20];
	int32_t buffer_max = 0;
	uint8_t* buffer_buffer = nullptr;
	
	const bool LOG_PASS = true;
	const bool LOG_FAIL = true;

	const bool LOG_NETWORK = true;
	const bool LOG_SCRIPT = true;
	const bool LOG_INVITE = true;
	const bool LOG_INTERNAL = true;
	const bool LOG_EXCEPTION = true;
	const bool LOG_BUFF = false;
	
	static bool is_owner(rage::CNetGamePlayer* src, rage::netObject* netObject)
	{
		return src != nullptr && netObject != nullptr && src->player_id != -1 && (src->player_id == netObject->syncData.ownerId || src->player_id == netObject->syncData.nextOwnerId);
	}

	static void clone_create_ack(rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, uint16_t object_id, int32_t ack_code)
	{
		sync_src = src;

		if (big::features::protection && big::features::injected)
		{
			rage::netObject* netObject = g_pointers->m_get_network_object(mgr, object_id, true);
			bool user = misc::block_user(src);
			bool owner = !is_owner(dst, netObject);
			int16_t object_type = netObject == nullptr ? -1 : netObject->object_type;

			bool blocked = misc::block_user(src, false) || owner;

			char status[256] = "BLOCKED";

			if (blocked)
			{
				if (user) strcat(status, "_USER");
				if (owner) strcat(status, "_OWNER");

				if (!user) features::sync++;

				misc::log_clone(LOG_FAIL, sync_src, "CREATE_ACK", object_type, object_id, 0, 0, ack_code, blocked, status);
			}
			else
			{
				misc::log_clone(LOG_PASS, sync_src, "CREATE_ACK", object_type, object_id, 0, 0, ack_code, blocked, status);
			}
			if (blocked)
			{
				return;
			}
		}
		__try
		{
			g_hooking->m_clone_create_ack_hook.get_original<functions::clone_create_ack_t>()(mgr, src, dst, object_id, ack_code);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			features::sync++;
			misc::log_clone(LOG_EXCEPTION, sync_src, "CREATE_ACK", 0, object_id, 0, 0, ack_code, true, "BLOCKED_EXCEPTION");
			misc::block_user(sync_src, true);
		}
	}
	static void clone_sync_ack(rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, rage::datBitBuffer *buffer, uint16_t object_id, int32_t ack_code)
	{
		sync_src = src;

		if (big::features::protection && big::features::injected)
		{
			rage::netObject* netObject = g_pointers->m_get_network_object(mgr, object_id, true);
			bool user = misc::block_user(src);
			bool owner = !is_owner(dst, netObject);
			int16_t object_type = netObject == nullptr ? -1 : netObject->object_type;

			bool blocked = misc::block_user(src, false) || owner;

			char status[256] = "BLOCKED";

			if (blocked)
			{
				if (user) strcat(status, "_USER");
				if (owner) strcat(status, "_OWNER");

				if (!user) features::sync++;

				misc::log_clone(LOG_FAIL, sync_src, "SYNC_ACK", object_type, object_id, 0, 0, ack_code, blocked, status);
			}
			else
			{
				misc::log_clone(LOG_PASS, sync_src, "SYNC_ACK", object_type, object_id, 0, 0, ack_code, blocked, status);
			}
			if (blocked)
			{
				//NOT DATBITBUFFER
				//buffer->m_unkBit = buffer->m_maxBit;
				return;
			}
		}
		__try
		{
			//NOT DATBITBUFFER
			//buffer_expand(buffer);
			g_hooking->m_clone_sync_ack_hook.get_original<functions::clone_sync_ack_t>()(mgr, src, dst, buffer, object_id, ack_code);
			//buffer_shrink(buffer);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			//NOT DATBITBUFFER
			//buffer_shrink(buffer);
			//buffer->m_unkBit = buffer->m_maxBit;

			features::sync++;
			misc::log_clone(LOG_EXCEPTION, sync_src, "SYNC_ACK", 0, object_id, 0, 0, ack_code, true, "BLOCKED_EXCEPTION");
			misc::block_user(sync_src, true);
		}
	}
	static void clone_remove_ack(rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, uint16_t object_id, int32_t ack_code)
	{
		sync_src = src;

		if (big::features::protection && big::features::injected)
		{
			rage::netObject* netObject = g_pointers->m_get_network_object(mgr, object_id, true);
			bool user = misc::block_user(src);
			bool owner = !is_owner(dst, netObject);
			int16_t object_type = netObject == nullptr ? -1 : netObject->object_type;

			bool blocked = misc::block_user(src, false) || owner;

			char status[256] = "BLOCKED";

			if (blocked)
			{
				if (user) strcat(status, "_USER");
				if (owner) strcat(status, "_OWNER");

				if (!user) features::sync++;

				misc::log_clone(LOG_FAIL, sync_src, "REMOVE_ACK", object_type, object_id, 0, 0, ack_code, blocked, status);
			}
			else
			{
				misc::log_clone(LOG_PASS, sync_src, "REMOVE_ACK", object_type, object_id, 0, 0, ack_code, blocked, status);
			}
			if (blocked)
			{
				return;
			}
		}
		__try
		{
			g_hooking->m_clone_remove_ack_hook.get_original<functions::clone_remove_ack_t>()(mgr, src, dst, object_id, ack_code);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			features::sync++;
			misc::log_clone(LOG_EXCEPTION, sync_src, "REMOVE_ACK", 0, object_id, 0, 0, ack_code, true, "BLOCKED_EXCEPTION");
			misc::block_user(sync_src, true);
		}
	}

	static void clone_pack(rage::CNetworkObjectMgr* mgr, rage::netObject* netObject, rage::CNetGamePlayer* src, rage::datBitBuffer* buffer)
	{
		sync_src = src;
		sync_type = rage::PACK;
		sync_object_type = -1;

		if (big::features::protection && big::features::injected)
		{
			bool user = misc::block_user(src);
			bool proto = misc::block_proto(src, rage::PACK, 0, 0);
			bool flood = misc::flood_pack(src);

			bool blocked = misc::block_user(src, false) || flood || proto;

			char status[256] = "BLOCKED";

			if (blocked)
			{
				if (user) strcat(status, "_USER");
				if (proto) strcat(status, "_PROTO");
				if (flood) strcat(status, "_FLOOD");

				if (!user) features::sync++;

				misc::log_clone(LOG_FAIL, sync_src, "PACK", -1, 0, 0, 0, 0, blocked, status);
			}
			else
			{
				misc::log_clone(LOG_PASS, sync_src, "PACK", -1, 0, 0, 0, 0, blocked, status);
			}
			if (blocked)
			{
				buffer->m_unkBit = buffer->m_maxBit;
				return;
			}
		}
		__try
		{
			buffer_expand(buffer);
			g_hooking->m_clone_pack_hook.get_original<functions::clone_pack_t>()(mgr, netObject, src, buffer);
			buffer_shrink(buffer);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			buffer_shrink(buffer);
			buffer->m_unkBit = buffer->m_maxBit;

			features::sync++;
			misc::log_clone(LOG_EXCEPTION, sync_src, "PACK", -1, 0, 0, 0, 0, true, "BLOCKED_EXCEPTION");
			misc::block_user(src, true);
		}
	}

	static bool clone_create(rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t _object_type, int32_t _object_id, int32_t _object_flag, rage::datBitBuffer* buffer, int32_t timestamp)
	{
		int32_t n = (buffer->m_maxBit + 7) >> 3;
		uint8_t* data = buffer->m_data;

		int16_t object_type = _object_type;
		int16_t object_id = _object_id;
		int16_t object_flag = _object_flag;

		sync_src = src;
		sync_type = rage::CREATE;
		sync_object_type = object_type;

		if (big::features::protection && big::features::injected)
		{
			rage::netObject* netObject = g_pointers->m_get_network_object(mgr, object_id, true);
			bool user = misc::block_user(src);
			bool type = object_type == rage::SUBMARINE || object_type == rage::PICKUP_PLACEMENT || object_type < rage::CAR || object_type > rage::TRAIN;
			bool crash = misc::block_crash(n, data);
			bool limit = misc::object_limit(object_type);
			bool time = misc::event_time(src, timestamp);
			bool proto = misc::block_proto(src, rage::CREATE, object_type, object_id);
			bool owner = netObject != nullptr;
			bool flood = misc::flood_create(sync_src, rage::CREATE);

			bool blocked = misc::block_user(src, type || crash || limit || time) || owner || flood || proto;

			char status[256] = "BLOCKED";

			if (blocked)
			{
				if (user) strcat(status, "_USER");
				if (type) strcat(status, "_TYPE");
				if (crash) strcat(status, "_CRASH");
				if (limit) strcat(status, "_LIMIT");
				if (time) strcat(status, "_TIME");
				if (proto) strcat(status, "_PROTO");
				if (owner) strcat(status, "_OWNER");
				if (flood) strcat(status, "_FLOOD");

				if(!user) features::sync++;

				misc::log_clone(LOG_FAIL, sync_src, "CREATE", object_type, object_id, object_flag, timestamp, 0, blocked, status);
			}
			else
			{
				misc::log_clone(LOG_PASS, sync_src, "CREATE", object_type, object_id, object_flag, timestamp, 0, blocked, status);
			}

			if (blocked)
			{
				buffer->m_unkBit = buffer->m_maxBit;
				//timestamp = 0;
				return true;
			}
		}
		__try
		{
			buffer_expand(buffer);
			g_hooking->m_clone_create_hook.get_original<functions::clone_create_t>()(mgr, src, dst, _object_type, _object_id, _object_flag, buffer, timestamp);
			buffer_shrink(buffer);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			buffer_shrink(buffer);
			buffer->m_unkBit = buffer->m_maxBit;

			features::sync++;
			misc::log_clone(LOG_EXCEPTION, sync_src, "CREATE", object_type, object_id, object_flag, timestamp, 0, true, "BLOCKED_EXCEPTION");
			misc::block_user(src, true);
		}
		return true;
	}

	static bool clone_sync(rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t _object_type, int32_t _object_id, rage::datBitBuffer* buffer, int32_t unk, int32_t timestamp)
	{
		int32_t n = (buffer->m_maxBit + 7) >> 3;
		uint8_t* data = buffer->m_data;

		int16_t object_type = _object_type;
		int16_t object_id = _object_id;

		sync_src = src;
		sync_type = rage::SYNC;
		sync_object_type = object_type;

		if (big::features::protection && big::features::injected)
		{
			rage::netObject* netObject = g_pointers->m_get_network_object(mgr, object_id, true);
			bool user = misc::block_user(src);
			bool type = object_type == rage::SUBMARINE || object_type == rage::PICKUP_PLACEMENT || object_type < rage::CAR || object_type > rage::TRAIN;
			bool crash = misc::block_crash(n, data);
			bool time = misc::event_time(src, timestamp);
			bool proto = misc::block_proto(src, rage::SYNC, object_type, object_id);
			bool owner = false;// !is_owner(src, netObject);
			bool change = netObject != nullptr && netObject->object_type != object_type;

			bool blocked = misc::block_user(src, type || crash || time || change) || owner || proto;

			char status[256] = "BLOCKED";

			if (blocked)
			{
				if (user) strcat(status, "_USER");
				if (type) strcat(status, "_TYPE");
				if (crash) strcat(status, "_CRASH");
				if (time) strcat(status, "_TIME");
				if (proto) strcat(status, "_PROTO");
				if (owner) strcat(status, "_OWNER");
				if (change) strcat(status, "_CHANGE");

				if (!user) features::sync++;

				misc::log_clone(LOG_FAIL, sync_src, "SYNC", object_type, object_id, 0, timestamp, 0, blocked, status);
			}
			else
			{
				misc::log_clone(LOG_PASS, sync_src, "SYNC", object_type, object_id, 0, timestamp, 0, blocked, status);
			}

			if (blocked)
			{
				buffer->m_unkBit = buffer->m_maxBit;
				//timestamp = 0;
				return true;
			}
		}
		__try
		{
			buffer_expand(buffer);
			g_hooking->m_clone_sync_hook.get_original<functions::clone_sync_t>()(mgr, src, dst, _object_type, _object_id, buffer, unk, timestamp);
			buffer_shrink(buffer);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			buffer_shrink(buffer);
			buffer->m_unkBit = buffer->m_maxBit;

			features::sync++;
			misc::log_clone(LOG_EXCEPTION, sync_src, "SYNC", object_type, object_id, 0, timestamp, 0, true, "BLOCKED_EXCEPTION");
			misc::block_user(src, true);
		}
		return true;
	}

	static void clone_remove(rage::CNetworkObjectMgr* mgr, rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, int32_t _object_id, int32_t unk)
	{
		int16_t object_id = _object_id;

		sync_src = src;
		sync_type = rage::REMOVE;
		sync_object_type = -1;

		if (big::features::protection && big::features::injected)
		{
			rage::netObject *netObject = g_pointers->m_get_network_object(mgr, object_id, true);
			bool user = misc::block_user(src);
			bool proto = misc::block_proto(src, rage::REMOVE, 0, object_id);
			bool owner = !is_owner(src, netObject);

			bool blocked = misc::block_user(src, false) || owner || proto;

			char status[256] = "BLOCKED";

			if (blocked)
			{
				if (user) strcat(status, "_USER");
				if (proto) strcat(status, "_PROTO");
				if (owner) strcat(status, "_OWNER");

				if (!user) features::sync++;

				misc::log_clone(LOG_FAIL, sync_src, "REMOVE", 0, object_id, 0, 0, 0, blocked, status);
			}
			else
			{
				misc::log_clone(LOG_PASS, sync_src, "REMOVE", 0, object_id, 0, 0, 0, blocked, status);
			}
			if (blocked)
			{
				return;
			}
		}
		__try
		{
			g_hooking->m_clone_remove_hook.get_original<functions::clone_remove_t>()(mgr, src, dst, _object_id, unk);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			features::sync++;
			misc::log_clone(LOG_EXCEPTION, sync_src, "REMOVE", 0, object_id, 0, 0, 0, true, "BLOCKED_EXCEPTION");
			misc::block_user(src, true);
		}
	}

	static bool sync_read(rage::netSyncTree* netSyncTree, int32_t sync_type, int32_t _sync_flag, rage::datBitBuffer* buffer, void* netLogStub)
	{
		sync_flag = _sync_flag;

		__try
		{
			//misc::log_generic(LOG_INTERNAL && LOG_PASS, "READ", false, "OK");

			return g_hooking->m_sync_read_hook.get_original<functions::sync_read_t>()(netSyncTree, sync_type, sync_flag, buffer, netLogStub);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			features::sync++;
			misc::log_generic(LOG_EXCEPTION, "READ", true, "BLOCKED_EXCEPTION");
			misc::block_user(sync_src, true);
			return false;
		}
	}

	static bool sync_can_apply(rage::netSyncTree* netSyncTree, rage::netObject* netObject)
	{
		if (big::features::protection && big::features::injected)
		{
			char status[256] = "BLOCKED";

			bool model = !misc::model_valid(netSyncTree, netObject->object_type);
			bool close = misc::object_close(netSyncTree, sync_type, sync_flag, netObject->object_type);
			bool location = misc::object_location(netSyncTree, sync_type, sync_flag, netObject->object_type);
			bool flood = misc::flood_script(sync_src, sync_type, sync_flag);

			bool blocked = model || close || location || flood;
	
			if (blocked)
			{
				uint32_t hash = netSyncTree->m_sync_tree_node->model(netObject->object_type);

				if (model) strcat(status, "_MODEL");
				if (close) strcat(status, "_CLOSE");
				if (location) strcat(status, "_LOCATION");
				if (flood) strcat(status, "_FLOOD");

				if (model)
				{
					misc::log_model(LOG_INTERNAL && LOG_FAIL, "MODEL", netObject->object_type, hash, blocked, status);
				}
				//else
				//{
				//	misc::log_generic(LOG_INTERNAL && LOG_FAIL, "APPLY", blocked, status);
				//}
			}
			//else
			//{
			//	misc::log_generic(LOG_INTERNAL && LOG_PASS, "APPLY", blocked, status);
			//}
			if (blocked)
			{
				return false;
			}
		}
		__try
		{
			return g_hooking->m_sync_can_apply_hook.get_original<functions::sync_can_apply_t>()(netSyncTree, netObject);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			features::sync++;
			misc::log_generic(LOG_EXCEPTION, "APPLY", true, "BLOCKED_EXCEPTION");
			misc::block_user(sync_src, true);
			return false;
		}
	}

	static bool event_blocked(rage::CNetGamePlayer* src, rage::CNetGamePlayer* dst, rage::datBitBuffer* buffer, int16_t event_type, int32_t event_id, int32_t bitset)
	{
		int32_t n = (buffer->m_maxBit + 7) >> 3;
		uint8_t* data = buffer->m_data;

		bool user = misc::block_user(src);
		bool type = FIND(event_type, misc::blocked_network) || event_type > NETWORK_CHECK_CATALOG_CRC;
		bool crash = misc::block_crash(n, data);
		bool proto = misc::block_proto(src, event_type);
		bool flood = !user && !type && misc::flood_event(src, event_type, bitset);
		bool clock = event_type == GAME_CLOCK_EVENT && !src->is_host();
		//bool respawn = misc::flood_respawn(src, event_type); || respawn

		bool blocked = misc::block_user(src, crash) || type || flood || clock || proto;

		char status[265] = "BLOCKED";

		if (blocked)
		{
			if (user) strcat(status, "_USER");
			if (type) strcat(status, "_TYPE");
			if (crash) strcat(status, "_CRASH");
			if (flood) strcat(status, "_FLOOD");
			if (proto) strcat(status, "_PROTO");
			if (clock) strcat(status, "_CLOCK");
			//if (respawn) strcat(status, "_RESPAWN");

			if(!user) features::network++;

			misc::log_network_event(LOG_NETWORK && LOG_FAIL, src, event_type, event_id, bitset, n, data, blocked, status);
		}
		else
		{
			misc::log_network_event(LOG_NETWORK && LOG_PASS, src, event_type, event_id, bitset, n, data, blocked, status);
		}
		return blocked;
	}

	static bool network_event(void* event_manager, rage::CNetGamePlayer *src, rage::CNetGamePlayer *dst, int32_t _event_type, int32_t event_id, int32_t bitset, int64_t unk, rage::datBitBuffer *buffer)
	{
		int32_t n = (buffer->m_maxBit + 7) >> 3;
		uint8_t* data = buffer->m_data;
		
		int16_t event_type = _event_type;

		sync_src = src;
		sync_type = rage::NETWORK;
		sync_object_type = -1;

		if (big::features::protection && big::features::injected)
		{
			if (event_blocked(src, dst, buffer, event_type, event_id, bitset))
			{
				_event_type = NETWORK_TRAIN_REPORT_EVENT;
				buffer->m_data[0] = 0;
			}
			else if (event_type == GIVE_CONTROL_EVENT)
			{
				sync_src = src;
				sync_type = rage::TAKEOVER;
			}
		}
		__try
		{
			buffer_expand(buffer);
			g_hooking->m_network_event_hook.get_original<functions::network_event_t>()(event_manager, src, dst, _event_type, event_id, bitset, n, buffer);
			buffer_shrink(buffer);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			buffer_shrink(buffer);
			buffer->m_unkBit = buffer->m_maxBit;

			features::network++;
			misc::log_network_event(LOG_EXCEPTION, src, event_type, event_id, bitset, n, data, true, "BLOCKED_EXCEPTION");
			misc::block_user(src, true);
		}
		return true;
	}

	static bool script_event(int32_t group, int32_t event_id, int64_t* data, int32_t n)
	{
		if (big::features::protection && big::features::injected)
		{
			bool empty = misc::zero(n, data);
			bool value = misc::value(event_id);
			bool range = misc::range(n, data);
			bool length = n <= 2;
			bool blocked_0 = n > 0 && FIND(data[0], misc::blocked_script_0);
			bool blocked_2 = n > 2 && FIND(data[2], misc::blocked_script_2);

			bool blocked = empty || value || range || length || blocked_0 || blocked_2;

			if (blocked)
			{
				features::script++;
			}
			else
			{
				misc::log_script_event(LOG_SCRIPT, group, event_id, n, data, blocked);
			}
			if (blocked) return true;
		}
		__try
		{
			g_hooking->m_script_event_hook.get_original<functions::script_event_t>()(group, event_id, data, n);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			features::script++;
			misc::log_blue(LOG_EXCEPTION, ",SCRIPT,BLOCKED_EXCEPTION", true);
		}
		return true;
	}

	void buffer_expand(rage::datBitBuffer* buffer)
	{
		int32_t n = (buffer->m_maxBit + 7) >> 3;
		uint8_t* data = buffer->m_data;

		buffer_n = n;
		memcpy(buffer_data, data, n);
		memset(buffer_data + n, 0, sizeof(buffer_data) - n);

		buffer_buffer = buffer->m_data;
		buffer_max = buffer->m_maxBit;
		buffer->m_data = buffer_data;
		buffer->m_maxBit = sizeof(buffer_data) << 3;
	}

	void buffer_shrink(rage::datBitBuffer* buffer)
	{
		buffer->m_data = buffer_buffer;
		buffer->m_maxBit = buffer_max;
	}

	static void unregister_object(rage::CNetworkObjectMgr* mgr, rage::netObject* netObject, int reason, bool force1, bool force2)
	{
		if (big::features::protection && big::features::injected)
		{
			//misc::log_clone(LOG_PASS, nullptr, "UNREGISTER", netObject->object_type, netObject->object_id, netObject->GetObjectFlags(), 0, 0, false, "OK");
		}
		__try
		{
			g_hooking->m_unregister_object_hook.get_original<functions::unregister_object_t>()(mgr, netObject, reason, force1, force2);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			features::sync++;
			misc::log_clone(LOG_FAIL, nullptr, "UNREGISTER", netObject->object_type, netObject->object_id, netObject->GetObjectFlags(), 0, 0, true, "BLOCKED_EXCEPTION");
		}
	}

	//static void buffer_int(rage::datBitBuffer* buffer, uint32_t* value, int32_t length, int32_t index)
	//{
	//	__try
	//	{
	//		g_hooking->m_buffer_int_hook.get_original<functions::buffer_int_t>()(buffer, value, length, index);

	//		if (big::features::protection && big::features::injected)
	//		{
	//			if (length == 32)
	//			{
	//				misc::log_buff(LOG_BUFF, sync_type, sync_object_type, index, length, *value, false, "OK");
	//			}
	//		}
	//	}
	//	__except (EXCEPTION_EXECUTE_HANDLER)
	//	{
	//		features::sync++;
	//		misc::log_buff(LOG_EXCEPTION, sync_type, sync_object_type, index, length, 0, true, "BLOCKED_EXCEPTION");
	//		misc::block_user(sync_src, true);
	//	}
	//}

	static GtaThread *find_script_thread(rage::joaat_t hash)
	{
		for (auto thread : *g_pointers->m_script_threads)
		{
			if (thread
				&& thread->m_context.m_thread_id
				&& thread->m_handler
				&& thread->m_script_hash == hash)
			{
				return thread;
			}
		}
		return nullptr;
	}

	hooking::hooking() :
		m_og_wndproc(NULL),
		m_swapchain_hook(*g_pointers->m_swapchain, hooks::swapchain_num_funcs),
		m_set_cursor_pos_hook("SetCursorPos", memory::module("user32.dll").get_export("SetCursorPos").as<void*>(), &hooks::set_cursor_pos),

		m_clone_create_hook("m_clone_create_hook", g_pointers->m_clone_create, &clone_create),
		m_clone_sync_hook("m_clone_sync_hook", g_pointers->m_clone_sync, &clone_sync),
		m_clone_remove_hook("m_clone_remove_hook", g_pointers->m_clone_remove, &clone_remove),
		m_clone_pack_hook("m_clone_pack_hook", g_pointers->m_clone_pack, &clone_pack),
		//m_buffer_int_hook("m_buffer_int_hook", g_pointers->m_buffer_int, &buffer_int),
		m_sync_can_apply_hook("netSyncTree_CanApplyToObject", g_pointers->m_sync_can_apply, &sync_can_apply),

		m_sync_read_hook("netSyncTree_ReadFromBuffer", g_pointers->m_sync_read, &sync_read),

		m_unregister_object_hook("m_unregister_object_hook", g_pointers->m_unregister_object, &unregister_object),
		m_clone_create_ack_hook("m_clone_create_ack_hook", g_pointers->m_clone_create_ack, &clone_create_ack),
		m_clone_sync_ack_hook("m_clone_sync_ack_hook", g_pointers->m_clone_sync_ack, &clone_sync_ack),
		m_clone_remove_ack_hook("m_clone_remove_ack_hook", g_pointers->m_clone_remove_ack, &clone_remove_ack),

		m_network_event_hook("NetworkEvent", g_pointers->m_network_event, &network_event),
		m_script_event_hook("ScriptEvent", g_pointers->m_script_event, &script_event),
		//m_game_invite_hook("game_invite", g_pointers->m_game_invite, &game_invite),

		m_run_script_threads_hook("RunScriptThreads", g_pointers->m_run_script_threads, &hooks::run_script_threads),
		m_convert_thread_to_fiber_hook("ConvertThreadToFiber", memory::module("kernel32.dll").get_export("ConvertThreadToFiber").as<void*>(), &hooks::convert_thread_to_fiber)
	{
		m_swapchain_hook.hook(hooks::swapchain_present_index, &hooks::swapchain_present);
		m_swapchain_hook.hook(hooks::swapchain_resizebuffers_index, &hooks::swapchain_resizebuffers);

		g_hooking = this;
	}

	hooking::~hooking()
	{
		if (m_enabled) disable();

		g_hooking = nullptr;
	}

	void hooking::enable()
	{
		m_swapchain_hook.enable();
		m_og_wndproc = reinterpret_cast<WNDPROC>(SetWindowLongPtrW(g_pointers->m_hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&hooks::wndproc)));
		m_set_cursor_pos_hook.enable();

		m_clone_pack_hook.enable();
		m_clone_create_hook.enable();
		m_clone_sync_hook.enable();
		m_clone_remove_hook.enable();
		m_sync_read_hook.enable();
		m_sync_can_apply_hook.enable();

		m_clone_create_ack_hook.enable();
		m_clone_sync_ack_hook.enable();
		m_clone_remove_ack_hook.enable();

		//m_buffer_int_hook.enable();
		//m_unregister_object_hook.enable();

		m_network_event_hook.enable();
		m_script_event_hook.enable();
		//m_game_invite_hook.enable();

		m_run_script_threads_hook.enable();
		m_convert_thread_to_fiber_hook.enable();

		ensure_dynamic_hooks();

		for (auto native : misc::natives_replace)
		{
			m_native.emplace(native.first, native.second);
		}
		for (auto native : misc::natives_logging)
		{
			m_native.emplace(native.first, native.second);
		}

		for (auto hash : g_pointers->m_script_program_table->all_script())
		{
			m_native_hook.push_back(new script_hook(hash, m_native));
		}

		m_enabled = true;
		big::features::injected = true;
	}

	void hooking::disable()
	{
		m_enabled = false;

		for (auto hook : m_native_hook)
		{
			delete hook;
		}

		if (m_main_persistent_hook)
		{
			m_main_persistent_hook->disable();
		}

		m_convert_thread_to_fiber_hook.disable();
		m_run_script_threads_hook.disable();

		//m_game_invite_hook.disable();
		m_script_event_hook.disable();
		m_network_event_hook.disable();

		//m_unregister_object_hook.disable();
		//m_buffer_int_hook.disable();

		m_clone_remove_ack_hook.disable();
		m_clone_sync_ack_hook.disable();
		m_clone_create_ack_hook.disable();

		m_sync_can_apply_hook.disable();
		m_sync_read_hook.disable();
		m_clone_remove_hook.disable();
		m_clone_sync_hook.disable();
		m_clone_create_hook.disable();
		m_clone_pack_hook.disable();

		m_set_cursor_pos_hook.disable();
		SetWindowLongPtrW(g_pointers->m_hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(m_og_wndproc));
		m_swapchain_hook.disable();
	}

	void hooking::ensure_dynamic_hooks()
	{
		if (!m_main_persistent_hook)
		{
			if (auto main_persistent = find_script_thread(RAGE_JOAAT("main_persistent")))
			{
				m_main_persistent_hook = std::make_unique<vmt_hook>(main_persistent->m_handler, hooks::main_persistent_num_funcs);
				m_main_persistent_hook->hook(hooks::main_persistent_dtor_index, &hooks::main_persistent_dtor);
				m_main_persistent_hook->hook(hooks::main_persistent_is_networked_index, &hooks::main_persistent_is_networked);
				m_main_persistent_hook->enable();
			}
		}
	}

	bool hooks::run_script_threads(uint32_t ops_to_execute)
	{
		TRY_CLAUSE
		{
			if (g_running)
			{
				g_script_mgr.tick();
			}
			return g_hooking->m_run_script_threads_hook.get_original<functions::run_script_threads_t>()(ops_to_execute);
		} EXCEPT_CLAUSE

		return false;
	}

	void *hooks::convert_thread_to_fiber(void *param)
	{
		TRY_CLAUSE
		{
			if (IsThreadAFiber())
			{
				return GetCurrentFiber();
			}

			return g_hooking->m_convert_thread_to_fiber_hook.get_original<decltype(&convert_thread_to_fiber)>()(param);
		} EXCEPT_CLAUSE

		return nullptr;
	}

	HRESULT hooks::swapchain_present(IDXGISwapChain *this_, UINT sync_interval, UINT flags)
	{
		TRY_CLAUSE
		{
			if (g_running)
			{
				g_renderer->on_present();
			}
			return g_hooking->m_swapchain_hook.get_original<decltype(&swapchain_present)>(swapchain_present_index)(this_, sync_interval, flags);
		} EXCEPT_CLAUSE

		return NULL;
	}

	HRESULT hooks::swapchain_resizebuffers(IDXGISwapChain * this_, UINT buffer_count, UINT width, UINT height, DXGI_FORMAT new_format, UINT swapchain_flags)
	{
		TRY_CLAUSE
		{
			if (g_running)
			{
				g_renderer->pre_reset();

				auto result = g_hooking->m_swapchain_hook.get_original<decltype(&swapchain_resizebuffers)>(swapchain_resizebuffers_index)
					(this_, buffer_count, width, height, new_format, swapchain_flags);

				if (SUCCEEDED(result))
				{
					g_renderer->post_reset();
				}

				return result;
			}
			return g_hooking->m_swapchain_hook.get_original<decltype(&swapchain_resizebuffers)>(swapchain_resizebuffers_index) (this_, buffer_count, width, height, new_format, swapchain_flags);
		} EXCEPT_CLAUSE

		return NULL;
	}

	LRESULT hooks::wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
	{
		TRY_CLAUSE
		{
			if (g_running)
			{
				g_renderer->wndproc(hwnd, msg, wparam, lparam);
			}

			return CallWindowProcW(g_hooking->m_og_wndproc, hwnd, msg, wparam, lparam);
		} EXCEPT_CLAUSE

		return NULL;
	}

	BOOL hooks::set_cursor_pos(int x, int y)
	{
		TRY_CLAUSE
		{
			if (g_gui.m_opened)
				return true;

			return g_hooking->m_set_cursor_pos_hook.get_original<decltype(&set_cursor_pos)>()(x, y);
		} EXCEPT_CLAUSE

		return FALSE;
	}

	void hooks::main_persistent_dtor(CGameScriptHandler* this_, bool free_memory)
	{
		auto og_func = g_hooking->m_main_persistent_hook->get_original<decltype(&main_persistent_dtor)>(main_persistent_dtor_index);
		g_hooking->m_main_persistent_hook->disable();
		g_hooking->m_main_persistent_hook.reset();

		return og_func(this_, free_memory);
	}

	bool hooks::main_persistent_is_networked(CGameScriptHandler* this_)
	{
		return *g_pointers->m_is_session_started;
	}
}
