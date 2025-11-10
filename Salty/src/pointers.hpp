#pragma once
#include "gta/enums.hpp"
#include "function_types.hpp"
#include "gta/replay.hpp"
#include "gta/script_program.hpp"

namespace big
{
	class pointers
	{
	public:
		explicit pointers();
		~pointers();
	public:
		HWND m_hwnd{};

		enum eGameState *m_game_state{};
		bool *m_is_session_started{};

		rage::CPedFactory **m_ped_factory{};
		rage::CNetworkPlayerMgr **m_network_player_mgr{};

		rage::scrNativeRegistrationTable *m_native_registration_table{};
		functions::get_native_handler_t m_get_native_handler{};
		functions::fix_vectors_t m_fix_vectors{};

		rage::atArray<GtaThread*> *m_script_threads{};
		rage::scrProgramTable *m_script_program_table{};

		uint8_t* m_incompatible_version{};

		//functions::buffer_int_t m_buffer_int{};
		functions::clone_pack_t m_clone_pack{};
		functions::clone_create_t m_clone_create{};
		functions::clone_sync_t m_clone_sync{};
		functions::clone_remove_t m_clone_remove{};
		functions::sync_read_t m_sync_read{};
		functions::sync_can_apply_t m_sync_can_apply{};

		functions::unregister_object_t m_unregister_object{};
		functions::clone_create_ack_t m_clone_create_ack{};
		functions::clone_sync_ack_t m_clone_sync_ack{};
		functions::clone_remove_ack_t m_clone_remove_ack{};

		functions::network_event_t m_network_event{};
		functions::script_event_t m_script_event{};

		//functions::game_invite_t m_game_invite{};

		rage::CReplayInterface* m_replay{};

		////////////////////////////////////////////////

		functions::handle_event_t m_handle_event{};
		functions::game_event_t m_game_event{};
		functions::node_read_t m_node_read{};
		functions::get_owner_t m_get_owner{};
		functions::get_network_object_for_player_t m_get_network_object_for_player{};
		functions::get_network_object_t m_get_network_object{};
		rage::CNetworkObjectMgr** _m_network_object_manager{};
		rage::CNetworkObjectMgr* m_network_object_manager() {
			return *_m_network_object_manager;
		}

		functions::run_script_threads_t m_run_script_threads{};
		int64_t **m_script_globals{};

		CGameScriptHandlerMgr **m_script_handler_mgr{};

		IDXGISwapChain **m_swapchain{};

		PVOID m_model_spawn_bypass{};
	};

	inline pointers *g_pointers{};
}
