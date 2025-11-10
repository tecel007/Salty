#pragma once
#include "gta/script_handler.hpp"
#include "vmt_hook.hpp"
#include "detour_hook.hpp"
#include "script_hook.hpp"

namespace big
{
	extern void buffer_expand(rage::datBitBuffer* buffer);
	extern void buffer_shrink(rage::datBitBuffer* buffer);

	struct hooks
	{
		static bool run_script_threads(uint32_t ops_to_execute);
		static void *convert_thread_to_fiber(void *param);

		static constexpr auto swapchain_num_funcs = 19;
		static constexpr auto swapchain_present_index = 8;
		static constexpr auto swapchain_resizebuffers_index = 13;
		static HRESULT swapchain_present(IDXGISwapChain *this_, UINT sync_interval, UINT flags);
		static HRESULT swapchain_resizebuffers(IDXGISwapChain *this_, UINT buffer_count, UINT width, UINT height, DXGI_FORMAT new_format, UINT swapchain_flags);

		static LRESULT wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);
		static BOOL set_cursor_pos(int x, int y);

		//crash
		//https://www.unknowncheats.me/forum/grand-theft-auto-v/327176-bigbase-v2-21.html

		static constexpr auto main_persistent_num_funcs = 20;
		static constexpr auto main_persistent_dtor_index = 0;
		static constexpr auto main_persistent_is_networked_index = 6;
		static void main_persistent_dtor(CGameScriptHandler* this_, bool free_memory);
		static bool main_persistent_is_networked(CGameScriptHandler* this_);
	};

	class hooking
	{
		friend hooks;
	public:
		explicit hooking();
		~hooking();

		void enable();
		void disable();

		void ensure_dynamic_hooks();
		std::unique_ptr<vmt_hook> m_main_persistent_hook;

		detour_hook m_clone_pack_hook;
		detour_hook m_clone_create_hook;
		detour_hook m_clone_sync_hook;
		detour_hook m_clone_remove_hook;
		detour_hook m_sync_read_hook;
		detour_hook m_sync_can_apply_hook;

		detour_hook m_unregister_object_hook;
		detour_hook m_clone_create_ack_hook;
		detour_hook m_clone_sync_ack_hook;
		detour_hook m_clone_remove_ack_hook;

		detour_hook m_network_event_hook;
		detour_hook m_script_event_hook;
		//detour_hook m_game_invite_hook;

		//detour_hook m_buffer_int_hook;

		std::list<script_hook*> m_native_hook;
		std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler> m_native;
	private:
		bool m_enabled{};

		vmt_hook m_swapchain_hook;
		WNDPROC m_og_wndproc;
		detour_hook m_set_cursor_pos_hook;

		detour_hook m_run_script_threads_hook;
		detour_hook m_convert_thread_to_fiber_hook;
	};

	inline hooking *g_hooking{};
}
