#include "common.hpp"
#include "base_tab.h"
#include "script.hpp"
#include "gui.hpp"
#include "misc.h"
#include "features.hpp"

// https://github.com/Sainan/GTA-V-Decompiled-Scripts
// 
// https://github.com/Pocakking/BigBaseV2
// https://bitbucket.org/gir489/bigbasev2-fix/src/master/
// https://wiki.rage.mp/index.php?title=Category:Assets
// https://github.com/MAFINS/MenyooSP
// https://www.reddit.com/r/Gta5Modding/comments/h17xia/list_of_gta_v_paid_mod_menus_for_pc/

namespace big::base_tab
{
	static const int DISTANCE_SPAWN = 10;

	const bool LOG_LOG = false;

	void swam(const char* name)
	{
		QUEUE_JOB_BEGIN_CLAUSE(name)
		{
			auto pos = ENTITY::GET_ENTITY_COORDS(big::features::_ped, TRUE);
			auto forward = ENTITY::GET_ENTITY_FORWARD_VECTOR(big::features::_ped);
			auto heading = ENTITY::GET_ENTITY_HEADING(big::features::_ped);

			pos.x += 100.0f * forward.x;
			pos.y += 100.0f * forward.y;
			pos.z += 100.0f;

			Hash hash_vehicle = load(name);

			auto plane = VEHICLE::CREATE_VEHICLE(hash_vehicle, pos.x, pos.y, pos.z, heading, TRUE, TRUE, FALSE);

			char __b[256]; sprintf(__b, ",LOG,CREATE_VEHICLE");
			big::misc::log_green(LOG_LOG, __b, false);

			//PED_TYPE_ARMY = 29 //PED_TYPE_SWAT = 27,  
			Hash hash_ped = load("s_m_y_swat_01");
			auto pilot = PED::CREATE_PED_INSIDE_VEHICLE(plane, 29, hash_ped, -1, TRUE, TRUE);

			//3: Retracted 
			VEHICLE::CONTROL_LANDING_GEAR(plane, 3);
			VEHICLE::SET_VEHICLE_ENGINE_ON(plane, TRUE, TRUE, FALSE);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(plane, 100);

			TASK::TASK_PLANE_CHASE(pilot, big::features::_ped, 0.0f, 0.0f, 0.0f);

		} QUEUE_JOB_END_CLAUSE
	}

	void vehicle(const char* name)
	{
		QUEUE_JOB_BEGIN_CLAUSE(name)
		{
			auto pos = ENTITY::GET_ENTITY_COORDS(big::features::_ped, TRUE);
			auto forward = ENTITY::GET_ENTITY_FORWARD_VECTOR(big::features::_ped);
			auto heading = ENTITY::GET_ENTITY_HEADING(big::features::_ped);

			pos.x += DISTANCE_SPAWN * forward.x;
			pos.y += DISTANCE_SPAWN * forward.y;

			MISC::GET_GROUND_Z_FOR_3D_COORD(pos.x, pos.y, pos.z, &pos.z, FALSE, FALSE);

			Hash hash_vehicle = load(name);

			auto vehicle = VEHICLE::CREATE_VEHICLE(hash_vehicle, pos.x, pos.y, pos.z, heading + 90.0f, TRUE, TRUE, FALSE);

			char __b[256]; sprintf(__b, ",LOG,CREATE_VEHICLE"); 
			big::misc::log_green(LOG_LOG, __b, false);

			ENTITY::SET_ENTITY_INVINCIBLE(vehicle, TRUE);
			//ENTITY::SET_ENTITY_CAN_BE_DAMAGED(vehicle, FALSE);
			//ENTITY::SET_ENTITY_PROOFS(vehicle, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE);
			//VEHICLE::SET_VEHICLE_CAN_BREAK(vehicle, FALSE);
			//VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(vehicle, FALSE);
			//VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(vehicle, FALSE);

			VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(vehicle, FALSE);
			//OBJECT::SET_OBJECT_TARGETTABLE(vehicle, FALSE);
			VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(vehicle, FALSE, FALSE);

			VEHICLE::_SET_VEHICLE_MAX_SPEED(vehicle, 1.39f * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(vehicle));
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(vehicle, 1.39f);
			VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(vehicle, 1.39f);

			if (VEHICLE::IS_THIS_MODEL_A_PLANE(hash_vehicle))
			{
				VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(vehicle, 0.0f);
			}
			//VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(vehicle, 1.39f);
		} QUEUE_JOB_END_CLAUSE

		g_gui.m_opened = false;
	}

	void render_vehicle_tab()
	{
		if (ImGui::BeginTabItem("Vehicle"))
		{
			if (ImGui::Button("hydra"))
			{
				vehicle("hydra");
			}
			if (ImGui::Button("lazer"))
			{
				vehicle("lazer");
			}
			if (ImGui::Button("jet"))
			{
				vehicle("jet");
			}
			if (ImGui::Button("fbi"))
			{
				vehicle("fbi");
			}
			//cool PEDS
			//ig_fbisuit_01
			//a_f_m_fatcult_01
			//ig_orleans
			//player_two
			//ig_priest
			ImGui::EndTabItem();
		}
	}

	void render_swarm_tab()
	{
		if (ImGui::BeginTabItem("Swarm"))
		{
			if (ImGui::Button("hydra"))
			{
				swam("hydra");
			}
			if (ImGui::Button("lazer"))
			{
				swam("lazer");
			}
			if (ImGui::Button("jet"))
			{
				swam("jet");
			}
			ImGui::EndTabItem();
		}
	}

	Hash load(const char *name)
	{
		Hash hash = MISC::GET_HASH_KEY(name);

		STREAMING::REQUEST_MODEL(hash);
		while (!STREAMING::HAS_MODEL_LOADED(hash))
		{
			script::get_current()->yield();
		}
		return hash;
	}

	void render_settings_tab()
	{
		if (ImGui::BeginTabItem("Settings"))
		{
			ImGui::Checkbox("Protection", &big::features::protection);
			ImGui::Checkbox("God", &big::features::god_mode);

			if (ImGui::Button("Jump"))
			{
				//updat god mode
				QUEUE_JOB_BEGIN_CLAUSE()
				{
					auto pos = ENTITY::GET_ENTITY_COORDS(big::features::_ped, FALSE);

					ENTITY::SET_ENTITY_COORDS(big::features::_ped, pos.x, pos.y, 100.0f, FALSE, FALSE, FALSE, TRUE);
					misc::log_green(LOG_LOG, ",LOG,SET_ENTITY_COORDS", false);
				} QUEUE_JOB_END_CLAUSE
			}

			if (ImGui::Button("Unload"))
			{
				g_running = false;
			}
			ImGui::EndTabItem();
		} 
	}
}
