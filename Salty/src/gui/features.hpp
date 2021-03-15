#pragma once

#include "gta/natives.hpp"

namespace big::features
{
	extern bool injected;
	extern bool protection;
	extern bool god_mode;

	extern volatile Player _player;
	extern volatile Ped _ped;

	extern volatile uint64_t sync;
	extern volatile uint64_t network;
	extern volatile uint64_t script;

	extern void show_bye();
	extern void add_user(std::string _user);

	extern void run_tick();
	extern void script_func();
}
