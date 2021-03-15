using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;

namespace logger
{
    class Program
    {
        static void Main(string[]args)
        {
            var input = File.ReadAllLines("D:\\LuckyStreet\\Modding\\Salty\\Salty\\src\\natives.hpp");
            var hpp = new List<string>();
            var cpp = new List<string>();
            var name_hash = new Dictionary<string, string>();
            var name_list = new List<string>();
            var name_namespace = new Dictionary<string, string>();
            string section = "";

            string[] _force_namespace =
            {
                "DISABLE"
                //"NETWORK",
                //"SYSTEM",
                //"SCRIPT",
                //"MISC",
                //"STATS",
                //"ENTITY",
                //"OBJECT",
                //"PED",
                //"PLAYER",
                //"VEHICLE",
            };
            string[] _blocked_manually = 
                {
                "NETWORK_CAN_BAIL",
                "REQUEST_SCRIPT",
                "NETWORK_SESSION_GET_KICK_VOTE",
                "STAT_SET_INT",
                "STAT_SET_BOOL_MASKED"
            };
            string[] _blocked_automatically = 
                {

                //"SET_ENTITY_INVINCIBLE",                            //player/ped
                //"SET_PLAYER_INVINCIBLE",
                "_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED",
                "REMOVE_ALL_PED_WEAPONS",
                "REMOVE_WEAPON_FROM_PED",
                "SET_PED_TO_RAGDOLL",
                "SET_PED_TO_RAGDOLL_WITH_FALL",
                "SET_PED_RAGDOLL_ON_COLLISION",
                "SET_PED_RAGDOLL_FORCE_FALL",
                "SET_FAKE_WANTED_LEVEL",
                "SET_PLAYER_WANTED_LEVEL",
                "SET_PLAYER_WANTED_LEVEL_NO_DROP",
                "SET_PLAYER_WANTED_LEVEL_NOW",
                "SET_PED_CAN_BE_TARGETTED",
                //"SET_PLAYER_CONTROL",
                "DISABLE_PLAYER_FIRING",
                "SET_PLAYER_WEAPON_DAMAGE_MODIFIER",
                "SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER",
                "SET_PLAYER_WEAPON_DEFENSE_MODIFIER",
                "SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER",
                "SET_PED_DIES_IN_WATER",                        //new
                "SET_PED_MAX_TIME_UNDERWATER",
                "SET_PED_DIES_IN_SINKING_VEHICLE",

                "SET_VEHICLE_ENGINE_HEALTH",                    //vehicle
                "SET_VEHICLE_ENGINE_CAN_DEGRADE",
                "SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED",
                //"SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS",
                "SET_VEHICLE_TYRE_BURST",
                "SET_VEHICLE_ALARM",
                "START_VEHICLE_ALARM",
                "SET_VEHICLE_DIRT_LEVEL",
                "SET_VEHICLE_ENGINE_ON",
                "SET_VEHICLE_CAN_BE_TARGETTED",
                //"SET_OBJECT_TARGETTABLE",
                "SET_ENTITY_CAN_BE_DAMAGED",
                //"SET_ENTITY_AS_MISSION_ENTITY",
                "SET_ENTITY_HEALTH",
                //"SET_ENTITY_PROOFS",
                "_SET_VEHICLE_WEAPONS_DISABLED",

                //"CLEAR_PED_TASKS",                              //vehicle kick
                //"CLEAR_PED_TASKS_IMMEDIATELY",
                "CLEAR_PED_SECONDARY_TASK",
                "TASK_LEAVE_ANY_VEHICLE",

                "APPLY_FORCE_TO_ENTITY",                        //entity
                "_SET_BLACKOUT",
                "SET_GRAVITY_LEVEL",
                //"SET_ENTITY_VISIBLE",
                //"SET_ENTITY_COORDS",
                //"SET_ENTITY_HEADING",

                //"FREEZE_ENTITY_POSITION",                       //freese

                "ATTACH_ENTITY_TO_ENTITY",                      //attach entity
                "_ATTACH_ENTITY_BONE_TO_ENTITY_BONE",
                "_ATTACH_ENTITY_BONE_TO_ENTITY_BONE_PHYSICALLY",
                "ATTACH_ENTITY_TO_ENTITY_PHYSICALLY",
                "ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY",
                "ATTACH_ENTITIES_TO_ROPE",
                "ATTACH_ROPE_TO_ENTITY",
                "ATTACH_PORTABLE_PICKUP_TO_PED",
                "PROCESS_ENTITY_ATTACHMENTS",
                "ADD_PED_DECORATION_FROM_HASHES",
                "ADD_PED_DECORATION_FROM_HASHES_IN_CORONA",

                //"START_SCRIPT_FIRE",                          //fire explosion
                //"START_ENTITY_FIRE",
                "ADD_EXPLOSION",
                "ADD_OWNED_EXPLOSION",
                "ADD_EXPLOSION_WITH_USER_VFX",

                "CREATE_INCIDENT",                              //trolling onlu modders use?
                "CREATE_INCIDENT_WITH_ENTITY",

                "START_PARTICLE_FX_NON_LOOPED_AT_COORD",        //attachments
                "START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE",
                "START_PARTICLE_FX_NON_LOOPED_ON_ENTITY",
                "START_PARTICLE_FX_LOOPED_AT_COORD",
                "START_PARTICLE_FX_LOOPED_ON_PED_BONE",
                "START_PARTICLE_FX_LOOPED_ON_ENTITY",
                "START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE",
            };
            string[] _ignore_debug =
            {
                "GET_BOAT_BOOM_POSITION_RATIO",
                "SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE",
                "DRAW_DEBUG_BOX",
                "DRAW_DEBUG_LINE",
                "DRAW_DEBUG_SPHERE",
                "_LOG_DEBUG_INFO",
                "DRAW_DEBUG_CROSS",
                "DRAW_DEBUG_TEXT",
                "DRAW_DEBUG_LINE_WITH_TWO_COLOURS",
                "DRAW_DEBUG_TEXT_2D",
                "SET_CAM_DEBUG_NAME",
                "SET_PED_NAME_DEBUG",
                "SET_VEHICLE_NAME_DEBUG",

                "TRIGGER_SCRIPT_EVENT",                         //could be detected

                "UGC_IS_GETTING",                               //cause crashes
                "UGC_CLEAR_QUERY_RESULTS",
                "DATAFILE_GET_FILE_DICT",
                "SET_BALANCE_ADD_MACHINE",
                "UGC_HAS_GET_FINISHED",
                "UGC_GET_QUERY_RESULT",
                "UGC_GET_CONTENT_NUM",
                "DATAFILE_SELECT_UGC_DATA",
                "_OBJECT_VALUE_GET_OBJECT",
                "UGC_GET_CONTENT_ID",
                "UGC_GET_CONTENT_USER_ID",
                "UGC_GET_CONTENT_NAME",
                "UGC_REQUEST_CACHED_DESCRIPTION",
                "UGC_GET_CACHED_DESCRIPTION",
                "UGC_GET_ROOT_CONTENT_ID",
                "UGC_GET_CONTENT_USER_NAME",

                "NETWORK_CANCEL_RESPAWN_SEARCH",
                "NETWORK_QUERY_RESPAWN_RESULTS",

                "NETWORK_SET_RICH_PRESENCE_STRING",
                "NETWORK_SET_RICH_PRESENCE",

                "SPECIAL_ABILITY_DEACTIVATE",
            };

            string[] _ignore_prefix = {
                "_0x",
                "GET",
                "_GET",
                "IS_",
                "_IS_",
                "HAS_",
                "_HAS_",
                "DOES_",
                "_DOES_",
                "CAN_",
                "_CAN_",
                "ARE_",
                "_ARE_",
                "TASK_GET_",
                "WAYPOINT_RECORDING_GET_",
                "WAYPOINT_PLAYBACK_GET_",
                "_REPLAY_FREE_CAM_GET_",
                "NET_GAMESERVER_GET_",
                "DOOR_SYSTEM_GET_",
                "SCRIPT_THREAD_ITERATOR_GET_",
                "NETWORK_DOES_",
                "NETWORK_IS_",
                "_NETWORK_IS",
                "NETWORK_GET_",
                "_NETWORK_GET_",
                "NETWORK_HAS_",
                "_NETWORK_HAS_",
                "NETWORK_SESSION_IS_",
                "_FACEBOOK",
                "DOOR_SYSTEM_",
                "STAT_GET_",
            };
            string[] _ignore_common = {
                "PLAYER_ID",                                    //too much data, automatic
                "PLAYER_PED_ID",
                "PARTICIPANT_ID",
                "PARTICIPANT_ID_TO_INT",
                "INT_TO_PLAYERINDEX",
                "CLEAR_BIT",
                "SET_BIT",
                "ABSI",
                "TO_FLOAT",
                "VDIST2",
                "FLOOR",
                "COS",
                "SIN",
                "ATAN2",
                "ABSF",
                "CEIL",
                "SQRT",
                "SHIFT_RIGHT",
                "SHIFT_LEFT",
                "INT_TO_PARTICIPANTINDEX",
                "SET_PED_RESET_FLAG",
                "VDIST",
                "VMAG",
                "ROUND",
                "WAIT",
                "STRING_TO_INT",
                "POW",
                "_LOG10",
                "VMAG2",
                "TIMERA",
                "SETTIMERA",
                "TIMERB",
                "SETTIMERB",

                "NET_TO_OBJ",
                "NET_TO_VEH",
                "NET_TO_ENT",
                "NET_TO_PED",

                "NETWORK_PLAYER_ID_TO_INT",
                "NETWORK_HANDLE_FROM_PLAYER",
                "NETWORK_HAVE_ONLINE_PRIVILEGES",
                "NETWORK_HAVE_JUST_UPLOAD_LATER",
                "NETWORK_CLAN_PLAYER_IS_ACTIVE",
                "NETWORK_CLAN_SERVICE_IS_VALID",
                "NETWORK_HAVE_USER_CONTENT_PRIVILEGES",
                "NETWORK_PLAYER_HAS_HEADSET",
                "NETWORK_OVERRIDE_CHAT_RESTRICTIONS",
                "NETWORK_CLAN_PLAYER_GET_DESC",
                "NETWORK_PLAYER_IS_CHEATER",
                "NETWORK_PLAYER_IS_BADSPORT",
                "_NETWORK_SHOULD_SHOW_CONNECTIVITY_TROUBLESHOOTING",
                "NETWORK_PLAYER_GET_USERID",
                "NETWORK_ACCESS_TUNABLE_INT_HASH",
                "NETWORK_ACCESS_TUNABLE_FLOAT_HASH",
                "NETWORK_CAN_ACCESS_MULTIPLAYER",
                "_NETWORK_HAVE_SOCIAL_CLUB_PRIVILEGE",
                "NETWORK_HASH_FROM_PLAYER_HANDLE",

                "_SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL",
                "DRAW_MARKER",
                "_DRAW_LIGHT_WITH_RANGE_AND_SHADOW",
                "SET_SCRIPT_GFX_DRAW_ORDER",
                "DRAW_SCALEFORM_MOVIE",
                "SET_SCRIPT_AS_NO_LONGER_NEEDED",
                "SET_PED_DENSITY_MULTIPLIER_THIS_FRAME",
                "SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME",
                "SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE",
                "CLEAR_DRAW_ORIGIN",
                "ANIMPOSTFX_IS_RUNNING",
                "RESET_SCRIPT_GFX_ALIGN",
                "COMPARE_STRINGS",
                "SET_PED_CAN_PLAY_AMBIENT_IDLES",
                "STAT_LOAD_PENDING",
                "STAT_SAVE_PENDING_OR_REQUESTED",
                "SET_PED_CONFIG_FLAG",
                "REQUEST_STREAMED_TEXTURE_DICT",
                "SET_RELATIONSHIP_BETWEEN_GROUPS",

                "PLAYSTATS_ODDJOB_DONE",
                "SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU",
                "DRAW_SCALEFORM_MOVIE_FULLSCREEN",
                "BEGIN_SCALEFORM_MOVIE_METHOD",
                "END_SCALEFORM_MOVIE_METHOD",
                "_COPY_MEMORY",
                "REMOVE_DOOR_FROM_SYSTEM",
                "TRIGGER_SCREENBLUR_FADE_OUT",

                "REQUEST_PED_VEHICLE_VISIBILITY_TRACKING",

                "CLEAR_OVERRIDE_WEATHER",
                "SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE",
                "_SET_OBJECT_TEXTURE_VARIATION",
                "SET_PED_AMMO",
                "SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT",
                "BEGIN_TEXT_COMMAND_SCALEFORM_STRING",
                "END_TEXT_COMMAND_SCALEFORM_STRING",
                "NETWORK_ARE_HANDLES_THE_SAME",
                "SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL",
                "SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED",
                "REQUEST_SCALEFORM_MOVIE_INSTANCE",
                "TEXTURE_DOWNLOAD_HAS_FAILED",
                "TEXTURE_DOWNLOAD_GET_NAME",

                "SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER",
                "REQUEST_PED_VISIBILITY_TRACKING",

                "SET_SCRIPT_GFX_ALIGN",
                "SET_SCRIPT_GFX_ALIGN_PARAMS",
                "DRAW_SPRITE",
                "_SET_PED_REFLECTION_INTENSITY",
                "REGISTER_PEDHEADSHOT",

                "SET_DRAW_ORIGIN",
                "SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE",
                "SHOULD_USE_METRIC_MEASUREMENTS",

                "SET_ENTITY_VISIBLE",
                "SET_ENTITY_COLLISION",
                "REQUEST_COLLISION_FOR_MODEL",
                "REQUEST_ANIM_DICT",
                "STAT_GET_SAVE_MIGRATION_STATUS",
                "DRAW_SCALEFORM_MOVIE_3D_SOLID",
                "TOGGLE_PAUSED_RENDERPHASES",

                "SHUTDOWN_LOADING_SCREEN"
            }; 

            bool prefix(string name)
            {
                foreach(var prefix in _ignore_prefix)
                {
                    if (name.IndexOf(prefix) == 0)
                    {
                        return true;
                    }
                }
                return false;
            }

            bool is_int(string type)
            {
                return type == "int" || type == "Any" || type == "Entity" || type == "Player" || type == "FireId" || type == "Interior" || type == "Ped" || type == "Vehicle" || type == "Cam" || type == "Object" || type == "Pickup" || type == "Blip" || type == "Camera" || type == "ScrHandle";
            }
            hpp.Add("#pragma once");
            hpp.Add("");
            hpp.Add("#include \"natives.hpp\"");
            hpp.Add("");

            cpp.Add("#include \"common.hpp\"");
            cpp.Add("#include \"natives_logging.hpp\"");
            cpp.Add("#include \"logger.hpp\"");
            cpp.Add("#include \"gui/misc.h\"");
            cpp.Add("");

            hpp.Add("namespace big::misc");
            hpp.Add("{");
            cpp.Add("namespace big::misc");
            cpp.Add("{");

            //cpp.Add("\tstatic std::mutex __m;");
            //hpp.Add("\tstatic std::unordered_map <std::string, bool> __l;");

            foreach (var _line in input)
            {
                var line = _line.Replace("const char", "const_char");

                var t = line.Split(" \t(),".ToCharArray(), StringSplitOptions.RemoveEmptyEntries).ToList();

                if (t.Count > 0)
                {
                    if (t[0] == "namespace")
                    {
                        section = t[1];
                    }
                    else if (t[0] == "NATIVE_DECL")
                    {
                        int _comment = t.IndexOf("//");
                        string hash = t[_comment + 1];
                        int _name = 2;
                        string name = t[_name];
                        int _end = t.IndexOf("{");
                        string ret = t[1];

                        if ((_blocked_automatically.Contains(name) || _force_namespace.Contains(section)) && !prefix(name) && !_blocked_manually.Contains(name) && !_ignore_common.Contains(name) && !_ignore_debug.Contains(name))
                        {
                            name_list.Add(name);
                            name_hash[name] = hash;
                            name_namespace[name] = section;

                            //start function
                            hpp.Add("\textern void " + name + "(rage::scrNativeCallContext* src);");
                            cpp.Add("\tvoid " + name + "(rage::scrNativeCallContext* src)");
                            cpp.Add("\t{");

                            //parameters
                            for (int _p = 0, p = _name + 1; p < _end; p += 2)
                            {
                                // = src->get_arg<int>(0);
                                cpp.Add("\t\t" + t[p] + " _" + t[p + 1] + " = src->get_arg<" + t[p] + ">(" + _p++ + ");");
                            }

                            //logging
                            string logging = "";
                            if (!_blocked_automatically.Contains(name))
                            {
                                logging += "\t\tchar __b[256]=\"\";sprintf(__b,\",NATIVE,OK," + name + ",,,,%s,,,,";
                            }
                            else
                            {
                                logging += "\t\tchar __b[256]=\"\";sprintf(__b,\",NATIVE,BLOCKED," + name + ",,,,%s,,,,";
                            }
                            for (int p = _name + 1; p < _end; p += 2)
                            {
                                if (is_int(t[p]))
                                {
                                    logging += ",%d";
                                }
                                else if (t[p] == "float")
                                {
                                    logging += ",%.1f";
                                }
                                else if (t[p] == "const_char*" || t[p] == "BOOL")
                                {
                                    logging += ",%s";
                                }
                                else
                                {
                                    logging += ",0x%X";
                                }
                            }
                            logging += "\",SCRIPT::GET_THIS_SCRIPT_NAME()";
                            for (int p = _name + 1; p < _end; p += 2)
                            {
                                if (is_int(t[p]) || t[p] == "Hash" || t[p] == "float" || t[p] == "const_char*")
                                {
                                    logging += ",_" + t[p + 1];
                                }
                                else if (t[p] == "BOOL")
                                {
                                    logging += ",_" + t[p + 1] + "==0?\"FALSE\":\"TRUE\"";
                                }
                                else
                                {
                                    logging += ",(int32_t)(int64_t)_" + t[p + 1];
                                }
                            }
                            logging += ");";
                            cpp.Add(logging);
                            if (_blocked_automatically.Contains(name))
                            {
                                cpp.Add("\t\tmisc::log_green(LOG_NATIVE, __b, true);");
                            }
                            else
                            {
                                cpp.Add("\t\tmisc::log_green(LOG_NATIVE, __b, false);");
                            }

                            //native
                            if (!_blocked_automatically.Contains(name))
                            {
                                string hooking = "\t\t";

                                if (ret != "void")
                                {
                                    hooking += "src->set_return_value<" + ret + ">(";
                                }
                                hooking += name_namespace[name] + "::" + name + "(";
                                for (int p = _name + 1; p < _end; p += 2)
                                {
                                    hooking += "_" + t[p + 1] + (p < _end - 2 ? "," : "");
                                }
                                if (ret != "void") hooking += ")";

                                cpp.Add(hooking + ");");
                            }
                            else
                            {
                                if (ret != "void")
                                {
                                    cpp.Add("\t\tsrc->set_return_value<" + ret + ">(1);");
                                }
                            }
                            cpp.Add("\t}");
                        }
                    }
                }
            }
            for(int i = 0; i < cpp.Count; i++)
            {
                cpp[i] = cpp[i].Replace("const_char", "const char");
            }
            //write the map
            hpp.Add("\tstatic std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler> natives_logging = ");
            hpp.Add("\t{");
            foreach (var name in name_list)
            {
                hpp.Add("\t\t{" + name_hash[name] + ", &" + name +  "},");
            }
            hpp.Add("\t};");

            cpp.Add("}");
            hpp.Add("}");
            File.WriteAllLines("D:\\LuckyStreet\\Modding\\Salty\\Salty\\src\\gui\\natives_logging.hpp", hpp.ToArray());
            File.WriteAllLines("D:\\LuckyStreet\\Modding\\Salty\\Salty\\src\\gui\\natives_logging.cpp", cpp.ToArray());
        }
    }
}
