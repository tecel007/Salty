#include "common.hpp"
#include "features.hpp"
#include "script.hpp"
#include "natives.hpp"
#include "gui/misc.h"
#include "gui/base_tab.h"

namespace big::features
{
	bool injected = false;
	bool protection = true;
	bool god_mode = true;

	volatile Player _player = 0;
	volatile Ped _ped = 0;
	volatile Player _cam = 0;

	volatile uint64_t sync = 0;
	volatile uint64_t network = 0;
	volatile uint64_t script = 0;

	std::list<std::string> user;
	std::mutex mutex;

	bool first = true;

	const bool LOG_LOG = false;

	void show_bye()
	{
		QUEUE_JOB_BEGIN_CLAUSE()
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("Salty ~r~unloaded~w~");
			HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
		} QUEUE_JOB_END_CLAUSE
	}

	void show_stat()
	{
		if (first) 
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("Salty ~g~installed~w~");
			HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);

			first = false;
		}
		else
		{
			char log[256];

		//Colors:
		//	~r~= Red
		//		~b~= Blue
		//		~o~= Orange
		//		~c~= Grey
		//		~f~= light blue
		//		~l~/ ~u~/ ~v~= Black
		//		~g~= Green
		//		~y~= Yellow
		//		~p~= Purple
		//		~m~= Dark Grey
		//		~s~/ ~t~= White
		//		~d~= dark blue
		//		~q~= Pink

		//		Misc :
		//		~bold~/ ~h~= bold
		//		~n~= Skip Line
		//		~italic~/ <i> = italic

			sprintf(log, "Salty blocked~n~~r~%I64d~w~ crashes~n~~o~%I64d~w~ kicks~n~~y~%I64d~w~ trolls", sync, script, network);

			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(log);
			HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
		}
	}

	void add_user(std::string _user)
	{
		std::unique_lock<std::mutex> mlock(mutex);

		user.push_back(_user);
	}

	void show_user()
	{
		std::unique_lock<std::mutex> mlock(mutex);

		if (!user.empty())
		{
			char log[256];

			std::string _user = user.front();

			user.pop_front();

			sprintf(log, "Salty blocked~n~~r~%s ~w~crashing you", _user.c_str());

			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(log);
			HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
		}
	}

	void disable_phone()
	{
		misc::set_global(19664, 1);
	}

	void block_afk()
	{
		//afk
		//if (Global_2550148.f_296 > 0)
		//if (Global_1377236.f_1149 >= iVar1)

		misc::set_global(2550148 + 296, -1000000);
		misc::set_global(1377236 + 1149, -1000000);
	}

	void block_vote()
	{
		//Global_1388057 = func_16450(joaat("MPPLY_BECAME_CHEATER_NUM"));
		//Global_1388059 = func_16450(joaat("MPPLY_OFFENSIVE_LANGUAGE"));
		//Global_1388060 = func_16450(joaat("MPPLY_GRIEFING"));
		//Global_1388062 = func_16450(joaat("MPPLY_OFFENSIVE_TAGPLATE"));
		//Global_1388063 = func_16450(joaat("MPPLY_OFFENSIVE_UGC"));

		misc::set_global(1388057, 0);
		misc::set_global(1388059, 0);
		misc::set_global(1388060, 0);
		misc::set_global(1388062, 0);
		misc::set_global(1388063, 0);
	}

	void run_tick()
	{
		static ULONGLONG tick_1 = 0;
		static ULONGLONG tick_60 = 0;
		ULONGLONG now = GetTickCount64();

		//disable_phone();

		////update god mode
		//QUEUE_JOB_BEGIN_CLAUSE()
		//{
		//	//disable
		//	MOBILE::_CELL_CAM_DISABLE_THIS_FRAME(TRUE);
		//	PAD::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, TRUE);

		//	MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(_player);
		//	MISC::SET_FIRE_AMMO_THIS_FRAME(_player);
		//	MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(_player);
		//	MISC::SET_SUPER_JUMP_THIS_FRAME(_player);

		//} QUEUE_JOB_END_CLAUSE

		if (now - tick_60 > 60000)
		{
			//update god mode
			QUEUE_JOB_BEGIN_CLAUSE()
			{
				block_afk();
				block_vote();
				show_stat();
			} QUEUE_JOB_END_CLAUSE

			tick_60 = now;
		}
		if (now - tick_1 > 1000)
		{
			//update god mode
			QUEUE_JOB_BEGIN_CLAUSE()
			{
				_player = PLAYER::PLAYER_ID();
				_ped = PLAYER::PLAYER_PED_ID();

				//ui
				show_user();

				////reload
				//Hash weapon;
				//if (WEAPON::GET_CURRENT_PED_WEAPON(_ped, &weapon, TRUE))
				//{
				//	if (WEAPON::IS_WEAPON_VALID(weapon))
				//	{
				//		int max = WEAPON::GET_MAX_AMMO_IN_CLIP(_ped, weapon, FALSE);
				//		WEAPON::SET_AMMO_IN_CLIP(_ped, weapon, max);
				//	}
				//}

				if (big::features::god_mode && !PLAYER::GET_PLAYER_INVINCIBLE(_player))
				{
					////god mode
					PLAYER::SET_PLAYER_INVINCIBLE(_player, big::features::god_mode);

					////and other stuff
					//PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(_player, 999999);
					//PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(_player, 999999, TRUE);
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(_player, 1.39f);
					PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(_player, 1.39f);

					//PLAYER::CLEAR_PLAYER_WANTED_LEVEL(_player);
					//PLAYER::SET_MAX_WANTED_LEVEL(0);

					//PED::CLEAR_PED_BLOOD_DAMAGE(_ped);
					//PED::CLEAR_PED_DECORATIONS(_ped);

					//PLAYER::CLEAR_PLAYER_WANTED_LEVEL(_player);
					//PLAYER::SET_MAX_WANTED_LEVEL(0);

					////anti crash cam
					//if (_player != _cam)
					//{
					//	Cam cam = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 9999.0f, 9999.0f, 9999.0f, 9999.0f, 9999.0f, 9999.0f, 9999.0f, TRUE, 1);
					//	CAM::RENDER_SCRIPT_CAMS(TRUE, TRUE, 1, FALSE, FALSE, FALSE);
					//	CAM::SET_CAM_ACTIVE(cam, TRUE);
					//	PLAYER::SET_PLAYER_CONTROL(_player, FALSE, 0);

					//	CAM::SET_CAM_ACTIVE(cam, FALSE);
					//	CAM::RENDER_SCRIPT_CAMS(FALSE, TRUE, 10, FALSE, FALSE, FALSE);
					//	CAM::DESTROY_CAM(cam, FALSE);
					//	PLAYER::SET_PLAYER_CONTROL(_player, TRUE, 0);

					//	_cam = _player;
					//}

					misc::log_green(LOG_LOG, ",LOG,OK,SET_PLAYER_INVINCIBLE,Anonymous,0,0,TRUE", false);
				}
				else if (!big::features::god_mode && PLAYER::GET_PLAYER_INVINCIBLE(_player))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(_player, big::features::god_mode);

					misc::log_green(LOG_LOG, ",LOG,OK,SET_PLAYER_INVINCIBLE,Anonymous,0,0,FALSE", false);
				}
			} QUEUE_JOB_END_CLAUSE

			tick_1 = now;
		}
	}

	void script_func()
	{
		while (true)
		{
			TRY_CLAUSE
			{
				run_tick();
			}
			EXCEPT_CLAUSE
			script::get_current()->yield();
		}
	}
}
