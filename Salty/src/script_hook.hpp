#pragma once
#include "gta/joaat.hpp"
#include "gta/natives.hpp"
#include "vmt_hook.hpp"
#include "natives.hpp"
#include "gta/script_program.hpp"

namespace big
{
	class script_hook
	{
	public:
		explicit script_hook(rage::joaat_t script_hash, std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler> native_replacements);
		~script_hook();

		void ensure();
		std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler*> m_native_handler_ptrs;
		static bool script_hook::map_native(rage::scrNativeHash* hash);
	private:
		void hook_instance(rage::scrProgram *program);

		static void scrprogram_dtor(rage::scrProgram *this_, bool free_memory);
		static std::unordered_map<rage::scrProgram*, script_hook*> s_map;

		rage::joaat_t m_script_hash;
		rage::scrProgram* m_program;
		std::unique_ptr<vmt_hook> m_vmt_hook;
		std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler> m_native_replacements;
	};
}
