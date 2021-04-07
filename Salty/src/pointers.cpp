#include "common.hpp"

#include "pointers.hpp"
#include "memory/pattern_batch.hpp"
#include "memory/handle.hpp"
#include "memory/module.hpp"

namespace big
{
	pointers::pointers()
	{
		memory::pattern_batch main_batch;

		main_batch.add("Game state", "83 3D ? ? ? ? ? 75 17 8B 42 20 25", [this](memory::handle ptr)
		{
			m_game_state = ptr.add(2).rip().as<enum eGameState*>();
		});

		main_batch.add("Is session started", "40 38 35 ? ? ? ? 75 0E 4C 8B C3 49 8B D7 49 8B CE", [this](memory::handle ptr)
		{
			m_is_session_started = ptr.add(3).rip().as<bool*>();
		});

		main_batch.add("Ped factory", "48 8B 05 ? ? ? ? 48 8B 48 08 48 85 C9 74 52 8B 81", [this](memory::handle ptr)
		{
			m_ped_factory = ptr.add(3).rip().as<rage::CPedFactory**>();
		});

		main_batch.add("Network player manager", "48 8B 0D ? ? ? ? 8A D3 48 8B 01 FF 50 ? 4C 8B 07 48 8B CF", [this](memory::handle ptr)
		{
			m_network_player_mgr = ptr.add(3).rip().as<rage::CNetworkPlayerMgr**>();
		});

		main_batch.add("Native handlers", "48 8D 0D ? ? ? ? 48 8B 14 FA E8 ? ? ? ? 48 85 C0 75 0A", [this](memory::handle ptr)
		{
			m_native_registration_table = ptr.add(3).rip().as<rage::scrNativeRegistrationTable*>();
			m_get_native_handler = ptr.add(12).rip().as<functions::get_native_handler_t>();
		});

		main_batch.add("Fix vectors", "83 79 18 00 48 8B D1 74 4A FF 4A 18 48 63 4A 18 48 8D 41 04 48 8B 4C CA", [this](memory::handle ptr)
		{
			m_fix_vectors = ptr.as<functions::fix_vectors_t>();
		});

		main_batch.add("Script threads", "45 33 F6 8B E9 85 C9 B8", [this](memory::handle ptr)
		{
			m_script_threads = ptr.sub(4).rip().sub(8).as<decltype(m_script_threads)>();
			m_run_script_threads = ptr.sub(0x1F).as<functions::run_script_threads_t>();
		});

		main_batch.add("Script programs", "44 8B 0D ? ? ? ? 4C 8B 1D ? ? ? ? 48 8B 1D ? ? ? ? 41 83 F8 FF 74 3F 49 63 C0 42 0F B6 0C 18 81 E1", [this](memory::handle ptr)
		{
			m_script_program_table = ptr.add(17).rip().as<decltype(m_script_program_table)>();
		});

		main_batch.add("Script globals", "48 8D 15 ? ? ? ? 4C 8B C0 E8 ? ? ? ? 48 85 FF 48 89 1D", [this](memory::handle ptr)
		{
			m_script_globals = ptr.add(3).rip().as<int64_t**>();
		});

		main_batch.add("CGameScriptHandlerMgr", "48 8B 0D ? ? ? ? 4C 8B CE E8 ? ? ? ? 48 85 C0 74 05 40 32 FF", [this](memory::handle ptr)
		{
			m_script_handler_mgr = ptr.add(3).rip().as<CGameScriptHandlerMgr**>();
		});

		main_batch.add("Swapchain", "48 8B 0D ? ? ? ? 48 8B 01 44 8D 43 01 33 D2 FF 50 40 8B C8", [this](memory::handle ptr)
		{
			m_swapchain = ptr.add(3).rip().as<IDXGISwapChain**>();
		});

		main_batch.add("Model Spawn Bypass", "48 8B C8 FF 52 30 84 C0 74 05 48", [this](memory::handle ptr)
		{
			m_model_spawn_bypass = ptr.add(8).as<PVOID>();
		});

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//main_batch.add("_netBuffer_ReadUnsigned", "41 83 E1 07 45 8B D8 49 C1 FA 03 BB 08 00 00 00", [this](memory::handle ptr)
		//{
		//	m_buffer_int = ptr.sub(0x12).as<functions::buffer_int_t>();
		//});

		main_batch.add("m_clone_pack", "48 89 5c 24 ? 48 89 6c 24 ? 48 89 74 24 ? 57 48 83 ec ? 48 8b f9 48 8b ca 49 8b e9", [this](memory::handle ptr)
		{
			m_clone_pack = ptr.as<functions::clone_pack_t>();
		});

		main_batch.add("clone_create", "48 8b c4 66 44 89 48", [this](memory::handle ptr)
		{
			m_clone_create = ptr.as<functions::clone_create_t>();
		});

		main_batch.add("clone_sync", "48 8b c4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 ec ? 4c 8b f2 41 0f b7 d1", [this](memory::handle ptr)
		{
			m_clone_sync = ptr.as<functions::clone_sync_t>();
		});
		
		main_batch.add("clone_remove", "48 8b c4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 ec ? 4c 8b f2 4d 8b e0 48 8d 50", [this](memory::handle ptr)
		{
			m_clone_remove = ptr.as<functions::clone_remove_t>();
		});
		
		main_batch.add("sync_read", "45 89 43 18 57 48 83 EC 30 48 83 79 10 00 49", [this](memory::handle ptr)
		{
			m_sync_read = ptr.sub(15).as<functions::sync_read_t>();
		});

		main_batch.add("sync_can_apply", "49 8B CE FF 50 70 84 C0 74 31 33 FF", [this](memory::handle ptr)
		{
			m_sync_can_apply = ptr.sub(0x2C).as<functions::sync_can_apply_t>();
		});

		main_batch.add("unregister_object", "48 89 5c 24 ? 48 89 6c 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 ec ? 45 8a f1 41 8b e8 48 8b fa", [this](memory::handle ptr)
		{
			m_unregister_object = ptr.as<functions::unregister_object_t>();
		});
		main_batch.add("clone_create_ack", "48 8b c4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 ec ? 4c 8b fa 49 8b d8", [this](memory::handle ptr)
		{
			m_clone_create_ack = ptr.as<functions::clone_create_ack_t>();
		});
		main_batch.add("clone_sync_ack", "48 89 5c 24 ? 48 89 74 24 ? 48 89 7c 24 ? 41 54 41 56 41 57 48 83 ec ? 4c 8b e2", [this](memory::handle ptr)
		{
			m_clone_sync_ack = ptr.as<functions::clone_sync_ack_t>();
		});
		main_batch.add("clone_remove_ack", "48 8b c4 48 89 58 ? 48 89 68 ? 48 89 70 ? 57 41 56 41 57 48 83 ec ? 4c 8b fa 49 8b d8", [this](memory::handle ptr)
		{
			m_clone_remove_ack = ptr.as<functions::clone_remove_ack_t>();
		});

		main_batch.add("network_event", "66 41 83 F9 ? 0F 83", [this](memory::handle ptr)
		{
			m_network_event = ptr.as<functions::network_event_t>();
		});

		main_batch.add("script_event", "48 85 C0 74 14 4C 8B 10", [this](memory::handle ptr)
		{
			m_script_event = ptr.sub(28).as<functions::script_event_t>();
		});

		//main_batch.add("game_invite", "48 89 5c 24 ? 57 48 81 ec ? ? ? ? 8b 81 ? ? ? ? 48 8b fa", [this](memory::handle ptr)
		//{
		//	m_game_invite = ptr.as<functions::game_invite_t>();
		//});

		main_batch.add("replay_interface", "48 8D 0D ? ? ? ? 48 8B D7 E8 ? ? ? ? 48 8D 0D ? ? ? ? 8A D8 E8 ? ? ? ? 84 DB 75 13 48 8D 0D ? ? ? ?", [this](memory::handle ptr)
		{
			uint8_t* replay_interface_pattern = ptr.as<uint8_t*>();
			uint8_t* replay_interface_address = replay_interface_pattern + *(uint32_t*)(replay_interface_pattern + 0x3) + 0x7;
			m_replay = *(rage::CReplayInterface**)replay_interface_address;
		});

		main_batch.add("incompatible_version", "48 89 5C 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 33 FF 48 8B DA", [this](memory::handle ptr)
		{
			m_incompatible_version = ptr.add(0x165CEE5 - 0x165CB80).as<uint8_t*>();

			memset(m_incompatible_version, 0x90, 0x165CF03 - 0x165CEE5);
		});

		//send_event_ack = findPattern("48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC 20 80 7A", -5);

		//g_pointers->m_send_event_ack(event_manager, source_player, target_player, event_index, event_handled_bitset);

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		main_batch.add("netObject__GetPlayerOwner", "8A 41 49 3C FF 74 17 3C 20 73 13 0F B6 C8", [this](memory::handle ptr)
		{
			m_get_owner = ptr.as<functions::get_owner_t>();
		});

		main_batch.add("g_objectMgr", "48 8B 0D ? ? ? ? 45 33 C0 E8 ? ? ? ? 33 FF 4C 8B F0", [this](memory::handle ptr)
		{
			_m_network_object_manager = ptr.add(3).rip().as<rage::CNetworkObjectMgr**>();
		});

		main_batch.add("netObjectMgrBase__GetNetworkObject", "44 38 33 75 30 66 44", [this](memory::handle ptr)
		{
			m_get_network_object = ptr.sub(0x40).as<functions::get_network_object_t>();
		});

		main_batch.add("netObjectMgrBase__GetNetworkObjectForPlayer", "41 80 78 ? FF 74 2D 41 0F B6 40", [this](memory::handle ptr)
		{
			m_get_network_object_for_player = ptr.as<functions::get_network_object_for_player_t>();
		});

		main_batch.add("node_read", "48 8B 03 48 8B D6 48 8B CB EB 06", [this](memory::handle ptr)
		{
			m_node_read = ptr.sub(0x48).as<functions::node_read_t>();
		});

		main_batch.add("handle_event", "48 89 5c 24 ? 48 89 6c 24 ? 48 89 74 24 ? 57 48 83 ec ? 48 8b f9 48 8b ca 49 8b e9", [this](memory::handle ptr)
		{
			m_handle_event = ptr.as<functions::handle_event_t>();
		});

		main_batch.add("game_event", "48 8B DA 48 8B F1 41 81 FF 00", [this](memory::handle ptr)
		{
			m_game_event = ptr.sub(42).as<functions::game_event_t>();
		});

		main_batch.run(memory::module(nullptr));

		m_hwnd = FindWindowW(L"grcWindow", nullptr);
		if (!m_hwnd)
			throw std::runtime_error("Failed to find the game's window.");

		g_pointers = this;
	}

	pointers::~pointers()
	{
		g_pointers = nullptr;
	}
}