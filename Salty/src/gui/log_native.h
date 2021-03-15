#pragma once
#include "logger.hpp"
#include "natives.hpp"
#include "gta /joaat.hpp"
#include "gta /enums.hpp"
#include "hooking.hpp"
#include "script.hpp"
#include "fiber_pool.hpp"
#include "pointers.hpp"

namespace big::misc
{
	static void WAIT(rage::scrNativeCallContext* src)
	{
	}
	static void START_NEW_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void START_NEW_SCRIPT_WITH_ARGS(rage::scrNativeCallContext* src)
	{
	}
	static void START_NEW_SCRIPT_WITH_NAME_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(rage::scrNativeCallContext* src)
	{
	}
	static void TIMERA(rage::scrNativeCallContext* src)
	{
	}
	static void TIMERB(rage::scrNativeCallContext* src)
	{
	}
	static void SETTIMERA(rage::scrNativeCallContext* src)
	{
	}
	static void SETTIMERB(rage::scrNativeCallContext* src)
	{
	}
	static void TIMESTEP(rage::scrNativeCallContext* src)
	{
	}
	static void SIN(rage::scrNativeCallContext* src)
	{
	}
	static void COS(rage::scrNativeCallContext* src)
	{
	}
	static void SQRT(rage::scrNativeCallContext* src)
	{
	}
	static void POW(rage::scrNativeCallContext* src)
	{
	}
	static void _LOG10(rage::scrNativeCallContext* src)
	{
	}
	static void VMAG(rage::scrNativeCallContext* src)
	{
	}
	static void VMAG2(rage::scrNativeCallContext* src)
	{
	}
	static void VDIST(rage::scrNativeCallContext* src)
	{
	}
	static void VDIST2(rage::scrNativeCallContext* src)
	{
	}
	static void SHIFT_LEFT(rage::scrNativeCallContext* src)
	{
	}
	static void SHIFT_RIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void FLOOR(rage::scrNativeCallContext* src)
	{
	}
	static void CEIL(rage::scrNativeCallContext* src)
	{
	}
	static void ROUND(rage::scrNativeCallContext* src)
	{
	}
	static void TO_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_THREAD_PRIORITY(rage::scrNativeCallContext* src)
	{
	}
	static void APP_DATA_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void APP_GET_INT(rage::scrNativeCallContext* src)
	{
	}
	static void APP_GET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void APP_SET_INT(rage::scrNativeCallContext* src)
	{
	}
	static void APP_SET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void APP_SET_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void APP_SET_APP(rage::scrNativeCallContext* src)
	{
	}
	static void APP_SET_BLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void APP_CLEAR_BLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void APP_CLOSE_APP(rage::scrNativeCallContext* src)
	{
	}
	static void APP_CLOSE_BLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT(rage::scrNativeCallContext* src)
	{
	}
	static void APP_HAS_SYNCED_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void APP_SAVE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void APP_GET_DELETED_FILE_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void APP_DELETE_APP_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_PED_RINGTONE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RINGTONE_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PED_RINGTONE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MOBILE_PHONE_CALL_ONGOING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC8B1B2425604CDD0(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_NEW_SCRIPTED_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_LINE_TO_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PED_TO_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x33E3C6C6F2F0B506(rage::scrNativeCallContext* src)
	{
	}
	static void _0x892B6AB8F33606F5(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MICROPHONE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0B568201DD99F0EB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x61631F5DF50D1C34(rage::scrNativeCallContext* src)
	{
	}
	static void START_SCRIPT_PHONE_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void PRELOAD_SCRIPT_PHONE_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void START_SCRIPT_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void PRELOAD_SCRIPT_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void START_PRELOADED_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_PRELOADED_CONVERSATION_READY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCRIPTED_CONVERSATION_ONGOING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCRIPTED_CONVERSATION_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_SCRIPTED_CONVERSATION_LINE(rage::scrNativeCallContext* src)
	{
	}
	static void PAUSE_SCRIPTED_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void RESTART_SCRIPTED_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SCRIPTED_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(rage::scrNativeCallContext* src)
	{
	}
	static void INTERRUPT_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void INTERRUPT_CONVERSATION_AND_PAUSE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAA19F5572C38B564(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB542DE8C3D1CB210(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_SCRIPT_WITH_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void UNREGISTER_SCRIPT_WITH_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_MISSION_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_AMBIENT_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_SCRIPT_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x40763EA7B9B783E7(rage::scrNativeCallContext* src)
	{
	}
	static void HINT_AMBIENT_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void HINT_SCRIPT_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_MISSION_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_AMBIENT_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_SCRIPT_AUDIO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x19AF7ED9B9D23058(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9AC92EED5E4793AB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x11579D940949C49E(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SOUND_ID(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_SOUND_ID(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SOUND(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SOUND_FRONTEND(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_DEFERRED_SOUND_FRONTEND(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SOUND_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B9853296731E88D(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SOUND_FROM_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7EC3C679D0E7E46B(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SOUND(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NETWORK_ID_FROM_SOUND_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SOUND_ID_FROM_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VARIABLE_ON_SOUND(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VARIABLE_ON_STREAM(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_UNDERWATER_STREAM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VARIABLE_ON_UNDER_WATER_STREAM(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_SOUND_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAY_AMBIENT_SPEECH1(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAY_AMBIENT_SPEECH2(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAY_AMBIENT_SPEECH_WITH_VOICE(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAY_AMBIENT_SPEECH_AT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_TREVOR_RAGE(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_TREVOR_RAGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_ANGRY(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_PAIN(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_WEAPON_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void ACTIVATE_AUDIO_SLOWMO_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void DEACTIVATE_AUDIO_SLOWMO_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMBIENT_VOICE_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_AMBIENT_VOICE_NAME_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_AMBIENT_VOICE_NAME_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_SCREAM(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1B7ABE26CBCBF8C7(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_VOICE_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA5342D390CDA41D6(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CURRENT_PLAYING_SPEECH(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AMBIENT_SPEECH_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCRIPTED_SPEECH_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANY_SPEECH_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void _CAN_PED_SPEAK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_CURRENT_CONVERSATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_IS_DRUNK(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_ANIMAL_VOCALIZATION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANIMAL_VOCALIZATION_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ANIMAL_MOOD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MOBILE_PHONE_RADIO_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MOBILE_PHONE_RADIO_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_RADIO_STATION_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_RADIO_STATION_GENRE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_RADIO_RETUNING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_RADIO_FADED_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFF266D1D0EB1195D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDD6BCF9E94425DF9(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADIO_TO_STATION_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEH_RADIO_STATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0BE4BE946463F917(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC1805D05E6D4FE10(rage::scrNativeCallContext* src)
	{
	}
	static void SET_EMITTER_RADIO_STATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NATIVE_DECL_EMITTER_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _LINK_NATIVE_DECL_EMITTER_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADIO_TO_STATION_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FRONTEND_RADIO_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void UNLOCK_MISSION_NEWS_STORY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MISSION_NEWS_STORY_UNLOCKED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_AUDIBLE_MUSIC_TRACK_TEXT_ID(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_END_CREDITS_MUSIC(rage::scrNativeCallContext* src)
	{
	}
	static void SKIP_RADIO_FORWARD(rage::scrNativeCallContext* src)
	{
	}
	static void FREEZE_RADIO_STATION(rage::scrNativeCallContext* src)
	{
	}
	static void UNFREEZE_RADIO_STATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADIO_AUTO_UNFREEZE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_INITIAL_PLAYER_STATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_USER_RADIO_CONTROL_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADIO_TRACK(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_RADIO_TRACK_MIX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_RADIO_LOUD(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VEHICLE_RADIO_LOUD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_PLAYER_VEH_HAVE_RADIO(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_VEH_RADIO_ENABLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_RADIO_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDA07819E452FFE8F(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUSTOM_RADIO_TRACK_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_CUSTOM_RADIO_TRACK_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_UNLOCKED_RADIO_STATIONS(rage::scrNativeCallContext* src)
	{
	}
	static void FIND_RADIO_STATION_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADIO_STATION_MUSIC_ONLY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADIO_FRONTEND_FADE_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void UNLOCK_RADIO_STATION_TRACK_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void _UPDATE_LSUR(rage::scrNativeCallContext* src)
	{
	}
	static void _LOCK_RADIO_STATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC64A06D939F826F5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3E65CDE5215832C1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x34D66BC058019CE0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF3365489E0DD50F9(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMBIENT_ZONE_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AMBIENT_ZONE_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMBIENT_ZONE_LIST_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AMBIENT_ZONE_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5D2BFAAB8D956E0E(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_AUDIO_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VARIABLE_ON_CUTSCENE_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_POLICE_REPORT(rage::scrNativeCallContext* src)
	{
	}
	static void _CANCEL_CURRENT_POLICE_REPORT(rage::scrNativeCallContext* src)
	{
	}
	static void BLIP_SIREN(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_VEH_HORN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HORN_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AGGRESSIVE_HORNS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x02E93C796ABD3A97(rage::scrNativeCallContext* src)
	{
	}
	static void _0x58BB377BEC7CD5F4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9BD7BD55E4533183(rage::scrNativeCallContext* src)
	{
	}
	static void IS_STREAM_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_STREAM_PLAY_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void LOAD_STREAM(rage::scrNativeCallContext* src)
	{
	}
	static void LOAD_STREAM_WITH_START_OFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_STREAM_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_STREAM_FROM_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_STREAM_FROM_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_STREAM_FRONTEND(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_STREAM_FROM_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_STREAM(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PED_SPEAKING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF8AD2EED7C47E8FE(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_PED_PAIN_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AMBIENT_SPEECH_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA8A7D434AFB4B97B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2ACABED337622DF2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SIREN_WITH_NO_DRIVER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x66C3FB05206041BA(rage::scrNativeCallContext* src)
	{
	}
	static void _SOUND_VEHICLE_HORN_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HORN_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AUDIO_VEHICLE_PRIORITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9D3AF56E94C9AE98(rage::scrNativeCallContext* src)
	{
	}
	static void USE_SIREN_AS_HORN(rage::scrNativeCallContext* src)
	{
	}
	static void _FORCE_VEHICLE_ENGINE_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA4CEA6AE0000A7E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF1F8157B8C3F171C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD2DCCD8E16E20997(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5DB8010EE71FDEF2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0x01BB4D577D38BD9E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1C073274E065C6D2(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_VEHICLE_EXHAUST_POPS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_BOOST_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6FDDAD856E36988A(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_UPDATE_DOOR_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_VEHICLE_DOOR_OPEN_SOUND(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_STALL_WARNING_SOUNDS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_GAME_IN_CONTROL_OF_MUSIC(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GPS_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_MISSION_COMPLETE_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MISSION_COMPLETE_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MISSION_COMPLETE_READY_FOR_UI(rage::scrNativeCallContext* src)
	{
	}
	static void BLOCK_DEATH_JINGLE(rage::scrNativeCallContext* src)
	{
	}
	static void START_AUDIO_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_AUDIO_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_AUDIO_SCENES(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AUDIO_SCENE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AUDIO_SCENE_VARIABLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA5F377B175A699C5(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void AUDIO_IS_SCRIPTED_MUSIC_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2DD39BF3E2F9C47F(rage::scrNativeCallContext* src)
	{
	}
	static void PREPARE_MUSIC_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void CANCEL_MUSIC_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void TRIGGER_MUSIC_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MUSIC_ONESHOT_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MUSIC_PLAYTIME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x159B7318403A1CD8(rage::scrNativeCallContext* src)
	{
	}
	static void RECORD_BROKEN_GLASS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ALL_BROKEN_GLASS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x70B8EC8FC108A634(rage::scrNativeCallContext* src)
	{
	}
	static void _0x149AEE66F0CB3A99(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8BF907833BE275DE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x062D5EAD4DA2FA6A(rage::scrNativeCallContext* src)
	{
	}
	static void PREPARE_ALARM(rage::scrNativeCallContext* src)
	{
	}
	static void START_ALARM(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ALARM(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ALL_ALARMS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ALARM_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_DEFAULT_HORN(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_AUDIO_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0653B735BFBDFE87(rage::scrNativeCallContext* src)
	{
	}
	static void _0x29DA3CA8D8B2692D(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_PLAYER_GROUND_MATERIAL(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBF4DC1784BE94DFA(rage::scrNativeCallContext* src)
	{
	}
	static void _OVERRIDE_MICROPHONE_SETTINGS(rage::scrNativeCallContext* src)
	{
	}
	static void FREEZE_MICROPHONE(rage::scrNativeCallContext* src)
	{
	}
	static void DISTANT_COP_CAR_SIRENS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x43FA0DFC5DF87815(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB81CF134AEB56FFB(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AUDIO_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void PREPARE_SYNCHRONIZED_AUDIO_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SYNCHRONIZED_AUDIO_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SYNCHRONIZED_AUDIO_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC8EDE9BDBCCBA6D4(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AUDIO_SPECIAL_EFFECT_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PORTAL_SETTINGS_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PORTAL_SETTINGS_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE4E6DD5566D28C82(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3A48AB4445D499BE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_TALK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0150B6FF25A9E2E5(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBEF34B1D9624D5DD(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CUTSCENE_AUDIO(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_MULTIPLAYER_AUDIO_DATA_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_DEFAULT_HORN_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_HORN_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_SCRIPT_TO_RANDOM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_OBJECT_SCRIPT_BRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_SCRIPT_BRAIN_SET(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_SCRIPT_BRAIN_SET(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0B40ED49D7D6FF84(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4D953DF78EBF8158(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6D6840CEE8845831(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6E91B04E08773030(rage::scrNativeCallContext* src)
	{
	}
	static void RENDER_SCRIPT_CAMS(rage::scrNativeCallContext* src)
	{
	}
	static void _RENDER_FIRST_PERSON_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_CAM_WITH_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_CAMERA(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_CAMERA_WITH_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void DESTROY_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void DESTROY_ALL_CAMS(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_CAM_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CAM_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CAM_RENDERING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RENDERING_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_ROT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_FOV(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_NEAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_FAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_FAR_DOF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_ROT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_FOV(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_NEAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_FAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_MOTION_BLUR_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_NEAR_DOF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_FAR_DOF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_DOF_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_DOF_PLANES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_USE_SHALLOW_DOF_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_USE_HI_DOF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF55E4046F6F831DC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE111A7C0D200CBC5(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAM_DOF_FNUMBER_OF_LENS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAM_DOF_FOCUS_DISTANCE_BIAS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_CAM_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_CAM_TO_PED_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void _ATTACH_CAM_TO_PED_BONE_2(rage::scrNativeCallContext* src)
	{
	}
	static void _ATTACH_CAM_TO_VEHICLE_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_INHERIT_ROLL_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void POINT_CAM_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void POINT_CAM_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void POINT_CAM_AT_PED_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CAM_POINTING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_AFFECTS_AIMING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x661B5C8654ADD825(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA2767257A320FC82(rage::scrNativeCallContext* src)
	{
	}
	static void _0x271017B9BA825366(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_DEBUG_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_CAM_SPLINE_NODE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_CAM_SPLINE_NODE_USING_CAMERA(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_SPLINE_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_SPLINE_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_SPLINE_NODE_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_SPLINE_DURATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_SPLINE_SMOOTHING_STYLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_SPLINE_NODE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_SPLINE_NODE_EASE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_SPLINE_NODE_VELOCITY_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_CAM_SPLINE_VELOCITY(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_SPLINE_NODE_EXTRA_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CAM_SPLINE_PAUSED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_ACTIVE_WITH_INTERP(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CAM_INTERPOLATING(rage::scrNativeCallContext* src)
	{
	}
	static void SHAKE_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void ANIMATED_SHAKE_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CAM_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_SHAKE_AMPLITUDE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CAM_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void SHAKE_SCRIPT_GLOBAL(rage::scrNativeCallContext* src)
	{
	}
	static void ANIMATED_SHAKE_SCRIPT_GLOBAL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCRIPT_GLOBAL_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SCRIPT_GLOBAL_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_CAM_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CAM_PLAYING_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAM_ANIM_CURRENT_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAM_ANIM_CURRENT_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SYNCHRONIZED_CAM_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLY_CAM_HORIZONTAL_RESPONSE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_FLY_CAM_VERTICAL_SPEED_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLY_CAM_MAX_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLY_CAM_COORD_AND_CONSTRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC8B5C4A79CC18B94(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5C48A1D6E3B33179(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCREEN_FADED_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCREEN_FADED_IN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCREEN_FADING_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCREEN_FADING_IN(rage::scrNativeCallContext* src)
	{
	}
	static void DO_SCREEN_FADE_IN(rage::scrNativeCallContext* src)
	{
	}
	static void DO_SCREEN_FADE_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WIDESCREEN_BORDERS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4879E4FE39074CDF(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GAMEPLAY_CAM_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GAMEPLAY_CAM_ROT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GAMEPLAY_CAM_FOV(rage::scrNativeCallContext* src)
	{
	}
	static void _0x487A82C650EB7799(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0225778816FDC28C(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GAMEPLAY_CAM_RELATIVE_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GAMEPLAY_CAM_RELATIVE_PITCH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_CAM_RELATIVE_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x28B022A17B068A3A(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_CAM_RAW_YAW(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_CAM_RAW_PITCH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x469F2ECDEC046337(rage::scrNativeCallContext* src)
	{
	}
	static void SHAKE_GAMEPLAY_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void IS_GAMEPLAY_CAM_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_GAMEPLAY_CAM_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8BBACBF51DA047A8(rage::scrNativeCallContext* src)
	{
	}
	static void IS_GAMEPLAY_CAM_RENDERING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3044240D2E0FA842(rage::scrNativeCallContext* src)
	{
	}
	static void _0x705A276EBFF3133D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDB90C6CCA48940F1(rage::scrNativeCallContext* src)
	{
	}
	static void _ENABLE_CROSSHAIR_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void IS_GAMEPLAY_CAM_LOOKING_BEHIND(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2AED6301F67007D5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x49482F9FCD825AAA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFD3151CD37EA2245(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB1381B97F70C7B30(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDD79DF9F4D26E1C9(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SPHERE_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_FOLLOW_PED_CAM_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FOLLOW_PED_CAM_THIS_UPDATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x271401846BD26E92(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC8391C309684595A(rage::scrNativeCallContext* src)
	{
	}
	static void _CLAMP_GAMEPLAY_CAM_YAW(rage::scrNativeCallContext* src)
	{
	}
	static void _CLAMP_GAMEPLAY_CAM_PITCH(rage::scrNativeCallContext* src)
	{
	}
	static void _ANIMATE_GAMEPLAY_CAM_ZOOM(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE9EA16D6E54CDCA4(rage::scrNativeCallContext* src)
	{
	}
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x59424BD75174C9B1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9F97DA93681F87EA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FOLLOW_PED_CAM_ZOOM_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FOLLOW_PED_CAM_VIEW_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FOLLOW_PED_CAM_VIEW_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_FOLLOW_VEHICLE_CAM_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x91EF6EE6419E5B97(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9DFE13ECDC1EC196(rage::scrNativeCallContext* src)
	{
	}
	static void _0x79C0E43EB9B944E2(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FOLLOW_VEHICLE_CAM_VIEW_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEE778F8C7E1142E2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A2173E46DAECD12(rage::scrNativeCallContext* src)
	{
	}
	static void _0x19CAFA3C87F7C2FF(rage::scrNativeCallContext* src)
	{
	}
	static void _USE_STUNT_CAMERA_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x425A920FDB9A0DDA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0AA27680A0BD43FA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5C90CAB09951A12F(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AIM_CAM_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_AIM_CAM_THIRD_PERSON_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_FIRST_PERSON_AIM_CAM_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_AIM_CAM_THIS_UPDATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCED08CBE8EBB97C7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2F7F2B26DD3F18EE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_FIRST_PERSON_CAM_PITCH_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_FIRST_PERSON_CAM_NEAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4008EDF7D6E48175(rage::scrNativeCallContext* src)
	{
	}
	static void _0x380B4968D1E09E55(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_ROT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_ROT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_FOV(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_FOV(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_NEAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_FAR_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_NEAR_DOF(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_FAR_DOF(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_COORD_HINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_PED_HINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_VEHICLE_HINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_OBJECT_HINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_ENTITY_HINT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_GAMEPLAY_HINT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_GAMEPLAY_HINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCCD078C2665D2973(rage::scrNativeCallContext* src)
	{
	}
	static void _0x247ACBC4ABBC9D1C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBF72910D0F26F025(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAMEPLAY_HINT_FOV(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETZ(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_HINT_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETX(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETY(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_HINT_ANIM_CLOSEUP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CINEMATIC_BUTTON_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CINEMATIC_CAM_RENDERING(rage::scrNativeCallContext* src)
	{
	}
	static void SHAKE_CINEMATIC_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CINEMATIC_CAM_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CINEMATIC_CAM_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x62ECFCFDEE7885D6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9E4CFFF989258472(rage::scrNativeCallContext* src)
	{
	}
	static void INVALIDATE_IDLE_CAM(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA9D2AA3E326D720(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_IN_VEHICLE_CAM_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_CINEMATIC_SHOT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CINEMATIC_SHOT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CINEMATIC_SHOT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA41BCD7213805AAC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDC9DA9E8789F5246(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CINEMATIC_MODE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F2300CB7FA7B7F6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x17FCA7199A530203(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD7360051C885628B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF5F1E89A970B7796(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7B8A361C1813FBEF(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CUTSCENE_CAM_SHAKING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x324C5AA411DA7737(rage::scrNativeCallContext* src)
	{
	}
	static void _0x12DED8CA53D47EA5(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FOCUS_PED_ON_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5A43C76F7FC7BA5F(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAM_EFFECT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5C41E6BABC9E2112(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_CAM_VEHICLE_CAMERA(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_GAMEPLAY_CAM_VEHICLE_CAMERA_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEAF0FA793D05C592(rage::scrNativeCallContext* src)
	{
	}
	static void _0x62374889A4D59F72(rage::scrNativeCallContext* src)
	{
	}
	static void _REPLAY_FREE_CAM_GET_MAX_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CLOCK_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void PAUSE_CLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void ADVANCE_CLOCK_TIME_TO(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TO_CLOCK_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOCK_HOURS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOCK_MINUTES(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOCK_SECONDS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CLOCK_DATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOCK_DAY_OF_WEEK(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOCK_DAY_OF_MONTH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOCK_MONTH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOCK_YEAR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MILLISECONDS_PER_GAME_MINUTE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_POSIX_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_UTC_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LOCAL_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_CUTSCENE_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_THIS_CUTSCENE_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8D9DF6ECA8768583(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CUTSCENE_PLAYBACK_FLAG_SET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_CUT_FILE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_CUT_FILE_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_CUT_FILE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_CUT_FILE_NUM_SECTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void START_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void START_CUTSCENE_AT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_CUTSCENE_IMMEDIATELY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_ORIGIN(rage::scrNativeCallContext* src)
	{
	}
	static void _0x011883F41211432A(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CUTSCENE_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CUTSCENE_TOTAL_DURATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x971D7B15BCDBEF99(rage::scrNativeCallContext* src)
	{
	}
	static void WAS_CUTSCENE_SKIPPED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_CUTSCENE_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CUTSCENE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CUTSCENE_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CUTSCENE_SECTION_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x583DF8E3D4AFBD98(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4CEBC1ED31E8925E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4FCD976DA686580C(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_ENTITY_FOR_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7F96F23FA9B73327(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_TRIGGER_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_SET_EXIT_STATE_FOR_CAMERA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC61B86C9F61EB404(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_FADE_VALUES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x20746F7B1032A3C7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x06EE9048FD080382(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA0FE76168A189DDB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2F137B508DE238F2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE36A98D8AB3D3C66(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5EDEF0CF8C1DAB3C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x41FAA8FB2ECE8720(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_CUTSCENE_ENTITY_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CUTSCENE_PED_PROP_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x708BDD8CD795B043(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_WATCH_REQUEST_ID(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_CLEAR_WATCH_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_IS_VALID_REQUEST_ID(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_HAS_LOADED_FILE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_HAS_VALID_FILE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_SELECT_ACTIVE_FILE(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_DELETE_REQUESTED_FILE(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_CREATE_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_CREATE_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_UPDATE_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_UPDATE_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_SET_PLAYER_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_SELECT_UGC_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_SELECT_UGC_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_SELECT_UGC_PLAYER_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_SELECT_CREATOR_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_LOAD_OFFLINE_UGC(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_CREATE(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_DELETE(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_STORE_MISSION_HEADER(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_FLUSH_MISSION_HEADER(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_START_SAVE_TO_CLOUD(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_UPDATE_SAVE_TO_CLOUD(rage::scrNativeCallContext* src)
	{
	}
	static void DATAFILE_IS_SAVE_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_ADD_BOOLEAN(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_ADD_INTEGER(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_ADD_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_ADD_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_ADD_VECTOR3(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_ADD_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_ADD_ARRAY(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_GET_BOOLEAN(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_GET_INTEGER(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_GET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_GET_VECTOR3(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_GET_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_GET_ARRAY(rage::scrNativeCallContext* src)
	{
	}
	static void _OBJECT_VALUE_GET_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_ADD_BOOLEAN(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_ADD_INTEGER(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_ADD_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_ADD_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_ADD_VECTOR3(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_ADD_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_GET_BOOLEAN(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_GET_INTEGER(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_GET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_GET_VECTOR3(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_GET_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_GET_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void _ARRAY_VALUE_GET_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_SET_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_SET_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_SET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_SET_INT(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_GET_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_GET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_GET_INT(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_EXIST_ON(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_REMOVE(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_REGISTER(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_IS_REGISTERED_AS_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void DECOR_REGISTER_LOCK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x241FCA5B1AA14F75(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DLC_PRESENT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF2E07819EF1A5289(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9489659372A81585(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA213B11DFF526300(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_EXTRA_CONTENT_PACK_HAS_BEEN_INSTALLED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_LOADING_SCREEN_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC4637A6D03C24CC3(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_CLOUD_REQUESTS_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void ON_ENTER_SP(rage::scrNativeCallContext* src)
	{
	}
	static void ON_ENTER_MP(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_ENTITY_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_ENTITY_BELONG_TO_THIS_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_ENTITY_HAVE_DRAWABLE(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_ENTITY_HAVE_PHYSICS(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_ANIM_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_CLEAR_LOS_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_COLLIDED_WITH_ANYTHING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LAST_MATERIAL_HIT_BY_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ANIM_CURRENT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ANIM_TOTAL_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ANIM_DURATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ATTACHED_TO(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_FORWARD_VECTOR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_FORWARD_X(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_FORWARD_Y(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTITY_PHYSICS_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_MAX_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_MAX_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_HEIGHT_ABOVE_GROUND(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_MATRIX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_PITCH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_QUATERNION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ROLL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ROTATION_VELOCITY(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_SPEED_VECTOR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_UPRIGHT_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_VELOCITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_OBJECT_INDEX_FROM_ENTITY_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_INDEX_FROM_ENTITY_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WORLD_POSITION_OF_ENTITY_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NEAREST_PLAYER_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_POPULATION_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AN_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_A_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_A_MISSION_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_A_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_AN_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ATTACHED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ATTACHED_TO_ANY_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ATTACHED_TO_ANY_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ATTACHED_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_DEAD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_IN_AIR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_IN_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_IN_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_IN_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_SUBMERGED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void _0x694E00132F2823ED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ON_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_PLAYING_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_NATIVE_DECL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_TOUCHING_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_TOUCHING_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_UPRIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_UPSIDEDOWN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_VISIBLE_TO_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_OCCLUDED(rage::scrNativeCallContext* src)
	{
	}
	static void WOULD_ENTITY_BE_OCCLUDED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_WAITING_FOR_WORLD_COLLISION(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_FORCE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_ENTITY_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _ATTACH_ENTITY_BONE_TO_ENTITY_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void _ATTACH_ENTITY_BONE_TO_ENTITY_BONE_PHYSICALLY(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(rage::scrNativeCallContext* src)
	{
	}
	static void PROCESS_ENTITY_ATTACHMENTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_BONE_INDEX_BY_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void FREEZE_ENTITY_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ENTITY_SOMETHING(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_ENTITY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SYNCHRONIZED_ENTITY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ENTITY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SYNCHRONIZED_ENTITY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ANIM_EVENT_FIRED(rage::scrNativeCallContext* src)
	{
	}
	static void FIND_ANIM_EVENT_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ANIM_CURRENT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ANIM_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_AS_MISSION_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_CAN_BE_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTITY_CAN_BE_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x352E2B5CF420BF3B(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_COLLISION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_COLLISION_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ENTITY_COORDS_2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_COORDS_NO_OFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_DYNAMIC(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_INVINCIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_IS_TARGET_PRIORITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_LIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_LOAD_COLLISION_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_COLLISION_LOADED_AROUND_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_MAX_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_PROOFS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTITY_PROOFS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_QUATERNION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_RECORDS_COLLISIONS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC34BC448DA29F5E9(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE66377CDDADA4810(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_VELOCITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_HAS_GRAVITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_LOD_DIST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_LOD_DIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_ENTITY_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x490861B88F4FD846(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCEA7C8E1B48FF68C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5C3B791D580E0BC2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ALWAYS_PRERENDER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_RENDER_SCORCHED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x78E8E3A640178255(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_MODEL_SWAP(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_MODEL_SWAP(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_MODEL_HIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_MODEL_HIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_FORCED_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_FORCED_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_NO_COLLISION_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_MOTION_BLUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAN_AUTO_VAULT_ON_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAN_CLIMB_ON_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDC6F8601FAF2E893(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2C2E3DC128F44309(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1A092BB0C3808B96(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCE6294A232D03786(rage::scrNativeCallContext* src)
	{
	}
	static void _0x46F8696933A63C9B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBD8D32550E5CEBFE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB328DCC3A3AA401B(rage::scrNativeCallContext* src)
	{
	}
	static void _ENABLE_ENTITY_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB17BC6453F6CF5AC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x68B562E124CC0AEF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36F32DE87082343E(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTITY_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD7B80E7C3BEFC396(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DECISION_MAKER(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(rage::scrNativeCallContext* src)
	{
	}
	static void BLOCK_DECISION_MAKER_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void UNBLOCK_DECISION_MAKER_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_SHOCKING_EVENT_AT_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_SHOCKING_EVENT_FOR_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SHOCKING_EVENT_IN_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_SHOCKING_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ALL_SHOCKING_EVENTS(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS(rage::scrNativeCallContext* src)
	{
	}
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUM_DECORATIONS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_TATTOO_COLLECTION_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void INIT_SHOP_PED_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void INIT_SHOP_PED_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x50F457823CE6EB5F(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUM_PROPS_FROM_OUTFIT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_QUERY_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_QUERY_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HASH_NAME_FOR_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HASH_NAME_FOR_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VARIANT_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VARIANT_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FORCED_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FORCED_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF3FBE2D50A6A8C28(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_QUERY_OUTFIT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_OUTFIT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_OUTFIT_LOCATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_OUTFIT_PROP_VARIANT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_DLC_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DLC_VEHICLE_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DLC_VEHICLE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DLC_VEHICLE_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_DLC_WEAPONS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DLC_WEAPON_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_DLC_WEAPON_COMPONENTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DLC_WEAPON_COMPONENT_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CONTENT_ITEM_LOCKED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DLC_VEHICLE_MOD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DLC_VEHICLE_MOD_LOCK_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _LOAD_CONTENT_CHANGE_SET_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void _UNLOAD_CONTENT_CHANGE_SET_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void START_SCRIPT_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_SCRIPT_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void START_ENTITY_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ENTITY_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ON_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_FIRES_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_FIRE_SPREAD_RATE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_FIRE_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_FIRE_POS(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_EXPLOSION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_OWNED_EXPLOSION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_EXPLOSION_WITH_USER_VFX(rage::scrNativeCallContext* src)
	{
	}
	static void IS_EXPLOSION_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_EXPLOSION_ACTIVE_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_EXPLOSION_IN_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTITY_INSIDE_EXPLOSION_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_EXPLOSION_IN_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTITY_INSIDE_EXPLOSION_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_DEBUG_LINE(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_DEBUG_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_DEBUG_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_DEBUG_CROSS(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_DEBUG_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_DEBUG_TEXT_2D(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_LINE(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_POLY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x29280002282F1928(rage::scrNativeCallContext* src)
	{
	}
	static void _0x736D7AA1B750856B(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BACKFACECULLING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC5C8F970D4EDFF71(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1DD2139A9A20DCE8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x90A78ECAA4E78453(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0A46AF8A78DC5E0A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4862437A486F91B0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1670F8D05056F257(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7FA5D82B8F58EC06(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B0316762AFD4A64(rage::scrNativeCallContext* src)
	{
	}
	static void _0x346EF3ECAAAB149E(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TAKE_HIGH_QUALITY_PHOTO(rage::scrNativeCallContext* src)
	{
	}
	static void GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD801CC02177FA3F1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1BBC135A4D25EDDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF3F776ADA161E47D(rage::scrNativeCallContext* src)
	{
	}
	static void SAVE_HIGH_QUALITY_PHOTO(rage::scrNativeCallContext* src)
	{
	}
	static void GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO(rage::scrNativeCallContext* src)
	{
	}
	static void _0x759650634F07B6B4(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCB82A0BF0E3E3265(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6A12D88881435DCA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1072F115DAB0717E(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAXIMUM_NUMBER_OF_PHOTOS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_CURRENT_NUMBER_OF_PHOTOS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A893980E96B659A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF5BED327CEA362B1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4AF92ACD3141D96C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE791DF1F73ED2C8B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEC72C258667BE5EA(rage::scrNativeCallContext* src)
	{
	}
	static void _RETURN_TWO(rage::scrNativeCallContext* src)
	{
	}
	static void _DRAW_LIGHT_WITH_RANGE_AND_SHADOW(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_LIGHT_WITH_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_SPOT_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _DRAW_SPOT_LIGHT_WITH_SHADOW(rage::scrNativeCallContext* src)
	{
	}
	static void FADE_UP_PED_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_LIGHTS_ON_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9641588DAB93B4B5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x393BD2275CEB7793(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_MARKER(rage::scrNativeCallContext* src)
	{
	}
	static void _DRAW_MARKER_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x799017F9E3B10112(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_CHECKPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CHECKPOINT_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x44621483FF966526(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CHECKPOINT_CYLINDER_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CHECKPOINT_RGBA(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CHECKPOINT_ICON_RGBA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF51D36185993515D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFCF6788FC4860CD4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x615D3925E87A3B26(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDB1EA9411C8911EC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3C788E7F6438754D(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_CHECKPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x22A249A53034450A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDC459CFA0CCE245B(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_STREAMED_TEXTURE_DICT(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_STREAMED_TEXTURE_DICT_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_RECT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_GFX_DRAW_ORDER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_GFX_ALIGN(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_SCRIPT_GFX_ALIGN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_GFX_ALIGN_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_SCRIPT_GFX_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SAFE_ZONE_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2D3B147AFAD49DE0(rage::scrNativeCallContext* src)
	{
	}
	static void _DRAW_INTERACTIVE_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_ENTITY_ICON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ICON_VISIBILITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_ICON_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRAW_ORIGIN(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_DRAW_ORIGIN(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BINK_MOVIE_REQUESTED(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAY_BINK_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void _STOP_BINK_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void _RELEASE_BINK_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void _DRAW_BINK_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BINK_MOVIE_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_BINK_MOVIE_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BINK_MOVIE_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_TV_AUDIO_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TV_AUDIO_FRONTEND(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6805D58CAA427B72(rage::scrNativeCallContext* src)
	{
	}
	static void LOAD_MOVIE_MESH_SET(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_MOVIE_MESH_SET(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9B6E70C5CEEF4EEB(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SCREEN_RESOLUTION(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ACTIVE_SCREEN_RESOLUTION(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ASPECT_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB2EBE8CBC58B90E9(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_WIDESCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_HIDEF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEFABC7722293DA7C(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NIGHTVISION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_REQUESTINGNIGHTVISION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_USINGNIGHTVISION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEF398BEEE4EF45F9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x814AF7DCAACC597B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x43FA7CBE20DAB219(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NOISEOVERIDE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NOISINESSOVERIDE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SCREEN_COORD_FROM_WORLD_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TEXTURE_RESOLUTION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x95EB5E34F821BABE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE2892E7E55D7073A(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLASH(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_OCCLUSION_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ARTIFICIAL_LIGHTS_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC35A6D07C93802B2(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_TRACKED_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TRACKED_POINT_INFO(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TRACKED_POINT_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void DESTROY_TRACKED_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBE197EAA669238F4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x61F95E5BB3E0A8C6(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAE51BC858F32BA66(rage::scrNativeCallContext* src)
	{
	}
	static void _0x649C97D52332341A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2C42340F916C5930(rage::scrNativeCallContext* src)
	{
	}
	static void _0x14FC5833464340A8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0218BA067D249DEA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1612C45F9E3E0D44(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5DEBD9C4DC995692(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAAE9BE70EC7C69AB(rage::scrNativeCallContext* src)
	{
	}
	static void _GRASS_LOD_SHRINK_SCRIPT_AREAS(rage::scrNativeCallContext* src)
	{
	}
	static void _GRASS_LOD_RESET_SCRIPT_AREAS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x03FC694AE06C5A20(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD2936CAB8B58FCBD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5F0F3F56635809EF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5E9DAF5A20F15908(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36F6626459D91457(rage::scrNativeCallContext* src)
	{
	}
	static void _0x259BA6D4E6F808F1(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_FAR_SHADOWS_SUPPRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x25FC3E33A31AD0C9(rage::scrNativeCallContext* src)
	{
	}
	static void _CASCADESHADOWS_SET_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _CASCADESHADOWS_RESET_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6DDBF9DFFC4AC080(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD39D13C9FEBF0511(rage::scrNativeCallContext* src)
	{
	}
	static void _0x02AC28F3A01FA04A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0AE73D8DF3A762B2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA465D9CC0D231BA(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_PATH(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_RADIUS(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_TESSELLATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC0416B061F2B7E5E(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_SHADER_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void GOLF_TRAIL_SET_FACING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA4819F5E23E2FFAD(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA4664972A9B8F8BA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SEETHROUGH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_USINGSEETHROUGH(rage::scrNativeCallContext* src)
	{
	}
	static void SEETHROUGH_RESET(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_FADE_START_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_FADE_END_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_GET_MAX_THICKNESS(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_MAX_THICKNESS(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_NOISE_AMOUNT_MIN(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_NOISE_AMOUNT_MAX(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_HI_LIGHT_INTENSITY(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_HI_LIGHT_NOISE(rage::scrNativeCallContext* src)
	{
	}
	static void SEETHROUGH_SET_HEATSCALE(rage::scrNativeCallContext* src)
	{
	}
	static void _SEETHROUGH_SET_COLOR_NEAR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB3C641F3630BF6DA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE59343E9E96529E7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6A51F78772175A51(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE63D7C6EECECB66B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE3E2C1B4C59DBC77(rage::scrNativeCallContext* src)
	{
	}
	static void TRIGGER_SCREENBLUR_FADE_IN(rage::scrNativeCallContext* src)
	{
	}
	static void TRIGGER_SCREENBLUR_FADE_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDE81239437E8C5A8(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SCREENBLUR_FADE_CURRENT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCREENBLUR_FADE_RUNNING(rage::scrNativeCallContext* src)
	{
	}
	static void TOGGLE_PAUSED_RENDERPHASES(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TOGGLE_PAUSED_RENDERPHASES_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PAUSED_RENDERPHASES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x851CD923176EBA7C(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HIDOF_ENV_BLUR_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB569F41F3E7E83A4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7AC24EAB6D74118D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBCEDB009461DA156(rage::scrNativeCallContext* src)
	{
	}
	static void _0x27FEB5254759CDE3(rage::scrNativeCallContext* src)
	{
	}
	static void START_PARTICLE_FX_NON_LOOPED_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8CDE909A0370BB3A(rage::scrNativeCallContext* src)
	{
	}
	static void START_PARTICLE_FX_LOOPED_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void START_PARTICLE_FX_LOOPED_ON_PED_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void START_PARTICLE_FX_LOOPED_ON_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PARTICLE_FX_LOOPED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PARTICLE_FX(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PARTICLE_FX_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA0127DA25FD54C9(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_PARTICLE_FX_LOOPED_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_LOOPED_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_LOOPED_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_LOOPED_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_SHOOTOUT_BOAT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A251AA48B2B46DB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x908311265D42A820(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5F6DF3D92271E8A1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2B40A97646381508(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_CLOWN_BLOOD_VFX(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_ALIEN_BLOOD_VFX(rage::scrNativeCallContext* src)
	{
	}
	static void _0x27E32866E9A5C416(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBB90E12CAC1DAB25(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA4AE345A153D573(rage::scrNativeCallContext* src)
	{
	}
	static void _0x54E22EA2C1956A8D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x949F397A288B28B3(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA3D194057C79A7B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5DBF05DB5926D089(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9B079E5221D984D3(rage::scrNativeCallContext* src)
	{
	}
	static void USE_PARTICLE_FX_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARTICLE_FX_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PARTICLE_FX_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA46B73FAA3460AE1(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF78B803082D4386F(rage::scrNativeCallContext* src)
	{
	}
	static void WASH_DECALS_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void WASH_DECALS_FROM_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void FADE_DECALS_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_DECALS_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_DECALS_FROM_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_DECALS_FROM_OBJECT_FACING(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_DECALS_FROM_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_DECAL(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PETROL_DECAL(rage::scrNativeCallContext* src)
	{
	}
	static void START_PETROL_TRAIL_DECALS(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PETROL_TRAIL_DECAL_INFO(rage::scrNativeCallContext* src)
	{
	}
	static void END_PETROL_TRAIL_DECALS(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_DECAL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DECAL_ALIVE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DECAL_WASH_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD9454B5752C857DC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x27CFB1B1E078CB2D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4B5CFC83122DF602(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_PETROL_DECAL_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void _OVERRIDE_DECAL_TEXTURE(rage::scrNativeCallContext* src)
	{
	}
	static void _UNDO_DECAL_TEXTURE_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void MOVE_VEHICLE_DECALS(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_VEHICLE_CREW_EMBLEM(rage::scrNativeCallContext* src)
	{
	}
	static void _0x82ACC484FFA3B05F(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_CREW_EMBLEM(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_VEHICLE_HAVE_CREW_EMBLEM(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0E4299C549F0D1F1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x02369D5C8A51FDCF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x46D1A61A21F566FC(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_INTERIOR_SMOKE_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_INTERIOR_SMOKE_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_INTERIOR_SMOKE_END(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA44FF770DFBC5DAE(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_VEHICLE_DISTANTLIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x03300B57FCAC6DDB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x98EDF76A7271E4F2(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_FORCE_PED_FOOTSTEPS_TRACKS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_FORCE_VEHICLE_TRAILS(rage::scrNativeCallContext* src)
	{
	}
	static void _DISABLE_SCRIPT_AMBIENT_EFFECTS(rage::scrNativeCallContext* src)
	{
	}
	static void PRESET_INTERIOR_AMBIENT_CACHE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TIMECYCLE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1CBA05AE7BD7EE05(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_TIMECYCLE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIMECYCLE_MODIFIER_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void _0x98D18905BF723B99(rage::scrNativeCallContext* src)
	{
	}
	static void PUSH_TIMECYCLE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void POP_TIMECYCLE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CURRENT_PLAYER_TCMODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_TCMODIFIER_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NEXT_PLAYER_TCMODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TCMODIFIER_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x15E33297C3E8DC60(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_EXTRA_TIMECYCLE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_EXTRA_TIMECYCLE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_EXTRA_TIMECYCLE_MODIFIER_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void _RESET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_SCALEFORM_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void _REQUEST_SCALEFORM_MOVIE_2(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_SCALEFORM_MOVIE_INSTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _REQUEST_SCALEFORM_MOVIE_INTERACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_SCALEFORM_MOVIE_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2FCB133CA50A49EB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x86255B1FC929E33E(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_SCALEFORM_MOVIE_FILENAME_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x32F34FF7F617643B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE6A9F00D4240B519(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_SCALEFORM_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_SCALEFORM_MOVIE_3D(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_SCALEFORM_MOVIE_3D_SOLID(rage::scrNativeCallContext* src)
	{
	}
	static void CALL_SCALEFORM_MOVIE_METHOD(rage::scrNativeCallContext* src)
	{
	}
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(rage::scrNativeCallContext* src)
	{
	}
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_SCALEFORM_MOVIE_METHOD(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER(rage::scrNativeCallContext* src)
	{
	}
	static void END_SCALEFORM_MOVIE_METHOD(rage::scrNativeCallContext* src)
	{
	}
	static void END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(rage::scrNativeCallContext* src)
	{
	}
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_SCALEFORM_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void _END_TEXT_COMMAND_SCALEFORM_STRING_2(rage::scrNativeCallContext* src)
	{
	}
	static void _SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(rage::scrNativeCallContext* src)
	{
	}
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5E657EF1099EDD65(rage::scrNativeCallContext* src)
	{
	}
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD1C7CB175E012964(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TV_CHANNEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TV_CHANNEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TV_VOLUME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TV_VOLUME(rage::scrNativeCallContext* src)
	{
	}
	static void DRAW_TV_CHANNEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TV_CHANNEL_PLAYLIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TV_CHANNEL_PLAYLIST_AT_HOUR(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_TV_CHANNEL_PLAYLIST(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PLAYLIST_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_TV_PLAYLIST_ITEM_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_MOVIE_KEYFRAME_WAIT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD1C55B110E4DF534(rage::scrNativeCallContext* src)
	{
	}
	static void _0x30432A0118736E00(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_MOVIE_SUBTITLES(rage::scrNativeCallContext* src)
	{
	}
	static void UI3DSCENE_IS_AVAILABLE(rage::scrNativeCallContext* src)
	{
	}
	static void UI3DSCENE_PUSH_PRESET(rage::scrNativeCallContext* src)
	{
	}
	static void _0x98C4FE6EC34154CA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7A42B2E236E71415(rage::scrNativeCallContext* src)
	{
	}
	static void _0x108BE26959A9D9BB(rage::scrNativeCallContext* src)
	{
	}
	static void TERRAINGRID_ACTIVATE(rage::scrNativeCallContext* src)
	{
	}
	static void TERRAINGRID_SET_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void TERRAINGRID_SET_COLOURS(rage::scrNativeCallContext* src)
	{
	}
	static void ANIMPOSTFX_PLAY(rage::scrNativeCallContext* src)
	{
	}
	static void ANIMPOSTFX_STOP(rage::scrNativeCallContext* src)
	{
	}
	static void _ANIMPOSTFX_GET_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void ANIMPOSTFX_IS_RUNNING(rage::scrNativeCallContext* src)
	{
	}
	static void ANIMPOSTFX_STOP_ALL(rage::scrNativeCallContext* src)
	{
	}
	static void _ANIMPOSTFX_STOP_AND_DO_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_BUSYSPINNER_ON(rage::scrNativeCallContext* src)
	{
	}
	static void BUSYSPINNER_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void PRELOAD_BUSYSPINNER(rage::scrNativeCallContext* src)
	{
	}
	static void BUSYSPINNER_IS_ON(rage::scrNativeCallContext* src)
	{
	}
	static void BUSYSPINNER_IS_DISPLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9245E81072704B8A(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MOUSE_CURSOR_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x98215325A695E78A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3D9ACB1EB139E702(rage::scrNativeCallContext* src)
	{
	}
	static void _0x632B2940C67F4EA9(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_ONLY_SHOW_TOOLTIPS(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_SET_SCRIPTED_MENU_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _THEFEED_DISABLE(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_HIDE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x15CFA549788D35EF(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_FLUSH_QUEUE(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_REMOVE_ITEM(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_FORCE_RENDER_ON(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_FORCE_RENDER_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_PAUSE(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_RESUME(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_IS_PAUSED(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_SPS_EXTEND_WIDESCREEN_ON(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_SPS_EXTEND_WIDESCREEN_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_COMMENT_TELEPORT_POOL_ON(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_COMMENT_TELEPORT_POOL_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void _THEFEED_SET_NEXT_POST_BACKGROUND_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _THEFEED_SET_ANIMPOSTFX_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _THEFEED_SET_ANIMPOSTFX_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _THEFEED_SET_ANIMPOSTFX_SOUND(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_RESET_ALL_PARAMETERS(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_FREEZE_NEXT_POST(rage::scrNativeCallContext* src)
	{
	}
	static void THEFEED_CLEAR_FROZEN_POST(rage::scrNativeCallContext* src)
	{
	}
	static void _THEFEED_SET_FLUSH_ANIMPOSTFX(rage::scrNativeCallContext* src)
	{
	}
	static void _THEFEED_ADD_TXD_REF(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_THEFEED_POST(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(rage::scrNativeCallContext* src)
	{
	}
	static void _END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_TICKER(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_AWARD(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_CREWTAG(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_UNLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_MPTICKER(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_CREW_RANKUP(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_THEFEED_POST_VERSUS_TU(rage::scrNativeCallContext* src)
	{
	}
	static void _END_TEXT_COMMAND_THEFEED_POST_REPLAY_ICON(rage::scrNativeCallContext* src)
	{
	}
	static void _END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_PRINT(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_PRINT(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_DISPLAY_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void _BEGIN_TEXT_COMMAND_GET_WIDTH(rage::scrNativeCallContext* src)
	{
	}
	static void _END_TEXT_COMMAND_GET_WIDTH(rage::scrNativeCallContext* src)
	{
	}
	static void _BEGIN_TEXT_COMMAND_LINE_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _END_TEXT_COMMAND_LINE_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_DISPLAY_HELP(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_SET_BLIP_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _BEGIN_TEXT_COMMAND_OBJECTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _END_TEXT_COMMAND_OBJECTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_CLEAR_PRINT(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void END_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_INTEGER(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_TEXT_COMPONENT_SUBSTRING_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_COLOUR_OF_NEXT_TEXT_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PRINTS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_BRIEF(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ALL_HELP_MESSAGES(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_THIS_PRINT(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_SMALL_PRINTS(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_TEXT_BLOCK_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_ADDITIONAL_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_ADDITIONAL_TEXT_FOR_DLC(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ADDITIONAL_TEXT_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ADDITIONAL_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_STREAMING_ADDITIONAL_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_THIS_ADDITIONAL_TEXT_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MESSAGE_BEING_DISPLAYED(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_TEXT_LABEL_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LENGTH_OF_LITERAL_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HUD_PREFERENCE_SWITCHED_ON(rage::scrNativeCallContext* src)
	{
	}
	static void IS_RADAR_PREFERENCE_SWITCHED_ON(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SUBTITLE_PREFERENCE_SWITCHED_ON(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_HUD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7669F9E39DC17063(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_RADAR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCD74233600C4EA6B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC2D2AD9EAAE265B8(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HUD_HIDDEN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_RADAR_HIDDEN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MINIMAP_RENDERING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0C698D8F099174C7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE4C3B169876D33D7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEB81A3DADD503187(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_ALL_BLIP_ROUTES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_ROUTE_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2790F4B17D098E26(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6CDD58146A436083(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD1942374085C8469(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x57D760D55F54E071(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADAR_ZOOM_PRECISE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADAR_ZOOM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADAR_ZOOM_TO_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADAR_ZOOM_TO_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD2049635DEB9C375(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HUD_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_VARIABLE_HUD_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_SCRIPT_VARIABLE_2_HUD_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void REPLACE_HUD_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void REPLACE_HUD_COLOUR_WITH_RGBA(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ABILITY_BAR_VISIBILITY_IN_MULTIPLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void FLASH_ABILITY_BAR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ABILITY_BAR_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void FLASH_WANTED_DISPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA8D65C1C65702E5(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_TEXT_SCALE_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_CENTRE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_RIGHT_JUSTIFY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_JUSTIFICATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_WRAP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_LEADING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_PROPORTIONAL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_FONT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_DROP_SHADOW(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_DROPSHADOW(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_OUTLINE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_EDGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEXT_RENDER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_NAMED_RENDERTARGET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NAMED_RENDERTARGET_REGISTERED(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_NAMED_RENDERTARGET(rage::scrNativeCallContext* src)
	{
	}
	static void LINK_NAMED_RENDERTARGET(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NAMED_RENDERTARGET_RENDER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NAMED_RENDERTARGET_LINKED(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_HELP(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HELP_MESSAGE_ON_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void _0x214CD562A939246A(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HELP_MESSAGE_BEING_DISPLAYED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HELP_MESSAGE_FADING_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HELP_MESSAGE_TEXT_STYLE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_LEVEL_BLIP_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_WAYPOINT_BLIP_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_ACTIVE_BLIPS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NEXT_BLIP_INFO_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FIRST_BLIP_INFO_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD484BF71050CA1EE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_INFO_ID_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_INFO_ID_DISPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_INFO_ID_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_INFO_ID_ENTITY_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_INFO_ID_PICKUP_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_BLIP_FOR_RADIUS(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_BLIP_FOR_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_BLIP_FOR_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_BLIP_FOR_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_BLIP_FOR_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TRIGGER_SONAR_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void ALLOW_SONAR_BLIPS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9FCB3CBFB3EAD69A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB7B873520C84C118(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_NAME_FROM_TEXT_FILE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_NAME_TO_PLAYER_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_FADE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2C173AE2BDB9385E(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BLIP_SQUARED_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_FLASH_TIMER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_FLASH_INTERVAL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_SECONDARY_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BLIP_HUD_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BLIP_SHORT_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BLIP_ON_MINIMAP(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_BLIP_HAVE_GPS_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_HIDDEN_ON_LEGEND(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_HIGH_DETAIL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_AS_MISSION_CREATOR_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MISSION_CREATOR_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NEW_SELECTED_MISSION_CREATOR_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HOVERING_OVER_MISSION_CREATOR_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF1A6C18B35BCADE6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2916A928514C9827(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB552929B85FC27EC(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_FLASHES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_FLASHES_ALTERNATE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BLIP_FLASHING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_AS_SHORT_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCD6524439909C979(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_PRIORITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_DISPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_CATEGORY(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_AS_FRIENDLY(rage::scrNativeCallContext* src)
	{
	}
	static void PULSE_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_NUMBER_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_NUMBER_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_HEIGHT_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_TICK_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_HEADING_INDICATOR_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_OUTLINE_INDICATOR_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_FRIEND_INDICATOR_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_CREW_INDICATOR_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4B5B620C9B59ED34(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2C9F302398E13141(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BLIP_SHRINK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADIUS_BLIP_EDGE(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_BLIP_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WAYPOINT_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void _DELETE_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void REFRESH_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_WAYPOINT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NEW_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_BRIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLIP_SHOW_CONE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC594B315EDF2D4AF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF83D0FEBE75E62C9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x35A3CD97B2C0A6D2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8410C5E0CD847B9D(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIMAP_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void _SHOW_SIGNIN_UI(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAIN_PLAYER_BLIP_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x41350B4FC28E3941(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_LOADING_ON_FADE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADAR_AS_INTERIOR_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x504DFE62A1692296(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_BLIP_POSITION_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA17784FCA9548D15(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_MINIMAP_IN_INTERIOR(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void DONT_TILT_MINIMAP_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x55F5A5F07134DE60(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WIDESCREEN_FORMAT(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_AREA_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x170F541E1CADD1DE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_CASH_CHANGE(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_AMMO_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_SNIPER_SCOPE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_HUD_AND_RADAR_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE67C6DFD386EA5E7(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MULTIPLAYER_WALLET_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_MULTIPLAYER_WALLET_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MULTIPLAYER_BANK_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_MULTIPLAYER_BANK_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MULTIPLAYER_HUD_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_MULTIPLAYER_HUD_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_HELP_TEXT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x801879A9B4F4B2FB(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_HELP_TEXT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void HUD_FORCE_WEAPON_WHEEL(rage::scrNativeCallContext* src)
	{
	}
	static void _0x488043841BBE156F(rage::scrNativeCallContext* src)
	{
	}
	static void _HUD_WEAPON_WHEEL_IGNORE_SELECTION(rage::scrNativeCallContext* src)
	{
	}
	static void _HUD_WEAPON_WHEEL_GET_SELECTED_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _HUD_WEAPON_WHEEL_SET_SLOT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _HUD_WEAPON_WHEEL_GET_SLOT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _HUD_WEAPON_WHEEL_IGNORE_CONTROL_INPUT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GPS_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_GPS_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RACE_TRACK_RENDER(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_GPS_RACE_TRACK(rage::scrNativeCallContext* src)
	{
	}
	static void START_GPS_CUSTOM_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_POINT_TO_GPS_CUSTOM_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GPS_CUSTOM_ROUTE_RENDER(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_GPS_CUSTOM_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void START_GPS_MULTI_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_POINT_TO_GPS_MULTI_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GPS_MULTI_ROUTE_RENDER(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_GPS_MULTI_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_GPS_PLAYER_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GPS_FLASHES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7B21E0BB01E8224A(rage::scrNativeCallContext* src)
	{
	}
	static void FLASH_MINIMAP_DISPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void FLASH_MINIMAP_DISPLAY_WITH_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void TOGGLE_STEALTH_RADAR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIMAP_IN_SPECTATOR_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MISSION_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MISSION_NAME_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x817B86108EB94E51(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIMAP_BLOCK_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIMAP_IN_PROLOGUE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIMAP_HIDE_FOW(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_MINIMAP_REVEAL_PERCENTAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_MINIMAP_AREA_IS_REVEALED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x62E849B7EB28E770(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0923DBF87DFF735E(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIMAP_GOLF_COURSE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIMAP_GOLF_COURSE_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void LOCK_MINIMAP_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void UNLOCK_MINIMAP_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void LOCK_MINIMAP_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void UNLOCK_MINIMAP_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HEALTH_HUD_DISPLAY_VALUES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MAX_HEALTH_HUD_DISPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MAX_ARMOUR_HUD_DISPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BIGMAP_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HUD_COMPONENT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCRIPTED_HUD_COMPONENT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _SHOW_SCRIPTED_HUD_COMPONENT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_HUD_COMPONENT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SHOW_HUD_COMPONENT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_RETICULE_VALUES(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_HUD_COMPONENT_VALUES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HUD_COMPONENT_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HUD_COMPONENT_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_REMINDER_MESSAGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void OPEN_REPORTUGC_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_CLOSE_REPORTUGC_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void IS_REPORTUGC_MENU_OPEN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_FLOATING_HELP_TEXT_ON_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLOATING_HELP_TEXT_SCREEN_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLOATING_HELP_TEXT_WORLD_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLOATING_HELP_TEXT_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLOATING_HELP_TEXT_STYLE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_FLOATING_HELP(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_MP_GAMER_TAG_WITH_CREW_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MP_GAMER_TAG_MOVIE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_FAKE_MP_GAMER_TAG(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_MP_GAMER_TAG(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MP_GAMER_TAG_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MP_GAMER_TAG_FREE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MP_GAMER_TAG_VISIBILITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEE76FF7E6A0166B0(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MP_GAMER_TAG_ICONS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MP_GAMER_HEALTH_BAR_DISPLAY(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MP_GAMER_HEALTH_BAR_MAX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MP_GAMER_TAG_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MP_GAMER_TAG_ALPHA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MP_GAMER_TAG_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MP_GAMER_TAG_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MP_GAMER_TAG_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VALID_MP_GAMER_TAG_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MP_GAMER_TAG_BIG_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_WEBPAGE_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_WEBSITE_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE3B05614DCE1D014(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB99C4E4D9499DF29(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_WARNING_MESSAGE_ACTIVE_2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WARNING_MESSAGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WARNING_MESSAGE_WITH_HEADER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_WARNING_MESSAGE_WITH_HEADER_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_WARNING_MESSAGE_4(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_WARNING_MESSAGE_TITLE_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_WARNING_MESSAGE_LIST_ROW(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDAF87174BE7454FF(rage::scrNativeCallContext* src)
	{
	}
	static void _REMOVE_WARNING_MESSAGE_LIST_ITEMS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_WARNING_MESSAGE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_DYNAMIC_PAUSE_MENU_ERROR_MESSAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _RACE_GALLERY_FULLSCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void _RACE_GALLERY_NEXT_BLIP_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void _RACE_GALLERY_ADD_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_RACE_GALLERY_BLIPS(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_SONAR_BLIPS_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3F0CF9CB7E589B88(rage::scrNativeCallContext* src)
	{
	}
	static void _0x82CEDC33687E1F50(rage::scrNativeCallContext* src)
	{
	}
	static void _0x211C4EF450086857(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBF4F34A85CA2970C(rage::scrNativeCallContext* src)
	{
	}
	static void ACTIVATE_FRONTEND_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void RESTART_FRONTEND_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_FRONTEND_MENU_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PAUSE_MENU_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_FRONTEND_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SUPPRESS_FRONTEND_RENDERING_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _ALLOW_PAUSE_MENU_WHEN_DEAD_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FRONTEND_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PAUSE_MENU_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2F057596F2BD0061(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PAUSE_MENU_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5BFF36D6ED83E0AE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PAUSE_MENU_RESTARTING(rage::scrNativeCallContext* src)
	{
	}
	static void _LOG_DEBUG_INFO(rage::scrNativeCallContext* src)
	{
	}
	static void _0x77F16B447824DA6C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCDCA26E80FAECB8F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2DE6C5E2E996F178(rage::scrNativeCallContext* src)
	{
	}
	static void PAUSE_MENU_ACTIVATE_CONTEXT(rage::scrNativeCallContext* src)
	{
	}
	static void PAUSE_MENU_DEACTIVATE_CONTEXT(rage::scrNativeCallContext* src)
	{
	}
	static void PAUSE_MENU_IS_CONTEXT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A25ADC48F87841F(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDE03620F8703A9DF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x359AF31A4B52F5ED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x13C4B962653A5280(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC8E1071177A23BE5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4895BDEA16E7C080(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC78E239AC5B2DDB9(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF06EBB91A81E09E3(rage::scrNativeCallContext* src)
	{
	}
	static void IS_FRONTEND_READY_FOR_CONTROL(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEC9264727EEC0F28(rage::scrNativeCallContext* src)
	{
	}
	static void _0x14621BB1DF14E2B2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x66E7CB63C97B7D20(rage::scrNativeCallContext* src)
	{
	}
	static void _0x593FEAE1F73392D4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4E3CD0EF8A489541(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF284AC67940C6812(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2E22FEFA0100275E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0CF54F20DE43879C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36C1451A88A09630(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7E17BE53E1AAABAF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA238192F33110615(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEF4CED81CEBEDC6D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA6B2F7CE32AB653(rage::scrNativeCallContext* src)
	{
	}
	static void _0x90A6526CF0381030(rage::scrNativeCallContext* src)
	{
	}
	static void _0x24A49BEAF468DC90(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5FBD7095FE7AE57F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8F08017F9D7C47BD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x052991E59076E4E4(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_IN_PAUSE_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_PED_TO_PAUSE_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PAUSE_MENU_PED_LIGHTING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PAUSE_MENU_PED_SLEEP_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void OPEN_ONLINE_POLICIES_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF13FE2A80C05C561(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ONLINE_POLICIES_MENU_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void OPEN_SOCIAL_CLUB_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void CLOSE_SOCIAL_CLUB_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SOCIAL_CLUB_TOUR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SOCIAL_CLUB_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1185A8087587322C(rage::scrNativeCallContext* src)
	{
	}
	static void _FORCE_CLOSE_TEXT_INPUT_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void _0x577599CCED639CA2(rage::scrNativeCallContext* src)
	{
	}
	static void _OVERRIDE_MULTIPLAYER_CHAT_PREFIX(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_MULTIPLAYER_CHAT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _CLOSE_MULTIPLAYER_CHAT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7C226D5346D4D10A(rage::scrNativeCallContext* src)
	{
	}
	static void _OVERRIDE_MULTIPLAYER_CHAT_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_TEXT_CHAT_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void FLAG_PLAYER_CONTEXT_IN_TOURNAMENT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HAS_AI_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_HAS_AI_BLIP_WITH_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_PED_HAVE_AI_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AI_BLIP_GANG_ID(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AI_BLIP_HAS_CONE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AI_BLIP_FORCED_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AI_BLIP_NOTICE_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_AI_BLIP_SPRITE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_AI_BLIP_2(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_AI_BLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_DIRECTOR_MODE_BEEN_TRIGGERED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_DIRECTOR_MODE_CLEAR_TRIGGERED_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_IS_IN_DIRECTOR_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x04655F9D075D0AE5(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_INTERIOR_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_INTERIOR_INFO(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INTERIOR_GROUP_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_INTERIOR_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VALID_INTERIOR(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ROOM_FOR_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_ROOM_FOR_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ROOM_KEY_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_KEY_FOR_ENTITY_IN_ROOM(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INTERIOR_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x82EBB79E258FA2B7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x38C1CB1CB119A016(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_ROOM_FOR_GAME_VIEWPORT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAF348AFCB575A441(rage::scrNativeCallContext* src)
	{
	}
	static void _0x405DC2AEF6AF95B9(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ROOM_KEY_FOR_GAME_VIEWPORT(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ROOM_FOR_GAME_VIEWPORT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE7D267EC6CA966C3(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INTERIOR_AT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void PIN_INTERIOR_IN_MEMORY(rage::scrNativeCallContext* src)
	{
	}
	static void UNPIN_INTERIOR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_INTERIOR_READY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4C2330E61D3DEB56(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INTERIOR_AT_COORDS_WITH_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x483ACA1176CA93F1(rage::scrNativeCallContext* src)
	{
	}
	static void _ARE_COORDS_COLLIDING_WITH_EXTERIOR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INTERIOR_FROM_COLLISION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7ECDF98587E92DEC(rage::scrNativeCallContext* src)
	{
	}
	static void ACTIVATE_INTERIOR_ENTITY_SET(rage::scrNativeCallContext* src)
	{
	}
	static void DEACTIVATE_INTERIOR_ENTITY_SET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_INTERIOR_ENTITY_SET_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_INTERIOR_ENTITY_SET_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void REFRESH_INTERIOR(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _ENABLE_SCRIPT_CULL_MODEL_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_INTERIOR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_INTERIOR_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void CAP_INTERIOR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_INTERIOR_CAPPED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9E6542F0CE8E70A3(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7241CCB7D020DB69(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_ITEMSET(rage::scrNativeCallContext* src)
	{
	}
	static void DESTROY_ITEMSET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ITEMSET_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_TO_ITEMSET(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_FROM_ITEMSET(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ITEMSET_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INDEXED_ITEM_IN_ITEMSET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_IN_ITEMSET(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAN_ITEMSET(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF2CA003F167E21D2(rage::scrNativeCallContext* src)
	{
	}
	static void _LOADINGSCREEN_GET_LOAD_FREEMODE(rage::scrNativeCallContext* src)
	{
	}
	static void _LOADINGSCREEN_SET_LOAD_FREEMODE(rage::scrNativeCallContext* src)
	{
	}
	static void _LOADINGSCREEN_GET_LOAD_FREEMODE_WITH_EVENT_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _LOADINGSCREEN_SET_LOAD_FREEMODE_WITH_EVENT_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _LOADINGSCREEN_IS_LOADING_FREEMODE(rage::scrNativeCallContext* src)
	{
	}
	static void _LOADINGSCREEN_SET_IS_LOADING_FREEMODE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFA1E0E893D915215(rage::scrNativeCallContext* src)
	{
	}
	static void _LOCALIZATION_GET_SYSTEM_LANGUAGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_LANGUAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _LOCALIZATION_GET_USER_LANGUAGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ALLOCATED_STACK_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RANDOM_SEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TIME_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MISSION_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MISSION_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RANDOM_EVENT_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_EVENT_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4DCDF92BF64236CD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x31125FD509D9043F(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEBD3205A207939ED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x97E7E2C04245115B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEB078CA2B5E82ADD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x703CC7F60CBB2B57(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8951EB9C6906D3C8(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA4B8D83BDC75551(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_RESUMED_FROM_SUSPEND(rage::scrNativeCallContext* src)
	{
	}
	static void _0x65D2EBB47E1CEC21(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6F2135B6129620C1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8D74E26F54B4E5C3(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_BASE_ELEMENT_METADATA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PREV_WEATHER_TYPE_HASH_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NEXT_WEATHER_TYPE_HASH_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PREV_WEATHER_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NEXT_WEATHER_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WEATHER_TYPE_PERSIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WEATHER_TYPE_NOW_PERSIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WEATHER_TYPE_NOW(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WEATHER_TYPE_OVERTIME_PERSIST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RANDOM_WEATHER_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_WEATHER_TYPE_PERSIST(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0CF97F497FE7D048(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_WEATHER_TYPE_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_WEATHER_TYPE_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_OVERRIDE_WEATHER(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_OVERRIDE_WEATHER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB8F87EAD7533B176(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC3EAD29AB273ECE8(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA7A1127490312C36(rage::scrNativeCallContext* src)
	{
	}
	static void _0x31727907B2C43C55(rage::scrNativeCallContext* src)
	{
	}
	static void _0x405591EC8FD9096D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF751B16FB32ABC1D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB3E6360DDE733E82(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7C9C0B1EEB1F9072(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6216B116083A7CB4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9F5E6BB6B34540DA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB9854DFDE0D833D6(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC54A08C85AE4D410(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA8434F1DFF41D6E7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC3C221ADDDE31A11(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WIND(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WIND_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WIND_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WIND_DIRECTION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WIND_DIRECTION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_RAIN_FX_INTENSITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RAIN_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SNOW_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_LIGHTNING_FLASH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x02DEAAC8F8EA7FE7(rage::scrNativeCallContext* src)
	{
	}
	static void PRELOAD_CLOUD_HAT(rage::scrNativeCallContext* src)
	{
	}
	static void LOAD_CLOUD_HAT(rage::scrNativeCallContext* src)
	{
	}
	static void UNLOAD_CLOUD_HAT(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_CLOUD_HAT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CLOUD_HAT_OPACITY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_CLOUD_HAT_OPACITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GAME_TIMER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FRAME_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_BENCHMARK_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FRAME_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_FLOAT_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_INT_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_RANDOM_INT_IN_RANGE_2(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GROUND_Z_FOR_3D_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_GROUND_Z_FOR_3D_COORD_2(rage::scrNativeCallContext* src)
	{
	}
	static void ASIN(rage::scrNativeCallContext* src)
	{
	}
	static void ACOS(rage::scrNativeCallContext* src)
	{
	}
	static void TAN(rage::scrNativeCallContext* src)
	{
	}
	static void ATAN(rage::scrNativeCallContext* src)
	{
	}
	static void ATAN2(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DISTANCE_BETWEEN_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ANGLE_BETWEEN_2D_VECTORS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HEADING_FROM_VECTOR_2D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7F8F6405F4777AF6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x21C235BC64831E5A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF56DFB7B61BE7276(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BIT(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_BIT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HASH_KEY(rage::scrNativeCallContext* src)
	{
	}
	static void SLERP_NEAR_QUATERNION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AREA_OCCUPIED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_POSITION_OCCUPIED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_AREA_OF_EVERYTHING(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AREA_OF_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AREA_OF_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AREA_OF_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AREA_OF_COPS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_AREA_OF_PROJECTILES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7EC6F9A478A6A512(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SAVE_MENU_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x397BAA01068BAA96(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CREDITS_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB51B9AB9EF81868C(rage::scrNativeCallContext* src)
	{
	}
	static void HAVE_CREDITS_REACHED_END(rage::scrNativeCallContext* src)
	{
	}
	static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_HOSPITAL_RESTART(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_HOSPITAL_RESTART(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_POLICE_RESTART(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_POLICE_RESTART(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_RESTART_CUSTOM_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_RESTART_CUSTOM_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void PAUSE_DEATH_ARREST_RESTART(rage::scrNativeCallContext* src)
	{
	}
	static void IGNORE_NEXT_RESTART(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FADE_OUT_AFTER_DEATH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FADE_OUT_AFTER_ARREST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FADE_IN_AFTER_DEATH_ARREST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FADE_IN_AFTER_LOAD(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_SAVE_HOUSE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SAVE_HOUSE(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_SAVE_HOUSE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA4A0065E39C9F25C(rage::scrNativeCallContext* src)
	{
	}
	static void DO_AUTO_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_AUTO_SAVE_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AUTO_SAVE_IN_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2107A3773771186D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x06462A961E94B67C(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_REPLAY_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_REPLAY_STAT_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void END_REPLAY_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD642319C54AADEB6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B1F2E327B6B6FE1(rage::scrNativeCallContext* src)
	{
	}
	static void GET_REPLAY_STAT_MISSION_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_REPLAY_STAT_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_REPLAY_STAT_AT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_REPLAY_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x72DE52178C291CB5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x44A0BDC559B35F6E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEB2104E905C6F2E9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2B5E102E4A42F2BF(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MEMORY_CARD_IN_USE(rage::scrNativeCallContext* src)
	{
	}
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MODEL_DIMENSIONS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FAKE_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_FAKE_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BIT_SET(rage::scrNativeCallContext* src)
	{
	}
	static void USING_MISSION_CREATOR(rage::scrNativeCallContext* src)
	{
	}
	static void ALLOW_MISSION_CREATOR_WARP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MINIGAME_IN_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MINIGAME_IN_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_A_MINIGAME_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SNIPER_INVERTED(rage::scrNativeCallContext* src)
	{
	}
	static void SHOULD_USE_METRIC_MEASUREMENTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PROFILE_SETTING(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_STRINGS_EQUAL(rage::scrNativeCallContext* src)
	{
	}
	static void COMPARE_STRINGS(rage::scrNativeCallContext* src)
	{
	}
	static void ABSI(rage::scrNativeCallContext* src)
	{
	}
	static void ABSF(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SNIPER_BULLET_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PROJECTILE_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PROJECTILE_TYPE_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PROJECTILE_TYPE_IN_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PROJECTILE_TYPE_IN_RADIUS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_IS_PROJECTILE_TYPE_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PROJECTILE_NEAR_PED_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PROJECTILE_NEAR_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BULLET_IN_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BULLET_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BULLET_IN_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_BULLET_IMPACTED_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_BULLET_IMPACTED_IN_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ORBIS_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DURANGO_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_XBOX360_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PS3_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PC_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_AUSSIE_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_STRING_NULL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_STRING_NULL_OR_EMPTY(rage::scrNativeCallContext* src)
	{
	}
	static void STRING_TO_INT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BITS_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BITS_IN_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_STUNT_JUMP(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_STUNT_JUMP_ANGLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFB80AB299D2EE1BD(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_STUNT_JUMP(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_STUNT_JUMP_SET(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_STUNT_JUMP_SET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_STUNT_JUMPS_CAN_TRIGGER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_STUNT_JUMP_IN_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_STUNT_JUMP_MESSAGE_SHOWING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_SUCCESSFUL_STUNT_JUMPS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TOTAL_SUCCESSFUL_STUNT_JUMPS(rage::scrNativeCallContext* src)
	{
	}
	static void CANCEL_STUNT_JUMP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAME_PAUSED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_INSTANCE_PRIORITY_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_INSTANCE_PRIORITY_HINT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_FRONTEND_FADING(rage::scrNativeCallContext* src)
	{
	}
	static void POPULATE_NOW(rage::scrNativeCallContext* src)
	{
	}
	static void GET_INDEX_OF_CURRENT_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GRAVITY_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void START_SAVE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SAVE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA09F896CE912481F(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_INT_TO_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void _REGISTER_INT64_TO_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_ENUM_TO_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_FLOAT_TO_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_BOOL_TO_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_TEXT_LABEL_TO_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void _REGISTER_TEXT_LABEL_TO_SAVE_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x48F069265A0E4BEC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8269816F6CFD40F8(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFAA457EF263E8763(rage::scrNativeCallContext* src)
	{
	}
	static void START_SAVE_STRUCT_WITH_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SAVE_STRUCT(rage::scrNativeCallContext* src)
	{
	}
	static void START_SAVE_ARRAY_WITH_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_SAVE_ARRAY(rage::scrNativeCallContext* src)
	{
	}
	static void _COPY_MEMORY(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_DISPATCH_SERVICE(rage::scrNativeCallContext* src)
	{
	}
	static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUM_DISPATCHED_UNITS_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_INCIDENT(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_INCIDENT_WITH_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_INCIDENT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_INCIDENT_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void SET_INCIDENT_REQUESTED_UNITS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_INCIDENT_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void FIND_SPAWN_POINT_IN_DIRECTION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_POP_MULTIPLIER_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_POP_MULTIPLIER_AREA_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_POP_MULTIPLIER_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_POP_MULTIPLIER_AREA_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_POP_MULTIPLIER_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_POP_MULTIPLIER_SPHERE_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_POP_MULTIPLIER_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_TENNIS_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TENNIS_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_TENNIS_SWING_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TENNIS_SWING_ANIM_COMPLETE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x19BFED045C647C49(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE95B0C7D5BA3B96B(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_TENNIS_DIVE_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void _0x54F157E0336A3822(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISPATCH_SPAWN_LOCATION(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_DISPATCH_SPAWN_BLOCKING_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD9F692D349249528(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE532EC1A63231B4F(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_TACTICAL_ANALYSIS_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_TACTICAL_ANALYSIS_POINTS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2587A48BC88DFADF(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_ONSCREEN_KEYBOARD(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_ONSCREEN_KEYBOARD(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _CANCEL_ONSCREEN_KEYBOARD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3ED1438C1F5C6612(rage::scrNativeCallContext* src)
	{
	}
	static void _REMOVE_STEALTH_KILL(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1EAE0A6E978894A2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_EXPLOSIVE_AMMO_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FIRE_AMMO_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_EXPLOSIVE_MELEE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SUPER_JUMP_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x438822C279B73B93(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA1183BCFEE0F93D1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6FDDF453C0C756EC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFB00CA71DA386228(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_PROFILE_SETTINGS_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE3D969D2785FFB5E(rage::scrNativeCallContext* src)
	{
	}
	static void _RESET_LOCALPLAYER_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0A60017F841A54F2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1FF6BF9A63E5757F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1BB299305C3E8C13(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8EF5573A1F801A5C(rage::scrNativeCallContext* src)
	{
	}
	static void _START_BENCHMARK_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void _STOP_BENCHMARK_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void _RESET_BENCHMARK_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void _SAVE_BENCHMARK_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void _UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _LANDING_MENU_IS_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_COMMAND_LINE_BENCHMARK_VALUE_SET(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_BENCHMARK_PASS_FROM_COMMAND_LINE(rage::scrNativeCallContext* src)
	{
	}
	static void _RESTART_GAME(rage::scrNativeCallContext* src)
	{
	}
	static void _FORCE_SOCIAL_CLUB_UPDATE(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_ASYNC_INSTALL_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEANUP_ASYNC_INSTALL(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_IN_POWER_SAVING_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_POWER_SAVING_MODE_DURATION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_IS_IN_ANIMAL_FORM(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_PLAYER_IN_ANIMAL_FORM(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_ROCKSTAR_EDITOR_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x23227DF0B2115469(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD10282B6E3751BA0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x693478ACBD7F18E7(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_MOBILE_PHONE(rage::scrNativeCallContext* src)
	{
	}
	static void DESTROY_MOBILE_PHONE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MOBILE_PHONE_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MOBILE_PHONE_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MOBILE_PHONE_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MOBILE_PHONE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MOBILE_PHONE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_PHONE_BE_SEEN_ON_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_MOBILE_PHONE_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _CELL_CAM_MOVE_FINGER(rage::scrNativeCallContext* src)
	{
	}
	static void _CELL_CAM_SET_LEAN(rage::scrNativeCallContext* src)
	{
	}
	static void CELL_CAM_ACTIVATE(rage::scrNativeCallContext* src)
	{
	}
	static void _CELL_CAM_DISABLE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA2CCBE62CD4C91A4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1B0B4AEED5B9B41C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x53F4892D18EC90A4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3117D84EFA60F77B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x15E69E2802C24B8D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAC2890471901861C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD6ADE981781FCA09(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF1E22DC13F5EEBAD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x466DA42C89865553(rage::scrNativeCallContext* src)
	{
	}
	static void CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MOBILE_PHONE_RENDER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_INITIALIZE_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DELETE_CHARACTER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_MANUAL_DELETE_CHARACTER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_IS_HIGH_EARNER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_CHARACTER_WALLET(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_SHARE_JOB_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REFUND_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_DEDUCT_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_MONEY_CAN_BET(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_BET(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_BUY_LOTTERY_TICKET(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CASINO_CAN_USE_GAMBLING_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CASINO_CAN_GAMBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CASINO_PURCHASE_CHIPS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CASINO_SELL_CHIPS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCD0F5B5D932AE473(rage::scrNativeCallContext* src)
	{
	}
	static void _CAN_PAY_GOON(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_CASHING_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANG_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_ASSASSINATE_TARGET_KILLED(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_ARMOUR_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_CRATE_DROP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_BETTING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_JOB(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_JOB_X2(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_PREMIUM_JOB(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_BEND_JOB(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_CHALLENGE_WIN(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_BOUNTY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_IMPORT_EXPORT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_HOLDUPS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_PROPERTY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_AI_TARGET_KILL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_NOT_BADSPORT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_ROCKSTAR(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_PERSONAL_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_DAILY_OBJECTIVES(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_AMBIENT_JOB(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD20D79671A598594(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EARN_FROM_JOB_BONUS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9D4FDBB035229669(rage::scrNativeCallContext* src)
	{
	}
	static void _0x11B0A20C493F7E36(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCDA1C62BE2777802(rage::scrNativeCallContext* src)
	{
	}
	static void _0x08B0CA7A6AB3AC32(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0CB1BE0633C024A8(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_WAREHOUSE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_CONTRABAND(rage::scrNativeCallContext* src)
	{
	}
	static void _0x84C0116D012E8FC2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6B7E4FB50D5F3D65(rage::scrNativeCallContext* src)
	{
	}
	static void _0x31BA138F6304FB9F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x55A1E095DB052FA5(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_BUSINESS_PRODUCT(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_VEHICLE_EXPORT(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_SMUGGLING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF6B170F9A02E9E87(rage::scrNativeCallContext* src)
	{
	}
	static void _0x42FCE14F50F27291(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA75EAC69F59E96E7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC5156361F26E2212(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0B39CF0D53F1C883(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1FDA0AA679C9919B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFFFBA1B1F7C0B6F4(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_SPEND_MONEY(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CAN_SPEND_MONEY_2(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_ITEM(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_TAXI(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PAY_EMPLOYEE_WAGE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PAY_UTILITY_BILL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PAY_MATCH_ENTRY_FEE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BETTING(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_WAGER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_IN_STRIPCLUB(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_HEALTHCARE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_AIRSTRIKE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_BACKUP_GANG(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_HELI_STRIKE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_AMMO_DROP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_BOUNTY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_PROPERTY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_SMOKES(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_HELI_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BOAT_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BULL_SHARK(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_CASH_DROP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_HIRE_MUGGER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_ROBBED_BY_MUGGER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_HIRE_MERCENARY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BUY_WANTEDLEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BUY_OFFTHERADAR(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_CARWASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_CINEMA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_TELESCOPE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_HOLDUPS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BUY_PASSIVE_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BANK_INTEREST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_PROSTITUTES(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_ARREST_BAIL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_CALL_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_BOUNTY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_FROM_ROCKSTAR(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9B5016A6433A68C5(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_PLAYER_HEALTHCARE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_NO_COPS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_REQUEST_JOB(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SPENT_REQUEST_HEIST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_LOTTERY_TICKET(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BUY_FAIRGROUND_RIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7C4FCCD2E4DEB394(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_JOB_SKIP(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BOSS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_PAY_GOON(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDBC966A01C02BCA7(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_MOVE_YACHT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFC4EE00A7B3BFB76(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_BUY_CONTRABAND(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_VIP_UTILITY_CHARGES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x112209CE0290C03A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xED5FD7AF10F5E262(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0D30EB83668E63C5(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB49ECA122467D05F(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE23ADC6FCB1F29AE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0FE8E1FCD2B86B33(rage::scrNativeCallContext* src)
	{
	}
	static void _0x69EF772B192614C1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8E243837643D9583(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBD0EFB25CCA8F97A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA95F667A755725DA(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_PURCHASE_WAREHOUSE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4128464231E3CA0B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2FAB6614CE22E196(rage::scrNativeCallContext* src)
	{
	}
	static void _0x05F04155A226FBBF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE8B0B270B6E7C76E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5BCDE0F640C773D2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x998E18CEB44487FC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFA07759E6FDDD7CF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6FD97159FE3C971A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x675D19C6067CAE08(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA51B086B0B2C0F7A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD7CCCBA28C4ECAF0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0035BB914316F1E3(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5F456788B05FAEAC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA75CCF58A60A5FD1(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB4C2EC463672474E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2AFC2D19B50797F2(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_IMPORT_EXPORT_REPAIR(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_PURCHASE_HANGAR(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_UPGRADE_HANGAR(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_HANGAR_UTILITY_CHARGES(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_HANGAR_STAFF_CHARGES(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BUY_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_UPGRADE_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BUY_BUNKER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_UPGRADE_BUNKER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_SELL_BUNKER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BALLISTIC_EQUIPMENT(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_RDR_BONUS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_WAGE_PAYMENT(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_WAGE_PAYMENT_BONUS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BUY_BASE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_UPGRADE_BASE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BUY_TILTROTOR(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_UPGRADE_TILTROTOR(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_EMPLOY_ASSASSINS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_GANGOPS_CANNON(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_GANGOPS_START_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_SELL_BASE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_TARGET_REFUND(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANGOPS_WAGES(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANGOPS_WAGES_BONUS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_DAR_CHALLENGE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_DOOMSDAY_FINALE_BONUS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANGOPS_AWARDS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANGOPS_ELITE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_RIVAL_DELIVERY_COMPLETED(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_GANGOPS_START_STRAND(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_GANGOPS_TRIP_SKIP(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANGOPS_JOBS_SETUP(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_GANGOPS_JOBS_FINALE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A7CEC72C3443BCC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE0F82D68C7039158(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB4DEAE67F35E2ACD(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_BB_EVENT_BONUS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A93C46AAB1EACC9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x226C284C830D0CA8(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_HACKER_TRUCK_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xED76D195E6E3BF7F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1DC9B749E7AE282B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC6E74CF8C884C880(rage::scrNativeCallContext* src)
	{
	}
	static void _0x65482BFD0923C8A1(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_RDRHATCHET_BONUS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_NIGHTCLUB_BAR_DRINK(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BOUNTY_HUNTER_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_REHIRE_DJ(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_ARENA_JOIN_SPECTATOR(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_ARENA_SKILL_LEVEL_PROGRESSION(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_ARENA_CAREER_PROGRESSION(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_MAKE_IT_RAIN(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BUY_ARENA(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_UPGRADE_ARENA(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_ARENA_SPECTATOR_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_SPIN_THE_WHEEL_PAYMENT(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_SPIN_THE_WHEEL_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_ARENA_PREMIUM(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_ARENA_WAR(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_ASSASSINATE_TARGET_KILLED_2(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_BB_EVENT_CARGO(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_RC_TIME_TRIAL(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_DAILY_OBJECTIVE_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_CASINO_MEMBERSHIP(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_BUY_CASINO(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_UPGRADE_CASINO(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SPENT_CASINO_GENERIC(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_TIME_TRIAL_WIN(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_COLLECTION_ITEM(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_COLLECTABLES_ACTION_FIGURES(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_COMPLETE_COLLECTION(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_SELLING_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_CASINO_MISSION_REWARD(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_CASINO_STORY_MISSION_REWARD(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_CASINO_MISSION_PARTICIPATION(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_EARN_FROM_CASINO_AWARD(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_VC_BANK_BALANCE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_VC_WALLET_BALANCE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_VC_BALANCE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_EVC_BALANCE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PVC_BALANCE(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_VC_WALLET_BALANCE_IS_NOT_LESS_THAN(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_VC_BANK_BALANCE_IS_NOT_LESS_THAN(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_VC_BANK_WALLET_BALANCE_IS_NOT_LESS_THAN(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PVC_TRANSFER_BALANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x08E8EEADFD0DC4A0(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_RECEIVE_PLAYER_CASH(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_REMAINING_VC_DAILY_TRANSFERS_2(rage::scrNativeCallContext* src)
	{
	}
	static void WITHDRAW_VC(rage::scrNativeCallContext* src)
	{
	}
	static void DEPOSIT_VC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE154B48B68EF72BC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6FCF8DDEA146C45B(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_USE_SERVER_TRANSACTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_CATALOG_ITEM_EXISTS(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_GET_PRICE(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_CATALOG_IS_READY(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_IS_CATALOG_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x85F6C9ABA1DE2BCF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x357B152EF96C30B6(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_GET_CATALOG_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE3E5A7C64CA2C6ED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0395CB47B022E62C(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_START_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x72EB7BA9B69BF6AB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x170910093218C8B9(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC13C38E47EA5DF31(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_IS_SESSION_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x74A0FD0688F1EE45(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_SESSION_APPLY_RECEIVED_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_IS_SESSION_REFRESH_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_GET_BALANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x613F125BA3BD2EB9(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_BASKET_START(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_BASKET_DELETE(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_BASKET_END(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_BASKET_ADD_ITEM(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_BASKET_IS_FULL(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_CHECKOUT_START(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC830417D630A50F9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x79EDAC677CA62F81(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_BEGIN_SERVICE(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_END_SERVICE(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_DELETE_CHARACTER_SLOT(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_DELETE_CHARACTER_SLOT_GET_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_DELETE_SET_TELEMETRY_NONCE_SEED(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_TRANSFER_CASH_GET_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2(rage::scrNativeCallContext* src)
	{
	}
	static void _NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED(rage::scrNativeCallContext* src)
	{
	}
	static void NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_SIGNED_IN(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_SIGNED_ONLINE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBD545D44CCE70597(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEBCAB9E5048434F4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x74FB3E29E6D10FA9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7808619F31FF22DB(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA0FA4EC6A05DA44E(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAVE_JUST_UPLOAD_LATER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8D11E61A4ABF49CC(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_CLOUD_AVAILABLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_SOCIAL_CLUB_ACCOUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA9775570DB788CF(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_HOST(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_HOST(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4237E822315D8BA9(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAVE_ONLINE_PRIVILEGES(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_HAS_AGE_RESTRICTED_PROFILE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAVE_USER_CONTENT_PRIVILEGES(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAEEF48CDF5B6CE7C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x78321BEA235FD8CD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x595F028698072DD9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x83F28CE49FBBFFBA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x07EAB372C8841D99(rage::scrNativeCallContext* src)
	{
	}
	static void _0x906CA41A4B74ECA4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x023ACAB2DC9DC4A4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x76BF03FADBF154F5(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_AGE_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0CF6CC51AA18F0F8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x64E5C4CC82847B73(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F7BC3539F9E0224(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_HAVE_ONLINE_PRIVILEGE_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA8ACB6459542A8C8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x83FE8D7229593017(rage::scrNativeCallContext* src)
	{
	}
	static void _0x53C10C8BD774F2C9(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_BAIL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BAIL(rage::scrNativeCallContext* src)
	{
	}
	static void _0x283B6062A2C01E9B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8B4FFC790CA131EF(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_TRANSITION_TRACK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x04918A41BC9B8157(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_ACCESS_MULTIPLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_MULTIPLAYER_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_ENTER_MULTIPLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_ENTER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_FRIEND_MATCHMAKING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_CREW_MATCHMAKING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_ACTIVITY_QUICKMATCH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_HOST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_HOST_CLOSED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_HOST_FRIENDS_ONLY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_IS_CLOSED_FRIENDS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_IS_CLOSED_CREW(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_IS_SOLO(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_IS_PRIVATE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_END(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_KICK_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_GET_KICK_VOTE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x041C7F2A6C9894E6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x59DF79317F85A7E0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFFE1E5B792D92B34(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_SET_MATCHMAKING_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_SET_MATCHMAKING_GROUP_MAX(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_GET_MATCHMAKING_GROUP_FREE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCAE55F48D3D7875C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF49ABC20D8552257(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4811BBAC21C5FCD5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5539C3EBF104A53A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x702BC4D605522539(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_SET_MATCHMAKING_PROPERTY_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_SET_MATCHMAKING_MENTAL_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5ECD378EE64450AB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x59D421683D31835A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1153FA02A659051C(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SESSION_HOSTED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ADD_FOLLOWERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_FOLLOWERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x600F8CB31C7AAB6E(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_TARGETING_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE532D6811B3A4D2A(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_FIND_MATCHED_GAMERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_FINDING_GAMERS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF9B83B77929D8863(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_NUM_FOUND_GAMERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_FOUND_GAMER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_FOUND_GAMERS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_GAMER_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2CC848A861D01493(rage::scrNativeCallContext* src)
	{
	}
	static void _0x94A8394D150B013A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5AE17C6B0134B7F1(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_GAMER_STATUS_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_GET_GAMER_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_JOIN_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_CANCEL_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_FORCE_CANCEL_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_PENDING_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC42DD763159F3461(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_ACCEPT_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_WAS_INVITED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_GET_INVITER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD313DE83394AF134(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBDB6F89C729CF388(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SUPPRESS_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BLOCK_INVITES(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_BLOCK_INVITES_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF814FEC6A19FD6E0(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_BLOCK_KICKED_PLAYERS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7AC752103856FB20(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_OFFLINE_INVITE_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x140E6A44870A11CE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_HOST_SINGLE_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_GAME_IN_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_SESSION_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_IN_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_SESSION_STARTED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_SESSION_BUSY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_SESSION_END(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_MARK_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_IS_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_CHANGE_SLOTS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_GET_PRIVATE_SLOTS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_VOICE_HOST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_VOICE_LEAVE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_KEEP_FOCUSPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B8ED3DB018927B1(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_IS_IN_VOICE_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB5D3453C98456528(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SESSION_IS_VOICE_SESSION_BUSY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SEND_TEXT_MESSAGE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_ACTIVITY_SPECTATOR(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_ACTIVITY_SPECTATOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0E4F77F7B9D74D84(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_ACTIVITY_PLAYER_NUM(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HOST_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DO_TRANSITION_QUICKMATCH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_JOIN_GROUP_ACTIVITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1888694923EF4591(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB13E88E655E5A3BC(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_CLOSED_FRIENDS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_CLOSED_CREW(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_SOLO(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_PRIVATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x617F49C2668E6155(rage::scrNativeCallContext* src)
	{
	}
	static void _0x261E97AD7BCF3D40(rage::scrNativeCallContext* src)
	{
	}
	static void _0x39917E1B4CB0F911(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2CE9D95E4051AECD(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_INVITE_GAMERS_TO_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_LEAVE_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_LAUNCH_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA2E9C1AB8A92E8CD(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_BAIL_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DO_TRANSITION_TO_GAME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DO_TRANSITION_TO_NEW_GAME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DO_TRANSITION_TO_FREEMODE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_TO_GAME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_TRANSITION_MEMBERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_APPLY_TRANSITION_PARAMETER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_APPLY_TRANSITION_PARAMETER_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_HOST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_TRANSITION_HOST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_IN_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_STARTED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_BUSY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_MATCHMAKING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC571D0E77D8BBC29(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1398582B7F72B3ED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F8E00FB18239600(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF6F4383B7C92F11A(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OPEN_TRANSITION_MATCHMAKING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLOSE_TRANSITION_MATCHMAKING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_TRANSITION_VISIBILITY_LOCK(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TRANSITION_VISIBILITY_LOCKED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_TRANSITION_ACTIVITY_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CHANGE_TRANSITION_SLOTS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x973D76AA760A6CB6(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_PLAYER_STARTED_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ARE_TRANSITION_DETAILS_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_JOIN_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3F9990BF5F22759C(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_ACTIVITY_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4A9FDE3A5A6D0437(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SEND_PRESENCE_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SEND_PRESENCE_TRANSITION_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1171A97A3D3981B6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x742B58F723233ED9(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_NUM_PRESENCE_INVITES(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACCEPT_PRESENCE_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REMOVE_PRESENCE_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRESENCE_INVITE_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRESENCE_INVITE_INVITER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRESENCE_INVITE_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRESENCE_INVITE_SESSION_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRESENCE_INVITE_CONTENT_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD39B3FFF8FFDD5BF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x728C4CC7920CD102(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8806CEBFABD3CE05(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_FOLLOW_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACTION_FOLLOW_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_FOLLOW_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEBF8284D8CADEB53(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REMOVE_TRANSITION_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REMOVE_ALL_TRANSITION_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF083835B70BA9BFE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_INVITE_GAMERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_INVITED_GAMER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x71DC455F5CD1C2B1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3855FB5EB2C5E8B2(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_INVITE_ON_CALL_FOR_INVITE_MENU(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4AD490AE1536933B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0D77A82DC2D0DA59(rage::scrNativeCallContext* src)
	{
	}
	static void FILLOUT_PM_PLAYER_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void FILLOUT_PM_PLAYER_LIST_WITH_NAMES(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE26CCFF8094D8C74(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_IN_PLATFORM_PARTY(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_PLATFORM_PARTY_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PLATFORM_PARTY_MEMBERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_IN_PLATFORM_PARTY_CHAT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2BF66D2E7414F686(rage::scrNativeCallContext* src)
	{
	}
	static void _0x14922ED3E38761F0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6CE50E47F5543D0C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFA2888E3833C8E96(rage::scrNativeCallContext* src)
	{
	}
	static void _0x25D990F8E0E3F13C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF1B84178F8674195(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_RANDOM_INT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_RANDOM_INT_RANGED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PLAYER_IS_CHEATER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PLAYER_GET_CHEATER_REASON(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PLAYER_IS_BADSPORT(rage::scrNativeCallContext* src)
	{
	}
	static void _TRIGGER_SCRIPT_CRC_CHECK_ON_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA12D3A5A3753CC23(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF287F506767CC8A9(rage::scrNativeCallContext* src)
	{
	}
	static void _REMOTE_CHEAT_DETECTED(rage::scrNativeCallContext* src)
	{
	}
	static void BAD_SPORT_PLAYER_LEFT_DETECTED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_APPLY_PED_SCAR_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_IS_THIS_SCRIPT_MARKED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_MAX_NUM_PARTICIPANTS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_NUM_PARTICIPANTS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_SCRIPT_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_FINISH_BROADCASTING_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5D10B3795F3FC886(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PLAYER_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PARTICIPANT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PLAYER_INDEX_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_NUM_CONNECTED_PLAYERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_CONNECTED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_TOTAL_NUM_PLAYERS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PARTICIPANT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_A_PARTICIPANT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_HOST_OF_THIS_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_HOST_OF_THIS_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_HOST_OF_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_MISSION_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_SCRIPT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x560B423D73015E77(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x638A3A81733086DB(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2302C0264EA58D31(rage::scrNativeCallContext* src)
	{
	}
	static void _0x741A3D8380319A81(rage::scrNativeCallContext* src)
	{
	}
	static void PARTICIPANT_ID(rage::scrNativeCallContext* src)
	{
	}
	static void PARTICIPANT_ID_TO_INT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2DA41ED6E1FCD7A5(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_DESTROYER_OF_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC434133D9BA52777(rage::scrNativeCallContext* src)
	{
	}
	static void _0x83660B734994124D(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_DESTROYER_OF_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_ENTITY_KILLER_OF_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_RESURRECT_LOCAL_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_LOCAL_PLAYER_INVINCIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DISABLE_INVINCIBLE_FLASHING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB07D3185E11657A5(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_NETWORK_ID_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_ENTITY_FROM_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_ENTITY_IS_NETWORKED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_ENTITY_IS_LOCAL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_UNREGISTER_NETWORKED_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DOES_NETWORK_ID_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_CONTROL_OF_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7242F8B741CE1086(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REQUEST_CONTROL_OF_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REQUEST_CONTROL_OF_DOOR(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_CONTROL_OF_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_CONTROL_OF_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_CONTROL_OF_DOOR(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_DOOR_NETWORKED(rage::scrNativeCallContext* src)
	{
	}
	static void VEH_TO_NET(rage::scrNativeCallContext* src)
	{
	}
	static void PED_TO_NET(rage::scrNativeCallContext* src)
	{
	}
	static void OBJ_TO_NET(rage::scrNativeCallContext* src)
	{
	}
	static void NET_TO_VEH(rage::scrNativeCallContext* src)
	{
	}
	static void NET_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void NET_TO_OBJ(rage::scrNativeCallContext* src)
	{
	}
	static void NET_TO_ENT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_LOCAL_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HANDLE_FROM_USER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HANDLE_FROM_MEMBER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HANDLE_FROM_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HASH_FROM_PLAYER_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HASH_FROM_GAMER_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HANDLE_FROM_FRIEND(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GAMERTAG_FROM_HANDLE_START(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GAMERTAG_FROM_HANDLE_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD66C9E72B3CC4982(rage::scrNativeCallContext* src)
	{
	}
	static void _0x58CC181719256197(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ARE_HANDLES_THE_SAME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_HANDLE_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_GAMER_IN_MY_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SHOW_PROFILE_UI(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PLAYER_IS_ROCKSTAR_DEV(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PLAYER_INDEX_IS_CHEATER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_ENTITY_NET_SCRIPT_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x37D5F739FD494675(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_INACTIVE_PROFILE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_MAX_FRIENDS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_FRIEND_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_FRIEND_ONLINE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_FRIEND_HANDLE_ONLINE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_FRIEND_IN_SAME_TITLE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_FRIEND_IN_MULTIPLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_FRIEND(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PENDING_FRIEND(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_ADDING_FRIEND(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ADD_FRIEND(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_FRIEND_INDEX_ONLINE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_PLAYER_IS_PASSIVE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PLAYER_OWNS_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_SET_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4C2A9FDC22377075(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB309EBEA797E001F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x26F07DD83A5F7F98(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_HEADSET(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7D395EA61622E116(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_LOCAL_TALKING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GAMER_HAS_HEADSET(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_GAMER_TALKING(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_COMMUNICATE_WITH_GAMER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_GAMER_MUTED_BY_ME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_AM_I_MUTED_BY_GAMER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_GAMER_BLOCKED_BY_ME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_AM_I_BLOCKED_BY_GAMER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_VIEW_GAMER_USER_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_PLAY_MULTIPLAYER_WITH_GAMER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CAN_GAMER_PLAY_MULTIPLAYER_WITH_ME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_TALKING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PLAYER_HAS_HEADSET(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_MUTED_BY_ME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_AM_I_MUTED_BY_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_BLOCKED_BY_ME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_AM_I_BLOCKED_BY_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PLAYER_LOUDNESS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_TALKER_PROXIMITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_TALKER_PROXIMITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_VOICE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCFEB46DCD7D8D5EB(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_TRANSITION_CHAT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_TEAM_ONLY_CHAT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x265559DA40B3F327(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4348BFDA56023A2F(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_TEAM_RESTRICTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3C5C1E2C2FF814B1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9D7AFCBF21C51712(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_NO_SPECTATOR_CHAT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6A5D89D7769A40D8(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_SEND_RESTRICTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_VOICE_CHANNEL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_VOICE_CHANNEL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_APPLY_VOICE_PROXIMITY_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_VOICE_PROXIMITY_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5E3AA4CA2B6FB0EE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA575C391FEA25CC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xADB57E5B663CCA8B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8EF52ACAECC51D9C(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_IS_TEXT_CHAT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME(rage::scrNativeCallContext* src)
	{
	}
	static void _SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_RICH_PRESENCE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_RICH_PRESENCE_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_TIMEOUT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_RESPAWN_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBF22E0F32968E967(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2E4C123D1C8A710E(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_SERVICE_IS_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_PLAYER_IS_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_PLAYER_GET_DESC(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_IS_ROCKSTAR_CLAN(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_GET_UI_FORMATTED_TAG(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_GET_MEMBERSHIP_DESC(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_IS_CLAN_MEMBERSHIP_FINISHED_DOWNLOADING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_GET_MEMBERSHIP_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_GET_MEMBERSHIP_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_GET_MEMBERSHIP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_JOIN(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CLAN_ANIMATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2B51EDBEFC301339(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC32EA7A2F6CA7557(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_GET_EMBLEM_TXD_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_REQUEST_EMBLEM(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_IS_EMBLEM_READY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLAN_RELEASE_EMBLEM(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRIMARY_CLAN_DATA_START(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRIMARY_CLAN_DATA_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PRIMARY_CLAN_DATA_NEW(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NETWORK_ID_CAN_MIGRATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_NETWORK_ID_SYNC_TO_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_ENTITY_CAN_BLEND(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0379DAF89BA09AA5(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x32EBD154CB6B8B99(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6540EDC4F45DA089(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NETWORK_CUTSCENE_ENTITIES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3FA36981311FA4FF(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NETWORK_ID_OWNED_BY_PARTICIPANT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_INVISIBLE_LOCALLY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_VISIBLE_LOCALLY(rage::scrNativeCallContext* src)
	{
	}
	static void FADE_OUT_LOCAL_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_FADE_OUT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_FADE_IN_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_FADING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_ENTITY_FADING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_IN_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_LOCALLY_INVISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENTITY_LOCALLY_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_DAMAGE_TRACKER_ACTIVE_ON_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _ACTIVATE_DAMAGE_TRACKER_ON_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SPHERE_VISIBLE_TO_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void RESERVE_NETWORK_MISSION_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void RESERVE_NETWORK_MISSION_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void RESERVE_NETWORK_MISSION_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void _RESERVE_NETWORK_LOCAL_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void _RESERVE_NETWORK_LOCAL_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void _RESERVE_NETWORK_LOCAL_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_REGISTER_MISSION_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_REGISTER_MISSION_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_REGISTER_MISSION_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void _CAN_REGISTER_MISSION_PICKUPS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE16AA70CE9BEEDC3(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_REGISTER_MISSION_ENTITIES(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_RESERVED_MISSION_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_RESERVED_MISSION_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_RESERVED_MISSION_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_CREATED_MISSION_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_CREATED_MISSION_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_CREATED_MISSION_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE42D626EEC94E5D9(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_NUM_NETWORK_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_NUM_NETWORK_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_NUM_NETWORK_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_NUM_NETWORK_PICKUPS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA7F0B77D80A4EB7(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NETWORK_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NETWORK_TIME_ACCURATE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_NETWORK_TIME_STARTED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_OFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TIME_LESS_THAN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TIME_MORE_THAN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TIME_EQUAL_TO(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_DIFFERENCE(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF12E6CD06C73D69E(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOUD_TIME_AS_INT(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_DATE_AND_TIME_FROM_UNIX_EPOCH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_IN_SPECTATOR_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_IN_FREE_CAM_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5C707A667DF8B9FA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_IN_SPECTATOR_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_IN_MP_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_IN_MP_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_IN_MP_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFAC18E7356BD3210(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NETWORK_VEHICLE_RESPOT_TIMER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NETWORK_VEHICLE_AS_GHOST(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA2A707979FE754DC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x838DA0936A24ED4D(rage::scrNativeCallContext* src)
	{
	}
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void _0x21D04D7BC538C146(rage::scrNativeCallContext* src)
	{
	}
	static void _0x13F1FCB111B820B0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA7C511FA1C5BDA38(rage::scrNativeCallContext* src)
	{
	}
	static void _0x658500AE6D723A7E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x17330EBF2F2124A8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4BA166079D658ED4(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD7B6C73CAD419BCF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7EF7649B64D7FF10(rage::scrNativeCallContext* src)
	{
	}
	static void _0x77758139EC9B66C7(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CREATE_SYNCHRONISED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA5EAFE473E45C442(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x45F35C0EDC33B03B(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_START_SYNCHRONISED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_STOP_SYNCHRONISED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC9B43A33D09CADA7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x144DA052257AE7D8(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFB1F9381E80FA13F(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_QUERY_RESPAWN_RESULTS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CANCEL_RESPAWN_SEARCH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_RESPAWN_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_RESPAWN_RESULT_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_START_SOLO_TUTORIAL_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFB680D403909DC70(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_END_TUTORIAL_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_IN_TUTORIAL_SESSION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB37E4E6A2388CA7B(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_IS_PLAYER_EQUAL_TO_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CONCEAL_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_PLAYER_CONCEALED(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_CONCEAL_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_IS_ENTITY_CONCEALED(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_CLOCK_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_CLOCK_TIME_OVERRIDDEN(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ADD_ENTITY_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ADD_ENTITY_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ADD_ENTITY_DISPLAYED_BOUNDARIES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2B1C623823DB0D9D(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REMOVE_ENTITY_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ENTITY_AREA_DOES_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4DF7CFFF471A7FB1(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ENTITY_AREA_IS_OCCUPIED(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SET_NETWORK_ID_DYNAMIC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA6FCECCF4721D679(rage::scrNativeCallContext* src)
	{
	}
	static void _0x95BAF97C82464629(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_IS_CLOUD_BACKGROUND_SCRIPTS_REQUEST_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_REQUEST_CLOUD_TUNABLES(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_TUNABLE_CLOUD_CRC(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DOES_TUNABLE_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACCESS_TUNABLE_INT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACCESS_TUNABLE_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACCESS_TUNABLE_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DOES_TUNABLE_EXIST_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_ALLOCATE_TUNABLES_REGISTRATION_DATA_MAP(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACCESS_TUNABLE_INT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_REGISTER_TUNABLE_INT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACCESS_TUNABLE_FLOAT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_REGISTER_TUNABLE_FLOAT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_ACCESS_TUNABLE_BOOL_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_REGISTER_TUNABLE_BOOL_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_GET_CONTENT_MODIFIER_LIST_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7DB53B37A2F211A0(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_RESET_BODY_TRACKER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_NUM_BODY_TRACKERS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2E0BF682CC778D49(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0EDE326D47CD0F3E(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SET_VEHICLE_WHEELS_DESTRUCTIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x38B7C51AB1EDC7D8(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_EXPLODE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A5E0621DD815A9A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCD71A4ECAB22709E(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_OVERRIDE_COORDS_AND_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE6717E652B8C8D8A(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_DISABLE_PROXIMITY_MIGRATION(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_SET_PROPERTY_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CLEAR_PROPERTY_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x367EF5E2F439B4C6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x94538037EE44F5CF(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_CACHE_LOCAL_PLAYER_HEAD_BLEND_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_COMMERCE_ITEMS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_COMMERCE_DATA_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB606E6CC59664972(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1D4DC17C38FEAFF0(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_COMMERCE_ITEM_NUM_CATS(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0x58C21165F6545892(rage::scrNativeCallContext* src)
	{
	}
	static void IS_COMMERCE_STORE_OPEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_STORE_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_COMMERCE_ITEM_IMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_ALL_COMMERCE_ITEM_IMAGES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x722F5D28B61C5EA8(rage::scrNativeCallContext* src)
	{
	}
	static void IS_STORE_AVAILABLE_TO_USER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x265635150FB0D82E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x444C4525ECE0A4B9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x59328EB08C5CEB2B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFAE628F1E9ADB239(rage::scrNativeCallContext* src)
	{
	}
	static void _0x754615490A029508(rage::scrNativeCallContext* src)
	{
	}
	static void _0x155467ACA0F55705(rage::scrNativeCallContext* src)
	{
	}
	static void CLOUD_DELETE_MEMBER_FILE(rage::scrNativeCallContext* src)
	{
	}
	static void CLOUD_HAS_REQUEST_COMPLETED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3A3D5568AF297CD5(rage::scrNativeCallContext* src)
	{
	}
	static void CLOUD_CHECK_AVAILABILITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC7ABAC5DE675EE3B(rage::scrNativeCallContext* src)
	{
	}
	static void CLOUD_GET_AVAILABILITY_CHECK_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8B0C2964BA471961(rage::scrNativeCallContext* src)
	{
	}
	static void _0x88B588B41FF7868E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x67FC09BC554A75E5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x966DD84FB6A46017(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_COPY_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9FEDF86898F100E9(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_HAS_CREATE_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x24E4E51FC16305F9(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CREATE_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CREATE_CONTENT_ID(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_CLEAR_CREATE_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_QUERY_MY_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x692D58DF40657E8C(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_QUERY_BY_CONTENT_ID(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_QUERY_BY_CONTENT_IDS(rage::scrNativeCallContext* src)
	{
	}
	static void _UGC_QUERY_RECENTLY_CREATED_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_BOOKMARKED_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_MY_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_FRIEND_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CREW_CONTENT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_GET_BY_CATEGORY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BALANCE_ADD_MACHINE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BALANCE_ADD_MACHINES(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA7862BC5ED1DFD7E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x97A770BEEF227E2B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5324A0E3E4CE3570(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_CANCEL_QUERY(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_IS_GETTING(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_HAS_GET_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x941E5306BCD7C2C7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC87E740D9F3872CC(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_QUERY_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_NUM(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_TOTAL(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_CLEAR_QUERY_RESULTS(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0x584770794D758C18(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8C8D2739BA44AF0F(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_USER_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAEAB987727C5A8A4(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_CONTENT_CATEGORY(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_DESCRIPTION_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_UPDATED_DATE(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_FILE_VERSION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1D610EB0FEA716D9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7FCC39C46C3C03BD(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_LANGUAGE(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_IS_PUBLISHED(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_IS_VERIFIED(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_RATING(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_RATING_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_RATING_POSITIVE_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_HAS_PLAYER_RECORD(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_REQUEST_CONTENT_DATA_FROM_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_REQUEST_CACHED_DESCRIPTION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2D5DC831176D0114(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEBFA8D50ADDC54C4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x162C23CA83ED0A62(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CACHED_DESCRIPTION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5A34CD9C3C5BEC44(rage::scrNativeCallContext* src)
	{
	}
	static void _0x68103E2247887242(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_PUBLISH(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_SET_BOOKMARKED(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_SET_DELETED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x45E816772E93A9DB(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_HAS_MODIFY_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x793FF272D5B365F4(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_MODIFY_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_CLEAR_MODIFY_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB746D20B17F2A229(rage::scrNativeCallContext* src)
	{
	}
	static void _0x63B406D7884BFA95(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4D02279C83BE69FE(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_GET_CREATOR_NUM(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_POLICIES_MAKE_PRIVATE(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_CLEAR_OFFLINE_QUERY(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF98DDE0A8ED09323(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFD75DABC0957BF33(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_IS_LANGUAGE_SUPPORTED(rage::scrNativeCallContext* src)
	{
	}
	static void _FACEBOOK_SET_HEIST_COMPLETE(rage::scrNativeCallContext* src)
	{
	}
	static void _FACEBOOK_SET_CREATE_CHARACTER_COMPLETE(rage::scrNativeCallContext* src)
	{
	}
	static void _FACEBOOK_SET_MILESTONE_COMPLETE(rage::scrNativeCallContext* src)
	{
	}
	static void _FACEBOOK_IS_SENDING_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void _FACEBOOK_DO_UNK_CHECK(rage::scrNativeCallContext* src)
	{
	}
	static void _FACEBOOK_IS_AVAILABLE(rage::scrNativeCallContext* src)
	{
	}
	static void TEXTURE_DOWNLOAD_REQUEST(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0B203B4AFDE53A4F(rage::scrNativeCallContext* src)
	{
	}
	static void UGC_TEXTURE_DOWNLOAD_REQUEST(rage::scrNativeCallContext* src)
	{
	}
	static void TEXTURE_DOWNLOAD_RELEASE(rage::scrNativeCallContext* src)
	{
	}
	static void TEXTURE_DOWNLOAD_HAS_FAILED(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_STATUS_OF_TEXTURE_DOWNLOAD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x60EDD13EB3AC1FF3(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_SHOULD_SHOW_CONNECTIVITY_TROUBLESHOOTING(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_IS_CABLE_CONNECTED(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_ROS_PRIVILEGE_9(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_ROS_PRIVILEGE_10(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_HAS_PLAYER_BEEN_BANNED(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_HAVE_SOCIAL_CLUB_PRIVILEGE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_ROS_PRIVILEGE_3(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_ROS_PRIVILEGE_4(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_ROS_PRIVILEGE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_HAS_ROS_PRIVILEGE_END_DATE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_ROS_PRIVILEGE_24(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_ROS_PRIVILEGE_25(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36391F397731595D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDEB2B99A1AF1A2A6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9465E683B12D3F6B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA59CCAE5D01E4CE(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_HAS_GAME_BEEN_ALTERED(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_UPDATE_PLAYER_SCARS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC505036A35AFD01B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x267C78C60E806B9A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6BFF5F84102DF80A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5C497525F803486B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6FB7BB3607D27FA2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x45A83257ED02D9BC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x16D3D49902F697BB(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD414BE129BB81B32(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0E3A041ED6AC2B45(rage::scrNativeCallContext* src)
	{
	}
	static void _0x350C23949E43686C(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_NUM_UNACKED_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3765C3A3E8192E10(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_OLDEST_RESEND_COUNT_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_REPORT_MYSELF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x64D779659BC37B19(rage::scrNativeCallContext* src)
	{
	}
	static void _NETWORK_GET_PLAYER_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x33DE49EDF4DDE77A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAA5FAFCD2C5F5E47(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAEDF1BC1C133D6E3(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2555CF7DA5473794(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6FD992C4A1C1B986(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDB663CC9FF3407A9(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_OBJECT_NO_OFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void PLACE_OBJECT_ON_GROUND_PROPERLY(rage::scrNativeCallContext* src)
	{
	}
	static void _PLACE_OBJECT_ON_GROUND_PROPERLY_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAFE24E4D29249E4A(rage::scrNativeCallContext* src)
	{
	}
	static void SLIDE_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_OBJECT_TARGETTABLE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_OBJECT_SOMETHING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_OBJECT_OF_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_OBJECT_BEEN_BROKEN(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_COMPLETELY_DESTROYED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2542269291C6AC84(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_OBJECT_OFFSET_FROM_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _DOOR_CONTROL(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_DOOR_TO_SYSTEM(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_DOOR_FROM_SYSTEM(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_SET_DOOR_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_GET_DOOR_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_GET_DOOR_PENDING_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_SET_OPEN_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_GET_OPEN_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_SET_SPRING_REMOVED(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_SET_HOLD_OPEN(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA85A21582451E951(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DOOR_REGISTERED_WITH_SYSTEM(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DOOR_CLOSED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC7F29CA00F46350E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x701FDA1E82076BA4(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void DOOR_SYSTEM_FIND_EXISTING_DOOR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_GARAGE_EMPTY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_ENTIRELY_INSIDE_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_PARTIALLY_INSIDE_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_OBJECT_ENTIRELY_INSIDE_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_OBJECT_PARTIALLY_INSIDE_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_GARAGE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x190428512B240692(rage::scrNativeCallContext* src)
	{
	}
	static void _0x659F9D71F52843F8(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_SAVING_IN_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x66A49D021870FE88(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_POINT_IN_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_OBJECT_CAN_CLIMB_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_OBJECT_PHYSICS_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANY_OBJECT_NEAR_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_OBJECT_NEAR_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_OBJECT_HIGH_DETAIL_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE7E4C198B0185900(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE05F6AEEFEB0BB02(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF9C1681347C8BD15(rage::scrNativeCallContext* src)
	{
	}
	static void TRACK_OBJECT_VISIBILITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_OBJECT_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC6033D32241F6FB5(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEB6F1A9B5510A5D2(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_UNK_GLOBAL_BOOL_RELATED_TO_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CREATE_WEAPON_OBJECT_LIGHT_SOURCE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RAYFIRE_MAP_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_STATE_OF_RAYFIRE_MAP_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_RAYFIRE_MAP_OBJECT_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_PICKUP_ROTATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x394CD08E31313C28(rage::scrNativeCallContext* src)
	{
	}
	static void _0x826D1EE4D1CAFC78(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_AMBIENT_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1E3F1B1B891A2AAA(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_PORTABLE_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void _CREATE_PORTABLE_PICKUP_2(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_PORTABLE_PICKUP_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_PORTABLE_PICKUP_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void _HIDE_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0BF3B3BD47D79C08(rage::scrNativeCallContext* src)
	{
	}
	static void _0x78857FC65CADB909(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SAFE_PICKUP_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD4A7A435B3710D05(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB7C6D80FB371659A(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PICKUP_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8DCA505A5C196F05(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ALL_PICKUPS_OF_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PICKUP_BEEN_COLLECTED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PICKUP(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_MONEY_PICKUPS(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_PICKUP_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_PICKUP_OBJECT_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PICKUP_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFC481C641EBBD27D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0378C08504160D0D(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PICKUP_REGENERATION_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x758A5C1B3B1E1990(rage::scrNativeCallContext* src)
	{
	}
	static void _0x616093EC6B139DD9(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFDC07C58E8AAB715(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TEAM_PICKUP_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x92AEFB5F6E294023(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0596843B34B95CE5(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA08FE5E49BDC39DD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x62454A641B41F3C5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x39A5FB7EAF150840(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDB41D07A45A6D4B7(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PICKUP_GENERATION_RANGE_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x31F924B53EADDF65(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1C1B69FAE509BA97(rage::scrNativeCallContext* src)
	{
	}
	static void _0x858EC9FD25DE04AA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3ED2B83AB2E82799(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8881C98A31117998(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8CFF648FBD7330F1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x46F3ADD1E2D5BAF2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x641F272B52E2F0F8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4C134B4DF76025D0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAA059C615DE9DD03(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF92099527DB8E2A7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA2C1F5E92AFE49ED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x762DB2D380B48D04(rage::scrNativeCallContext* src)
	{
	}
	static void _HIGHLIGHT_PLACEMENT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7813E8B8C4AE4799(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBFFE53AE7E67FCDC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD05A3241B9A86F19(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB2D0BDE54F0E8E5A(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_TYPE_FROM_PICKUP_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD6429A016084F1A5(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PICKUP_WEAPON_OBJECT_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_OBJECT_TEXTURE_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_OBJECT_TEXTURE_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF12E33034D887F66(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_OBJECT_LIGHT_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xADF084FB8F075D06(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3B2FD68DB5F8331C(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_OBJECT_STUNT_PROP_SPEEDUP(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_OBJECT_STUNT_PROP_DURATION(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PICKUP_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FORCE_OBJECT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _MARK_OBJECT_FOR_DELETION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8CAAB2BD3EA58BD4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x63ECF581BC70E363(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ENABLE_ARENA_PROP_PHYSICS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ENABLE_ARENA_PROP_PHYSICS_ON_PED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x734E1714D077DA9A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1A6CBB06E2D0D79D(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_IS_ARENA_PROP_PHYSICS_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3BD770D281982DB5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1C57C94A6446492A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB5B7742424BD4445(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CONTROL_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CONTROL_PRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CONTROL_RELEASED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CONTROL_JUST_PRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CONTROL_JUST_RELEASED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CONTROL_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CONTROL_NORMAL(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B73C77D9EB66E24(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CONTROL_UNBOUND_NORMAL(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CONTROL_NORMAL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DISABLED_CONTROL_PRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DISABLED_CONTROL_RELEASED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DISABLED_CONTROL_JUST_PRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DISABLED_CONTROL_JUST_RELEASED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DISABLED_CONTROL_NORMAL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DISABLED_CONTROL_UNBOUND_NORMAL(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD7D22F5592AED8BA(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_INPUT_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_INPUT_JUST_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CURSOR_LOCATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x23F09EADC01449D6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6CD79468A1E595C6(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CONTROL_GROUP_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCB0360EFEFB2580D(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PAD_SHAKE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x14D29BB12D47F68C(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PAD_SHAKE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF239400E16C23E08(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA0CEFCEA390AAB9B(rage::scrNativeCallContext* src)
	{
	}
	static void IS_LOOK_INVERTED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE1615EC03B3BB4FD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LOCAL_PLAYER_AIM_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_LOCAL_PLAYER_AIM_STATE_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x25AAA32BDC98F2A3(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_USING_ALTERNATE_DRIVEBY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ALLOW_MOVEMENT_WHILE_ZOOMED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_INPUT_EXCLUSIVE(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_CONTROL_ACTION(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_CONTROL_ACTION(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_ALL_CONTROL_ACTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_ALL_CONTROL_ACTIONS(rage::scrNativeCallContext* src)
	{
	}
	static void _SWITCH_TO_INPUT_MAPPING_SCHEME(rage::scrNativeCallContext* src)
	{
	}
	static void _SWITCH_TO_INPUT_MAPPING_SCHEME_2(rage::scrNativeCallContext* src)
	{
	}
	static void _RESET_INPUT_MAPPING_SCHEME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7F4724035FDCA1DD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ROADS_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ROADS_IN_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATHS_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SAFE_COORD_FOR_PED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_VEHICLE_NODE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_MAJOR_VEHICLE_NODE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NTH_CLOSEST_VEHICLE_NODE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NTH_CLOSEST_VEHICLE_NODE_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_NODE_PROPERTIES(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_NODE_ID_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_NODE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_NODE_IS_GPS_ALLOWED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_NODE_IS_SWITCHED_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_ROAD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x228E5C6AD4D74BFD(rage::scrNativeCallContext* src)
	{
	}
	static void _ARE_PATH_NODES_LOADED_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x07FB139B592FA687(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ROADS_BACK_TO_ORIGINAL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAA76052DDA9BFC3E(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_VEHICLE_NODE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_STREET_NAME_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GENERATE_DIRECTIONS_TO_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_IGNORE_NO_GPS_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_IGNORE_SECONDARY_ROUTE_NODES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GPS_DISABLED_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GPS_BLIP_ROUTE_LENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF3162836C28F9DA5(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GPS_BLIP_ROUTE_FOUND(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ROAD_SIDE_POINT_WITH_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_POINT_ON_ROAD_SIDE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_POINT_ON_ROAD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NEXT_GPS_DISABLED_ZONE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GPS_DISABLED_ZONE_AT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_GPS_DISABLED_ZONE_AT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_NAVMESH_REQUIRED_REGION(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_NAVMESH_REQUIRED_REGIONS(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_NAVMESH_REQUIRED_REGION_OWNED_BY_ANY_THREAD(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_NAVMESH_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_ALL_NAVMESH_REGIONS_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NAVMESH_LOADED_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x01708E8DD3FF8C65(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_NAVMESH_BLOCKING_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_NAVMESH_BLOCKING_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_NAVMESH_BLOCKING_OBJECT_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_HEIGHTMAP_TOP_Z_FOR_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_HEIGHTMAP_TOP_Z_FOR_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_HEIGHTMAP_BOTTOM_Z_FOR_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_PED(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_PED(rage::scrNativeCallContext* src)
	{
	}
	static void CLONE_PED(rage::scrNativeCallContext* src)
	{
	}
	static void _CLONE_PED_EX(rage::scrNativeCallContext* src)
	{
	}
	static void CLONE_PED_TO_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void _CLONE_PED_TO_TARGET_EX(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_COP_PED_IN_AREA_3D(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_INJURED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_HURT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_FATALLY_INJURED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_DEAD_OR_DYING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_CONVERSATION_PED_DEAD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_AIMING_FROM_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RELOADING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_A_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_PED_INSIDE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DESIRED_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void _FREEZE_PED_CAMERA_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_FACING_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_MELEE_COMBAT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_STOPPED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_SHOOTING_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANY_PED_SHOOTING_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_SHOOTING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ACCURACY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_ACCURACY(rage::scrNativeCallContext* src)
	{
	}
	static void _0x87DDEB611B329A9C(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void EXPLODE_PED_HEAD(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PED_ELEGANTLY(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_ARMOUR_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ARMOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_INTO_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ALLOW_VEHICLES_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_CREATE_RANDOM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_RANDOM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_RANDOM_PED_AS_DRIVER(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_CREATE_RANDOM_DRIVER(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_CREATE_RANDOM_BIKE_RIDER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_DRAGGED_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF2BEBCDFAFDAA19E(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_MALE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_HUMAN(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_PED_IS_IN(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_LAST_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5A7F62FDA59759BD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_NON_CREATION_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_NON_CREATION_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4759CC730F947C81(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_ON_MOUNT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MOUNT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_ON_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_ON_SPECIFIC_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MONEY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_MONEY(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFF4803BC019852D9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6B0E6172C9A4D902(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9911F4A24485F653(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_SUFFERS_CRITICAL_HITS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAFC976FD0580C7B3(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_SITTING_IN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_SITTING_IN_ANY_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_ON_FOOT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_ON_ANY_BIKE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_PLANTING_BOMB(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DEAD_PED_PICKUP_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_BOAT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_SUB(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_HELI(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_PLANE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_FLYING_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DIES_IN_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DIES_IN_SINKING_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_ARMOUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_LAST_DAMAGE_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_LAST_DAMAGE_BONE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2F3C3D9F50681DE4(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_TARGETTED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x061CB768363D6424(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFD325494792302D7(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_POLICE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_PED_TO_OPEN_PARACHUTE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_PARACHUTE_FREE_FALL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_FALLING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_JUMPING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x412F1364FA066CFB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x451D05012CCEC234(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_CLIMBING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_VAULTING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_DIVING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_JUMPING_OUT_OF_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_OPENING_A_DOOR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_PARACHUTE_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_PARACHUTE_LANDING_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PARACHUTE_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_PARACHUTE_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void _CREATE_PARACHUTE_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DUCKING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_DUCKING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_TAXI(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ID_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HIGHLY_PERCEPTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2F074C904D85129E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEC4B4B3B9908052A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x733C87D4CE22BEA2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_SEEING_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HEARING_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PED_VISUAL_FIELD_CENTER_ANGLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_STEALTH_MOVEMENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_STEALTH_MOVEMENT(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AS_GROUP_LEADER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AS_GROUP_MEMBER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PED_FROM_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_GROUP_MEMBER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_HANGING_ON_TO_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GROUP_SEPARATION_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_PRONE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_COMBAT(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_PED_IN_COMBAT_SEE_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_DOING_DRIVEBY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_JACKING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_BEING_JACKED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_BEING_STUNNED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PEDS_JACKER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_JACK_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_FLEEING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_COVER_FACING_LEFT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_HIGH_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_GOING_INTO_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PINNED_DOWN(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SEAT_PED_IS_TRYING_TO_ENTER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_PED_IS_TRYING_TO_ENTER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_SOURCE_OF_DEATH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_CAUSE_OF_DEATH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_TIME_OF_DEATH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5407B7288D0478B7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x336B3D200AB007CB(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RELATIONSHIP_GROUP_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_RELATIONSHIP_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_RELATIONSHIP_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void _DOES_RELATIONSHIP_GROUP_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RELATIONSHIP_BETWEEN_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_RELATIONSHIP_GROUP_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RELATIONSHIP_BETWEEN_GROUPS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5615E0C5EB2BC6E2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAD27D957598E49E9(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RESPONDING_TO_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_FIRING_PATTERN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_SHOOT_RATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_COMBAT_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_COMBAT_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_GROUP_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_GROUP_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_GROUP_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_PED_IS_FOLLOWING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GROUP_FORMATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GROUP_FORMATION_SPACING(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_PED_IS_USING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_PED_IS_ENTERING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_GRAVITY(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_DAMAGE_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_TIME_OF_LAST_PED_WEAPON_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ALLOWED_TO_DUCK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_NEVER_LEAVES_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AS_COP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MAX_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_MAX_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MAX_TIME_IN_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MAX_TIME_UNDERWATER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2735233A786B1BEF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_VEHICLE_FORCED_SEAT_USAGE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ALL_PED_VEHICLE_FORCED_SEAT_USAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB282749D5E028163(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_KNOCK_PED_OFF_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void KNOCK_PED_OFF_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COORDS_NO_GANG(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_AS_GROUP_MEMBER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_AS_GROUP_LEADER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_KEEP_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x49E50BDB8BA4DAB2(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_SWIMMING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_SWIMMING_UNDER_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COORDS_KEEP_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DIES_IN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CREATE_RANDOM_COPS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_CREATE_RANDOM_COPS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AS_ENEMY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_SMASH_GLASS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_ANY_TRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_GETTING_INTO_A_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENABLE_HANDCUFFS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENABLE_BOUND_ANKLES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENABLE_SCUBA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAN_ATTACK_FRIENDLY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_ALERTNESS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ALERTNESS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MOVEMENT_CLIPSET(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_MOVEMENT_CLIPSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_STRAFE_CLIPSET(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_STRAFE_CLIPSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_WEAPON_MOVEMENT_CLIPSET(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_COVER_CLIPSET_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_PED_COVER_CLIPSET_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x80054D7FCC70EEC6(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_IN_VEHICLE_CONTEXT(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_IN_VEHICLE_CONTEXT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ALTERNATE_WALK_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_ALTERNATE_WALK_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ALTERNATE_MOVEMENT_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_GESTURE_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ANIM_INITIAL_OFFSET_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ANIM_INITIAL_OFFSET_ROTATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_DRAWABLE_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_TEXTURE_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_PALETTE_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9E30E91FB03A2CAF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1E77FA7A62EE6C4C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF033419D1B81FAE8(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_COMPONENT_VARIATION_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COMPONENT_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RANDOM_COMPONENT_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RANDOM_PROPS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DEFAULT_COMPONENT_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_BLEND_FROM_PARENTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HEAD_BLEND_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_HEAD_BLEND_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_PED_HEAD_BLEND_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_EYE_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0x76BBA2CEE66D47E9(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HEAD_OVERLAY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PED_HEAD_OVERLAY_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_HEAD_OVERLAY_NUM(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_HEAD_OVERLAY_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_HAIR_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUM_HAIR_COLORS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUM_MAKEUP_COLORS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PED_HAIR_RGB_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PED_MAKEUP_RGB_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_HAIR_COLOR_VALID_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEA9960D07DADCF10(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_LIPSTICK_COLOR_VALID_2(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_BLUSH_COLOR_VALID_2(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_HAIR_COLOR_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAAA6A3698A69E048(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_LIPSTICK_COLOR_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_BLUSH_COLOR_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x09E7ECA981D9B210(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC56FBF2F228E1DAC(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_FACE_FEATURE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PED_HEAD_BLEND_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4668D80430D6C299(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HEAD_BLEND_PALETTE_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_HEAD_BLEND_PALETTE_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_HEAD_BLEND_FIRST_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUM_PARENT_PEDS_OF_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PRELOAD_VARIATION_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_PED_PRELOAD_VARIATION_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PRELOAD_PROP_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PED_PRELOAD_PROP_DATA_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_PED_PRELOAD_PROP_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_PROP_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PROP_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void KNOCK_OFF_PED_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ALL_PED_PROPS(rage::scrNativeCallContext* src)
	{
	}
	static void DROP_AMBIENT_PROP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_PROP_TEXTURE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_PARACHUTE_PACK_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36C6984C3ED0C911(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_SCUBA_GEAR_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFEC9A3B1820F3331(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_BOUNDS_ORIENTATION(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_HATED_TARGETS_AROUND_PED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_PED_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(rage::scrNativeCallContext* src)
	{
	}
	static void _0x03EA03AF85A85CB7(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRIVER_RACING_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRIVER_ABILITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRIVER_AGGRESSIVENESS(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_PED_RAGDOLL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_TO_RAGDOLL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_TO_RAGDOLL_WITH_FALL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RAGDOLL_ON_COLLISION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RAGDOLL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RUNNING_RAGDOLL_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RAGDOLL_FORCE_FALL(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_RAGDOLL_TIMER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_RAGDOLL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RUNNING_MELEE_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RUNNING_MOBILE_PHONE_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA3F3564A5B3646C0(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RAGDOLL_BLOCKING_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_RAGDOLL_BLOCKING_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ANGLED_DEFENSIVE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_SPHERE_DEFENSIVE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PED_DEFENSIVE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_DEFENSIVE_AREA_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_DEFENSIVE_AREA_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PREFERRED_COVER_SET(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PED_PREFERRED_COVER_SET(rage::scrNativeCallContext* src)
	{
	}
	static void REVIVE_INJURED_PED(rage::scrNativeCallContext* src)
	{
	}
	static void RESURRECT_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_NAME_DEBUG(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_EXTRACTED_DISPLACEMENT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DIES_WHEN_INJURED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ENABLE_WEAPON_BLOCKING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF9ACF4A08098EA25(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PED_VISIBLE_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_PED_BLOOD(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_PED_BLOOD_BY_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_PED_BLOOD_SPECIFIC(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_PED_DAMAGE_DECAL(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_PED_DAMAGE_PACK(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_BLOOD_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_DECORATIONS_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2B694AFCF64E6994(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_WETNESS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_WETNESS_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_ENV_DIRT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_SWEAT(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PED_DECORATION_FROM_HASHES(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_DECORATION_ZONE_FROM_HASHES(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_DECORATIONS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_DECORATIONS_LEAVE_SCARS(rage::scrNativeCallContext* src)
	{
	}
	static void WAS_PED_SKELETON_UPDATED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_BONE_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_NM_MESSAGE(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_PED_NM_MESSAGE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_SCENARIO_BLOCKING_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_SCENARIO_BLOCKING_AREAS(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_SCENARIO_BLOCKING_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _DOES_SCENARIO_BLOCKING_AREA_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_USING_SCENARIO(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_USING_ANY_SCENARIO(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PANIC_EXIT_SCENARIO(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9A77DFD295E29B09(rage::scrNativeCallContext* src)
	{
	}
	static void _0x25361A96E0F7E419(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEC6935EBE0847B90(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA3A9299C4F2ADB98(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF1C03A5352243A30(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEEED8FAFEC331A70(rage::scrNativeCallContext* src)
	{
	}
	static void _0x425AECF167663F48(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B6010B3CBC29095(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCEDA60A74219D064(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_FACIAL_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5687C7F05B39E401(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_PLAY_VISEME_ANIMS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_CAN_PLAY_INJURED_ANIMS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC2EE020F5FB4DB53(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_ARM_IK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_HEAD_IK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_LEG_IK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_TORSO_IK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_TORSO_REACT_IK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6647C5F6F5792496(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_HEADTRACKING_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_HEADTRACKING_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PRIMARY_LOOKAT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CLOTH_PACKAGE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CLOTH_PRONE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA660FAF550EB37E5(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CONFIG_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_RESET_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_CONFIG_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_RESET_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_EVASIVE_DIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_EVASIVE_DIVING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_SHOOTS_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MODEL_IS_SUPPRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_GENERATES_DEAD_BODY_EVENTS(rage::scrNativeCallContext* src)
	{
	}
	static void _BLOCK_PED_DEAD_BODY_SHOCKING_EVENTS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3E9679C1DFCF422C(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_PED_HELMET(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PED_HELMET(rage::scrNativeCallContext* src)
	{
	}
	static void _0x14590DDBEDB1EC85(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HELMET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HELMET_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HELMET_PROP_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_HELMET_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_HELMET_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HELMET_TEXTURE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_WEARING_HELMET(rage::scrNativeCallContext* src)
	{
	}
	static void _0x687C0B594907D2E8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x451294E859ECC018(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9D728C1E12BF5518(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF2385935BFFD4D92(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_TO_LOAD_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_COWER_IN_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_PEEK_IN_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_LEG_IK_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MOTION_BLUR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_SWITCH_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DIES_INSTANTLY_IN_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1A330D297AAC6BC1(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPTED_ANIM_SEAT_OFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COMBAT_MOVEMENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_COMBAT_MOVEMENT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COMBAT_ABILITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COMBAT_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_COMBAT_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COMBAT_ATTRIBUTES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_TARGET_LOSS_RESPONSE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_PERFORMING_MELEE_ACTION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_PERFORMING_STEALTH_KILL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_PERFORMING_DEPENDENT_COMBO_LIMIT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_BEING_STEALTH_KILLED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MELEE_TARGET_FOR_PED(rage::scrNativeCallContext* src)
	{
	}
	static void WAS_PED_KILLED_BY_STEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void WAS_PED_KILLED_BY_TAKEDOWN(rage::scrNativeCallContext* src)
	{
	}
	static void WAS_PED_KNOCKED_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_FLEE_ATTRIBUTES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_COWER_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2016C603D6B8987C(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_STEERS_AROUND_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_STEERS_AROUND_OBJECTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_STEERS_AROUND_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA9B61A329BFDCBEA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_INCREASED_AVOIDANCE_RADIUS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_BLOCKS_PATHING_WHEN_DEAD(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA52D5247A4227E14(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANY_PED_NEAR_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2208438012482A1A(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_HEADING_TOWARDS_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_PED_VISIBILITY_TRACKING(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCD018C591F94CB43(rage::scrNativeCallContext* src)
	{
	}
	static void _0x75BA1CB3B7D40CAF(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TRACKED_PED_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x511F1A683387C7E2(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_TRACKED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PED_RECEIVED_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_PED_SEE_HATED_PED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9C6A6C19B6C0C496(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2DFC81C9B9608549(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_BONE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_RAGDOLL_BONE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ENVEFF_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_ENVEFF_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ENABLE_PED_ENVEFF_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x110F526AB784111F(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_ENVEFF_COLOR_MODULATOR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_REFLECTION_INTENSITY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PED_REFLECTION_INTENSITY(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PED_SHADER_EFFECT_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE906EC930F5FE7C8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1216E0BFA72CC703(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2B5AA717A181FB4C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB8B52E498014F5B0(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_SYNCHRONIZED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _CREATE_SYNCHRONIZED_SCENE_2(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SYNCHRONIZED_SCENE_RUNNING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SYNCHRONIZED_SCENE_ORIGIN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SYNCHRONIZED_SCENE_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SYNCHRONIZED_SCENE_PHASE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SYNCHRONIZED_SCENE_RATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SYNCHRONIZED_SCENE_RATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SYNCHRONIZED_SCENE_LOOPED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SYNCHRONIZED_SCENE_LOOPED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7F2F4F13AC5257EF(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_SYNCHRONIZED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void _DISPOSE_SYNCHRONIZED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_PED_MOTION_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF60165E1D2C5370B(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MAX_MOVE_BLEND_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MIN_MOVE_BLEND_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_MOVE_RATE_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0B3E35AC043707D9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x46B05BCAE43856B0(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_NEARBY_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_NEARBY_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_STREAMED_PED_ASSETS_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_USING_ACTION_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_USING_ACTION_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MOVEMENT_MODE_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAPSULE(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_PEDHEADSHOT(rage::scrNativeCallContext* src)
	{
	}
	static void _REGISTER_PEDHEADSHOT_3(rage::scrNativeCallContext* src)
	{
	}
	static void REGISTER_PEDHEADSHOT_TRANSPARENT(rage::scrNativeCallContext* src)
	{
	}
	static void UNREGISTER_PEDHEADSHOT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PEDHEADSHOT_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PEDHEADSHOT_READY(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_PEDHEADSHOT_IMG_UPLOAD(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_PEDHEADSHOT_IMG_UPLOAD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PEDHEADSHOT_IMG_UPLOAD_AVAILABLE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PEDHEADSHOT_IMG_UPLOAD_FAILED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PEDHEADSHOT_IMG_UPLOAD_SUCCEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_HEATSCALE_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_PED_HEATSCALE_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2DF9038C90AD5264(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB2AFF10216DEFA2F(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFEE4A5459472A9F8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3C67506996001F5E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA586FBEB32A53DBB(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF445DE8DA80A1792(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA635C11B8C44AFC2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x280C7E3AC7F56E90(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB782F8238512BAD5(rage::scrNativeCallContext* src)
	{
	}
	static void SET_IK_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void _0xED3C76ADFA6D07C4(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_ACTION_MODE_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ACTION_MODE_ASSET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ACTION_MODE_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_STEALTH_MODE_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_STEALTH_MODE_ASSET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_STEALTH_MODE_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_LOD_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE861D0B05C7662B8(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FORCE_FOOTSTEP_UPDATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FORCE_STEP_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANY_HOSTILE_PED_NEAR_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x820E9892A77E97CD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x06087579E7AA85A9(rage::scrNativeCallContext* src)
	{
	}
	static void SET_POP_CONTROL_SPHERE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD33DAA36272177C4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x711794453CFD692B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x83A169EABCDB10A2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x288DF530C92DAD6F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3795688A307E1EB6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0F62619393661D6E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDFE68C4B787E1BFB(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ENABLE_SCUBA_GEAR_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_SCUBA_GEAR_LIGHT_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x637822DC2AFEEBF8(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFAB944D4D481ACCB(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_ROPE(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_ROPE(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_CHILD_ROPE(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_ROPE_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_DRAW_SHADOW_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void LOAD_ROPE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void PIN_ROPE_VERTEX(rage::scrNativeCallContext* src)
	{
	}
	static void UNPIN_ROPE_VERTEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ROPE_VERTEX_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_ENTITIES_TO_ROPE(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_ROPE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_ROPE_FROM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_SET_UPDATE_PINVERTS(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_SET_UPDATE_ORDER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36CCB9BE67B970FD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x84DE3B5FB3E666F0(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ROPE_LAST_VERTEX_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ROPE_VERTEX_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void START_ROPE_WINDING(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ROPE_WINDING(rage::scrNativeCallContext* src)
	{
	}
	static void START_ROPE_UNWINDING_FRONT(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ROPE_UNWINDING_FRONT(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_CONVERT_TO_SIMPLE(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_LOAD_TEXTURES(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_ARE_TEXTURES_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_UNLOAD_TEXTURES(rage::scrNativeCallContext* src)
	{
	}
	static void _DOES_ROPE_BELONG_TO_THIS_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBC0CE682D4D05650(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB1B6216CA2E7B55E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB743F735C03D7810(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_GET_DISTANCE_BETWEEN_ENDS(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_FORCE_LENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void ROPE_RESET_LENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void APPLY_IMPULSE_TO_CLOTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DAMPING(rage::scrNativeCallContext* src)
	{
	}
	static void ACTIVATE_PHYSICS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CGOFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CGOFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CG_AT_BOUNDCENTER(rage::scrNativeCallContext* src)
	{
	}
	static void BREAK_ENTITY_GLASS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_HAS_OBJECT_FRAG_INST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_BREAKING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCC6E963682533882(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_FRAG_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ENTITY_PROOF_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9EBD751E5787BAF2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAA6A6098851C396F(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_PED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_PED_SCRIPT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void CHANGE_PLAYER_PED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_RGB_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_PLAYERS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_TEAM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_TEAM(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUMBER_OF_PLAYERS_IN_TEAM(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WANTED_LEVEL_RADIUS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_WANTED_CENTRE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_WANTED_CENTRE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WANTED_LEVEL_THRESHOLD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_WANTED_LEVEL_NO_DROP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_WANTED_LEVEL_NOW(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_PLAYER_STARS_GREYED_OUT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7E07C78925D5FD96(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISPATCH_COPS_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_WANTED_LEVEL_GREATER(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PLAYER_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_DEAD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_PRESSING_HORN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CONTROL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MAX_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_POLICE_RADAR_BLIPS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_POLICE_IGNORE_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_PLAYING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_EVERYONE_IGNORE_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ALL_RANDOM_PEDS_FLEE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDE45D1A1EF45EE61(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC3376F42B1FACCC6(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFAC75988A7D078D3(rage::scrNativeCallContext* src)
	{
	}
	static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WANTED_LEVEL_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WANTED_LEVEL_DIFFICULTY(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_WANTED_LEVEL_DIFFICULTY(rage::scrNativeCallContext* src)
	{
	}
	static void START_FIRING_AMNESTY(rage::scrNativeCallContext* src)
	{
	}
	static void REPORT_CRIME(rage::scrNativeCallContext* src)
	{
	}
	static void _SWITCH_CRIME_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBC9490CA15AEA8FB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4669B3ED80F24B4E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2F41A3BAE005E5FA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAD73CE5A09E42D12(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36F1B38855F2A8DF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDC64D2C53493ED12(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB45EFF719D8427A6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0032A6DBA562C518(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_PLAYER_START_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_READY_FOR_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_TARGETTING_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_TARGET_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_FREE_AIMING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_FREE_AIMING_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CAN_DO_DRIVE_BY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CAN_USE_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_TARGETTING_ANYTHING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_SPRINT(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PLAYER_STAMINA(rage::scrNativeCallContext* src)
	{
	}
	static void RESTORE_PLAYER_STAMINA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_SPRINT_STAMINA_REMAINING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_SPRINT_TIME_REMAINING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_UNDERWATER_TIME_REMAINING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA0D3E4F7AAFB7E78(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_MAX_ARMOUR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_CONTROL_ON(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_PLAYER_CAM_CONTROL_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_SCRIPT_CONTROL_ON(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_CLIMBING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_BEING_ARRESTED(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PLAYER_ARREST_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYERS_LAST_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void INT_TO_PLAYERINDEX(rage::scrNativeCallContext* src)
	{
	}
	static void INT_TO_PARTICIPANTINDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_SINCE_PLAYER_HIT_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_SINCE_PLAYER_HIT_PED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_FREE_FOR_AMBIENT_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYER_PED_ID(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_PLAYER_ID_TO_INT(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_FORCE_CLEANUP_OCCURRED(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_CLEANUP(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_ACHIEVEMENT_TO_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_ACHIEVEMENT_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ACHIEVEMENT_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ACHIEVEMENT_BEEN_PASSED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_ONLINE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_LOGGING_IN_NP(rage::scrNativeCallContext* src)
	{
	}
	static void DISPLAY_SYSTEM_SIGNIN_UI(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SYSTEM_UI_BEING_DISPLAYED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_INVINCIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_INVINCIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCAC57395B151135F(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PLAYER_HELMET(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_PLAYER_RAGDOLL_CONTROL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_LOCKON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_TARGETING_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_TARGET_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB9CF1F793A9F1BF1(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCB645E85E97EA48B(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_SINCE_LAST_ARREST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_SINCE_LAST_DEATH(rage::scrNativeCallContext* src)
	{
	}
	static void ASSISTED_MOVEMENT_CLOSE_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void ASSISTED_MOVEMENT_FLUSH_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_FORCED_AIM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_FORCED_ZOOM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_PLAYER_FIRING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB885852C39CC265D(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_AMBIENT_MELEE_MOVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_MAX_ARMOUR(rage::scrNativeCallContext* src)
	{
	}
	static void _SPECIAL_ABILITY_ACTIVATE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_SPECIAL_ABILITY(rage::scrNativeCallContext* src)
	{
	}
	static void _SPECIAL_ABILITY_DEPLETE(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_DEACTIVATE(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_DEACTIVATE_FAST(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_RESET(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_CHARGE_SMALL(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_CHARGE_MEDIUM(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_CHARGE_LARGE(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_CHARGE_NORMALIZED(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_FILL_METER(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_DEPLETE_METER(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_LOCK(rage::scrNativeCallContext* src)
	{
	}
	static void SPECIAL_ABILITY_UNLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SPECIAL_ABILITY_UNLOCKED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SPECIAL_ABILITY_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SPECIAL_ABILITY_METER_FULL(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_SPECIAL_ABILITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SPECIAL_ABILITY_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SPECIAL_ABILITY_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFFEE8FA29AB9A18E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5FC472C501CCADB3(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF10B44FD479D69F3(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDD2620B7B9D16FF1(rage::scrNativeCallContext* src)
	{
	}
	static void START_PLAYER_TELEPORT(rage::scrNativeCallContext* src)
	{
	}
	static void _HAS_PLAYER_TELEPORT_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PLAYER_TELEPORT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_TELEPORT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_CURRENT_STEALTH_NOISE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PLAYER_HEALTH_RECHARGE_LIMIT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_HEALTH_RECHARGE_LIMIT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_FALL_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_WEAPON_DEFENSE_MODIFIER_2(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8D768602ADEF2245(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD821056B9ACF8052(rage::scrNativeCallContext* src)
	{
	}
	static void _0x31E90B8873A4CD3B(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_PARACHUTE_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_PARACHUTE_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_HAS_RESERVE_PARACHUTE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_HAS_RESERVE_PARACHUTE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_NOISE_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_PED_HEAR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void SIMULATE_PLAYER_INPUT_GAIT(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_PLAYER_INPUT_GAIT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x690A61A6D13583F6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9EDD76E87D5D51BA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_SIMULATE_AIMING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CLOTH_PIN_FRAMES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CLOTH_PACKAGE_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_CLOTH_LOCK_COUNTER(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYER_ATTACH_VIRTUAL_BOUND(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYER_DETACH_VIRTUAL_BOUND(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_BATTLE_AWARE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBC0753C9CA14B506(rage::scrNativeCallContext* src)
	{
	}
	static void EXTEND_WORLD_BOUNDARY_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_WORLD_BOUNDARY_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_RIDING_TRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PLAYER_LEFT_THE_WORLD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_LEAVE_PED_BEHIND(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_PLAYER_VEHICLE_REWARDS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2F7CEB6520288061(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_BLUETOOTH_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_BLUETOOTH_ENABLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5501B7A5CDB79D37(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_FAKE_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void _0x55FCC0C390620314(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2382AB11450AE7BA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6E4361FF3E8CD7CA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x237440E46D918649(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_HOMING_ROCKET_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7BAE68775557AE0B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7148E0F43D11F0D9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x70A382ADEC069DD3(rage::scrNativeCallContext* src)
	{
	}
	static void _0x48621C9FCA3EBD28(rage::scrNativeCallContext* src)
	{
	}
	static void _0x81CBAE94390F9F89(rage::scrNativeCallContext* src)
	{
	}
	static void _0x13B350B8AD0EEE10(rage::scrNativeCallContext* src)
	{
	}
	static void _0x293220DA1B46CEBC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x208784099002BC30(rage::scrNativeCallContext* src)
	{
	}
	static void _STOP_RECORDING_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF854439EFBB3B583(rage::scrNativeCallContext* src)
	{
	}
	static void _DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x66972397E0757E7A(rage::scrNativeCallContext* src)
	{
	}
	static void _START_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void _STOP_RECORDING_AND_SAVE_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _STOP_RECORDING_AND_DISCARD_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _SAVE_RECORDING_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDF4B952F7D381B95(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4282E08174868BE3(rage::scrNativeCallContext* src)
	{
	}
	static void _0x33D47E85B476ABCD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7E2BD3EF6C205F09(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_INTERIOR_RENDERING_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5AD3932DAEB1E5D3(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE058175F8EAFE79A(rage::scrNativeCallContext* src)
	{
	}
	static void _RESET_EDITOR_VALUES(rage::scrNativeCallContext* src)
	{
	}
	static void _ACTIVATE_ROCKSTAR_EDITOR(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_SCRIPT_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SCRIPT_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_SCRIPT_WITH_NAME_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_SCRIPT_WITH_NAME_HASH_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SCRIPT_WITH_NAME_HASH_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void TERMINATE_THREAD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THREAD_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void SCRIPT_THREAD_ITERATOR_RESET(rage::scrNativeCallContext* src)
	{
	}
	static void SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ID_OF_THIS_THREAD(rage::scrNativeCallContext* src)
	{
	}
	static void TERMINATE_THIS_THREAD(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HASH_OF_THIS_SCRIPT_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_EVENTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_EVENT_EXISTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_EVENT_AT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_EVENT_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void TRIGGER_SCRIPT_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void SHUTDOWN_LOADING_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NO_LOADING_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NO_LOADING_SCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB1577667C3708F9B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x836B62713E0534CA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x760910B49D2B98EA(rage::scrNativeCallContext* src)
	{
	}
	static void BG_START_CONTEXT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void BG_END_CONTEXT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void BG_START_CONTEXT(rage::scrNativeCallContext* src)
	{
	}
	static void BG_END_CONTEXT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0F6F1EBBC4E1D5E6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x22E21FBCFC88C149(rage::scrNativeCallContext* src)
	{
	}
	static void _0x829CD22E043A2577(rage::scrNativeCallContext* src)
	{
	}
	static void _TRIGGER_SCRIPT_EVENT_2(rage::scrNativeCallContext* src)
	{
	}
	static void START_SHAPE_TEST_LOS_PROBE(rage::scrNativeCallContext* src)
	{
	}
	static void _START_SHAPE_TEST_RAY(rage::scrNativeCallContext* src)
	{
	}
	static void START_SHAPE_TEST_BOUNDING_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void START_SHAPE_TEST_BOX(rage::scrNativeCallContext* src)
	{
	}
	static void START_SHAPE_TEST_BOUND(rage::scrNativeCallContext* src)
	{
	}
	static void START_SHAPE_TEST_CAPSULE(rage::scrNativeCallContext* src)
	{
	}
	static void START_SHAPE_TEST_SWEPT_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void _START_SHAPE_TEST_SURROUNDING_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHAPE_TEST_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(rage::scrNativeCallContext* src)
	{
	}
	static void _SHAPE_TEST_RESULT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_TOTAL_SC_INBOX_IDS(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_MESSAGE_INIT(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_SC_INBOX_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_MESSAGE_POP(rage::scrNativeCallContext* src)
	{
	}
	static void SC_INBOX_MESSAGE_GET_DATA_INT(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_MESSAGE_GET_DATA_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void SC_INBOX_MESSAGE_GET_DATA_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void SC_INBOX_MESSAGE_DO_APPLY(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_MESSAGE_PUSH_GAMER_TO_EVENT_RECIP_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_MESSAGE_SEND_UGC_STAT_UPDATE_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void SC_INBOX_MESSAGE_GET_UGCDATA(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_MESSAGE_SEND_BOUNTY_PRESENCE_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_MESSAGE_GET_BOUNTY_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_INBOX_GET_EMAILS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x16DA8172459434AA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7DB18CA8CAD5B098(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4737980E8A283806(rage::scrNativeCallContext* src)
	{
	}
	static void _0x44ACA259D67651DB(rage::scrNativeCallContext* src)
	{
	}
	static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST(rage::scrNativeCallContext* src)
	{
	}
	static void _0x116FB94DC4B79F17(rage::scrNativeCallContext* src)
	{
	}
	static void _0x07DBD622D9533857(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HANDLE_ROCKSTAR_MESSAGE_VIA_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_ROCKSTAR_MESSAGE_READY_FOR_SCRIPT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F1E9682483697C7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC4C4575F62534A24(rage::scrNativeCallContext* src)
	{
	}
	static void _0x287F1F75D2803595(rage::scrNativeCallContext* src)
	{
	}
	static void _0x487912FD248EFDDF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC85A7127E7AD02AA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA770C8EEC6FB2AC5(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_GET_IS_PROFILE_ATTRIBUTE_SET(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7FFCBFEE44ECFABF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2D874D4AE612A65F(rage::scrNativeCallContext* src)
	{
	}
	static void SC_PROFANITY_CHECK_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_PROFANITY_CHECK_UGC_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void SC_PROFANITY_GET_CHECK_IS_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void SC_PROFANITY_GET_CHECK_IS_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void SC_PROFANITY_GET_STRING_PASSED(rage::scrNativeCallContext* src)
	{
	}
	static void SC_PROFANITY_GET_STRING_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF6BAAAF762E1BF40(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF22CA0FD74B80E7A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9237E334F6E43156(rage::scrNativeCallContext* src)
	{
	}
	static void _0x700569DBA175A77C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1D4446A62D35B0D0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2E89990DDFF670C3(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD0EE05FE193646EA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1989C6E6F67E76A8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x07C61676E5BB52CD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8147FFF6A718E1AD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0F73393BAC7E6730(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD302E99EDF0449CF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5C4EBFFA98BDB41C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFF8F3A92B75ED67A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4ED9C8D6DA297639(rage::scrNativeCallContext* src)
	{
	}
	static void _0x710BCDA8071EDED1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x50A8A36201DBF83E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9DE5D2F723575ED0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC2C97EA97711D1AE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x450819D8CF90C416(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4A7D6E727F941747(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE75A4A2E5E316D86(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2570E26BE63964E3(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1D12A56FC95BE92E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x33DF47CC0642061B(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA468E0BE12B12C70(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8CC469AB4D349B7C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC5A35C73B68F3C49(rage::scrNativeCallContext* src)
	{
	}
	static void _0x699E4A5C8C893A18(rage::scrNativeCallContext* src)
	{
	}
	static void _0x19853B5B17D77BCA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6BFB12CE158E3DD4(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFE4C1D0D3B9CC17E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD8122C407663B995(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3001BEF2FECA3680(rage::scrNativeCallContext* src)
	{
	}
	static void _0x92DA6E70EF249BD1(rage::scrNativeCallContext* src)
	{
	}
	static void _0x675721C9F644D161(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE4F6E8D07A2F0F51(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8A4416C0DB05FA66(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEA95C0853A27888E(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0x225798743970412B(rage::scrNativeCallContext* src)
	{
	}
	static void _SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_CLEAR_SLOT_FOR_RELOAD(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_LOAD(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5688585E6D563CD8(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_LOAD_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SAVE_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SAVE_PENDING_OR_REQUESTED(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_DELETE_SLOT(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SLOT_IS_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7F2C4CDF2E82DF4C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE496A53BA5F50A56(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF434A10BA01C37D0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7E6946F68A38B74F(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA8733668D1047B51(rage::scrNativeCallContext* src)
	{
	}
	static void _0xECB41AC6AB754401(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9B4BD21D69B1E609(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC0E0D686DDFC6EAE(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_INT(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_GXT_LABEL(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_DATE(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_STRING(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_POS(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_MASKED_INT(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_USER_ID(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_CURRENT_POSIX_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_INT(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_DATE(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_POS(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_MASKED_INT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_LICENSE_PLATE(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_INCREMENT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5A556B229A169402(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB1D2BB1E1631F5B1(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBED9F5693F34ED17(rage::scrNativeCallContext* src)
	{
	}
	static void _0x26D7399B9587FE89(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA78B8FA58200DA56(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_NUMBER_OF_DAYS(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_NUMBER_OF_HOURS(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_NUMBER_OF_MINUTES(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_NUMBER_OF_SECONDS(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_PROFILE_SETTING_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF4D8E7AC2A27758C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x94F12ABF9C79E339(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PACKED_BOOL_STAT_KEY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PACKED_INT_STAT_KEY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PACKED_TITLE_UPDATE_INT_STAT_KEY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NGSTAT_BOOL_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NGSTAT_INT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_BOOL_MASKED(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SET_BOOL_MASKED(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_BACKGROUND_SCRIPT_ACTION(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_NPC_INVITE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_AWARD_XP(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_RANK_UP(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_START_OFFLINE_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA071E0ED98F91286(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC5BE134EC7BA96A0(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_MISSION_STARTED(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_MISSION_OVER(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_MISSION_CHECKPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_RANDOM_MISSION_DONE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_ROS_BET(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_RACE_CHECKPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6DEE77AFF8C21BD1(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_MATCH_STARTED(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_SHOP_ITEM(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CRATE_DROP(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CRATE_CREATED(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_HOLD_UP(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_IMP_EXP(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_RACE_TO_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_WEBSITE_VISITED(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_FRIEND_ACTIVITY(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_ODDJOB_DONE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_PROP_CHANGE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_CLOTH_CHANGE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_WEAPON_MODE_CHANGE(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_CHEAT_APPLIED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF8C54A461C3E11DC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF5BB8DAC426A52C0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA736CF7FB7C5BFF4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x14E0B2D1AD1044E0(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_QUICKFIX_TOOL(rage::scrNativeCallContext* src)
	{
	}
	static void PLAYSTATS_IDLE_KICK(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD1032E482629049E(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_HEIST_SAVE_CHEAT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_DIRECTOR_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_AWARD_BADSPORT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_PEGASAIRCRAFT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6A60E43998228229(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBFAFDB5FAAA5C5AB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8C9D11605E59D955(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3DE3AA516FB126A4(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBAA2F0490E146BE8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1A7CE7CD3E653485(rage::scrNativeCallContext* src)
	{
	}
	static void _0x419615486BBF1956(rage::scrNativeCallContext* src)
	{
	}
	static void _0x84DFC579C2FC214C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0A9C7F36E5D7B683(rage::scrNativeCallContext* src)
	{
	}
	static void _0x164C5FF663790845(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEDBF6C9B0D2C65C8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6551B1F7F6CD46EA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2CD90358F67D0AA8(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_PI_MENU_HIDE_SETTINGS(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_GET_NUMBER_OF_COLUMNS(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_GET_COLUMN_ID(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_GET_COLUMN_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_READ_CLEAR_ALL(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_READ_CLEAR(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_READ_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_READ_ANY_PENDING(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_READ_SUCCESSFUL(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_FRIENDS_BY_ROW(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_BY_HANDLE(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_BY_ROW(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_BY_RANK(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_BY_RADIUS(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_BY_SCORE_INT(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_BY_SCORE_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_READ_RANK_PREDICTION(rage::scrNativeCallContext* src)
	{
	}
	static void _LEADERBOARDS2_READ_BY_PLATFORM(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA0F93D5465B3094D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x71B008056E5692D6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x34770B9CE0E03B91(rage::scrNativeCallContext* src)
	{
	}
	static void _0x88578F6EC36B4A3A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x38491439B6BA7F7D(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_WRITE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_WRITE_ADD_COLUMN(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_WRITE_ADD_COLUMN_LONG(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_CACHE_DATA_ROW(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_CLEAR_CACHE_DATA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8EC74CEB042E7CFF(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_GET_CACHE_EXISTS(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_GET_CACHE_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS_GET_CACHE_DATA_ROW(rage::scrNativeCallContext* src)
	{
	}
	static void _UPDATE_STAT_INT(rage::scrNativeCallContext* src)
	{
	}
	static void _UPDATE_STAT_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6483C25849031C4F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5EAD2BF6484852E4(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC141B8917E0017EC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB475F27C6A994D65(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC67E2DA1CBE759E2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF1A1803D3476F215(rage::scrNativeCallContext* src)
	{
	}
	static void _0x38BAAA5DD4C9D19F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x55384438FC55AD8E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x723C1CE13FBFDB67(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0D01D20616FC73FB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x428EAF89E24F6C36(rage::scrNativeCallContext* src)
	{
	}
	static void _0x047CBED6F6F8B63C(rage::scrNativeCallContext* src)
	{
	}
	static void LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6F361B8889A792A3(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC847B43F369AC0B5(rage::scrNativeCallContext* src)
	{
	}
	static void _STAT_MIGRATE_SAVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9A62EC95AE10E011(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4C89FE2BDEB3F169(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC6E0E2616A7576BB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5BD5F255321C4AAF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDEAAF77EB3687E97(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_SAVE_MIGRATION_STATUS_START(rage::scrNativeCallContext* src)
	{
	}
	static void STAT_GET_SAVE_MIGRATION_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void _STAT_SAVE_MIGRATION_CANCEL(rage::scrNativeCallContext* src)
	{
	}
	static void _STAT_GET_CANCEL_SAVE_MIGRATION_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void _STAT_SAVE_MIGRATION_CONSUME_CONTENT_UNLOCK(rage::scrNativeCallContext* src)
	{
	}
	static void _STAT_GET_SAVE_MIGRATION_CONSUME_CONTENT_UNLOCK_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x98E2BC1CA26287C3(rage::scrNativeCallContext* src)
	{
	}
	static void _0x629526ABA383BCAA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBE3DB208333D9844(rage::scrNativeCallContext* src)
	{
	}
	static void _0x33D72899E24C3365(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA761D4AC6115623D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF11F01D98113536A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8B9CDBD6C566C38C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE8853FBCE7D8D0D6(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA943FD1722E11EFD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x84A810B375E69C0E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9EC8858184CD253A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA9749CC94C1FD85(rage::scrNativeCallContext* src)
	{
	}
	static void _0x55A8BECAF28A4EB7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x32CAC93C9DE73D32(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAFF47709F1D5DCCE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6E0A5253375C4584(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1A8EA222F9C67DBB(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF9F2922717B819EC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0B8B7F74BF061C6D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB3DA2606774A8E2D(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HAS_CONTENT_UNLOCKS_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_SAVE_MIGRATION_TRANSACTION_ID(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6BC0ACD0673ACEBE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8D8ADB562F09A245(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD1A1EE3B4FA8E760(rage::scrNativeCallContext* src)
	{
	}
	static void _0x88087EE1F28024AE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFCC228E07217FCAC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x678F86D8FC040BDB(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA6F54BB2FFCA35EA(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5FF2C33B13A02A11(rage::scrNativeCallContext* src)
	{
	}
	static void _0x282B6739644F4347(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF06A6F41CB445443(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7B18DA61F6BAE9D5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x06EAF70AE066441E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x14EDA9EE27BD1626(rage::scrNativeCallContext* src)
	{
	}
	static void _0x930F504203F561C9(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE3261D791EB44ACB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x73001E34F85137F8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x53CAE13E9B426993(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7D36291161859389(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_SPENT_PI_CUSTOM_LOADOUT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD6781E42755531F7(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC729991A9065376E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2605663BD4F23B5D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x04D90BA8207ADA2D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x60EEDC12AF66E846(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3EBEAC6C3F81F6BD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x96E6D5150DBF1C09(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA3C53804BDB68ED2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6BCCF9948492FD85(rage::scrNativeCallContext* src)
	{
	}
	static void _HIRED_LIMO(rage::scrNativeCallContext* src)
	{
	}
	static void _ORDERED_BOSS_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD1C9B92BDD3F151D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x44919CC079BB60BF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7033EEFD9B28088E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAA525DFF66BB82F5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x015B03EE1C43E6EC(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_STUNT_PERFORMED_EVENT_ALLOW_TRIGGER(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_STUNT_PERFORMED_EVENT_DISALLOW_TRIGGER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBF371CD2B64212FD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7D8BA05688AD64C7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0B565B0AAE56A0E8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x28ECB8AC2F607DB2(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CHANGE_MC_EMBLEM(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCC25A4553DFBF9EA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF534D94DFA2EAD26(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD558BEC0BBA7E8D2(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_EARNED_MC_POINTS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x03C2EEBB04B3FB72(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8989CBD7B4E82534(rage::scrNativeCallContext* src)
	{
	}
	static void _0x27AA1C973CACFE63(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_COPY_RANK_INTO_NEW_SLOT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_DUPE_DETECTION(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_BAN_ALERT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_GUNRUN_MISSION_ENDED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDAF80797FC534BEC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x316DB59CD14C1774(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2D7A9B577E72385E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x830C3A44EB3F2CF9(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB26F670685631727(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC14BD9F5337219B2(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_STONE_HATCHET_END(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_SMUG_MISSION_ENDED(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_H2_FMPREP_END(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_H2_INSTANCE_END(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_DAR_MISSION_END(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_ENTER_SESSION_PACK(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_DRONE_USAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_SPECTATOR_WHEEL_SPIN(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_ARENA_WAR_SPECTATOR(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_ARENA_WARS_ENDED(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_PASSIVE_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_COLLECTIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_STORY_MISSION_ENDED(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_CHIP(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_ROULETTE(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_BLACKJACK(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_THREECARDPOKER(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_SLOTMACHINE(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_INSIDETRACK(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_LUCKYSEVEN(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_ROULETTE_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_BLACKJACK_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_THREECARDPOKER_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_SLOTMACHINE_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_INSIDETRACK_LIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_ARCADEGAME(rage::scrNativeCallContext* src)
	{
	}
	static void _PLAYSTATS_CASINO_MISSION_ENDED(rage::scrNativeCallContext* src)
	{
	}
	static void LOAD_ALL_OBJECTS_NOW(rage::scrNativeCallContext* src)
	{
	}
	static void LOAD_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void NETWORK_UPDATE_LOAD_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NETWORK_LOADING_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_INTERIOR_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_MENU_PED_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_MODEL_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_MODELS_IN_ROOM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MODEL_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MODEL_IN_CDIMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MODEL_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MODEL_A_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MODEL_A_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_COLLISION_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_COLLISION_FOR_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_COLLISION_FOR_MODEL_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_ANIM_DICT_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_ANIM_DICT(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ANIM_DICT_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ANIM_DICT(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_ANIM_SET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ANIM_SET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ANIM_SET(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_CLIP_SET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_CLIP_SET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_CLIP_SET(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_IPL(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_IPL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_IPL_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_STREAMING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GAME_PAUSES_FOR_STREAMING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_REDUCE_PED_MODEL_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_REDUCE_VEHICLE_MODEL_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DITCH_POLICE_MODELS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_STREAMING_REQUESTS(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_PTFX_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PTFX_ASSET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PTFX_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_NAMED_PTFX_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_NAMED_PTFX_ASSET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_NAMED_PTFX_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_POPULATION_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_POPULATION_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_FOCUS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FOCUS_POS_AND_VEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FOCUS_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_FOCUS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0811381EF5062FEC(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MAPDATACULLBOX_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4E52E752C76E7E7A(rage::scrNativeCallContext* src)
	{
	}
	static void FORMAT_FOCUS_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F3F018BC3AFA77C(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0AD9710CEE2F590F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1EE7D8DF4425F053(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7D41E9D2D17C5B2D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x07C313F94746702C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBC9823AB80A3DCAC(rage::scrNativeCallContext* src)
	{
	}
	static void NEW_LOAD_SCENE_START(rage::scrNativeCallContext* src)
	{
	}
	static void NEW_LOAD_SCENE_START_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void NEW_LOAD_SCENE_STOP(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NEW_LOAD_SCENE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_NEW_LOAD_SCENE_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x71E7B2E657449AAD(rage::scrNativeCallContext* src)
	{
	}
	static void START_PLAYER_SWITCH(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PLAYER_SWITCH(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYER_SWITCH_IN_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_SWITCH_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IDEAL_PLAYER_SWITCH_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_SWITCH_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_SHORT_SWITCH_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5F2013F8BC24EE69(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_SWITCH_JUMP_CUT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_SWITCH_OUTRO(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYER_SWITCH_ESTABLISHING_SHOT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x43D1680C6D19A8E9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x74DE2E8739086740(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8E2A065ABDAE6994(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAD5FDF34B81BFE79(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SWITCH_READY_FOR_DESCENT(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_SWITCH_PAUSE_BEFORE_DESCENT(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_SWITCH_OUTRO_FX(rage::scrNativeCallContext* src)
	{
	}
	static void _SWITCH_OUT_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _SWITCH_IN_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x933BBEEB8C61B5F4(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PLAYER_SWITCH_INTERP_OUT_DURATION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B48A06DD0E792A5(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SWITCH_SKIPPING_DESCENT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1E9057A74FD73E23(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0C15B0E443B2349D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA76359FC80B2438E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBED8CA5FF5E04113(rage::scrNativeCallContext* src)
	{
	}
	static void _0x472397322E92A856(rage::scrNativeCallContext* src)
	{
	}
	static void _0x40AEFD1A244741F2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x03F1A106BDA7DD3E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x95A7DABDDBB78AE7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x63EB2B972A218CAC(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFB199266061F820A(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF4A0DADB70F57FA6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5068F488DDB54DD8(rage::scrNativeCallContext* src)
	{
	}
	static void PREFETCH_SRL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SRL_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void BEGIN_SRL(rage::scrNativeCallContext* src)
	{
	}
	static void END_SRL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SRL_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEF39EE20C537E98C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBEB2D9A1D9A8F55A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x20C6C7E4EB082A7F(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF8155A7F03DDFC8E(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HD_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_HD_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void INIT_CREATOR_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void SHUTDOWN_CREATOR_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_MODEL_TO_CREATOR_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_MODEL_FROM_CREATOR_BUDGET(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_USED_CREATOR_MODEL_MEMORY_PERCENTAGE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PAUSE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_STAND_STILL(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_JUMP(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_COWER(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_HANDS_UP(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_TASK_HANDS_UP_DURATION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_OPEN_VEHICLE_DOOR(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_ENTER_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_LEAVE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GET_OFF_BOAT(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SKY_DIVE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PARACHUTE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PARACHUTE_TO_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARACHUTE_TASK_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARACHUTE_TASK_THRUST(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_RAPPEL_FROM_HELI(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_DRIVE_TO_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_DRIVE_WANDER(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_STRAIGHT_TO_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_ACHIEVE_HEADING(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_FLUSH_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_EXTEND_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_FOLLOW_POINT_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SMART_FLEE_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SMART_FLEE_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_REACT_AND_FLEE_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SHOCKING_EVENT_REACT(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_WANDER_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_WANDER_STANDARD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_PARK(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_STEALTH_KILL(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLANT_BOMB(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATH_CAN_USE_LADDERS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x88E32DB8C1A4AA4B(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATH_MAY_ENTER_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_PATH_AVOID_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NAVMESH_ROUTE_DISTANCE_REMAINING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NAVMESH_ROUTE_RESULT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3E38E28A1D80DDF6(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_COORD_ANY_MEANS(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLAY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLAY_ANIM_ADVANCED(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ANIM_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SCRIPTED_ANIMATION(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_ENTITY_SCRIPTED_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ANIM_PLAYBACK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ANIM_WEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ANIM_RATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ANIM_LOOPED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLAY_PHONE_GESTURE_ANIMATION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_STOP_PHONE_GESTURE_ANIMATION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYING_PHONE_GESTURE_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PHONE_GESTURE_ANIM_CURRENT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PHONE_GESTURE_ANIM_TOTAL_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_PLAY_ANIM(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_LOOK_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_LOOK_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_CLEAR_LOOK_AT(rage::scrNativeCallContext* src)
	{
	}
	static void OPEN_SEQUENCE_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void CLOSE_SEQUENCE_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PERFORM_SEQUENCE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PERFORM_SEQUENCE_LOCALLY(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_SEQUENCE_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SEQUENCE_TO_REPEAT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SEQUENCE_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_TASK_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SCRIPT_TASK_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ACTIVE_VEHICLE_MISSION_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_LEAVE_ANY_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_AIM_GUN_SCRIPTED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_AIM_GUN_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_TURN_PED_TO_FACE_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_AIM_GUN_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SHOOT_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_TASKS(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_SECONDARY_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_EVERYONE_LEAVE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GOTO_ENTITY_OFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GOTO_ENTITY_OFFSET_XY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_TURN_PED_TO_FACE_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_TEMP_ACTION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_MISSION_PED_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_MISSION_COORS_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_ESCORT(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_FOLLOW(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_CHASE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_HELI_PROTECT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_HELI_CHASE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLANE_CHASE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLANE_LAND(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDBBC7A2432524127(rage::scrNativeCallContext* src)
	{
	}
	static void _0x53DDC75BC3AC0A90(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLANE_GOTO_PRECISE_VTOL(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_HELI_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_HELI_ESCORT_HELI(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLANE_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PLANE_TAXI(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_BOAT_MISSION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_DRIVE_BY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRIVEBY_TASK_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void CONTROL_MOUNTED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MOUNTED_WEAPON_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_USE_MOBILE_PHONE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_USE_MOBILE_PHONE_TIMED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_CHAT_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_WARP_PED_INTO_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SHOOT_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_CLIMB(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_CLIMB_LADDER(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_TASKS_IMMEDIATELY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NEXT_DESIRED_MOVE_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_DESIRED_MOVE_BLEND_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GOTO_ENTITY_AIMING(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SET_DECISION_MAKER(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_CLEAR_DEFENSIVE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PED_SLIDE_TO_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_COVER_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_COVER_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SCRIPTED_COVER_POINT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_COMBAT_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_COMBAT_PED_TIMED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SEEK_COVER_FROM_POS(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SEEK_COVER_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SEEK_COVER_TO_COVER_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SEEK_COVER_TO_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_EXIT_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_TOGGLE_DUCK(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GUARD_CURRENT_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_STAND_GUARD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRIVE_TASK_CRUISE_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DRIVE_TASK_DRIVING_STYLE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_COVER_BLOCKING_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ALL_COVER_BLOCKING_AREAS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFA83CA6776038F64(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F351CF1C6475734(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_START_SCENARIO_IN_PLACE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_START_SCENARIO_AT_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SCENARIO_EXIST_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCENARIO_OCCUPIED(rage::scrNativeCallContext* src)
	{
	}
	static void PED_HAS_USE_SCENARIO_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SCENARIO_GROUP_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCENARIO_GROUP_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCENARIO_GROUP_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_SCENARIO_GROUPS_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_EXCLUSIVE_SCENARIO_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_EXCLUSIVE_SCENARIO_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SCENARIO_TYPE_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCENARIO_TYPE_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_SCENARIO_TYPES_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_ACTIVE_IN_SCENARIO(rage::scrNativeCallContext* src)
	{
	}
	static void _0x621C6E4729388E41(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CAN_PLAY_AMBIENT_IDLES(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_THROW_PROJECTILE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SWAP_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_RELOAD_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_GETTING_UP(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_WRITHE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_IN_WRITHE(rage::scrNativeCallContext* src)
	{
	}
	static void OPEN_PATROL_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void CLOSE_PATROL_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PATROL_ROUTE_NODE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_PATROL_ROUTE_LINK(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_PATROL_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_PATROL_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_PATROL(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_STAY_IN_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_VEHICLE_SUBTASK_ATTACK_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_SHOOT_AT_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_AIM_AT_PED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_SHOOT_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_AIM_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_GOTO_NAVMESH(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HIGH_FALL_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_WAYPOINT_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_WAYPOINT_RECORDING_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_WAYPOINT_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_RECORDING_GET_NUM_POINTS(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_RECORDING_GET_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_RECORDING_GET_SPEED_AT_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_FOLLOW_WAYPOINT_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_WAYPOINT_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_WAYPOINT_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_WAYPOINT_ROUTE_OFFSET(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WAYPOINT_DISTANCE_ALONG_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_GET_IS_PAUSED(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_PAUSE(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_RESUME(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(rage::scrNativeCallContext* src)
	{
	}
	static void ASSISTED_MOVEMENT_REQUEST_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(rage::scrNativeCallContext* src)
	{
	}
	static void ASSISTED_MOVEMENT_IS_ROUTE_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(rage::scrNativeCallContext* src)
	{
	}
	static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_WAYPOINT_PROGRESS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_WAYPOINT_TARGET_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(rage::scrNativeCallContext* src)
	{
	}
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(rage::scrNativeCallContext* src)
	{
	}
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_FORCE_MOTION_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_MOVE_NETWORK_BY_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void _TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TASK_MOVE_NETWORK_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAB13A5565480B6D9(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8423541E8B3A1589(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8634CEF2522D987B(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TASK_MOVE_NETWORK_EVENT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MOVE_BLEND_RATIO_STILL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MOVE_BLEND_RATIO_WALKING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MOVE_BLEND_RATIO_RUNNING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_MOVE_BLEND_RATIO_SPRINTING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_STILL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_WALKING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RUNNING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_SPRINTING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_STRAFING(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SYNCHRONIZED_SCENE(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_AGITATED_ACTION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SWEEP_AIM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_TASK_SWEEP_AIM_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_SWEEP_AIM_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void UPDATE_TASK_SWEEP_AIM_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void TASK_ARREST_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_RUNNING_ARREST_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_BEING_ARRESTED(rage::scrNativeCallContext* src)
	{
	}
	static void UNCUFF_PED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_CUFFED(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7D6F9A3EF26136A0(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_CAN_BE_LOCKED_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE6B0E8CFC3633BF0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6EAAEFC76ACC311F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x407DC5E97DB1A4D3(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_SCRIPT_VEHICLE_GENERATOR(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_SCRIPT_VEHICLE_GENERATOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SCRIPT_VEHICLE_GENERATOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9A75585FB2E54FAD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0A436B8643716D14(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ON_GROUND_PROPERLY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_STUCK_ON_ROOF(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_VEHICLE_UPSIDEDOWN_CHECK(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_STOPPED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_NUMBER_OF_PASSENGERS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MODEL_NUMBER_OF_SEATS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_SEAT_WARP_ONLY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TURRET_SEAT(rage::scrNativeCallContext* src)
	{
	}
	static void _DOES_VEHICLE_ALLOW_RAPPEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FAR_DRAW_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_NUMBER_OF_PARKED_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOORS_LOCKED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_DOOR_DESTROY_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_HAS_MUTED_SIRENS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_DOORS_LOCKED_FOR_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x76D26A22750E849E(rage::scrNativeCallContext* src)
	{
	}
	static void EXPLODE_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_OUT_OF_CONTROL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_TIMED_EXPLOSION(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE(rage::scrNativeCallContext* src)
	{
	}
	static void _CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE(rage::scrNativeCallContext* src)
	{
	}
	static void DETONATE_VEHICLE_PHONE_EXPLOSIVE_DEVICE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TAXI_LIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TAXI_LIGHT_ON(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_IN_GARAGE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_COLOURS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_FULLBEAM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_IS_RACING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ENVEFF_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_ENVEFF_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAN_RESPRAY_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAB31EF4DE6800CE9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1B212B26DD3C04DF(rage::scrNativeCallContext* src)
	{
	}
	static void FORCE_SUBMARINE_SURFACE_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_SUBMARINE_CRUSH_DEPTHS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xED5EDE9E676643C9(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BOAT_ANCHOR(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_ANCHOR_BOAT_HERE(rage::scrNativeCallContext* src)
	{
	}
	static void _CAN_ANCHOR_BOAT_HERE_2(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BOAT_FROZEN_WHEN_ANCHORED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB28B1FE5BFADD7F5(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BOAT_MOVEMENT_RESISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_BOAT_ANCHORED_AND_FROZEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BOAT_SINKS_WHEN_WRECKED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_BOAT_IS_SINKING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_SIREN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_SIREN_ON(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_SIREN_AUDIO_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_STRONG(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_STUCK_CHECK(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_COLOURS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_SEAT_FREE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_IN_VEHICLE_SEAT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LAST_PED_IN_VEHICLE_SEAT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_LIGHTS_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_TYRE_BURST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_FORWARD_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6501129C9E0FFA05(rage::scrNativeCallContext* src)
	{
	}
	static void BRING_VEHICLE_TO_HALT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDCE97BDF8A0EABC8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9849DE24FCF23CCC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7C06330BFDDA182E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC69BB1D832A710EF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FORKLIFT_FORK_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x62CA17B74C435651(rage::scrNativeCallContext* src)
	{
	}
	static void _FIND_VEHICLE_CARRYING_THIS_ENTITY(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_HANDLER_FRAME_ABOVE_CONTAINER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6A98C2ECF57FA5D4(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_CONTAINER_FROM_HANDLER_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8AA9180DE2FEDD45(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BOAT_DISABLE_AVOIDANCE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HELI_LANDING_AREA_BLOCKED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x107A473D7A6647A9(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HELI_TURBULENCE_SCALAR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CAR_BOOT_OPEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_TYRE_BURST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOORS_SHUT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_TYRES_CAN_BURST(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_TYRES_CAN_BURST(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_WHEELS_CAN_BREAK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOOR_OPEN(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3B458DDB57038F08(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA247F9EF01D8082E(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_WINDOW(rage::scrNativeCallContext* src)
	{
	}
	static void ROLL_DOWN_WINDOWS(rage::scrNativeCallContext* src)
	{
	}
	static void ROLL_DOWN_WINDOW(rage::scrNativeCallContext* src)
	{
	}
	static void ROLL_UP_WINDOW(rage::scrNativeCallContext* src)
	{
	}
	static void SMASH_VEHICLE_WINDOW(rage::scrNativeCallContext* src)
	{
	}
	static void FIX_VEHICLE_WINDOW(rage::scrNativeCallContext* src)
	{
	}
	static void _DETACH_VEHICLE_WINDSCREEN(rage::scrNativeCallContext* src)
	{
	}
	static void _EJECT_JB700_ROOF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_LIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_LIGHTS_MODE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ALARM(rage::scrNativeCallContext* src)
	{
	}
	static void START_VEHICLE_ALARM(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_ALARM_ACTIVATED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_INTERIORLIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8821196D91FA2DE5(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_LIGHT_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_VEHICLE_TO_TRAILER(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_VEHICLE_ON_TO_TRAILER(rage::scrNativeCallContext* src)
	{
	}
	static void STABILISE_ENTITY_ATTACHED_TO_HELI(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_VEHICLE_FROM_TRAILER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_ATTACHED_TO_TRAILER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TRAILER_INVERSE_MASS_SCALE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TRAILER_LEGS_RAISED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_TRAILER_LEGS_LOWERED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_TYRE_FIXED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_NUMBER_PLATE_TEXT(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_VEHICLE_NUMBER_PLATES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RANDOM_TRAINS(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_MISSION_TRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void SWITCH_TRAIN_TRACK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TRAIN_TRACK_SPAWN_FREQUENCY(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_ALL_TRAINS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TRAIN_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TRAIN_CRUISE_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RANDOM_BOATS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_GARBAGE_TRUCKS(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_RECORDING_ID(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_VEHICLE_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_VEHICLE_RECORDING_BEEN_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_POSITION_IN_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TIME_POSITION_IN_RECORDING(rage::scrNativeCallContext* src)
	{
	}
	static void START_PLAYBACK_RECORDED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F2E4E06DEA8992B(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_PLAYBACK_RECORDED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void PAUSE_PLAYBACK_RECORDED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYBACK_GOING_ON_FOR_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_PLAYBACK_FOR_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYBACK_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(rage::scrNativeCallContext* src)
	{
	}
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYBACK_TO_USE_AI(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5845066D8A1EA7F7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x796A877E459B99EA(rage::scrNativeCallContext* src)
	{
	}
	static void _0xFAF2A78061FD9EF4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x063AE2B2CC273588(rage::scrNativeCallContext* src)
	{
	}
	static void EXPLODE_VEHICLE_IN_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_MODEL_IS_SUPPRESSED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_VEHICLE_IN_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CLOSEST_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_TRAIN_CARRIAGE(rage::scrNativeCallContext* src)
	{
	}
	static void DELETE_MISSION_TRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_MISSION_TRAIN_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_BOAT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_JETSKI(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_PLANE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_HELI(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_CAR(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_TRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_BIKE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_BICYCLE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_THIS_MODEL_A_QUADBIKE(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HELI_BLADES_FULL_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HELI_BLADES_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x99CAD8E7AFDB60FA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_BE_TARGETTED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xDBC631F109350B8C(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2311DD7159F00582(rage::scrNativeCallContext* src)
	{
	}
	static void _0x065D03A9D6B2C6B5(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_DIRT_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DIRT_LEVEL(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VEHICLE_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_DOOR_FULLY_OPEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ENGINE_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_UNDRIVEABLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_PROVIDES_COVER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOOR_CONTROL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOOR_LATCHED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_DOOR_ANGLE_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_USING_VEHICLE_DOOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOOR_SHUT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DOOR_BROKEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_BREAK(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_VEHICLE_HAVE_ROOF(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC4B3347BD68BD609(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD3301660A57C9272(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB9562064627FF9DB(rage::scrNativeCallContext* src)
	{
	}
	static void IS_BIG_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUMBER_OF_VEHICLE_COLOURS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_COLOUR_COMBINATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_COLOUR_COMBINATION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_XENON_LIGHTS_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_XENON_LIGHTS_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBE5C1255A1830FF5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9BECD4B9FEF3F8A6(rage::scrNativeCallContext* src)
	{
	}
	static void _0x88BC673CA9E0AE99(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE851E480B814D4BA(rage::scrNativeCallContext* src)
	{
	}
	static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_DOOR_LOCK_STATUS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCA4AC3EAAE46EC7B(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_DOOR_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_DOOR_CAN_BREAK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_BUMPER_BOUNCING(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_BUMPER_BROKEN_OFF(rage::scrNativeCallContext* src)
	{
	}
	static void IS_COP_VEHICLE_IN_AREA_3D(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_ON_ALL_WHEELS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5873C14A52D74236(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_LAYOUT_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA01BC64DD4BFBBAC(rage::scrNativeCallContext* src)
	{
	}
	static void SET_RENDER_TRAIN_AS_DERAILED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_EXTRA_COLOURS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_EXTRA_COLOURS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_INTERIOR_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_INTERIOR_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_DASHBOARD_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_DASHBOARD_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void STOP_ALL_GARAGE_ACTIVITY(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_FIXED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DEFORMATION_FIXED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_CAN_ENGINE_OPERATE_ON_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_LEAK_OIL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_LEAK_PETROL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_VEHICLE_ENGINE_FIRES(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC50CE861B55EAB8B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6EBFB22D646FFC18(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISABLE_PRETEND_OCCUPANTS(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_STEER_BIAS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_EXTRA_TURNED_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_EXTRA(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_EXTRA_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void _0x534E36D4DB9ECC5D(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CONVERTIBLE_ROOF(rage::scrNativeCallContext* src)
	{
	}
	static void LOWER_CONVERTIBLE_ROOF(rage::scrNativeCallContext* src)
	{
	}
	static void RAISE_CONVERTIBLE_ROOF(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CONVERTIBLE_ROOF_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_A_CONVERTIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void _TRANSFORM_VEHICLE_TO_SUBMARINE(rage::scrNativeCallContext* src)
	{
	}
	static void _TRANSFORM_SUBMARINE_TO_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_IS_SUBMARINE_VEHICLE_TRANSFORMED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x35BB21DE06784373(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_ENGINE_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ENGINE_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2A86A0475B6A1434(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_PETROL_TANK_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_PETROL_TANK_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_STUCK_TIMER_UP(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_VEHICLE_STUCK_TIMER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_DRIVEABLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9F3F689B814F2599(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4E74E62E0A97E901(rage::scrNativeCallContext* src)
	{
	}
	static void START_VEHICLE_HORN(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_SILENT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_HAS_STRONG_AXLES(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_DEFORMATION_AT_POS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_LIVERY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_LIVERY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_LIVERY_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_ROOF_LIVERY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_ROOF_LIVERY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_ROOF_LIVERY_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_WINDOW_INTACT(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_ALL_VEHICLE_WINDOWS_INTACT(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_ANY_VEHICLE_SEATS_FREE(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_VEHICLE_WHEELS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_HELI_PART_BROKEN(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HELI_MAIN_ROTOR_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HELI_TAIL_ROTOR_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HELI_TAIL_BOOM_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4056EA1105F5ABD7(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HELI_TAIL_ROTOR_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_HELI_TAIL_EXPLODE_THROW_DASHBOARD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_NAME_DEBUG(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD565F438137F0E10(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3441CAD2F2231923(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DISABLE_TOWING(rage::scrNativeCallContext* src)
	{
	}
	static void _DOES_VEHICLE_HAVE_LANDING_GEAR(rage::scrNativeCallContext* src)
	{
	}
	static void CONTROL_LANDING_GEAR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LANDING_GEAR_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void IS_ANY_VEHICLE_NEAR_POINT(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_HIGH_DETAIL(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_VEHICLE_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_VEHICLE_ASSET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_TOW_TRUCK_ARM_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_VEHICLE_TO_TOW_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_VEHICLE_FROM_TOW_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ENTITY_ATTACHED_TO_TOW_TRUCK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_AUTOMATICALLY_ATTACHES(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_BULLDOZER_ARM_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_TANK_TURRET_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0581730AB9380412(rage::scrNativeCallContext* src)
	{
	}
	static void _0x737E398138550FFF(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1093408B4B9D1146(rage::scrNativeCallContext* src)
	{
	}
	static void _DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_FLIGHT_NOZZLE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_DISABLE_VEHICLE_FLIGHT_NOZZLE_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA4822F1CF23F4810(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_BURNOUT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_IN_BURNOUT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_REDUCE_GRIP(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6DEE944E1EE90CFB(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_INDICATOR_LIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_BRAKE_LIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_HANDBRAKE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_BRAKE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x48ADC8A773564670(rage::scrNativeCallContext* src)
	{
	}
	static void _0x91D6DD290888CBAB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x51DB102F4A3BA5E0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA4A9A4C40E615885(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_TRAILER_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCAC66558B944DA67(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_RUDDER_BROKEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CONVERTIBLE_ROOF_LATCH_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_ESTIMATED_MAX_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MAX_BRAKING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MAX_TRACTION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_ACCELERATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MODEL_MAX_BRAKING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MODEL_MAX_TRACTION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MODEL_ACCELERATION(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_MODEL_ESTIMATED_AGILITY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_MODEL_MAX_KNOTS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_MODEL_MOVE_RESISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CLASS_MAX_TRACTION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CLASS_MAX_AGILITY(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CLASS_MAX_ACCELERATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CLASS_MAX_BRAKING(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_SPEED_ZONE_FOR_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void _REMOVE_SPEED_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void OPEN_BOMB_BAY_DOORS(rage::scrNativeCallContext* src)
	{
	}
	static void CLOSE_BOMB_BAY_DOORS(rage::scrNativeCallContext* src)
	{
	}
	static void _ARE_BOMB_BAY_DOORS_OPEN(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_SEARCHLIGHT_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_SEARCHLIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x639431E895B9AA57(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTRY_POSITION_OF_DOOR(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_SHUFFLE_SEAT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_MOD_KITS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_MOD_KIT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD_KIT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD_KIT_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_WHEEL_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_WHEEL_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_MOD_COLORS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_MOD_COLOR_1(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_MOD_COLOR_2(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD_COLOR_1(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD_COLOR_2(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VEHICLE_MOD_LOAD_DONE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_MOD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD_VARIATION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_VEHICLE_MODS(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_MOD(rage::scrNativeCallContext* src)
	{
	}
	static void TOGGLE_VEHICLE_MOD(rage::scrNativeCallContext* src)
	{
	}
	static void IS_TOGGLE_MOD_ON(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD_MODIFIER_VALUE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_MOD_IDENTIFIER_HASH(rage::scrNativeCallContext* src)
	{
	}
	static void PRELOAD_VEHICLE_MOD(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PRELOAD_MODS_FINISHED(rage::scrNativeCallContext* src)
	{
	}
	static void RELEASE_PRELOAD_MODS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_TYRE_SMOKE_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_TYRE_SMOKE_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_WINDOW_TINT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_WINDOW_TINT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_NUM_VEHICLE_WINDOW_TINTS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEEBFC7A7EFDC35B4(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CAUSE_OF_DESTRUCTION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5EE5632F47AE9695(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VEHICLE_ENGINE_ON_FIRE(rage::scrNativeCallContext* src)
	{
	}
	static void MODIFY_VEHICLE_TOP_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_MAX_SPEED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1CF38D529D7441D9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F9FB66F3A3842D2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x59C3757B3B7408E8(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CHEAT_POWER_INCREASE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0AD9E8F87FF7C16F(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_IS_WANTED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF488C566413B4232(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BOAT_BOOM_POSITION_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0F3B4D4E43177236(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BOAT_BOOM_POSITION_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_PLANE_AILERON(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_VEHICLE_ENGINE_RUNNING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_USE_ALTERNATE_HANDLING(rage::scrNativeCallContext* src)
	{
	}
	static void SET_BIKE_ON_STAND(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAB04325045427AAE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCFD778E7904C255E(rage::scrNativeCallContext* src)
	{
	}
	static void SET_LAST_DRIVEN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LAST_DRIVEN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_LAST_DRIVEN_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_LOD_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_SAVE_IN_GARAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_NUMBER_OF_BROKEN_BONES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4D9D109F63FEE1D4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x279D50DE5652D935(rage::scrNativeCallContext* src)
	{
	}
	static void COPY_VEHICLE_DAMAGES(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF25E02CB9C5818F8(rage::scrNativeCallContext* src)
	{
	}
	static void SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_SHOOT_AT_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_LOCK_ON_TARGET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FORCE_HD_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x182F266C2D9E2BEB(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_PLATE_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void TRACK_VEHICLE_VISIBILITY(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_GRAVITY(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE6C0C80B8C867537(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF051D9BFB6BA39C0(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36492C2F0D134C56(rage::scrNativeCallContext* src)
	{
	}
	static void _0x48C633E94A8142A7(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ACTIVE_DURING_PLAYBACK(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_SPRAYABLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF0E4BA16D1DB546C(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF87D9F2301F7D206(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PLANE_LANDING_GEAR_INTACT(rage::scrNativeCallContext* src)
	{
	}
	static void ARE_PLANE_PROPELLERS_INTACT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4C815EB175086F84(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_DEFORM_WHEELS(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_STOLEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_IS_STOLEN(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLANE_TURBULENCE_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _ARE_PLANE_WINGS_INTACT(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB264C4D2F2B0A78B(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_VEHICLE_FROM_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void DETACH_VEHICLE_FROM_ANY_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void _DETACH_ENTITY_FROM_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void IS_VEHICLE_ATTACHED_TO_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_ATTACHED_TO_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ENTITY_ATTACHED_TO_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void ATTACH_VEHICLE_TO_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void _ATTACH_ENTITY_TO_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x571FEB383F629926(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1F34B0626C594380(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2C1D8B3B19E517CC(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_CARGOBOB_HOOK_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_CARGOBOB_HAVE_PICK_UP_ROPE(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CARGOBOB_HOOK_POSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC0ED6438E6D39BA8(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_ROPE_DAMPING_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_ROPE_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_CARGOBOB_HAVE_PICKUP_MAGNET(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_EFFECT_RADIUS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_FALLOFF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_PULL_ROPE_LENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_PULL_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_FALLOFF(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_STRENGTH(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9BDDC73CC6A115D4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x56EB5E94318D3FB6(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_VEHICLE_HAVE_WEAPONS(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2C4A1590ABF43E8B(rage::scrNativeCallContext* src)
	{
	}
	static void DISABLE_VEHICLE_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VEHICLE_WEAPON_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE05DD0E9707003A3(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_CLOSE_DOOR_DEFERED_ACTION(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CLASS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_CLASS_FROM_NAME(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PLAYERS_LAST_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE5810AC70602F2F5(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_JET_ENGINE_ON(rage::scrNativeCallContext* src)
	{
	}
	static void _0x6A973569BA094650(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_HANDLING_HASH_FOR_AI(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_EXTENDED_REMOVAL_RANGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_STEERING_BIAS_SCALAR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HELICOPTER_ROLL_PITCH_YAW_MULT(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_FRICTION_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF78F94D60248C737(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_CEILING_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5E569EC46EC21CAE(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_VEHICLE_ROUTE_HISTORY(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_VEHICLE_EXIST_WITH_DECORATOR(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_EXCLUSIVE_DRIVER(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_EXCLUSIVE_DRIVER_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB09D25E77C33EB3F(rage::scrNativeCallContext* src)
	{
	}
	static void _DISABLE_PLANE_PROPELLER(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_FORCE_AFTERBURNER(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB68CFAF83A02768D(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0205F5365292D2EB(rage::scrNativeCallContext* src)
	{
	}
	static void _0xCF9159024555488C(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DISTANT_CARS_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_NEON_LIGHTS_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB93B2867F7B479D1(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_NEON_LIGHTS_COLOUR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_NEON_LIGHT_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VEHICLE_NEON_LIGHT_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x35E0654F4BAD7971(rage::scrNativeCallContext* src)
	{
	}
	static void _DISABLE_VEHICLE_NEON_LIGHTS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB088E9A47AE6EDD5(rage::scrNativeCallContext* src)
	{
	}
	static void _REQUEST_VEHICLE_DASHBOARD_SCALEFORM_MOVIE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_BODY_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_BODY_HEALTH(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_SUSPENSION_BOUNDS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_SUSPENSION_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_NUMBER_OF_VEHICLE_DOORS(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HYDRAULIC_RAISED(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA7DCDF4DED40A8F4(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_BODY_HEALTH_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD4C4642CB7F50B5D(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC361AA040D6637A8(rage::scrNativeCallContext* src)
	{
	}
	static void SET_VEHICLE_KERS_ALLOWED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_VEHICLE_HAS_KERS(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE16142B94664DEFD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x26D99D5A82FD18E8(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HYDRAULIC_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAMBERED_WHEELS_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HYDRAULIC_WHEEL_STATE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_HYDRAULIC_WHEEL_STATE_TRANSITION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5BA68A0840D546AC(rage::scrNativeCallContext* src)
	{
	}
	static void _0x4419966C9936071A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x870B8B7A766615C8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8533CAFDE1F0F336(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_UNK_DAMAGE_MULTIPLIER(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD4196117AF7BB974(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBB2333BB87DDD87F(rage::scrNativeCallContext* src)
	{
	}
	static void _0x73561D4425A021A2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5B91B229243351A8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x7BBE7FF626A591FE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x65B080555EA48149(rage::scrNativeCallContext* src)
	{
	}
	static void _0x428AD3E26C8D9EB0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE2F53F172B45EDE1(rage::scrNativeCallContext* src)
	{
	}
	static void _0xBA91D045575699AD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x80E3357FDEF45C21(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_RAMP_LAUNCH_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_IS_DOOR_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_ROCKET_BOOST_REFILL_TIME(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_HAS_ROCKET_BOOST(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_VEHICLE_ROCKET_BOOST_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_ROCKET_BOOST_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_HAS_RETRACTABLE_WHEELS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_IS_WHEELS_LOWERED_STATE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _RAISE_RETRACTABLE_WHEELS(rage::scrNativeCallContext* src)
	{
	}
	static void _LOWER_RETRACTABLE_WHEELS(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_CAN_VEHICLE_JUMP(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_USE_HIGHER_VEHICLE_JUMP_FORCE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB2E0C0D6922D31F2(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_WEAPON_CAPACITY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_WEAPON_CAPACITY(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_HAS_PARACHUTE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_CAN_ACTIVATE_PARACHUTE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_PARACHUTE_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3DE51E9C80B116CF(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_RECEIVES_RAMP_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_RAMP_SIDEWAYS_LAUNCH_MOTION(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_RAMP_UPWARDS_LAUNCH_MOTION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9D30687C57BAA0BB(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_WEAPONS_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x41290B40FA63E6DA(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_PARACHUTE_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_PARACHUTE_TEXTURE_VARIATIION(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0419B167EE128F33(rage::scrNativeCallContext* src)
	{
	}
	static void _0xF3B0E0AED097A3F5(rage::scrNativeCallContext* src)
	{
	}
	static void _0xD3E51C0AB8C26EEE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_ALL_VEHICLES(rage::scrNativeCallContext* src)
	{
	}
	static void _0x72BECCF4B829522E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x66E3AAFACE2D1EB8(rage::scrNativeCallContext* src)
	{
	}
	static void _0x1312DDD8385AEE4E(rage::scrNativeCallContext* src)
	{
	}
	static void _0xEDBC8405B3895CC9(rage::scrNativeCallContext* src)
	{
	}
	static void _0x26E13D440E7F6064(rage::scrNativeCallContext* src)
	{
	}
	static void _0x2FA2494B47FDD009(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_ROCKET_BOOST_PERCENTAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x544996C0081ABDEB(rage::scrNativeCallContext* src)
	{
	}
	static void _0x78CEEE41F49F421F(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAF60E6A2936F982A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x430A7631A84C9BE7(rage::scrNativeCallContext* src)
	{
	}
	static void _0x75627043C6AA90AD(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8235F1BEAD557629(rage::scrNativeCallContext* src)
	{
	}
	static void _0x9640E30A7F395E4B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0BBB9A7A8FFE931B(rage::scrNativeCallContext* src)
	{
	}
	static void _0x94A68DA412C4007D(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_BOMB_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_BOMB_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_COUNTERMEASURE_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_VEHICLE_COUNTERMEASURE_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _0x0A3F820A9A9A9AC5(rage::scrNativeCallContext* src)
	{
	}
	static void _0x51F30DB60626A20E(rage::scrNativeCallContext* src)
	{
	}
	static void _0x97841634EF7DF1D6(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_HOVER_TRANSFORM_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_HOVER_TRANSFORM_PERCENTAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_HOVER_TRANSFORM_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_HOVER_TRANSFORM_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0x3A9128352EAC9E85(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8DC9675797123522(rage::scrNativeCallContext* src)
	{
	}
	static void _0xB251E0B33E58B424(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAEF12960FA943792(rage::scrNativeCallContext* src)
	{
	}
	static void _0xAA653AE61924B0A0(rage::scrNativeCallContext* src)
	{
	}
	static void _0xC60060EB0D8AC7B1(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_SPECIALFLIGHT_WING_RATIO(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE615BB7A7752C76A(rage::scrNativeCallContext* src)
	{
	}
	static void _0x887FA38787DE8C72(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_UNK_FLOAT_0x104_FOR_SUBMARINE_VEHICLE_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_UNK_BOOL_0x102_FOR_SUBMARINE_VEHICLE_TASK(rage::scrNativeCallContext* src)
	{
	}
	static void _0x36DE109527A2C0C4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x82E0AC411E41A5B4(rage::scrNativeCallContext* src)
	{
	}
	static void _0x99A05839C46CE316(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_IS_VEHICLE_SHUNT_BOOST_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE8718FAF591FD224(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_LAST_RAMMED_VEHICLE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_DISABLE_VEHICLE_UNK(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_NITRO_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_VEHICLE_WHEELS_DEAL_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_DISABLE_VEHICLE_UNK_2(rage::scrNativeCallContext* src)
	{
	}
	static void _0x5BBCF35BF6E456F7(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_DOES_VEHICLE_HAVE_TOMBSTONE(rage::scrNativeCallContext* src)
	{
	}
	static void _HIDE_VEHICLE_TOMBSTONE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_IS_VEHICLE_EMP_DISABLED(rage::scrNativeCallContext* src)
	{
	}
	static void _0x8F0D5BA1C2CC91D7(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WATER_HEIGHT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WATER_HEIGHT_NO_WAVES(rage::scrNativeCallContext* src)
	{
	}
	static void TEST_PROBE_AGAINST_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void TEST_PROBE_AGAINST_ALL_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void MODIFY_WATER(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_CURRENT_RISE(rage::scrNativeCallContext* src)
	{
	}
	static void _REMOVE_CURRENT_RISE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_DEEP_OCEAN_SCALER(rage::scrNativeCallContext* src)
	{
	}
	static void GET_DEEP_OCEAN_SCALER(rage::scrNativeCallContext* src)
	{
	}
	static void _0x547237AA71AB44DE(rage::scrNativeCallContext* src)
	{
	}
	static void RESET_DEEP_OCEAN_SCALER(rage::scrNativeCallContext* src)
	{
	}
	static void ENABLE_LASER_SIGHT_RENDERING(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_COMPONENT_TYPE_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPONTYPE_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPONTYPE_SLOT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPONTYPE_GROUP(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_WEAPON_COMPONENT_VARIANT_EXTRA_COMPONENT_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_WEAPON_COMPONENT_VARIANT_EXTRA_COMPONENT_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CURRENT_PED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_PED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_PED_WEAPON_ENTITY_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_BEST_PED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_CURRENT_PED_VEHICLE_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void GET_CURRENT_PED_VEHICLE_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void _0x50276EF8172F5F12(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_ARMED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_WEAPON_VALID(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PED_GOT_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_WEAPON_READY_TO_SHOOT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_WEAPONTYPE_IN_SLOT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_AMMO_IN_PED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void ADD_AMMO_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AMMO(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_INFINITE_AMMO(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_INFINITE_AMMO_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_WEAPON_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_DELAYED_WEAPON_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ALL_PED_WEAPONS(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_WEAPON_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CURRENT_WEAPON_VISIBLE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PED_BEEN_DAMAGED_BY_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_PED_LAST_WEAPON_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DROPS_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_DROPS_INVENTORY_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_AMMO_IN_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_AMMO_IN_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void SET_AMMO_IN_CLIP(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_AMMO(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_MAX_AMMO_2(rage::scrNativeCallContext* src)
	{
	}
	static void _ADD_PED_AMMO(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AMMO_BY_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_AMMO_BY_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_AMMO_TO_DROP(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE620FD3512A04F18(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_AMMO_TYPE_FROM_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PED_AMMO_TYPE_FROM_WEAPON_2(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_LAST_WEAPON_IMPACT_COORD(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_GADGET(rage::scrNativeCallContext* src)
	{
	}
	static void GET_IS_PED_GADGET_EQUIPPED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_SELECTED_PED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void EXPLODE_PROJECTILES(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_ALL_PROJECTILES_OF_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_WEAPON_COMPONENT_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_WEAPON_COMPONENT_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_PED_GOT_WEAPON_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_WEAPON_COMPONENT_ACTIVE(rage::scrNativeCallContext* src)
	{
	}
	static void _PED_SKIP_NEXT_RELOADING(rage::scrNativeCallContext* src)
	{
	}
	static void MAKE_PED_RELOAD(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_WEAPON_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_WEAPON_ASSET_LOADED(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_WEAPON_ASSET(rage::scrNativeCallContext* src)
	{
	}
	static void CREATE_WEAPON_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(rage::scrNativeCallContext* src)
	{
	}
	static void HAS_WEAPON_GOT_WEAPON_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void GIVE_WEAPON_OBJECT_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void DOES_WEAPON_TAKE_WEAPON_COMPONENT(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_OBJECT_FROM_PED(rage::scrNativeCallContext* src)
	{
	}
	static void _GIVE_LOADOUT_TO_PED(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_WEAPON_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_PED_WEAPON_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WEAPON_OBJECT_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_OBJECT_TINT_INDEX(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_TINT_COUNT(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PED_WEAPON_LIVERY_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_PED_WEAPON_LIVERY_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_WEAPON_OBJECT_LIVERY_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_WEAPON_OBJECT_LIVERY_COLOR(rage::scrNativeCallContext* src)
	{
	}
	static void _0xA2C9AC24B4061285(rage::scrNativeCallContext* src)
	{
	}
	static void _0x977CA98939E82E4B(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_HUD_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_COMPONENT_HUD_STATS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_DAMAGE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_CLIP_SIZE(rage::scrNativeCallContext* src)
	{
	}
	static void _GET_WEAPON_TIME_BETWEEN_SHOTS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_CHANCE_OF_FIRING_BLANKS(rage::scrNativeCallContext* src)
	{
	}
	static void SET_PED_SHOOT_ORDNANCE_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
	}
	static void IS_PED_CURRENT_WEAPON_SILENCED(rage::scrNativeCallContext* src)
	{
	}
	static void IS_FLASH_LIGHT_ON(rage::scrNativeCallContext* src)
	{
	}
	static void SET_FLASH_LIGHT_FADE_DISTANCE(rage::scrNativeCallContext* src)
	{
	}
	static void SET_WEAPON_ANIMATION_OVERRIDE(rage::scrNativeCallContext* src)
	{
	}
	static void GET_WEAPON_DAMAGE_TYPE(rage::scrNativeCallContext* src)
	{
	}
	static void _0xE4DCEC7FD5B739A5(rage::scrNativeCallContext* src)
	{
	}
	static void CAN_USE_WEAPON_ON_PARACHUTE(rage::scrNativeCallContext* src)
	{
	}
	static void _CREATE_AIR_DEFENSE_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void _CREATE_AIR_DEFENSE_AREA(rage::scrNativeCallContext* src)
	{
	}
	static void _REMOVE_AIR_DEFENSE_ZONE(rage::scrNativeCallContext* src)
	{
	}
	static void _REMOVE_ALL_AIR_DEFENSE_ZONES(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_PLAYER_AIR_DEFENSE_ZONE_FLAG(rage::scrNativeCallContext* src)
	{
	}
	static void _IS_AIR_DEFENSE_ZONE_INSIDE_SPHERE(rage::scrNativeCallContext* src)
	{
	}
	static void _FIRE_AIR_DEFENSE_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void _DOES_AIR_DEFENSE_ZONE_EXIST(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAN_PED_EQUIP_WEAPON(rage::scrNativeCallContext* src)
	{
	}
	static void _SET_CAN_PED_EQUIP_ALL_WEAPONS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ZONE_AT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ZONE_FROM_NAME_ID(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ZONE_POPSCHEDULE(rage::scrNativeCallContext* src)
	{
	}
	static void char*(rage::scrNativeCallContext* src)
	{
	}
	static void SET_ZONE_ENABLED(rage::scrNativeCallContext* src)
	{
	}
	static void GET_ZONE_SCUMMINESS(rage::scrNativeCallContext* src)
	{
	}
	static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(rage::scrNativeCallContext* src)
	{
	}
	static void GET_HASH_OF_MAP_AREA_AT_COORDS(rage::scrNativeCallContext* src)
	{
	}
	static std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler> log_native =
		{0x4EDE34FBADD967A6, &WAIT},
		{0xE81651AD79516E48, &START_NEW_SCRIPT},
		{0xB8BA7F44DF1575E1, &START_NEW_SCRIPT_WITH_ARGS},
		{0xEB1C67C3A5333A92, &START_NEW_SCRIPT_WITH_NAME_HASH},
		{0xC4BB298BD441BE78, &START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS},
		{0x83666F9FB8FEBD4B, &TIMERA},
		{0xC9D9444186B5A374, &TIMERB},
		{0xC1B1E9A034A63A62, &SETTIMERA},
		{0x5AE11BC36633DE4E, &SETTIMERB},
		{0x0000000050597EE2, &TIMESTEP},
		{0x0BADBFA3B172435F, &SIN},
		{0xD0FFB162F40A139C, &COS},
		{0x71D93B57D07F9804, &SQRT},
		{0xE3621CC40F31FE2E, &POW},
		{0xE816E655DE37FE20, &_LOG10},
		{0x652D2EEEF1D3E62C, &VMAG},
		{0xA8CEACB4F35AE058, &VMAG2},
		{0x2A488C176D52CCA5, &VDIST},
		{0xB7A628320EFF8E47, &VDIST2},
		{0xEDD95A39E5544DE8, &SHIFT_LEFT},
		{0x97EF1E5BCE9DC075, &SHIFT_RIGHT},
		{0xF34EE736CF047844, &FLOOR},
		{0x11E019C8F43ACC8A, &CEIL},
		{0xF2DB717A73826179, &ROUND},
		{0xBBDA792448DB5A89, &TO_FLOAT},
		{0x42B65DEEF2EDF2A1, &_SET_THREAD_PRIORITY},
		{0x846AA8E7D55EE5B6, &APP_DATA_VALID},
		{0xD3A58A12C77D9D4B, &APP_GET_INT},
		{0x1514FB24C02C2322, &APP_GET_FLOAT},
		{0x749B023950D2311C, &char*},
		{0x607E8E3D3E4F9611, &APP_SET_INT},
		{0x25D7687C68E0DAA4, &APP_SET_FLOAT},
		{0x3FF2FCEC4B7721B4, &APP_SET_STRING},
		{0xCFD0406ADAF90D2B, &APP_SET_APP},
		{0x262AB456A3D21F93, &APP_SET_BLOCK},
		{0x5FE1DF3342DB7DBA, &APP_CLEAR_BLOCK},
		{0xE41C65E07A5F05FC, &APP_CLOSE_APP},
		{0xE8E3FCF72EAC0EF8, &APP_CLOSE_BLOCK},
		{0x71EEE69745088DA0, &APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT},
		{0xCA52279A7271517F, &APP_HAS_SYNCED_DATA},
		{0x95C5D356CDA6E85F, &APP_SAVE_DATA},
		{0xC9853A2BE3DED1A6, &APP_GET_DELETED_FILE_STATUS},
		{0x44151AEA95C8A003, &APP_DELETE_APP_DATA},
		{0xF9E56683CA8E11A5, &PLAY_PED_RINGTONE},
		{0x1E8E5E20937E3137, &IS_PED_RINGTONE_PLAYING},
		{0x6C5AE23EFA885092, &STOP_PED_RINGTONE},
		{0x7497D2CE2C30D24C, &IS_MOBILE_PHONE_CALL_ONGOING},
		{0xC8B1B2425604CDD0, &_0xC8B1B2425604CDD0},
		{0xD2C91A0B572AAE56, &CREATE_NEW_SCRIPTED_CONVERSATION},
		{0xC5EF963405593646, &ADD_LINE_TO_CONVERSATION},
		{0x95D9F4BC443956E7, &ADD_PED_TO_CONVERSATION},
		{0x33E3C6C6F2F0B506, &_0x33E3C6C6F2F0B506},
		{0x892B6AB8F33606F5, &_0x892B6AB8F33606F5},
		{0xB6AE90EDDE95C762, &SET_MICROPHONE_POSITION},
		{0x0B568201DD99F0EB, &_0x0B568201DD99F0EB},
		{0x61631F5DF50D1C34, &_0x61631F5DF50D1C34},
		{0x252E5F915EABB675, &START_SCRIPT_PHONE_CONVERSATION},
		{0x6004BCB0E226AAEA, &PRELOAD_SCRIPT_PHONE_CONVERSATION},
		{0x6B17C62C9635D2DC, &START_SCRIPT_CONVERSATION},
		{0x3B3CAD6166916D87, &PRELOAD_SCRIPT_CONVERSATION},
		{0x23641AFE870AF385, &START_PRELOADED_CONVERSATION},
		{0xE73364DB90778FFA, &GET_IS_PRELOADED_CONVERSATION_READY},
		{0x16754C556D2EDE3D, &IS_SCRIPTED_CONVERSATION_ONGOING},
		{0xDF0D54BE7A776737, &IS_SCRIPTED_CONVERSATION_LOADED},
		{0x480357EE890C295A, &GET_CURRENT_SCRIPTED_CONVERSATION_LINE},
		{0x8530AD776CD72B12, &PAUSE_SCRIPTED_CONVERSATION},
		{0x9AEB285D1818C9AC, &RESTART_SCRIPTED_CONVERSATION},
		{0xD79DEEFB53455EBA, &STOP_SCRIPTED_CONVERSATION},
		{0x9663FE6B7A61EB00, &SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE},
		{0xA018A12E5C5C2FA6, &INTERRUPT_CONVERSATION},
		{0x8A694D7A68F8DC38, &INTERRUPT_CONVERSATION_AND_PAUSE},
		{0xAA19F5572C38B564, &_0xAA19F5572C38B564},
		{0xB542DE8C3D1CB210, &_0xB542DE8C3D1CB210},
		{0xC6ED9D5092438D91, &REGISTER_SCRIPT_WITH_AUDIO},
		{0xA8638BE228D4751A, &UNREGISTER_SCRIPT_WITH_AUDIO},
		{0x7345BDD95E62E0F2, &REQUEST_MISSION_AUDIO_BANK},
		{0xFE02FFBED8CA9D99, &REQUEST_AMBIENT_AUDIO_BANK},
		{0x2F844A8B08D76685, &REQUEST_SCRIPT_AUDIO_BANK},
		{0x40763EA7B9B783E7, &_0x40763EA7B9B783E7},
		{0x8F8C0E370AE62F5C, &HINT_AMBIENT_AUDIO_BANK},
		{0xFB380A29641EC31A, &HINT_SCRIPT_AUDIO_BANK},
		{0x0EC92A1BF0857187, &RELEASE_MISSION_AUDIO_BANK},
		{0x65475A218FFAA93D, &RELEASE_AMBIENT_AUDIO_BANK},
		{0x77ED170667F50170, &RELEASE_NAMED_SCRIPT_AUDIO_BANK},
		{0x7A2D8AD0A9EB9C3F, &RELEASE_SCRIPT_AUDIO_BANK},
		{0x19AF7ED9B9D23058, &_0x19AF7ED9B9D23058},
		{0x9AC92EED5E4793AB, &_0x9AC92EED5E4793AB},
		{0x11579D940949C49E, &_0x11579D940949C49E},
		{0x430386FE9BF80B45, &GET_SOUND_ID},
		{0x353FC880830B88FA, &RELEASE_SOUND_ID},
		{0x7FF4944CC209192D, &PLAY_SOUND},
		{0x67C540AA08E4A6F5, &PLAY_SOUND_FRONTEND},
		{0xCADA5A0D0702381E, &PLAY_DEFERRED_SOUND_FRONTEND},
		{0xE65F427EB70AB1ED, &PLAY_SOUND_FROM_ENTITY},
		{0x5B9853296731E88D, &_0x5B9853296731E88D},
		{0x8D8686B622B88120, &PLAY_SOUND_FROM_COORD},
		{0x7EC3C679D0E7E46B, &_0x7EC3C679D0E7E46B},
		{0xA3B0C41BA5CC0BB5, &STOP_SOUND},
		{0x2DE3F0A134FFBC0D, &GET_NETWORK_ID_FROM_SOUND_ID},
		{0x75262FD12D0A1C84, &GET_SOUND_ID_FROM_NETWORK_ID},
		{0xAD6B3148A78AE9B6, &SET_VARIABLE_ON_SOUND},
		{0x2F9D3834AEB9EF79, &SET_VARIABLE_ON_STREAM},
		{0xF2A9CDABCEA04BD6, &OVERRIDE_UNDERWATER_STREAM},
		{0x733ADF241531E5C2, &SET_VARIABLE_ON_UNDER_WATER_STREAM},
		{0xFCBDCE714A7C88E5, &HAS_SOUND_FINISHED},
		{0x8E04FEDD28D42462, &_PLAY_AMBIENT_SPEECH1},
		{0xC6941B4A3A8FBBB9, &_PLAY_AMBIENT_SPEECH2},
		{0x3523634255FC3318, &_PLAY_AMBIENT_SPEECH_WITH_VOICE},
		{0xED640017ED337E45, &_PLAY_AMBIENT_SPEECH_AT_COORDS},
		{0x13AD665062541A7E, &OVERRIDE_TREVOR_RAGE},
		{0xE78503B10C4314E0, &RESET_TREVOR_RAGE},
		{0xEA241BB04110F091, &SET_PLAYER_ANGRY},
		{0xBC9AE166038A5CEC, &PLAY_PAIN},
		{0xCE4AC0439F607045, &RELEASE_WEAPON_AUDIO},
		{0xD01005D2BA2EB778, &ACTIVATE_AUDIO_SLOWMO_MODE},
		{0xDDC635D5B3262C56, &DEACTIVATE_AUDIO_SLOWMO_MODE},
		{0x6C8065A3B780185B, &SET_AMBIENT_VOICE_NAME},
		{0x9A53DED9921DE990, &_SET_AMBIENT_VOICE_NAME_HASH},
		{0x5E203DA2BA15D436, &_GET_AMBIENT_VOICE_NAME_HASH},
		{0x40CF0D12D142A9E8, &_SET_PED_SCREAM},
		{0x1B7ABE26CBCBF8C7, &_0x1B7ABE26CBCBF8C7},
		{0x7CDC8C3B89F661B3, &_SET_PED_VOICE_GROUP},
		{0xA5342D390CDA41D6, &_0xA5342D390CDA41D6},
		{0x7A73D05A607734C7, &STOP_CURRENT_PLAYING_SPEECH},
		{0xB8BEC0CA6F0EDB0F, &STOP_CURRENT_PLAYING_AMBIENT_SPEECH},
		{0x9072C8B49907BFAD, &IS_AMBIENT_SPEECH_PLAYING},
		{0xCC9AA18DCC7084F4, &IS_SCRIPTED_SPEECH_PLAYING},
		{0x729072355FA39EC9, &IS_ANY_SPEECH_PLAYING},
		{0x49B99BF3FDA89A7A, &_CAN_PED_SPEAK},
		{0x049E937F18F4020C, &IS_PED_IN_CURRENT_CONVERSATION},
		{0x95D2D383D5396B8A, &SET_PED_IS_DRUNK},
		{0xEE066C7006C49C0A, &PLAY_ANIMAL_VOCALIZATION},
		{0xC265DF9FB44A9FBD, &IS_ANIMAL_VOCALIZATION_PLAYING},
		{0xCC97B29285B1DC3B, &SET_ANIMAL_MOOD},
		{0xB35CE999E8EF317E, &IS_MOBILE_PHONE_RADIO_ACTIVE},
		{0xBF286C554784F3DF, &SET_MOBILE_PHONE_RADIO_STATE},
		{0xE8AF77C4C06ADC93, &GET_PLAYER_RADIO_STATION_INDEX},
		{0xF6D733C32076AD03, &char*},
		{0xB28ECA15046CA8B9, &char*},
		{0xA571991A7FE6CCEB, &GET_PLAYER_RADIO_STATION_GENRE},
		{0xA151A7394A214E65, &IS_RADIO_RETUNING},
		{0x0626A247D2405330, &IS_RADIO_FADED_OUT},
		{0xFF266D1D0EB1195D, &_0xFF266D1D0EB1195D},
		{0xDD6BCF9E94425DF9, &_0xDD6BCF9E94425DF9},
		{0xC69EDA28699D5107, &SET_RADIO_TO_STATION_NAME},
		{0x1B9C0099CB942AC6, &SET_VEH_RADIO_STATION},
		{0x0BE4BE946463F917, &_0x0BE4BE946463F917},
		{0xC1805D05E6D4FE10, &_0xC1805D05E6D4FE10},
		{0xACF57305B12AF907, &SET_EMITTER_RADIO_STATION},
		{0x399D2D3B33F1B8EB, &SET_NATIVE_DECL_EMITTER_ENABLED},
		{0x651D3228960D08AF, &_LINK_NATIVE_DECL_EMITTER_TO_ENTITY},
		{0xA619B168B8A8570F, &SET_RADIO_TO_STATION_INDEX},
		{0xF7F26C6E9CC9EBB8, &SET_FRONTEND_RADIO_ACTIVE},
		{0xB165AB7C248B2DC1, &UNLOCK_MISSION_NEWS_STORY},
		{0x66E49BF55B4B1874, &IS_MISSION_NEWS_STORY_UNLOCKED},
		{0x50B196FC9ED6545B, &GET_AUDIBLE_MUSIC_TRACK_TEXT_ID},
		{0xCD536C4D33DCC900, &PLAY_END_CREDITS_MUSIC},
		{0x6DDBBDD98E2E9C25, &SKIP_RADIO_FORWARD},
		{0x344F393B027E38C3, &FREEZE_RADIO_STATION},
		{0xFC00454CF60B91DD, &UNFREEZE_RADIO_STATION},
		{0xC1AA9F53CE982990, &SET_RADIO_AUTO_UNFREEZE},
		{0x88795F13FACDA88D, &SET_INITIAL_PLAYER_STATION},
		{0x19F21E63AE6EAE4E, &SET_USER_RADIO_CONTROL_ENABLED},
		{0xB39786F201FEE30B, &SET_RADIO_TRACK},
		{0x2CB0075110BE1E56, &_SET_RADIO_TRACK_MIX},
		{0xBB6F1CAEC68B0BCE, &SET_VEHICLE_RADIO_LOUD},
		{0x032A116663A4D5AC, &_IS_VEHICLE_RADIO_LOUD},
		{0x1098355A16064BB3, &SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY},
		{0x109697E2FFBAC8A1, &DOES_PLAYER_VEH_HAVE_RADIO},
		{0x5F43D83FD6738741, &IS_PLAYER_VEH_RADIO_ENABLE},
		{0x3B988190C0AA6C0B, &SET_VEHICLE_RADIO_ENABLED},
		{0xDA07819E452FFE8F, &_0xDA07819E452FFE8F},
		{0x4E404A9361F75BB2, &SET_CUSTOM_RADIO_TRACK_LIST},
		{0x1654F24A88A8E3FE, &CLEAR_CUSTOM_RADIO_TRACK_LIST},
		{0xF1620ECB50E01DE7, &GET_NUM_UNLOCKED_RADIO_STATIONS},
		{0x8D67489793FF428B, &FIND_RADIO_STATION_INDEX},
		{0x774BD811F656A122, &SET_RADIO_STATION_MUSIC_ONLY},
		{0x2C96CDB04FCA358E, &SET_RADIO_FRONTEND_FADE_TIME},
		{0x031ACB6ABA18C729, &UNLOCK_RADIO_STATION_TRACK_LIST},
		{0x47AED84213A47510, &_UPDATE_LSUR},
		{0x477D9DB48F889591, &_LOCK_RADIO_STATION},
		{0xC64A06D939F826F5, &_0xC64A06D939F826F5},
		{0x3E65CDE5215832C1, &_0x3E65CDE5215832C1},
		{0x34D66BC058019CE0, &_0x34D66BC058019CE0},
		{0xF3365489E0DD50F9, &_0xF3365489E0DD50F9},
		{0xBDA07E5950085E46, &SET_AMBIENT_ZONE_STATE},
		{0x218DD44AAAC964FF, &CLEAR_AMBIENT_ZONE_STATE},
		{0x9748FA4DE50CCE3E, &SET_AMBIENT_ZONE_LIST_STATE},
		{0x120C48C614909FA4, &CLEAR_AMBIENT_ZONE_LIST_STATE},
		{0x1D6650420CEC9D3B, &SET_AMBIENT_ZONE_STATE_PERSISTENT},
		{0xF3638DAE8C4045E1, &SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT},
		{0x01E2817A479A7F9B, &IS_AMBIENT_ZONE_ENABLED},
		{0x5D2BFAAB8D956E0E, &_0x5D2BFAAB8D956E0E},
		{0x3B4BF5F0859204D9, &SET_CUTSCENE_AUDIO_OVERRIDE},
		{0xBCC29F935ED07688, &_SET_VARIABLE_ON_CUTSCENE_AUDIO},
		{0xDFEBD56D9BD1EB16, &PLAY_POLICE_REPORT},
		{0xB4F90FAF7670B16F, &_CANCEL_CURRENT_POLICE_REPORT},
		{0x1B9025BDA76822B6, &BLIP_SIREN},
		{0x3CDC1E622CCE0356, &OVERRIDE_VEH_HORN},
		{0x9D6BFC12B05C6121, &IS_HORN_ACTIVE},
		{0x395BF71085D1B1D9, &SET_AGGRESSIVE_HORNS},
		{0x02E93C796ABD3A97, &_0x02E93C796ABD3A97},
		{0x58BB377BEC7CD5F4, &_0x58BB377BEC7CD5F4},
		{0x9BD7BD55E4533183, &_0x9BD7BD55E4533183},
		{0xD11FA52EB849D978, &IS_STREAM_PLAYING},
		{0x4E72BBDBCA58A3DB, &GET_STREAM_PLAY_TIME},
		{0x1F1F957154EC51DF, &LOAD_STREAM},
		{0x59C16B79F53B3712, &LOAD_STREAM_WITH_START_OFFSET},
		{0x89049DD63C08B5D1, &PLAY_STREAM_FROM_PED},
		{0xB70374A758007DFA, &PLAY_STREAM_FROM_VEHICLE},
		{0xEBAA9B64D76356FD, &PLAY_STREAM_FROM_OBJECT},
		{0x58FCE43488F9F5F4, &PLAY_STREAM_FRONTEND},
		{0x21442F412E8DE56B, &PLAY_STREAM_FROM_POSITION},
		{0xA4718A1419D18151, &STOP_STREAM},
		{0x9D64D7405520E3D3, &STOP_PED_SPEAKING},
		{0xF8AD2EED7C47E8FE, &_0xF8AD2EED7C47E8FE},
		{0xA9A41C1E940FB0E8, &DISABLE_PED_PAIN_AUDIO},
		{0x932C2D096A2C3FFF, &IS_AMBIENT_SPEECH_DISABLED},
		{0xA8A7D434AFB4B97B, &_0xA8A7D434AFB4B97B},
		{0x2ACABED337622DF2, &_0x2ACABED337622DF2},
		{0x1FEF0683B96EBCF2, &SET_SIREN_WITH_NO_DRIVER},
		{0x66C3FB05206041BA, &_0x66C3FB05206041BA},
		{0x9C11908013EA4715, &_SOUND_VEHICLE_HORN_THIS_FRAME},
		{0x76D683C108594D0E, &SET_HORN_ENABLED},
		{0xE5564483E407F914, &SET_AUDIO_VEHICLE_PRIORITY},
		{0x9D3AF56E94C9AE98, &_0x9D3AF56E94C9AE98},
		{0xFA932DE350266EF8, &USE_SIREN_AS_HORN},
		{0x4F0C413926060B38, &_FORCE_VEHICLE_ENGINE_AUDIO},
		{0xCA4CEA6AE0000A7E, &_0xCA4CEA6AE0000A7E},
		{0xF1F8157B8C3F171C, &_0xF1F8157B8C3F171C},
		{0xD2DCCD8E16E20997, &_0xD2DCCD8E16E20997},
		{0x5DB8010EE71FDEF2, &_0x5DB8010EE71FDEF2},
		{0x59E7B488451F4D3A, &SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR},
		{0x01BB4D577D38BD9E, &_0x01BB4D577D38BD9E},
		{0x1C073274E065C6D2, &_0x1C073274E065C6D2},
		{0x2BE4BC731D039D5A, &ENABLE_VEHICLE_EXHAUST_POPS},
		{0x4A04DE7CAB2739A1, &SET_VEHICLE_BOOST_ACTIVE},
		{0x6FDDAD856E36988A, &_0x6FDDAD856E36988A},
		{0x06C0023BED16DD6B, &SET_SCRIPT_UPDATE_DOOR_AUDIO},
		{0x3A539D52857EA82D, &PLAY_VEHICLE_DOOR_OPEN_SOUND},
		{0x62A456AA4769EF34, &PLAY_VEHICLE_DOOR_CLOSE_SOUND},
		{0xC15907D667F7CFB2, &ENABLE_STALL_WARNING_SOUNDS},
		{0x6D28DC1671E334FD, &IS_GAME_IN_CONTROL_OF_MUSIC},
		{0x3BD3F52BA9B1E4E8, &SET_GPS_ACTIVE},
		{0xB138AAB8A70D3C69, &PLAY_MISSION_COMPLETE_AUDIO},
		{0x19A30C23F5827F8A, &IS_MISSION_COMPLETE_PLAYING},
		{0x6F259F82D873B8B8, &IS_MISSION_COMPLETE_READY_FOR_UI},
		{0xF154B8D1775B2DEC, &BLOCK_DEATH_JINGLE},
		{0x013A80FC08F6E4F2, &START_AUDIO_SCENE},
		{0xDFE8422B3B94E688, &STOP_AUDIO_SCENE},
		{0xBAC7FC81A75EC1A1, &STOP_AUDIO_SCENES},
		{0xB65B60556E2A9225, &IS_AUDIO_SCENE_ACTIVE},
		{0xEF21A9EF089A2668, &SET_AUDIO_SCENE_VARIABLE},
		{0xA5F377B175A699C5, &_0xA5F377B175A699C5},
		{0x153973AB99FE8980, &ADD_ENTITY_TO_AUDIO_MIX_GROUP},
		{0x18EB48CFC41F2EA0, &REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP},
		{0x845FFC3A4FEEFA3E, &AUDIO_IS_SCRIPTED_MUSIC_PLAYING},
		{0x2DD39BF3E2F9C47F, &_0x2DD39BF3E2F9C47F},
		{0x1E5185B72EF5158A, &PREPARE_MUSIC_EVENT},
		{0x5B17A90291133DA5, &CANCEL_MUSIC_EVENT},
		{0x706D57B0F50DA710, &TRIGGER_MUSIC_EVENT},
		{0xA097AB275061FB21, &IS_MUSIC_ONESHOT_PLAYING},
		{0xE7A0D23DC414507B, &GET_MUSIC_PLAYTIME},
		{0x159B7318403A1CD8, &_0x159B7318403A1CD8},
		{0xFBE20329593DEC9D, &RECORD_BROKEN_GLASS},
		{0xB32209EFFDC04913, &CLEAR_ALL_BROKEN_GLASS},
		{0x70B8EC8FC108A634, &_0x70B8EC8FC108A634},
		{0x149AEE66F0CB3A99, &_0x149AEE66F0CB3A99},
		{0x8BF907833BE275DE, &_0x8BF907833BE275DE},
		{0x062D5EAD4DA2FA6A, &_0x062D5EAD4DA2FA6A},
		{0x9D74AE343DB65533, &PREPARE_ALARM},
		{0x0355EF116C4C97B2, &START_ALARM},
		{0xA1CADDCD98415A41, &STOP_ALARM},
		{0x2F794A877ADD4C92, &STOP_ALL_ALARMS},
		{0x226435CB96CCFC8C, &IS_ALARM_PLAYING},
		{0x02165D55000219AC, &GET_VEHICLE_DEFAULT_HORN},
		{0xACB5DCCA1EC76840, &GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS},
		{0xF54BB7B61036F335, &RESET_PED_AUDIO_FLAGS},
		{0x0653B735BFBDFE87, &_0x0653B735BFBDFE87},
		{0x29DA3CA8D8B2692D, &_0x29DA3CA8D8B2692D},
		{0xD2CC78CD3D0B50F9, &OVERRIDE_PLAYER_GROUND_MATERIAL},
		{0xBF4DC1784BE94DFA, &_0xBF4DC1784BE94DFA},
		{0x75773E11BA459E90, &_OVERRIDE_MICROPHONE_SETTINGS},
		{0xD57AAAE0E2214D11, &FREEZE_MICROPHONE},
		{0x552369F549563AD5, &DISTANT_COP_CAR_SIRENS},
		{0x43FA0DFC5DF87815, &_0x43FA0DFC5DF87815},
		{0xB81CF134AEB56FFB, &_0xB81CF134AEB56FFB},
		{0xB9EFD5C25018725A, &SET_AUDIO_FLAG},
		{0xC7ABCACA4985A766, &PREPARE_SYNCHRONIZED_AUDIO_EVENT},
		{0x029FE7CD1B7E2E75, &PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE},
		{0x8B2FD4560E55DD2D, &PLAY_SYNCHRONIZED_AUDIO_EVENT},
		{0x92D6A88E64A94430, &STOP_SYNCHRONIZED_AUDIO_EVENT},
		{0xC8EDE9BDBCCBA6D4, &_0xC8EDE9BDBCCBA6D4},
		{0x950A154B8DAB6185, &_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME},
		{0x12561FCBB62D5B9C, &SET_AUDIO_SPECIAL_EFFECT_MODE},
		{0x044DBAD7A7FA2BE5, &SET_PORTAL_SETTINGS_OVERRIDE},
		{0xB4BBFD9CD8B3922B, &REMOVE_PORTAL_SETTINGS_OVERRIDE},
		{0xE4E6DD5566D28C82, &_0xE4E6DD5566D28C82},
		{0x3A48AB4445D499BE, &_0x3A48AB4445D499BE},
		{0x4ADA3F19BE4A6047, &_SET_PED_TALK},
		{0x0150B6FF25A9E2E5, &_0x0150B6FF25A9E2E5},
		{0xBEF34B1D9624D5DD, &_0xBEF34B1D9624D5DD},
		{0x806058BBDC136E06, &STOP_CUTSCENE_AUDIO},
		{0x544810ED9DB6BBE6, &_HAS_MULTIPLAYER_AUDIO_DATA_LOADED},
		{0x5B50ABB1FE3746F4, &_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED},
		{0xD53F3A29BCE2580E, &_GET_VEHICLE_DEFAULT_HORN_VARIATION},
		{0x0350E7E17BA767D0, &_SET_VEHICLE_HORN_VARIATION},
		{0x4EE5367468A65CCC, &ADD_SCRIPT_TO_RANDOM_PED},
		{0x0BE84C318BA6EC22, &REGISTER_OBJECT_SCRIPT_BRAIN},
		{0xCCBA154209823057, &IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE},
		{0x3CDC7136613284BD, &REGISTER_WORLD_POINT_SCRIPT_BRAIN},
		{0xC5042CC6F5E3D450, &IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE},
		{0x67AA4D73F0CFA86B, &ENABLE_SCRIPT_BRAIN_SET},
		{0x14D8518E9760F08F, &DISABLE_SCRIPT_BRAIN_SET},
		{0x0B40ED49D7D6FF84, &_0x0B40ED49D7D6FF84},
		{0x4D953DF78EBF8158, &_0x4D953DF78EBF8158},
		{0x6D6840CEE8845831, &_0x6D6840CEE8845831},
		{0x6E91B04E08773030, &_0x6E91B04E08773030},
		{0x07E5B515DB0636FC, &RENDER_SCRIPT_CAMS},
		{0xC819F3CBB62BF692, &_RENDER_FIRST_PERSON_CAM},
		{0xC3981DCE61D9E13F, &CREATE_CAM},
		{0xB51194800B257161, &CREATE_CAM_WITH_PARAMS},
		{0x5E3CF89C6BCCA67D, &CREATE_CAMERA},
		{0x6ABFA3E16460F22D, &CREATE_CAMERA_WITH_PARAMS},
		{0x865908C81A2C22E9, &DESTROY_CAM},
		{0x8E5FB15663F79120, &DESTROY_ALL_CAMS},
		{0xA7A932170592B50E, &DOES_CAM_EXIST},
		{0x026FB97D0A425F84, &SET_CAM_ACTIVE},
		{0xDFB2B516207D3534, &IS_CAM_ACTIVE},
		{0x02EC0AF5C5A49B7A, &IS_CAM_RENDERING},
		{0x5234F9F10919EABA, &GET_RENDERING_CAM},
		{0xBAC038F7459AE5AE, &GET_CAM_COORD},
		{0x7D304C1C955E3E12, &GET_CAM_ROT},
		{0xC3330A45CCCDB26A, &GET_CAM_FOV},
		{0xC520A34DAFBF24B1, &GET_CAM_NEAR_CLIP},
		{0xB60A9CFEB21CA6AA, &GET_CAM_FAR_CLIP},
		{0x255F8DAFD540D397, &GET_CAM_FAR_DOF},
		{0xBFD8727AEA3CCEBA, &SET_CAM_PARAMS},
		{0x4D41783FB745E42E, &SET_CAM_COORD},
		{0x85973643155D0B07, &SET_CAM_ROT},
		{0xB13C14F66A00D047, &SET_CAM_FOV},
		{0xC7848EFCCC545182, &SET_CAM_NEAR_CLIP},
		{0xAE306F2A904BF86E, &SET_CAM_FAR_CLIP},
		{0x6F0F77FBA9A8F2E6, &SET_CAM_MOTION_BLUR_STRENGTH},
		{0x3FA4BF0A7AB7DE2C, &SET_CAM_NEAR_DOF},
		{0xEDD91296CD01AEE0, &SET_CAM_FAR_DOF},
		{0x5EE29B4D7D5DF897, &SET_CAM_DOF_STRENGTH},
		{0x3CF48F6F96E749DC, &SET_CAM_DOF_PLANES},
		{0x16A96863A17552BB, &SET_CAM_USE_SHALLOW_DOF_MODE},
		{0xA13B0222F3D94A94, &SET_USE_HI_DOF},
		{0xF55E4046F6F831DC, &_0xF55E4046F6F831DC},
		{0xE111A7C0D200CBC5, &_0xE111A7C0D200CBC5},
		{0x7DD234D6F3914C5B, &_SET_CAM_DOF_FNUMBER_OF_LENS},
		{0x47B595D60664CFFA, &_SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER},
		{0xC669EEA5D031B7DE, &_SET_CAM_DOF_FOCUS_DISTANCE_BIAS},
		{0xC3654A441402562D, &_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE},
		{0x2C654B4943BDDF7C, &_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL},
		{0xFEDB7D269E8C60E3, &ATTACH_CAM_TO_ENTITY},
		{0x61A3DBA14AB7F411, &ATTACH_CAM_TO_PED_BONE},
		{0x149916F50C34A40D, &_ATTACH_CAM_TO_PED_BONE_2},
		{0x8DB3F12A02CAEF72, &_ATTACH_CAM_TO_VEHICLE_BONE},
		{0xA2FABBE87F4BAD82, &DETACH_CAM},
		{0x45F1DE9C34B93AE6, &SET_CAM_INHERIT_ROLL_VEHICLE},
		{0xF75497BB865F0803, &POINT_CAM_AT_COORD},
		{0x5640BFF86B16E8DC, &POINT_CAM_AT_ENTITY},
		{0x68B2B5F33BA63C41, &POINT_CAM_AT_PED_BONE},
		{0xF33AB75780BA57DE, &STOP_CAM_POINTING},
		{0x8C1DC7770C51DC8D, &SET_CAM_AFFECTS_AIMING},
		{0x661B5C8654ADD825, &_0x661B5C8654ADD825},
		{0xA2767257A320FC82, &_0xA2767257A320FC82},
		{0x271017B9BA825366, &_0x271017B9BA825366},
		{0x1B93E0107865DD40, &SET_CAM_DEBUG_NAME},
		{0x8609C75EC438FB3B, &ADD_CAM_SPLINE_NODE},
		{0x0A9F2A468B328E74, &ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME},
		{0x0FB82563989CF4FB, &ADD_CAM_SPLINE_NODE_USING_CAMERA},
		{0x609278246A29CA34, &ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME},
		{0x242B5874F0A4E052, &SET_CAM_SPLINE_PHASE},
		{0xB5349E36C546509A, &GET_CAM_SPLINE_PHASE},
		{0xD9D0E694C8282C96, &GET_CAM_SPLINE_NODE_PHASE},
		{0x1381539FEE034CDA, &SET_CAM_SPLINE_DURATION},
		{0xD1B0F412F109EA5D, &SET_CAM_SPLINE_SMOOTHING_STYLE},
		{0xB22B17DF858716A6, &GET_CAM_SPLINE_NODE_INDEX},
		{0x83B8201ED82A9A2D, &SET_CAM_SPLINE_NODE_EASE},
		{0xA6385DEB180F319F, &SET_CAM_SPLINE_NODE_VELOCITY_SCALE},
		{0x40B62FA033EB0346, &OVERRIDE_CAM_SPLINE_VELOCITY},
		{0x7DCF7C708D292D55, &OVERRIDE_CAM_SPLINE_MOTION_BLUR},
		{0x7BF1A54AE67AC070, &SET_CAM_SPLINE_NODE_EXTRA_FLAGS},
		{0x0290F35C0AD97864, &IS_CAM_SPLINE_PAUSED},
		{0x9FBDA379383A52A4, &SET_CAM_ACTIVE_WITH_INTERP},
		{0x036F97C908C2B52C, &IS_CAM_INTERPOLATING},
		{0x6A25241C340D3822, &SHAKE_CAM},
		{0xA2746EEAE3E577CD, &ANIMATED_SHAKE_CAM},
		{0x6B24BFE83A2BE47B, &IS_CAM_SHAKING},
		{0xD93DB43B82BC0D00, &SET_CAM_SHAKE_AMPLITUDE},
		{0xBDECF64367884AC3, &STOP_CAM_SHAKING},
		{0xF4C8CF9E353AFECA, &SHAKE_SCRIPT_GLOBAL},
		{0xC2EAE3FB8CDBED31, &ANIMATED_SHAKE_SCRIPT_GLOBAL},
		{0xC912AF078AF19212, &IS_SCRIPT_GLOBAL_SHAKING},
		{0x1C9D7949FA533490, &STOP_SCRIPT_GLOBAL_SHAKING},
		{0x9A2D0FB2E7852392, &PLAY_CAM_ANIM},
		{0xC90621D8A0CEECF2, &IS_CAM_PLAYING_ANIM},
		{0x4145A4C44FF3B5A6, &SET_CAM_ANIM_CURRENT_PHASE},
		{0xA10B2DB49E92A6B0, &GET_CAM_ANIM_CURRENT_PHASE},
		{0xE32EFE9AB4A9AA0C, &PLAY_SYNCHRONIZED_CAM_ANIM},
		{0x503F5920162365B2, &SET_FLY_CAM_HORIZONTAL_RESPONSE},
		{0xE827B9382CFB41BA, &_SET_FLY_CAM_VERTICAL_SPEED_MULTIPLIER},
		{0xF9D02130ECDD1D77, &SET_FLY_CAM_MAX_HEIGHT},
		{0xC91C6C55199308CA, &SET_FLY_CAM_COORD_AND_CONSTRAIN},
		{0xC8B5C4A79CC18B94, &_0xC8B5C4A79CC18B94},
		{0x5C48A1D6E3B33179, &_0x5C48A1D6E3B33179},
		{0xB16FCE9DDC7BA182, &IS_SCREEN_FADED_OUT},
		{0x5A859503B0C08678, &IS_SCREEN_FADED_IN},
		{0x797AC7CB535BA28F, &IS_SCREEN_FADING_OUT},
		{0x5C544BC6C57AC575, &IS_SCREEN_FADING_IN},
		{0xD4E8E24955024033, &DO_SCREEN_FADE_IN},
		{0x891B5B39AC6302AF, &DO_SCREEN_FADE_OUT},
		{0xDCD4EA924F42D01A, &SET_WIDESCREEN_BORDERS},
		{0x4879E4FE39074CDF, &_0x4879E4FE39074CDF},
		{0x14D6F5678D8F1B37, &GET_GAMEPLAY_CAM_COORD},
		{0x837765A25378F0BB, &GET_GAMEPLAY_CAM_ROT},
		{0x65019750A0324133, &GET_GAMEPLAY_CAM_FOV},
		{0x487A82C650EB7799, &_0x487A82C650EB7799},
		{0x0225778816FDC28C, &_0x0225778816FDC28C},
		{0x743607648ADD4587, &GET_GAMEPLAY_CAM_RELATIVE_HEADING},
		{0xB4EC2312F4E5B1F1, &SET_GAMEPLAY_CAM_RELATIVE_HEADING},
		{0x3A6867B4845BEDA2, &GET_GAMEPLAY_CAM_RELATIVE_PITCH},
		{0x6D0858B8EDFD2B7D, &SET_GAMEPLAY_CAM_RELATIVE_PITCH},
		{0x48608C3464F58AB4, &_SET_GAMEPLAY_CAM_RELATIVE_ROTATION},
		{0x28B022A17B068A3A, &_0x28B022A17B068A3A},
		{0x103991D4A307D472, &_SET_GAMEPLAY_CAM_RAW_YAW},
		{0x759E13EBC1C15C5A, &_SET_GAMEPLAY_CAM_RAW_PITCH},
		{0x469F2ECDEC046337, &_0x469F2ECDEC046337},
		{0xFD55E49555E017CF, &SHAKE_GAMEPLAY_CAM},
		{0x016C090630DF1F89, &IS_GAMEPLAY_CAM_SHAKING},
		{0xA87E00932DB4D85D, &SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE},
		{0x0EF93E9F3D08C178, &STOP_GAMEPLAY_CAM_SHAKING},
		{0x8BBACBF51DA047A8, &_0x8BBACBF51DA047A8},
		{0x39B5D1B10383F0C8, &IS_GAMEPLAY_CAM_RENDERING},
		{0x3044240D2E0FA842, &_0x3044240D2E0FA842},
		{0x705A276EBFF3133D, &_0x705A276EBFF3133D},
		{0xDB90C6CCA48940F1, &_0xDB90C6CCA48940F1},
		{0xEA7F0AD7E9BA676F, &_ENABLE_CROSSHAIR_THIS_FRAME},
		{0x70FDA869F3317EA9, &IS_GAMEPLAY_CAM_LOOKING_BEHIND},
		{0x2AED6301F67007D5, &_0x2AED6301F67007D5},
		{0x49482F9FCD825AAA, &_0x49482F9FCD825AAA},
		{0xFD3151CD37EA2245, &_0xFD3151CD37EA2245},
		{0xB1381B97F70C7B30, &_0xB1381B97F70C7B30},
		{0xDD79DF9F4D26E1C9, &_0xDD79DF9F4D26E1C9},
		{0xE33D59DA70B58FDF, &IS_SPHERE_VISIBLE},
		{0xC6D3D26810C8E0F9, &IS_FOLLOW_PED_CAM_ACTIVE},
		{0x44A113DD6FFC48D1, &SET_FOLLOW_PED_CAM_THIS_UPDATE},
		{0x271401846BD26E92, &_0x271401846BD26E92},
		{0xC8391C309684595A, &_0xC8391C309684595A},
		{0x8F993D26E0CA5E8E, &_CLAMP_GAMEPLAY_CAM_YAW},
		{0xA516C198B7DCA1E1, &_CLAMP_GAMEPLAY_CAM_PITCH},
		{0xDF2E1F7742402E81, &_ANIMATE_GAMEPLAY_CAM_ZOOM},
		{0xE9EA16D6E54CDCA4, &_0xE9EA16D6E54CDCA4},
		{0xDE2EF5DA284CC8DF, &_DISABLE_FIRST_PERSON_CAM_THIS_FRAME},
		{0x59424BD75174C9B1, &_0x59424BD75174C9B1},
		{0x9F97DA93681F87EA, &_0x9F97DA93681F87EA},
		{0x33E6C8EFD0CD93E9, &GET_FOLLOW_PED_CAM_ZOOM_LEVEL},
		{0x8D4D46230B2C353A, &GET_FOLLOW_PED_CAM_VIEW_MODE},
		{0x5A4F9EDF1673F704, &SET_FOLLOW_PED_CAM_VIEW_MODE},
		{0xCBBDE6D335D6D496, &IS_FOLLOW_VEHICLE_CAM_ACTIVE},
		{0x91EF6EE6419E5B97, &_0x91EF6EE6419E5B97},
		{0x9DFE13ECDC1EC196, &_0x9DFE13ECDC1EC196},
		{0x79C0E43EB9B944E2, &_0x79C0E43EB9B944E2},
		{0xEE82280AB767B690, &GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL},
		{0x19464CB6E4078C8A, &SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL},
		{0xA4FF579AC0E3AAAE, &GET_FOLLOW_VEHICLE_CAM_VIEW_MODE},
		{0xAC253D7842768F48, &SET_FOLLOW_VEHICLE_CAM_VIEW_MODE},
		{0xEE778F8C7E1142E2, &_0xEE778F8C7E1142E2},
		{0x2A2173E46DAECD12, &_0x2A2173E46DAECD12},
		{0x19CAFA3C87F7C2FF, &_0x19CAFA3C87F7C2FF},
		{0x6493CF69859B116A, &_USE_STUNT_CAMERA_THIS_FRAME},
		{0x425A920FDB9A0DDA, &_0x425A920FDB9A0DDA},
		{0x0AA27680A0BD43FA, &_0x0AA27680A0BD43FA},
		{0x5C90CAB09951A12F, &_0x5C90CAB09951A12F},
		{0x68EDDA28A5976D07, &IS_AIM_CAM_ACTIVE},
		{0x74BD83EA840F6BC9, &_IS_AIM_CAM_THIRD_PERSON_ACTIVE},
		{0x5E346D934122613F, &IS_FIRST_PERSON_AIM_CAM_ACTIVE},
		{0x1A31FE0049E542F6, &DISABLE_AIM_CAM_THIS_UPDATE},
		{0x7EC52CC40597D170, &GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR},
		{0x70894BD0915C5BCA, &SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR},
		{0xCED08CBE8EBB97C7, &_0xCED08CBE8EBB97C7},
		{0x2F7F2B26DD3F18EE, &_0x2F7F2B26DD3F18EE},
		{0xBCFC632DB7673BF0, &_SET_FIRST_PERSON_CAM_PITCH_RANGE},
		{0x0AF7B437918103B3, &_SET_FIRST_PERSON_CAM_NEAR_CLIP},
		{0x42156508606DE65E, &_SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP},
		{0x4008EDF7D6E48175, &_0x4008EDF7D6E48175},
		{0x380B4968D1E09E55, &_0x380B4968D1E09E55},
		{0xA200EB1EE790F448, &GET_FINAL_RENDERED_CAM_COORD},
		{0x5B4E4C817FCC2DFB, &GET_FINAL_RENDERED_CAM_ROT},
		{0x26903D9CD1175F2C, &GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_ROT},
		{0x80EC114669DAEFF4, &GET_FINAL_RENDERED_CAM_FOV},
		{0x5F35F6732C3FBBA0, &GET_FINAL_RENDERED_IN_WHEN_FRIENDLY_FOV},
		{0xD0082607100D7193, &GET_FINAL_RENDERED_CAM_NEAR_CLIP},
		{0xDFC8CBC606FDB0FC, &GET_FINAL_RENDERED_CAM_FAR_CLIP},
		{0xA03502FC581F7D9B, &GET_FINAL_RENDERED_CAM_NEAR_DOF},
		{0x9780F32BCAF72431, &GET_FINAL_RENDERED_CAM_FAR_DOF},
		{0x162F9D995753DC19, &GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH},
		{0xD51ADCD2D8BC0FB3, &SET_GAMEPLAY_COORD_HINT},
		{0x2B486269ACD548D3, &SET_GAMEPLAY_PED_HINT},
		{0xA2297E18F3E71C2E, &SET_GAMEPLAY_VEHICLE_HINT},
		{0x83E87508A2CA2AC6, &SET_GAMEPLAY_OBJECT_HINT},
		{0x189E955A8313E298, &SET_GAMEPLAY_ENTITY_HINT},
		{0xE520FF1AD2785B40, &IS_GAMEPLAY_HINT_ACTIVE},
		{0xF46C581C61718916, &STOP_GAMEPLAY_HINT},
		{0xCCD078C2665D2973, &_0xCCD078C2665D2973},
		{0x247ACBC4ABBC9D1C, &_0x247ACBC4ABBC9D1C},
		{0xBF72910D0F26F025, &_0xBF72910D0F26F025},
		{0x513403FB9C56211F, &SET_GAMEPLAY_HINT_FOV},
		{0xF8BDBF3D573049A1, &_SET_GAMEPLAY_HINT_ANIM_OFFSETZ},
		{0xD1F8363DFAD03848, &_SET_GAMEPLAY_HINT_ANGLE},
		{0x5D7B620DAE436138, &_SET_GAMEPLAY_HINT_ANIM_OFFSETX},
		{0xC92717EF615B6704, &_SET_GAMEPLAY_HINT_ANIM_OFFSETY},
		{0xE3433EADAAF7EE40, &_SET_GAMEPLAY_HINT_ANIM_CLOSEUP},
		{0x51669F7D1FB53D9F, &SET_CINEMATIC_BUTTON_ACTIVE},
		{0xB15162CB5826E9E8, &IS_CINEMATIC_CAM_RENDERING},
		{0xDCE214D9ED58F3CF, &SHAKE_CINEMATIC_CAM},
		{0xBBC08F6B4CB8FF0A, &IS_CINEMATIC_CAM_SHAKING},
		{0xC724C701C30B2FE7, &SET_CINEMATIC_CAM_SHAKE_AMPLITUDE},
		{0x2238E588E588A6D7, &STOP_CINEMATIC_CAM_SHAKING},
		{0xADFF1B2A555F5FBA, &_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME},
		{0x62ECFCFDEE7885D6, &_0x62ECFCFDEE7885D6},
		{0x9E4CFFF989258472, &_0x9E4CFFF989258472},
		{0xF4F2C0D4EE209E20, &INVALIDATE_IDLE_CAM},
		{0xCA9D2AA3E326D720, &_0xCA9D2AA3E326D720},
		{0x4F32C0D5A90A9B40, &_IS_IN_VEHICLE_CAM_DISABLED},
		{0x741B0129D4560F31, &CREATE_CINEMATIC_SHOT},
		{0xCC9F3371A7C28BC9, &IS_CINEMATIC_SHOT_ACTIVE},
		{0x7660C6E75D3A078E, &STOP_CINEMATIC_SHOT},
		{0xA41BCD7213805AAC, &_0xA41BCD7213805AAC},
		{0xDC9DA9E8789F5246, &_0xDC9DA9E8789F5246},
		{0xDCF0754AC3D6FD4E, &SET_CINEMATIC_MODE_ACTIVE},
		{0x1F2300CB7FA7B7F6, &_0x1F2300CB7FA7B7F6},
		{0x17FCA7199A530203, &_0x17FCA7199A530203},
		{0xD7360051C885628B, &_0xD7360051C885628B},
		{0xF5F1E89A970B7796, &_0xF5F1E89A970B7796},
		{0x7B8A361C1813FBEF, &_0x7B8A361C1813FBEF},
		{0xDB629FFD9285FA06, &STOP_CUTSCENE_CAM_SHAKING},
		{0x324C5AA411DA7737, &_0x324C5AA411DA7737},
		{0x12DED8CA53D47EA5, &_0x12DED8CA53D47EA5},
		{0x89215EC747DF244A, &GET_FOCUS_PED_ON_SCREEN},
		{0x5A43C76F7FC7BA5F, &_0x5A43C76F7FC7BA5F},
		{0x80C8B1846639BB19, &_SET_CAM_EFFECT},
		{0x5C41E6BABC9E2112, &_0x5C41E6BABC9E2112},
		{0x21E253A7F8DA5DFB, &_SET_GAMEPLAY_CAM_VEHICLE_CAMERA},
		{0x11FA5D3479C7DD47, &_SET_GAMEPLAY_CAM_VEHICLE_CAMERA_NAME},
		{0xEAF0FA793D05C592, &_0xEAF0FA793D05C592},
		{0x62374889A4D59F72, &_0x62374889A4D59F72},
		{0x8BFCEB5EA1B161B6, &_REPLAY_FREE_CAM_GET_MAX_RANGE},
		{0x47C3B5848C3E45D8, &SET_CLOCK_TIME},
		{0x4055E40BD2DBEC1D, &PAUSE_CLOCK},
		{0xC8CA9670B9D83B3B, &ADVANCE_CLOCK_TIME_TO},
		{0xD716F30D8C8980E2, &ADD_TO_CLOCK_TIME},
		{0x25223CA6B4D20B7F, &GET_CLOCK_HOURS},
		{0x13D2B8ADD79640F2, &GET_CLOCK_MINUTES},
		{0x494E97C2EF27C470, &GET_CLOCK_SECONDS},
		{0xB096419DF0D06CE7, &SET_CLOCK_DATE},
		{0xD972E4BD7AEB235F, &GET_CLOCK_DAY_OF_WEEK},
		{0x3D10BC92A4DB1D35, &GET_CLOCK_DAY_OF_MONTH},
		{0xBBC72712E80257A1, &GET_CLOCK_MONTH},
		{0x961777E64BDAF717, &GET_CLOCK_YEAR},
		{0x2F8B4D1C595B11DB, &GET_MILLISECONDS_PER_GAME_MINUTE},
		{0xDA488F299A5B164E, &GET_POSIX_TIME},
		{0x8117E09A19EEF4D3, &GET_UTC_TIME},
		{0x50C7A99057A69748, &GET_LOCAL_TIME},
		{0x7A86743F475D9E09, &REQUEST_CUTSCENE},
		{0xC23DE0E91C30B58C, &REQUEST_CUTSCENE_WITH_PLAYBACK_LIST},
		{0x440AF51A3462B86F, &REMOVE_CUTSCENE},
		{0xC59F528E9AB9F339, &HAS_CUTSCENE_LOADED},
		{0x228D3D94F8A11C3C, &HAS_THIS_CUTSCENE_LOADED},
		{0x8D9DF6ECA8768583, &_0x8D9DF6ECA8768583},
		{0xB56BBBCC2955D9CB, &CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY},
		{0x71B74D2AE19338D0, &IS_CUTSCENE_PLAYBACK_FLAG_SET},
		{0x4C61C75BEE8184C2, &SET_CUTSCENE_ENTITY_STREAMING_FLAGS},
		{0x06A3524161C502BA, &REQUEST_CUT_FILE},
		{0xA1C996C2A744262E, &HAS_CUT_FILE_LOADED},
		{0xD00D76A7DFC9D852, &REMOVE_CUT_FILE},
		{0x0ABC54DE641DC0FC, &_GET_CUT_FILE_NUM_SECTIONS},
		{0x186D5CB5E7B0FF7B, &START_CUTSCENE},
		{0x1C9ADDA3244A1FBF, &START_CUTSCENE_AT_COORDS},
		{0xC7272775B4DC786E, &STOP_CUTSCENE},
		{0xD220BDD222AC4A1E, &STOP_CUTSCENE_IMMEDIATELY},
		{0xB812B3FD1C01CF27, &SET_CUTSCENE_ORIGIN},
		{0x011883F41211432A, &_0x011883F41211432A},
		{0xE625BEABBAFFDAB9, &GET_CUTSCENE_TIME},
		{0xEE53B14A19E480D4, &GET_CUTSCENE_TOTAL_DURATION},
		{0x971D7B15BCDBEF99, &_0x971D7B15BCDBEF99},
		{0x40C8656EDAEDD569, &WAS_CUTSCENE_SKIPPED},
		{0x7C0A893088881D57, &HAS_CUTSCENE_FINISHED},
		{0x991251AFC3981F84, &IS_CUTSCENE_ACTIVE},
		{0xD3C2E180A40F031E, &IS_CUTSCENE_PLAYING},
		{0x49010A6A396553D8, &GET_CUTSCENE_SECTION_PLAYING},
		{0x0A2E9FDB9A8C62F6, &GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY},
		{0x583DF8E3D4AFBD98, &_0x583DF8E3D4AFBD98},
		{0x4CEBC1ED31E8925E, &_0x4CEBC1ED31E8925E},
		{0x4FCD976DA686580C, &_0x4FCD976DA686580C},
		{0xE40C1C56DF95C2E8, &REGISTER_ENTITY_FOR_CUTSCENE},
		{0xC0741A26499654CD, &GET_ENTITY_INDEX_OF_REGISTERED_ENTITY},
		{0x7F96F23FA9B73327, &_0x7F96F23FA9B73327},
		{0x9896CE4721BE84BA, &SET_CUTSCENE_TRIGGER_AREA},
		{0x645D0B458D8E17B5, &CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY},
		{0x4C6A6451C79E4662, &CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY},
		{0xB2CBCD0930DFB420, &CAN_SET_EXIT_STATE_FOR_CAMERA},
		{0xC61B86C9F61EB404, &_0xC61B86C9F61EB404},
		{0x8093F23ABACCC7D4, &SET_CUTSCENE_FADE_VALUES},
		{0x20746F7B1032A3C7, &_0x20746F7B1032A3C7},
		{0x06EE9048FD080382, &_0x06EE9048FD080382},
		{0xA0FE76168A189DDB, &_0xA0FE76168A189DDB},
		{0x2F137B508DE238F2, &_0x2F137B508DE238F2},
		{0xE36A98D8AB3D3C66, &_0xE36A98D8AB3D3C66},
		{0x5EDEF0CF8C1DAB3C, &_0x5EDEF0CF8C1DAB3C},
		{0x41FAA8FB2ECE8720, &_0x41FAA8FB2ECE8720},
		{0x2131046957F31B04, &REGISTER_SYNCHRONISED_SCRIPT_SPEECH},
		{0xBA01E7B6DEEFBBC9, &SET_CUTSCENE_PED_COMPONENT_VARIATION},
		{0x2A56C06EBEF2B0D9, &SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED},
		{0x499EF20C5DB25C59, &DOES_CUTSCENE_ENTITY_EXIST},
		{0x0546524ADE2E9723, &SET_CUTSCENE_PED_PROP_VARIATION},
		{0x708BDD8CD795B043, &_0x708BDD8CD795B043},
		{0xAD6875BBC0FC899C, &DATAFILE_WATCH_REQUEST_ID},
		{0x6CC86E78358D5119, &DATAFILE_CLEAR_WATCH_LIST},
		{0xFCCAE5B92A830878, &DATAFILE_IS_VALID_REQUEST_ID},
		{0x15FF52B809DB2353, &DATAFILE_HAS_LOADED_FILE_DATA},
		{0xF8CC1EBE0B62E29F, &DATAFILE_HAS_VALID_FILE_DATA},
		{0x22DA66936E0FFF37, &DATAFILE_SELECT_ACTIVE_FILE},
		{0x8F5EA1C01D65A100, &DATAFILE_DELETE_REQUESTED_FILE},
		{0xC84527E235FCA219, &UGC_CREATE_CONTENT},
		{0xA5EFC3E847D60507, &UGC_CREATE_MISSION},
		{0x648E7A5434AF7969, &UGC_UPDATE_CONTENT},
		{0x4645DE9980999E93, &UGC_UPDATE_MISSION},
		{0x692D808C34A82143, &UGC_SET_PLAYER_DATA},
		{0xA69AC4ADE82B57A4, &DATAFILE_SELECT_UGC_DATA},
		{0x9CB0BFA7A9342C3D, &DATAFILE_SELECT_UGC_STATS},
		{0x52818819057F2B40, &DATAFILE_SELECT_UGC_PLAYER_DATA},
		{0x01095C95CD46B624, &DATAFILE_SELECT_CREATOR_STATS},
		{0xC5238C011AF405E4, &DATAFILE_LOAD_OFFLINE_UGC},
		{0xD27058A1CA2B13EE, &DATAFILE_CREATE},
		{0x9AB9C1CFC8862DFB, &DATAFILE_DELETE},
		{0x2ED61456317B8178, &DATAFILE_STORE_MISSION_HEADER},
		{0xC55854C7D7274882, &DATAFILE_FLUSH_MISSION_HEADER},
		{0x906B778CA1DC72B6, &char*},
		{0x83BCCE3224735F05, &DATAFILE_START_SAVE_TO_CLOUD},
		{0x4DFDD9EB705F8140, &DATAFILE_UPDATE_SAVE_TO_CLOUD},
		{0xBEDB96A7584AA8CF, &DATAFILE_IS_SAVE_PENDING},
		{0x35124302A556A325, &_OBJECT_VALUE_ADD_BOOLEAN},
		{0xE7E035450A7948D5, &_OBJECT_VALUE_ADD_INTEGER},
		{0xC27E1CC2D795105E, &_OBJECT_VALUE_ADD_FLOAT},
		{0x8FF3847DADD8E30C, &_OBJECT_VALUE_ADD_STRING},
		{0x4CD49B76338C7DEE, &_OBJECT_VALUE_ADD_VECTOR3},
		{0xA358F56F10732EE1, &_OBJECT_VALUE_ADD_OBJECT},
		{0x5B11728527CA6E5F, &_OBJECT_VALUE_ADD_ARRAY},
		{0x1186940ED72FFEEC, &_OBJECT_VALUE_GET_BOOLEAN},
		{0x78F06F6B1FB5A80C, &_OBJECT_VALUE_GET_INTEGER},
		{0x06610343E73B9727, &_OBJECT_VALUE_GET_FLOAT},
		{0x3D2FD9E763B24472, &char*},
		{0x46CD3CB66E0825CC, &_OBJECT_VALUE_GET_VECTOR3},
		{0xB6B9DDC412FCEEE2, &_OBJECT_VALUE_GET_OBJECT},
		{0x7A983AA9DA2659ED, &_OBJECT_VALUE_GET_ARRAY},
		{0x031C55ED33227371, &_OBJECT_VALUE_GET_TYPE},
		{0xF8B0F5A43E928C76, &_ARRAY_VALUE_ADD_BOOLEAN},
		{0xCABDB751D86FE93B, &_ARRAY_VALUE_ADD_INTEGER},
		{0x57A995FD75D37F56, &_ARRAY_VALUE_ADD_FLOAT},
		{0x2F0661C155AEEEAA, &_ARRAY_VALUE_ADD_STRING},
		{0x407F8D034F70F0C2, &_ARRAY_VALUE_ADD_VECTOR3},
		{0x6889498B3E19C797, &_ARRAY_VALUE_ADD_OBJECT},
		{0x50C1B2874E50C114, &_ARRAY_VALUE_GET_BOOLEAN},
		{0x3E5AE19425CD74BE, &_ARRAY_VALUE_GET_INTEGER},
		{0xC0C527B525D7CFB5, &_ARRAY_VALUE_GET_FLOAT},
		{0xD3F2FFEB8D836F52, &char*},
		{0x8D2064E5B64A628A, &_ARRAY_VALUE_GET_VECTOR3},
		{0x8B5FADCC4E3A145F, &_ARRAY_VALUE_GET_OBJECT},
		{0x065DB281590CEA2D, &_ARRAY_VALUE_GET_SIZE},
		{0x3A0014ADB172A3C5, &_ARRAY_VALUE_GET_TYPE},
		{0x95AED7B8E39ECAA4, &DECOR_SET_TIME},
		{0x6B1E8E2ED1335B71, &DECOR_SET_BOOL},
		{0x211AB1DD8D0F363A, &DECOR_SET_FLOAT},
		{0x0CE3AA5E1CA19E10, &DECOR_SET_INT},
		{0xDACE671663F2F5DB, &DECOR_GET_BOOL},
		{0x6524A2F114706F43, &DECOR_GET_FLOAT},
		{0xA06C969B02A97298, &DECOR_GET_INT},
		{0x05661B80A8C9165F, &DECOR_EXIST_ON},
		{0x00EE9F297C738720, &DECOR_REMOVE},
		{0x9FD90732F56403CE, &DECOR_REGISTER},
		{0x4F14F9F870D6FBC8, &DECOR_IS_REGISTERED_AS_TYPE},
		{0xA9D14EEA259F9248, &DECOR_REGISTER_LOCK},
		{0x241FCA5B1AA14F75, &_0x241FCA5B1AA14F75},
		{0x812595A0644CE1DE, &IS_DLC_PRESENT},
		{0xF2E07819EF1A5289, &_0xF2E07819EF1A5289},
		{0x9489659372A81585, &_0x9489659372A81585},
		{0xA213B11DFF526300, &_0xA213B11DFF526300},
		{0x8D30F648014A92B5, &_GET_EXTRA_CONTENT_PACK_HAS_BEEN_INSTALLED},
		{0x10D0A8F259E93EC9, &GET_IS_LOADING_SCREEN_ACTIVE},
		{0xC4637A6D03C24CC3, &_0xC4637A6D03C24CC3},
		{0x46E2B844905BC5F0, &HAS_CLOUD_REQUESTS_FINISHED},
		{0xD7C10C4A637992C9, &ON_ENTER_SP},
		{0x0888C3502DBBEEF5, &ON_ENTER_MP},
		{0x7239B21A38F536BA, &DOES_ENTITY_EXIST},
		{0xDDE6DF5AE89981D2, &DOES_ENTITY_BELONG_TO_THIS_SCRIPT},
		{0x060D6E96F8B8E48D, &DOES_ENTITY_HAVE_DRAWABLE},
		{0xDA95EA3317CC5064, &DOES_ENTITY_HAVE_PHYSICS},
		{0x20B711662962B472, &HAS_ENTITY_ANIM_FINISHED},
		{0x95EB9964FF5C5C65, &HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT},
		{0x605F5A140F202491, &HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED},
		{0xDFD5033FDBA0A9C8, &HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE},
		{0xC86D67D52A707CF8, &HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY},
		{0xFCDFF7B72D23A1AC, &HAS_ENTITY_CLEAR_LOS_TO_ENTITY},
		{0x0267D00AF114F17A, &HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT},
		{0x8BAD02F0368D9E14, &HAS_ENTITY_COLLIDED_WITH_ANYTHING},
		{0x5C3D0A935F535C4C, &GET_LAST_MATERIAL_HIT_BY_ENTITY},
		{0xE465D4AB7CA6AE72, &GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY},
		{0x40FDEDB72F8293B2, &FORCE_ENTITY_AI_AND_ANIMATION_UPDATE},
		{0x346D81500D088F42, &GET_ENTITY_ANIM_CURRENT_TIME},
		{0x50BD2730B191E360, &GET_ENTITY_ANIM_TOTAL_TIME},
		{0xFEDDF04D62B8D790, &GET_ANIM_DURATION},
		{0x48C2BED9180FE123, &GET_ENTITY_ATTACHED_TO},
		{0x3FEF770D40960D5A, &GET_ENTITY_COORDS},
		{0x0A794A5A57F8DF91, &GET_ENTITY_FORWARD_VECTOR},
		{0x8BB4EF4214E0E6D5, &GET_ENTITY_FORWARD_X},
		{0x866A4A5FAE349510, &GET_ENTITY_FORWARD_Y},
		{0xE83D4F9BA2A38914, &GET_ENTITY_HEADING},
		{0x846BF6291198A71E, &_GET_ENTITY_PHYSICS_HEADING},
		{0xEEF059FAD016D209, &GET_ENTITY_HEALTH},
		{0x15D757606D170C3C, &GET_ENTITY_MAX_HEALTH},
		{0x166E7CF68597D8B5, &SET_ENTITY_MAX_HEALTH},
		{0x5A504562485944DD, &GET_ENTITY_HEIGHT},
		{0x1DD55701034110E5, &GET_ENTITY_HEIGHT_ABOVE_GROUND},
		{0xECB2FC7235A7D137, &GET_ENTITY_MATRIX},
		{0x9F47B058362C84B5, &GET_ENTITY_MODEL},
		{0x2274BC1C4885E333, &GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS},
		{0x1899F328B0E12848, &GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS},
		{0xD45DC2893621E1FE, &GET_ENTITY_PITCH},
		{0x7B3703D2D32DFA18, &GET_ENTITY_QUATERNION},
		{0x831E0242595560DF, &GET_ENTITY_ROLL},
		{0xAFBD61CC738D9EB9, &GET_ENTITY_ROTATION},
		{0x213B91045D09B983, &GET_ENTITY_ROTATION_VELOCITY},
		{0xA6E9C38DB51D7748, &char*},
		{0xD5037BA82E12416F, &GET_ENTITY_SPEED},
		{0x9A8D700A51CB7B0D, &GET_ENTITY_SPEED_VECTOR},
		{0x95EED5A694951F9F, &GET_ENTITY_UPRIGHT_VALUE},
		{0x4805D2B1D8CF94A9, &GET_ENTITY_VELOCITY},
		{0xD7E3B9735C0F89D6, &GET_OBJECT_INDEX_FROM_ENTITY_INDEX},
		{0x04A2A40C73395041, &GET_PED_INDEX_FROM_ENTITY_INDEX},
		{0x4B53F92932ADFAC0, &GET_VEHICLE_INDEX_FROM_ENTITY_INDEX},
		{0x44A8FCB8ED227738, &GET_WORLD_POSITION_OF_ENTITY_BONE},
		{0x7196842CB375CDB3, &GET_NEAREST_PLAYER_TO_ENTITY},
		{0x4DC9A62F844D9337, &GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM},
		{0x8ACD366038D14505, &GET_ENTITY_TYPE},
		{0xF6F5161F4534EDFF, &GET_ENTITY_POPULATION_TYPE},
		{0x731EC8A916BD11A1, &IS_AN_ENTITY},
		{0x524AC5ECEA15343E, &IS_ENTITY_A_PED},
		{0x0A7B270912999B3C, &IS_ENTITY_A_MISSION_ENTITY},
		{0x6AC7003FA6E5575E, &IS_ENTITY_A_VEHICLE},
		{0x8D68C8FD0FACA94E, &IS_ENTITY_AN_OBJECT},
		{0x20B60995556D004F, &IS_ENTITY_AT_COORD},
		{0x751B70C3D034E187, &IS_ENTITY_AT_ENTITY},
		{0xB346476EF1A64897, &IS_ENTITY_ATTACHED},
		{0xCF511840CEEDE0CC, &IS_ENTITY_ATTACHED_TO_ANY_OBJECT},
		{0xB1632E9A5F988D11, &IS_ENTITY_ATTACHED_TO_ANY_PED},
		{0x26AA915AD89BFB4B, &IS_ENTITY_ATTACHED_TO_ANY_VEHICLE},
		{0xEFBE71898A993728, &IS_ENTITY_ATTACHED_TO_ENTITY},
		{0x5F9532F3B5CC2551, &IS_ENTITY_DEAD},
		{0x886E37EC497200B6, &IS_ENTITY_IN_AIR},
		{0x51210CED3DA1C78A, &IS_ENTITY_IN_ANGLED_AREA},
		{0x54736AA40E271165, &IS_ENTITY_IN_AREA},
		{0xB6463CF6AF527071, &IS_ENTITY_IN_ZONE},
		{0xCFB0A0D8EDD145A3, &IS_ENTITY_IN_WATER},
		{0xE81AFC1BC4CC41CE, &GET_ENTITY_SUBMERGED_LEVEL},
		{0x694E00132F2823ED, &_0x694E00132F2823ED},
		{0xE659E47AF827484B, &IS_ENTITY_ON_SCREEN},
		{0x1F0B79228E461EC9, &IS_ENTITY_PLAYING_ANIM},
		{0x1218E6886D3D8327, &IS_ENTITY_NATIVE_DECL},
		{0x17FFC1B2BA35A494, &IS_ENTITY_TOUCHING_ENTITY},
		{0x0F42323798A58C8C, &IS_ENTITY_TOUCHING_MODEL},
		{0x5333F526F6AB19AA, &IS_ENTITY_UPRIGHT},
		{0x1DBD58820FA61D71, &IS_ENTITY_UPSIDEDOWN},
		{0x47D6F43D77935C75, &IS_ENTITY_VISIBLE},
		{0xD796CB5BA8F20E32, &IS_ENTITY_VISIBLE_TO_SCRIPT},
		{0xE31C2C72B8692B64, &IS_ENTITY_OCCLUDED},
		{0xEE5D2A122E09EC42, &WOULD_ENTITY_BE_OCCLUDED},
		{0xD05BFF0C0A12C68F, &IS_ENTITY_WAITING_FOR_WORLD_COLLISION},
		{0x18FF00FC7EFF559E, &APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS},
		{0xC5F68BE9613E2D18, &APPLY_FORCE_TO_ENTITY},
		{0x6B9BBD38AB0796DF, &ATTACH_ENTITY_TO_ENTITY},
		{0x5C48B75732C8456C, &_ATTACH_ENTITY_BONE_TO_ENTITY_BONE},
		{0xFD1695C5D3B05439, &_ATTACH_ENTITY_BONE_TO_ENTITY_BONE_PHYSICALLY},
		{0xC3675780C92F90F9, &ATTACH_ENTITY_TO_ENTITY_PHYSICALLY},
		{0xF4080490ADC51C6F, &PROCESS_ENTITY_ATTACHMENTS},
		{0xFB71170B7E76ACBA, &GET_ENTITY_BONE_INDEX_BY_NAME},
		{0xA72CD9CA74A5ECBA, &CLEAR_ENTITY_LAST_DAMAGE_ENTITY},
		{0xAE3CBE5BF394C9C9, &DELETE_ENTITY},
		{0x961AC54BF0613F5D, &DETACH_ENTITY},
		{0x428CA6DBD1094446, &FREEZE_ENTITY_POSITION},
		{0x3910051CCECDB00C, &_SET_ENTITY_SOMETHING},
		{0x7FB218262B810701, &PLAY_ENTITY_ANIM},
		{0xC77720A12FE14A86, &PLAY_SYNCHRONIZED_ENTITY_ANIM},
		{0xB9C54555ED30FBC4, &PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM},
		{0x11E79CAB7183B6F5, &STOP_SYNCHRONIZED_MAP_ENTITY_ANIM},
		{0x28004F88151E03E0, &STOP_ENTITY_ANIM},
		{0x43D3807C077261E3, &STOP_SYNCHRONIZED_ENTITY_ANIM},
		{0xEAF4CD9EA3E7E922, &HAS_ANIM_EVENT_FIRED},
		{0x07F1BE2BCCAA27A7, &FIND_ANIM_EVENT_PHASE},
		{0x4487C259F0F70977, &SET_ENTITY_ANIM_CURRENT_TIME},
		{0x28D1A16553C51776, &SET_ENTITY_ANIM_SPEED},
		{0xAD738C3085FE7E11, &SET_ENTITY_AS_MISSION_ENTITY},
		{0xB736A491E64A32CF, &SET_ENTITY_AS_NO_LONGER_NEEDED},
		{0x2595DD4236549CE3, &SET_PED_AS_NO_LONGER_NEEDED},
		{0x629BFA74418D6239, &SET_VEHICLE_AS_NO_LONGER_NEEDED},
		{0x3AE22DEB5BA5A3E6, &SET_OBJECT_AS_NO_LONGER_NEEDED},
		{0x1760FFA8AB074D66, &SET_ENTITY_CAN_BE_DAMAGED},
		{0xD95CC5D2AB15A09F, &_GET_ENTITY_CAN_BE_DAMAGED},
		{0xE22D8FDE858B8119, &SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP},
		{0x352E2B5CF420BF3B, &_0x352E2B5CF420BF3B},
		{0xD3997889736FD899, &SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS},
		{0x1A9205C1B9EE827F, &SET_ENTITY_COLLISION},
		{0xCCF1E97BEFDAE480, &GET_ENTITY_COLLISION_DISABLED},
		{0x9EBC85ED0FFFE51C, &SET_ENTITY_COMPLETELY_DISABLE_COLLISION},
		{0x06843DA7060A026B, &SET_ENTITY_COORDS},
		{0x621873ECE1178967, &_SET_ENTITY_COORDS_2},
		{0x239A3351AC1DA385, &SET_ENTITY_COORDS_NO_OFFSET},
		{0x1718DE8E3F2823CA, &SET_ENTITY_DYNAMIC},
		{0x8E2530AA8ADA980E, &SET_ENTITY_HEADING},
		{0x6B76DC1F3AE6E6A3, &SET_ENTITY_HEALTH},
		{0x3882114BDE571AD4, &SET_ENTITY_INVINCIBLE},
		{0xEA02E132F5C68722, &SET_ENTITY_IS_TARGET_PRIORITY},
		{0x7CFBA6A80BDF3874, &SET_ENTITY_LIGHTS},
		{0x0DC7CABAB1E9B67E, &SET_ENTITY_LOAD_COLLISION_FLAG},
		{0xE9676F61BC0B3321, &HAS_COLLISION_LOADED_AROUND_ENTITY},
		{0x0E46A3FCBDE2A1B1, &SET_ENTITY_MAX_SPEED},
		{0x79F020FF9EDC0748, &SET_ENTITY_ONLY_DAMAGED_BY_PLAYER},
		{0x7022BD828FA0B082, &SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP},
		{0xFAEE099C6F890BB8, &SET_ENTITY_PROOFS},
		{0xBE8CD9BE829BBEBF, &_GET_ENTITY_PROOFS},
		{0x77B21BE7AC540F07, &SET_ENTITY_QUATERNION},
		{0x0A50A1EEDAD01E65, &SET_ENTITY_RECORDS_COLLISIONS},
		{0x8524A8B0171D5E07, &SET_ENTITY_ROTATION},
		{0xEA1C610A04DB6BBB, &SET_ENTITY_VISIBLE},
		{0xC34BC448DA29F5E9, &_0xC34BC448DA29F5E9},
		{0xE66377CDDADA4810, &_0xE66377CDDADA4810},
		{0x1C99BB7B6E96D16F, &SET_ENTITY_VELOCITY},
		{0x4A4722448F18EEF5, &SET_ENTITY_HAS_GRAVITY},
		{0x5927F96A78577363, &SET_ENTITY_LOD_DIST},
		{0x4159C2762B5791D6, &GET_ENTITY_LOD_DIST},
		{0x44A0870B7E92D7C0, &SET_ENTITY_ALPHA},
		{0x5A47B3B5E63E94C6, &GET_ENTITY_ALPHA},
		{0x9B1E824FFBB7027A, &RESET_ENTITY_ALPHA},
		{0x490861B88F4FD846, &_0x490861B88F4FD846},
		{0xCEA7C8E1B48FF68C, &_0xCEA7C8E1B48FF68C},
		{0x5C3B791D580E0BC2, &_0x5C3B791D580E0BC2},
		{0xACAD101E1FB66689, &SET_ENTITY_ALWAYS_PRERENDER},
		{0x730F5F8D3F0F2050, &SET_ENTITY_RENDER_SCORCHED},
		{0x57C5DB656185EAC4, &SET_ENTITY_TRAFFICLIGHT_OVERRIDE},
		{0x78E8E3A640178255, &_0x78E8E3A640178255},
		{0x92C47782FDA8B2A3, &CREATE_MODEL_SWAP},
		{0x033C0F9A64E229AE, &REMOVE_MODEL_SWAP},
		{0x8A97BCA30A0CE478, &CREATE_MODEL_HIDE},
		{0x3A52AE588830BF7F, &CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS},
		{0xD9E3006FB3CBD765, &REMOVE_MODEL_HIDE},
		{0x150E808B375A385A, &CREATE_FORCED_OBJECT},
		{0x61B6775E83C0DB6F, &REMOVE_FORCED_OBJECT},
		{0xA53ED5520C07654A, &SET_ENTITY_NO_COLLISION_ENTITY},
		{0x295D82A8559F9150, &SET_ENTITY_MOTION_BLUR},
		{0xE12ABE5E3A389A6C, &SET_CAN_AUTO_VAULT_ON_ENTITY},
		{0xA80AE305E0A3044F, &SET_CAN_CLIMB_ON_ENTITY},
		{0xDC6F8601FAF2E893, &_0xDC6F8601FAF2E893},
		{0x2C2E3DC128F44309, &_0x2C2E3DC128F44309},
		{0x1A092BB0C3808B96, &_0x1A092BB0C3808B96},
		{0xCE6294A232D03786, &_0xCE6294A232D03786},
		{0x46F8696933A63C9B, &_0x46F8696933A63C9B},
		{0xBD8D32550E5CEBFE, &_0xBD8D32550E5CEBFE},
		{0xB328DCC3A3AA401B, &_0xB328DCC3A3AA401B},
		{0x6CE177D014502E8A, &_ENABLE_ENTITY_UNK},
		{0xB17BC6453F6CF5AC, &_0xB17BC6453F6CF5AC},
		{0x68B562E124CC0AEF, &_0x68B562E124CC0AEF},
		{0x36F32DE87082343E, &_0x36F32DE87082343E},
		{0x1F922734E259BD26, &_GET_ENTITY_PICKUP},
		{0xD7B80E7C3BEFC396, &_0xD7B80E7C3BEFC396},
		{0xB604A2942ADED0EE, &SET_DECISION_MAKER},
		{0x4FC9381A7AEE8968, &CLEAR_DECISION_MAKER_EVENT_RESPONSE},
		{0xE42FCDFD0E4196F7, &BLOCK_DECISION_MAKER_EVENT},
		{0xD7CD9CF34F2C99E8, &UNBLOCK_DECISION_MAKER_EVENT},
		{0xD9F8455409B525E9, &ADD_SHOCKING_EVENT_AT_POSITION},
		{0x7FD8F3BE76F89422, &ADD_SHOCKING_EVENT_FOR_ENTITY},
		{0x1374ABB7C15BAB92, &IS_SHOCKING_EVENT_IN_SPHERE},
		{0x2CDA538C44C6CCE5, &REMOVE_SHOCKING_EVENT},
		{0xEAABE8FDFA21274C, &REMOVE_ALL_SHOCKING_EVENTS},
		{0x340F1415B68AEADE, &REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS},
		{0x2F9A292AD0A3BD89, &SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME},
		{0x3FD2EC8BF1F1CF30, &SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME},
		{0x5F3B7749C112D552, &SUPPRESS_AGITATION_EVENTS_NEXT_FRAME},
		{0x278F76C3B0A8F109, &_GET_NUM_DECORATIONS},
		{0xFF56381874F82086, &_GET_TATTOO_COLLECTION_DATA},
		{0x1E8C308FD312C036, &INIT_SHOP_PED_COMPONENT},
		{0xEB0A2B758F7B850F, &INIT_SHOP_PED_PROP},
		{0x50F457823CE6EB5F, &_0x50F457823CE6EB5F},
		{0x9BDF59818B1E38C1, &_GET_NUM_PROPS_FROM_OUTFIT},
		{0x249E310B2D920699, &GET_SHOP_PED_QUERY_COMPONENT},
		{0x74C0E2A57EC66760, &GET_SHOP_PED_COMPONENT},
		{0xDE44A00999B2837D, &GET_SHOP_PED_QUERY_PROP},
		{0x5D5CAFF661DDF6FC, &GET_SHOP_PED_PROP},
		{0x0368B3A838070348, &GET_HASH_NAME_FOR_COMPONENT},
		{0x5D6160275CAEC8DD, &GET_HASH_NAME_FOR_PROP},
		{0xC17AD0E5752BECDA, &GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT},
		{0xD40AAC51E8E4C663, &_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT},
		{0x6E11F282F11863B6, &GET_VARIANT_COMPONENT},
		{0xD81B7F27BC773E66, &_GET_VARIANT_PROP},
		{0xC6B9DB42C04DD8C3, &GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT},
		{0x017568A8182D98A6, &GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT},
		{0x6C93ED8C2F74859B, &GET_FORCED_COMPONENT},
		{0xE1CA84EBF72E691D, &GET_FORCED_PROP},
		{0x341DE7ED1D2A1BFD, &DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG},
		{0xF3FBE2D50A6A8C28, &_0xF3FBE2D50A6A8C28},
		{0x6D793F03A631FE56, &GET_SHOP_PED_QUERY_OUTFIT},
		{0xB7952076E444979D, &GET_SHOP_PED_OUTFIT},
		{0x073CA26B079F956E, &GET_SHOP_PED_OUTFIT_LOCATE},
		{0xA9F9C2E0FDE11CBB, &GET_SHOP_PED_OUTFIT_PROP_VARIANT},
		{0x19F2A026EDF0013F, &GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT},
		{0xA7A866D21CD2329B, &GET_NUM_DLC_VEHICLES},
		{0xECC01B7C5763333C, &GET_DLC_VEHICLE_MODEL},
		{0x33468EDC08E371F6, &GET_DLC_VEHICLE_DATA},
		{0x5549EE11FA22FCF2, &GET_DLC_VEHICLE_FLAGS},
		{0xEE47635F352DA367, &GET_NUM_DLC_WEAPONS},
		{0x79923CD21BECE14E, &GET_DLC_WEAPON_DATA},
		{0x405425358A7D61FE, &GET_NUM_DLC_WEAPON_COMPONENTS},
		{0x6CF598A2957C2BF8, &GET_DLC_WEAPON_COMPONENT_DATA},
		{0xD4D7B033C3AA243C, &IS_CONTENT_ITEM_LOCKED},
		{0x0564B9FF9631B82C, &IS_DLC_VEHICLE_MOD},
		{0xC098810437312FFF, &GET_DLC_VEHICLE_MOD_LOCK_HASH},
		{0x6BEDF5769AC2DC07, &_LOAD_CONTENT_CHANGE_SET_GROUP},
		{0x3C1978285B036B25, &_UNLOAD_CONTENT_CHANGE_SET_GROUP},
		{0x6B83617E04503888, &START_SCRIPT_FIRE},
		{0x7FF548385680673F, &REMOVE_SCRIPT_FIRE},
		{0xF6A9D9708F6F23DF, &START_ENTITY_FIRE},
		{0x7F0DD2EBBB651AFF, &STOP_ENTITY_FIRE},
		{0x28D3FED7190D3A0B, &IS_ENTITY_ON_FIRE},
		{0x50CAD495A460B305, &GET_NUMBER_OF_FIRES_IN_RANGE},
		{0x8F390AC4155099BA, &_SET_FIRE_SPREAD_RATE},
		{0x056A8A219B8E829F, &STOP_FIRE_IN_RANGE},
		{0x352A9F6BCF90081F, &GET_CLOSEST_FIRE_POS},
		{0xE3AD2BDBAEE269AC, &ADD_EXPLOSION},
		{0x172AA1B624FA1013, &ADD_OWNED_EXPLOSION},
		{0x36DD3FE58B5E5212, &ADD_EXPLOSION_WITH_USER_VFX},
		{0x2E2EBA0EE7CED0E0, &IS_EXPLOSION_IN_AREA},
		{0x6070104B699B2EF4, &IS_EXPLOSION_ACTIVE_IN_AREA},
		{0xAB0F816885B0E483, &IS_EXPLOSION_IN_SPHERE},
		{0xB3CD51E3DB86F176, &_GET_ENTITY_INSIDE_EXPLOSION_SPHERE},
		{0xA079A6C51525DC4B, &IS_EXPLOSION_IN_ANGLED_AREA},
		{0x14BA4BA137AF6CEC, &_GET_ENTITY_INSIDE_EXPLOSION_AREA},
		{0x175B6BFC15CDD0C5, &SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE},
		{0x7FDFADE676AA3CB0, &DRAW_DEBUG_LINE},
		{0xD8B9A8AC5608FF94, &DRAW_DEBUG_LINE_WITH_TWO_COLOURS},
		{0xAAD68E1AB39DA632, &DRAW_DEBUG_SPHERE},
		{0x083A2CA4F2E573BD, &DRAW_DEBUG_BOX},
		{0x73B1189623049839, &DRAW_DEBUG_CROSS},
		{0x3903E216620488E8, &DRAW_DEBUG_TEXT},
		{0xA3BB2E9555C05A8F, &DRAW_DEBUG_TEXT_2D},
		{0x6B7256074AE34680, &DRAW_LINE},
		{0xAC26716048436851, &DRAW_POLY},
		{0x29280002282F1928, &_0x29280002282F1928},
		{0x736D7AA1B750856B, &_0x736D7AA1B750856B},
		{0xD3A9971CADAC7252, &DRAW_BOX},
		{0x23BA6B0C2AD7B0D3, &SET_BACKFACECULLING},
		{0xC5C8F970D4EDFF71, &_0xC5C8F970D4EDFF71},
		{0x1DD2139A9A20DCE8, &_0x1DD2139A9A20DCE8},
		{0x90A78ECAA4E78453, &_0x90A78ECAA4E78453},
		{0x0A46AF8A78DC5E0A, &_0x0A46AF8A78DC5E0A},
		{0x4862437A486F91B0, &_0x4862437A486F91B0},
		{0x1670F8D05056F257, &_0x1670F8D05056F257},
		{0x7FA5D82B8F58EC06, &_0x7FA5D82B8F58EC06},
		{0x5B0316762AFD4A64, &_0x5B0316762AFD4A64},
		{0x346EF3ECAAAB149E, &_0x346EF3ECAAAB149E},
		{0xA67C35C56EB1BD9D, &BEGIN_TAKE_HIGH_QUALITY_PHOTO},
		{0x0D6CA79EEEBD8CA3, &GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO},
		{0xD801CC02177FA3F1, &_0xD801CC02177FA3F1},
		{0x1BBC135A4D25EDDE, &_0x1BBC135A4D25EDDE},
		{0xF3F776ADA161E47D, &_0xF3F776ADA161E47D},
		{0x3DEC726C25A11BAC, &SAVE_HIGH_QUALITY_PHOTO},
		{0x0C0C4E81E1AC60A0, &GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO},
		{0x759650634F07B6B4, &_0x759650634F07B6B4},
		{0xCB82A0BF0E3E3265, &_0xCB82A0BF0E3E3265},
		{0x6A12D88881435DCA, &_0x6A12D88881435DCA},
		{0x1072F115DAB0717E, &_0x1072F115DAB0717E},
		{0x34D23450F028B0BF, &GET_MAXIMUM_NUMBER_OF_PHOTOS},
		{0xDC54A7AF8B3A14EF, &GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS},
		{0x473151EBC762C6DA, &_GET_CURRENT_NUMBER_OF_PHOTOS},
		{0x2A893980E96B659A, &_0x2A893980E96B659A},
		{0xF5BED327CEA362B1, &_0xF5BED327CEA362B1},
		{0x4AF92ACD3141D96C, &_0x4AF92ACD3141D96C},
		{0xE791DF1F73ED2C8B, &_0xE791DF1F73ED2C8B},
		{0xEC72C258667BE5EA, &_0xEC72C258667BE5EA},
		{0x40AFB081F8ADD4EE, &_RETURN_TWO},
		{0xF49E9A9716A04595, &_DRAW_LIGHT_WITH_RANGE_AND_SHADOW},
		{0xF2A1B2771A01DBD4, &DRAW_LIGHT_WITH_RANGE},
		{0xD0F64B265C8C8B33, &DRAW_SPOT_LIGHT},
		{0x5BCA583A583194DB, &_DRAW_SPOT_LIGHT_WITH_SHADOW},
		{0xC9B18B4619F48F7B, &FADE_UP_PED_LIGHT},
		{0xDEADC0DEDEADC0DE, &UPDATE_LIGHTS_ON_ENTITY},
		{0x9641588DAB93B4B5, &_0x9641588DAB93B4B5},
		{0x393BD2275CEB7793, &_0x393BD2275CEB7793},
		{0x28477EC23D892089, &DRAW_MARKER},
		{0xE82728F0DE75D13A, &_DRAW_MARKER_2},
		{0x799017F9E3B10112, &_0x799017F9E3B10112},
		{0x0134F0835AB6BFCB, &CREATE_CHECKPOINT},
		{0x4B5B4DA5D79F1943, &_SET_CHECKPOINT_SCALE},
		{0x44621483FF966526, &_0x44621483FF966526},
		{0x2707AAE9D9297D89, &SET_CHECKPOINT_CYLINDER_HEIGHT},
		{0x7167371E8AD747F7, &SET_CHECKPOINT_RGBA},
		{0xB9EA40907C680580, &_SET_CHECKPOINT_ICON_RGBA},
		{0xF51D36185993515D, &_0xF51D36185993515D},
		{0xFCF6788FC4860CD4, &_0xFCF6788FC4860CD4},
		{0x615D3925E87A3B26, &_0x615D3925E87A3B26},
		{0xDB1EA9411C8911EC, &_0xDB1EA9411C8911EC},
		{0x3C788E7F6438754D, &_0x3C788E7F6438754D},
		{0xF5ED37F54CD4D52E, &DELETE_CHECKPOINT},
		{0x22A249A53034450A, &_0x22A249A53034450A},
		{0xDC459CFA0CCE245B, &_0xDC459CFA0CCE245B},
		{0xDFA2EF8E04127DD5, &REQUEST_STREAMED_TEXTURE_DICT},
		{0x0145F696AAAAD2E4, &HAS_STREAMED_TEXTURE_DICT_LOADED},
		{0xBE2CACCF5A8AA805, &SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED},
		{0x3A618A217E5154F0, &DRAW_RECT},
		{0xC6372ECD45D73BCD, &SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU},
		{0x61BB1D9B3A95D802, &SET_SCRIPT_GFX_DRAW_ORDER},
		{0xB8A850F20A067EB6, &SET_SCRIPT_GFX_ALIGN},
		{0xE3A3DB414A373DAB, &RESET_SCRIPT_GFX_ALIGN},
		{0xF5A2C681787E579D, &SET_SCRIPT_GFX_ALIGN_PARAMS},
		{0x6DD8F5AA635EB4B2, &_GET_SCRIPT_GFX_POSITION},
		{0xBAF107B6BB2C97F0, &GET_SAFE_ZONE_SIZE},
		{0xE7FFAE5EBF23D890, &DRAW_SPRITE},
		{0x2D3B147AFAD49DE0, &_0x2D3B147AFAD49DE0},
		{0x2BC54A8188768488, &_DRAW_INTERACTIVE_SPRITE},
		{0x9CD43EEE12BF4DD0, &ADD_ENTITY_ICON},
		{0xE0E8BEECCA96BA31, &SET_ENTITY_ICON_VISIBILITY},
		{0x1D5F595CCAE2E238, &SET_ENTITY_ICON_COLOR},
		{0xAA0008F3BBB8F416, &SET_DRAW_ORIGIN},
		{0xFF0B610F6BE0D7AF, &CLEAR_DRAW_ORIGIN},
		{0x338D9F609FD632DB, &_SET_BINK_MOVIE_REQUESTED},
		{0x70D2CC8A542A973C, &_PLAY_BINK_MOVIE},
		{0x63606A61DE68898A, &_STOP_BINK_MOVIE},
		{0x04D950EEFA4EED8C, &_RELEASE_BINK_MOVIE},
		{0x7118E83EEB9F7238, &_DRAW_BINK_MOVIE},
		{0x0CB6B3446855B57A, &_SET_BINK_MOVIE_PROGRESS},
		{0x8E17DDD6B9D5BF29, &_GET_BINK_MOVIE_PROGRESS},
		{0xAFF33B1178172223, &_SET_BINK_MOVIE_UNK},
		{0x845BAD77CC770633, &ATTACH_TV_AUDIO_TO_ENTITY},
		{0x113D2C5DC57E1774, &SET_TV_AUDIO_FRONTEND},
		{0x6805D58CAA427B72, &_0x6805D58CAA427B72},
		{0xB66064452270E8F1, &LOAD_MOVIE_MESH_SET},
		{0xEB119AA014E89183, &RELEASE_MOVIE_MESH_SET},
		{0x9B6E70C5CEEF4EEB, &_0x9B6E70C5CEEF4EEB},
		{0x888D57E407E63624, &GET_SCREEN_RESOLUTION},
		{0x873C9F3104101DD3, &_GET_ACTIVE_SCREEN_RESOLUTION},
		{0xF1307EF624A80D87, &_GET_ASPECT_RATIO},
		{0xB2EBE8CBC58B90E9, &_0xB2EBE8CBC58B90E9},
		{0x30CF4BDA4FCB1905, &GET_IS_WIDESCREEN},
		{0x84ED31191CC5D2C9, &GET_IS_HIDEF},
		{0xEFABC7722293DA7C, &_0xEFABC7722293DA7C},
		{0x18F621F7A5B1F85D, &SET_NIGHTVISION},
		{0x35FB78DC42B7BD21, &GET_REQUESTINGNIGHTVISION},
		{0x2202A3F42C8E5F79, &GET_USINGNIGHTVISION},
		{0xEF398BEEE4EF45F9, &_0xEF398BEEE4EF45F9},
		{0x814AF7DCAACC597B, &_0x814AF7DCAACC597B},
		{0x43FA7CBE20DAB219, &_0x43FA7CBE20DAB219},
		{0xE787BF1C5CF823C9, &SET_NOISEOVERIDE},
		{0xCB6A7C3BB17A0C67, &SET_NOISINESSOVERIDE},
		{0x34E82F05DF2974F5, &GET_SCREEN_COORD_FROM_WORLD_COORD},
		{0x35736EE65BD00C11, &GET_TEXTURE_RESOLUTION},
		{0x95EB5E34F821BABE, &_0x95EB5E34F821BABE},
		{0xE2892E7E55D7073A, &_0xE2892E7E55D7073A},
		{0x0AB84296FED9CFC6, &SET_FLASH},
		{0x3669F1B198DCAA4F, &DISABLE_OCCLUSION_THIS_FRAME},
		{0x1268615ACE24D504, &SET_ARTIFICIAL_LIGHTS_STATE},
		{0xC35A6D07C93802B2, &_0xC35A6D07C93802B2},
		{0xE2C9439ED45DEA60, &CREATE_TRACKED_POINT},
		{0x164ECBB3CF750CB0, &SET_TRACKED_POINT_INFO},
		{0xC45CCDAAC9221CA8, &IS_TRACKED_POINT_VISIBLE},
		{0xB25DC90BAD56CA42, &DESTROY_TRACKED_POINT},
		{0xBE197EAA669238F4, &_0xBE197EAA669238F4},
		{0x61F95E5BB3E0A8C6, &_0x61F95E5BB3E0A8C6},
		{0xAE51BC858F32BA66, &_0xAE51BC858F32BA66},
		{0x649C97D52332341A, &_0x649C97D52332341A},
		{0x2C42340F916C5930, &_0x2C42340F916C5930},
		{0x14FC5833464340A8, &_0x14FC5833464340A8},
		{0x0218BA067D249DEA, &_0x0218BA067D249DEA},
		{0x1612C45F9E3E0D44, &_0x1612C45F9E3E0D44},
		{0x5DEBD9C4DC995692, &_0x5DEBD9C4DC995692},
		{0xAAE9BE70EC7C69AB, &_0xAAE9BE70EC7C69AB},
		{0x6D955F6A9E0295B1, &_GRASS_LOD_SHRINK_SCRIPT_AREAS},
		{0x302C91AB2D477F7E, &_GRASS_LOD_RESET_SCRIPT_AREAS},
		{0x03FC694AE06C5A20, &_0x03FC694AE06C5A20},
		{0xD2936CAB8B58FCBD, &_0xD2936CAB8B58FCBD},
		{0x5F0F3F56635809EF, &_0x5F0F3F56635809EF},
		{0x5E9DAF5A20F15908, &_0x5E9DAF5A20F15908},
		{0x36F6626459D91457, &_0x36F6626459D91457},
		{0x259BA6D4E6F808F1, &_0x259BA6D4E6F808F1},
		{0x80ECBC0C856D3B0B, &_SET_FAR_SHADOWS_SUPPRESSED},
		{0x25FC3E33A31AD0C9, &_0x25FC3E33A31AD0C9},
		{0xB11D94BC55F41932, &_CASCADESHADOWS_SET_TYPE},
		{0x27CB772218215325, &_CASCADESHADOWS_RESET_TYPE},
		{0x6DDBF9DFFC4AC080, &_0x6DDBF9DFFC4AC080},
		{0xD39D13C9FEBF0511, &_0xD39D13C9FEBF0511},
		{0x02AC28F3A01FA04A, &_0x02AC28F3A01FA04A},
		{0x0AE73D8DF3A762B2, &_0x0AE73D8DF3A762B2},
		{0xCA465D9CC0D231BA, &_0xCA465D9CC0D231BA},
		{0xA51C4B86B71652AE, &GOLF_TRAIL_SET_ENABLED},
		{0x312342E1A4874F3F, &GOLF_TRAIL_SET_PATH},
		{0x2485D34E50A22E84, &GOLF_TRAIL_SET_RADIUS},
		{0x12995F2E53FFA601, &GOLF_TRAIL_SET_COLOUR},
		{0xDBAA5EC848BA2D46, &GOLF_TRAIL_SET_TESSELLATION},
		{0xC0416B061F2B7E5E, &_0xC0416B061F2B7E5E},
		{0xB1BB03742917A5D6, &GOLF_TRAIL_SET_FIXED_CONTROL_POINT},
		{0x9CFDD90B2B844BF7, &GOLF_TRAIL_SET_SHADER_PARAMS},
		{0x06F761EA47C1D3ED, &GOLF_TRAIL_SET_FACING},
		{0xA4819F5E23E2FFAD, &_0xA4819F5E23E2FFAD},
		{0xA4664972A9B8F8BA, &_0xA4664972A9B8F8BA},
		{0x7E08924259E08CE0, &SET_SEETHROUGH},
		{0x44B80ABAB9D80BD3, &GET_USINGSEETHROUGH},
		{0x70A64C0234EF522C, &SEETHROUGH_RESET},
		{0xA78DE25577300BA1, &_SEETHROUGH_SET_FADE_START_DISTANCE},
		{0x9D75795B9DC6EBBF, &_SEETHROUGH_SET_FADE_END_DISTANCE},
		{0x43DBAE39626CE83F, &_SEETHROUGH_GET_MAX_THICKNESS},
		{0x0C8FAC83902A62DF, &_SEETHROUGH_SET_MAX_THICKNESS},
		{0xFF5992E1C9E65D05, &_SEETHROUGH_SET_NOISE_AMOUNT_MIN},
		{0xFEBFBFDFB66039DE, &_SEETHROUGH_SET_NOISE_AMOUNT_MAX},
		{0x19E50EB6E33E1D28, &_SEETHROUGH_SET_HI_LIGHT_INTENSITY},
		{0x1636D7FC127B10D2, &_SEETHROUGH_SET_HI_LIGHT_NOISE},
		{0xD7D0B00177485411, &SEETHROUGH_SET_HEATSCALE},
		{0x1086127B3A63505E, &_SEETHROUGH_SET_COLOR_NEAR},
		{0xB3C641F3630BF6DA, &_0xB3C641F3630BF6DA},
		{0xE59343E9E96529E7, &_0xE59343E9E96529E7},
		{0x6A51F78772175A51, &_0x6A51F78772175A51},
		{0xE63D7C6EECECB66B, &_0xE63D7C6EECECB66B},
		{0xE3E2C1B4C59DBC77, &_0xE3E2C1B4C59DBC77},
		{0xA328A24AAA6B7FDC, &TRIGGER_SCREENBLUR_FADE_IN},
		{0xEFACC8AEF94430D5, &TRIGGER_SCREENBLUR_FADE_OUT},
		{0xDE81239437E8C5A8, &_0xDE81239437E8C5A8},
		{0x5CCABFFCA31DDE33, &GET_SCREENBLUR_FADE_CURRENT_TIME},
		{0x7B226C785A52A0A9, &IS_SCREENBLUR_FADE_RUNNING},
		{0xDFC252D8A3E15AB7, &TOGGLE_PAUSED_RENDERPHASES},
		{0xEB3DAC2C86001E5E, &GET_TOGGLE_PAUSED_RENDERPHASES_STATUS},
		{0xE1C8709406F2C41C, &RESET_PAUSED_RENDERPHASES},
		{0x851CD923176EBA7C, &_0x851CD923176EBA7C},
		{0xBA3D65906822BED5, &_SET_HIDOF_ENV_BLUR_PARAMS},
		{0xB569F41F3E7E83A4, &_0xB569F41F3E7E83A4},
		{0x7AC24EAB6D74118D, &_0x7AC24EAB6D74118D},
		{0xBCEDB009461DA156, &_0xBCEDB009461DA156},
		{0x27FEB5254759CDE3, &_0x27FEB5254759CDE3},
		{0x25129531F77B9ED3, &START_PARTICLE_FX_NON_LOOPED_AT_COORD},
		{0xF56B8137DF10135D, &START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD},
		{0x0E7E72961BA18619, &START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE},
		{0xA41B6A43642AC2CF, &START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE},
		{0x0D53A3B8DA0809D2, &START_PARTICLE_FX_NON_LOOPED_ON_ENTITY},
		{0xC95EB1DB6E92113D, &START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY},
		{0x26143A59EF48B262, &SET_PARTICLE_FX_NON_LOOPED_COLOUR},
		{0x77168D722C58B2FC, &SET_PARTICLE_FX_NON_LOOPED_ALPHA},
		{0x8CDE909A0370BB3A, &_0x8CDE909A0370BB3A},
		{0xE184F4F0DC5910E7, &START_PARTICLE_FX_LOOPED_AT_COORD},
		{0xF28DA9F38CD1787C, &START_PARTICLE_FX_LOOPED_ON_PED_BONE},
		{0x1AE42C1660FD6517, &START_PARTICLE_FX_LOOPED_ON_ENTITY},
		{0xC6EB449E33977F0B, &START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE},
		{0x6F60E89A7B64EE1D, &START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY},
		{0xDDE23F30CC5A0F03, &START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE},
		{0x8F75998877616996, &STOP_PARTICLE_FX_LOOPED},
		{0xC401503DFE8D53CF, &REMOVE_PARTICLE_FX},
		{0xB8FEAEEBCC127425, &REMOVE_PARTICLE_FX_FROM_ENTITY},
		{0xDD19FA1C6D657305, &REMOVE_PARTICLE_FX_IN_RANGE},
		{0xBA0127DA25FD54C9, &_0xBA0127DA25FD54C9},
		{0x74AFEF0D2E1E409B, &DOES_PARTICLE_FX_LOOPED_EXIST},
		{0xF7DDEBEC43483C43, &SET_PARTICLE_FX_LOOPED_OFFSETS},
		{0x5F0C4B5B1C393BE2, &SET_PARTICLE_FX_LOOPED_EVOLUTION},
		{0x7F8F65877F88783B, &SET_PARTICLE_FX_LOOPED_COLOUR},
		{0x726845132380142E, &SET_PARTICLE_FX_LOOPED_ALPHA},
		{0xB44250AAA456492D, &SET_PARTICLE_FX_LOOPED_SCALE},
		{0xDCB194B85EF7B541, &SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST},
		{0xEEC4047028426510, &SET_PARTICLE_FX_CAM_INSIDE_VEHICLE},
		{0xACEE6F360FC1F6B6, &SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE},
		{0x96EF97DAEB89BEF5, &SET_PARTICLE_FX_SHOOTOUT_BOAT},
		{0x2A251AA48B2B46DB, &_0x2A251AA48B2B46DB},
		{0x908311265D42A820, &_0x908311265D42A820},
		{0x5F6DF3D92271E8A1, &_0x5F6DF3D92271E8A1},
		{0x2B40A97646381508, &_0x2B40A97646381508},
		{0xD821490579791273, &ENABLE_CLOWN_BLOOD_VFX},
		{0x9DCE1F0F78260875, &ENABLE_ALIEN_BLOOD_VFX},
		{0x27E32866E9A5C416, &_0x27E32866E9A5C416},
		{0xBB90E12CAC1DAB25, &_0xBB90E12CAC1DAB25},
		{0xCA4AE345A153D573, &_0xCA4AE345A153D573},
		{0x54E22EA2C1956A8D, &_0x54E22EA2C1956A8D},
		{0x949F397A288B28B3, &_0x949F397A288B28B3},
		{0xBA3D194057C79A7B, &_0xBA3D194057C79A7B},
		{0x5DBF05DB5926D089, &_0x5DBF05DB5926D089},
		{0x9B079E5221D984D3, &_0x9B079E5221D984D3},
		{0x6C38AF3693A69A91, &USE_PARTICLE_FX_ASSET},
		{0xEA1E2D93F6F75ED9, &SET_PARTICLE_FX_OVERRIDE},
		{0x89C8553DD3274AAE, &RESET_PARTICLE_FX_OVERRIDE},
		{0xA46B73FAA3460AE1, &_0xA46B73FAA3460AE1},
		{0xF78B803082D4386F, &_0xF78B803082D4386F},
		{0x9C30613D50A6ADEF, &WASH_DECALS_IN_RANGE},
		{0x5B712761429DBC14, &WASH_DECALS_FROM_VEHICLE},
		{0xD77EDADB0420E6E0, &FADE_DECALS_IN_RANGE},
		{0x5D6B2D4830A67C62, &REMOVE_DECALS_IN_RANGE},
		{0xCCF71CBDDF5B6CB9, &REMOVE_DECALS_FROM_OBJECT},
		{0xA6F6F70FDC6D144C, &REMOVE_DECALS_FROM_OBJECT_FACING},
		{0xE91F1B65F2B48D57, &REMOVE_DECALS_FROM_VEHICLE},
		{0xB302244A1839BDAD, &ADD_DECAL},
		{0x4F5212C7AD880DF8, &ADD_PETROL_DECAL},
		{0x99AC7F0D8B9C893D, &START_PETROL_TRAIL_DECALS},
		{0x967278682CB6967A, &ADD_PETROL_TRAIL_DECAL_INFO},
		{0x0A123435A26C36CD, &END_PETROL_TRAIL_DECALS},
		{0xED3F346429CCD659, &REMOVE_DECAL},
		{0xC694D74949CAFD0C, &IS_DECAL_ALIVE},
		{0x323F647679A09103, &GET_DECAL_WASH_LEVEL},
		{0xD9454B5752C857DC, &_0xD9454B5752C857DC},
		{0x27CFB1B1E078CB2D, &_0x27CFB1B1E078CB2D},
		{0x4B5CFC83122DF602, &_0x4B5CFC83122DF602},
		{0x2F09F7976C512404, &GET_IS_PETROL_DECAL_IN_RANGE},
		{0x8A35C742130C6080, &_OVERRIDE_DECAL_TEXTURE},
		{0xB7ED70C49521A61D, &_UNDO_DECAL_TEXTURE_OVERRIDE},
		{0x84C8D7C2D30D3280, &MOVE_VEHICLE_DECALS},
		{0x428BDCB9DA58DA53, &ADD_VEHICLE_CREW_EMBLEM},
		{0x82ACC484FFA3B05F, &_0x82ACC484FFA3B05F},
		{0xD2300034310557E4, &REMOVE_VEHICLE_CREW_EMBLEM},
		{0xFE26117A5841B2FF, &GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE},
		{0x060D935D3981A275, &DOES_VEHICLE_HAVE_CREW_EMBLEM},
		{0x0E4299C549F0D1F1, &_0x0E4299C549F0D1F1},
		{0x02369D5C8A51FDCF, &_0x02369D5C8A51FDCF},
		{0x46D1A61A21F566FC, &_0x46D1A61A21F566FC},
		{0x2A2A52824DB96700, &OVERRIDE_INTERIOR_SMOKE_NAME},
		{0x1600FD8CF72EBC12, &OVERRIDE_INTERIOR_SMOKE_LEVEL},
		{0xEFB55E7C25D3B3BE, &OVERRIDE_INTERIOR_SMOKE_END},
		{0xA44FF770DFBC5DAE, &_0xA44FF770DFBC5DAE},
		{0xC9F98AC1884E73A2, &DISABLE_VEHICLE_DISTANTLIGHTS},
		{0x03300B57FCAC6DDB, &_0x03300B57FCAC6DDB},
		{0x98EDF76A7271E4F2, &_0x98EDF76A7271E4F2},
		{0xAEEDAD1420C65CC0, &_SET_FORCE_PED_FOOTSTEPS_TRACKS},
		{0x4CC7F0FEA5283FE0, &_SET_FORCE_VEHICLE_TRAILS},
		{0xEFD97FF47B745B8D, &_DISABLE_SCRIPT_AMBIENT_EFFECTS},
		{0xD7021272EB0A451E, &PRESET_INTERIOR_AMBIENT_CACHE},
		{0x2C933ABF17A1DF41, &SET_TIMECYCLE_MODIFIER},
		{0x82E7FFCD5B2326B3, &SET_TIMECYCLE_MODIFIER_STRENGTH},
		{0x3BCF567485E1971C, &SET_TRANSITION_TIMECYCLE_MODIFIER},
		{0x1CBA05AE7BD7EE05, &_0x1CBA05AE7BD7EE05},
		{0x0F07E7745A236711, &CLEAR_TIMECYCLE_MODIFIER},
		{0xFDF3D97C674AFB66, &GET_TIMECYCLE_MODIFIER_INDEX},
		{0x459FD2C8D0AB78BC, &GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX},
		{0x98D18905BF723B99, &_0x98D18905BF723B99},
		{0x58F735290861E6B4, &PUSH_TIMECYCLE_MODIFIER},
		{0x3C8938D7D872211E, &POP_TIMECYCLE_MODIFIER},
		{0xBBF327DED94E4DEB, &SET_CURRENT_PLAYER_TCMODIFIER},
		{0xBDEB86F4D5809204, &SET_PLAYER_TCMODIFIER_TRANSITION},
		{0xBF59707B3E5ED531, &SET_NEXT_PLAYER_TCMODIFIER},
		{0x1A8E2C8B9CF4549C, &ADD_TCMODIFIER_OVERRIDE},
		{0x15E33297C3E8DC60, &_0x15E33297C3E8DC60},
		{0x5096FD9CCB49056D, &_SET_EXTRA_TIMECYCLE_MODIFIER},
		{0x92CCC17A7A2285DA, &_CLEAR_EXTRA_TIMECYCLE_MODIFIER},
		{0xBB0527EC6341496D, &_GET_EXTRA_TIMECYCLE_MODIFIER_INDEX},
		{0x2C328AF17210F009, &_SET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH},
		{0x2BF72AD5B41AA739, &_RESET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH},
		{0x11FE353CF9733E6F, &REQUEST_SCALEFORM_MOVIE},
		{0x65E7E78842E74CDB, &_REQUEST_SCALEFORM_MOVIE_2},
		{0xC514489CFB8AF806, &REQUEST_SCALEFORM_MOVIE_INSTANCE},
		{0xBD06C611BB9048C2, &_REQUEST_SCALEFORM_MOVIE_INTERACTIVE},
		{0x85F01B8D5B90570E, &HAS_SCALEFORM_MOVIE_LOADED},
		{0x2FCB133CA50A49EB, &_0x2FCB133CA50A49EB},
		{0x86255B1FC929E33E, &_0x86255B1FC929E33E},
		{0x0C1C5D756FB5F337, &HAS_SCALEFORM_MOVIE_FILENAME_LOADED},
		{0x8217150E1217EBFD, &HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT},
		{0x1D132D614DD86811, &SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED},
		{0x6D8EB211944DCE08, &SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME},
		{0x32F34FF7F617643B, &_0x32F34FF7F617643B},
		{0xE6A9F00D4240B519, &_0xE6A9F00D4240B519},
		{0x54972ADAF0294A93, &DRAW_SCALEFORM_MOVIE},
		{0x0DF606929C105BE1, &DRAW_SCALEFORM_MOVIE_FULLSCREEN},
		{0xCF537FDE4FBD4CE5, &DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED},
		{0x87D51D72255D4E78, &DRAW_SCALEFORM_MOVIE_3D},
		{0x1CE592FDC749D6F5, &DRAW_SCALEFORM_MOVIE_3D_SOLID},
		{0xFBD96D87AC96D533, &CALL_SCALEFORM_MOVIE_METHOD},
		{0xD0837058AE2E4BEE, &CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER},
		{0x51BC1ED3CC44E8F7, &CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING},
		{0xEF662D8D57E290B1, &CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING},
		{0x98C494FD5BDFBFD5, &BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD},
		{0xF6E48914C7A8694E, &BEGIN_SCALEFORM_MOVIE_METHOD},
		{0xAB58C27C2E6123C6, &BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND},
		{0xB9449845F73F5E9C, &BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER},
		{0xC6796A8FFA375E53, &END_SCALEFORM_MOVIE_METHOD},
		{0xC50AA39A577AF886, &END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE},
		{0x768FF8961BA904D6, &IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY},
		{0x2DE7EFA66B906036, &GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT},
		{0xD80A80346A45D761, &_GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL},
		{0xE1E258829A885245, &char*},
		{0xC3D0841A0CC546A6, &SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT},
		{0xD69736AAE04DB51A, &SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT},
		{0xC58424BA936EB458, &SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL},
		{0x80338406F3475E55, &BEGIN_TEXT_COMMAND_SCALEFORM_STRING},
		{0x362E2D3FE93A9959, &END_TEXT_COMMAND_SCALEFORM_STRING},
		{0xAE4E8157D9ECF087, &_END_TEXT_COMMAND_SCALEFORM_STRING_2},
		{0x77FE3402004CD1B0, &_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2},
		{0xBA7148484BD90365, &SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING},
		{0xE83A3E3557A56640, &SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING},
		{0x5E657EF1099EDD65, &_0x5E657EF1099EDD65},
		{0xEC52C631A1831C03, &SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING},
		{0x9304881D6F6537EA, &REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE},
		{0xDF6E5987D2B4D140, &HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED},
		{0xF44A5456AC3F4F97, &REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE},
		{0xD1C7CB175E012964, &_0xD1C7CB175E012964},
		{0xBAABBB23EB6E484E, &SET_TV_CHANNEL},
		{0xFC1E275A90D39995, &GET_TV_CHANNEL},
		{0x2982BF73F66E9DDC, &SET_TV_VOLUME},
		{0x2170813D3DD8661B, &GET_TV_VOLUME},
		{0xFDDC2B4ED3C69DF0, &DRAW_TV_CHANNEL},
		{0xF7B38B8305F1FE8B, &SET_TV_CHANNEL_PLAYLIST},
		{0x2201C576FACAEBE8, &SET_TV_CHANNEL_PLAYLIST_AT_HOUR},
		{0xBEB3D46BB7F043C0, &CLEAR_TV_CHANNEL_PLAYLIST},
		{0x1F710BFF7DAE6261, &_IS_PLAYLIST_UNK},
		{0x0AD973CA1E077B60, &_IS_TV_PLAYLIST_ITEM_PLAYING},
		{0x74C180030FDE4B69, &ENABLE_MOVIE_KEYFRAME_WAIT},
		{0xD1C55B110E4DF534, &_0xD1C55B110E4DF534},
		{0x30432A0118736E00, &_0x30432A0118736E00},
		{0x873FA65C778AD970, &ENABLE_MOVIE_SUBTITLES},
		{0xD3A10FC7FD8D98CD, &UI3DSCENE_IS_AVAILABLE},
		{0xF1CEA8A4198D8E9A, &UI3DSCENE_PUSH_PRESET},
		{0x98C4FE6EC34154CA, &_0x98C4FE6EC34154CA},
		{0x7A42B2E236E71415, &_0x7A42B2E236E71415},
		{0x108BE26959A9D9BB, &_0x108BE26959A9D9BB},
		{0xA356990E161C9E65, &TERRAINGRID_ACTIVATE},
		{0x1C4FC5752BCD8E48, &TERRAINGRID_SET_PARAMS},
		{0x5CE62918F8D703C7, &TERRAINGRID_SET_COLOURS},
		{0x2206BF9A37B7F724, &ANIMPOSTFX_PLAY},
		{0x068E835A1D0DC0E3, &ANIMPOSTFX_STOP},
		{0xE35B38A27E8E7179, &_ANIMPOSTFX_GET_UNK},
		{0x36AD3E690DA5ACEB, &ANIMPOSTFX_IS_RUNNING},
		{0xB4EDDC19532BFB85, &ANIMPOSTFX_STOP_ALL},
		{0xD2209BE128B5418C, &_ANIMPOSTFX_STOP_AND_DO_UNK},
		{0xABA17D7CE615ADBF, &BEGIN_TEXT_COMMAND_BUSYSPINNER_ON},
		{0xBD12F8228410D9B4, &END_TEXT_COMMAND_BUSYSPINNER_ON},
		{0x10D373323E5B9C0D, &BUSYSPINNER_OFF},
		{0xC65AB383CD91DF98, &PRELOAD_BUSYSPINNER},
		{0xD422FCC5F239A915, &BUSYSPINNER_IS_ON},
		{0xB2A592B04648A9CB, &BUSYSPINNER_IS_DISPLAYING},
		{0x9245E81072704B8A, &_0x9245E81072704B8A},
		{0xAAE7CE1D63167423, &_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME},
		{0x8DB8CFFD58B62552, &_SET_MOUSE_CURSOR_SPRITE},
		{0x98215325A695E78A, &_0x98215325A695E78A},
		{0x3D9ACB1EB139E702, &_0x3D9ACB1EB139E702},
		{0x632B2940C67F4EA9, &_0x632B2940C67F4EA9},
		{0x6F1554B0CC2089FA, &THEFEED_ONLY_SHOW_TOOLTIPS},
		{0x55598D21339CB998, &THEFEED_SET_SCRIPTED_MENU_HEIGHT},
		{0x32888337579A5970, &_THEFEED_DISABLE},
		{0x25F87B30C382FCA7, &THEFEED_HIDE_THIS_FRAME},
		{0x15CFA549788D35EF, &_0x15CFA549788D35EF},
		{0xA8FDB297A8D25FBA, &THEFEED_FLUSH_QUEUE},
		{0xBE4390CB40B3E627, &THEFEED_REMOVE_ITEM},
		{0xA13C11E1B5C06BFC, &THEFEED_FORCE_RENDER_ON},
		{0x583049884A2EEE3C, &THEFEED_FORCE_RENDER_OFF},
		{0xFDB423997FA30340, &THEFEED_PAUSE},
		{0xE1CD1E48E025E661, &THEFEED_RESUME},
		{0xA9CBFD40B3FA3010, &THEFEED_IS_PAUSED},
		{0xD4438C0564490E63, &THEFEED_SPS_EXTEND_WIDESCREEN_ON},
		{0xB695E2CD0A2DA9EE, &THEFEED_SPS_EXTEND_WIDESCREEN_OFF},
		{0x82352748437638CA, &THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING},
		{0x56C8B608CFD49854, &THEFEED_COMMENT_TELEPORT_POOL_ON},
		{0xADED7F5748ACAFE6, &THEFEED_COMMENT_TELEPORT_POOL_OFF},
		{0x92F0DA1E27DB96DC, &_THEFEED_SET_NEXT_POST_BACKGROUND_COLOR},
		{0x17430B918701C342, &_THEFEED_SET_ANIMPOSTFX_COLOR},
		{0x17AD8C9706BDD88A, &_THEFEED_SET_ANIMPOSTFX_COUNT},
		{0x4A0C7C9BB10ABB36, &_THEFEED_SET_ANIMPOSTFX_SOUND},
		{0xFDD85225B2DEA55E, &THEFEED_RESET_ALL_PARAMETERS},
		{0xFDEC055AB549E328, &THEFEED_FREEZE_NEXT_POST},
		{0x80FE4F3AB4E1B62A, &THEFEED_CLEAR_FROZEN_POST},
		{0xBAE4F9B97CD43B30, &_THEFEED_SET_FLUSH_ANIMPOSTFX},
		{0x317EBA71D7543F52, &_THEFEED_ADD_TXD_REF},
		{0x202709F4C58A0424, &BEGIN_TEXT_COMMAND_THEFEED_POST},
		{0x2B7E9A4EAAA93C89, &END_TEXT_COMMAND_THEFEED_POST_STATS},
		{0x1CCD9A37359072CF, &END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT},
		{0xC6F580E4C94926AC, &_END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY},
		{0x1E6611149DB3DB6B, &END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU},
		{0x5CBF7BADE20DB93E, &END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG},
		{0x531B84E7DA981FB6, &END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON},
		{0x2ED7843F8F801023, &END_TEXT_COMMAND_THEFEED_POST_TICKER},
		{0x44FA03975424A0EE, &END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED},
		{0x378E809BF61EC840, &END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS},
		{0xAA295B6F28BD587D, &END_TEXT_COMMAND_THEFEED_POST_AWARD},
		{0x97C9E4E7024A8F2C, &END_TEXT_COMMAND_THEFEED_POST_CREWTAG},
		{0x137BC35589E34E1E, &END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME},
		{0x33EE12743CCD6343, &END_TEXT_COMMAND_THEFEED_POST_UNLOCK},
		{0xC8F3AAF93D0600BF, &END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU},
		{0x7AE0589093A2E088, &END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR},
		{0xF020C96915705B3A, &END_TEXT_COMMAND_THEFEED_POST_MPTICKER},
		{0x8EFCCF6EC66D85E4, &END_TEXT_COMMAND_THEFEED_POST_CREW_RANKUP},
		{0xB6871B0555B02996, &END_TEXT_COMMAND_THEFEED_POST_VERSUS_TU},
		{0xD202B92CBF1D816F, &_END_TEXT_COMMAND_THEFEED_POST_REPLAY_ICON},
		{0xDD6CB2CCE7C2735C, &_END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT},
		{0xB87A37EEB7FAA67D, &BEGIN_TEXT_COMMAND_PRINT},
		{0x9D77056A530643F6, &END_TEXT_COMMAND_PRINT},
		{0x853648FD1063A213, &BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED},
		{0x8A9BA1AB3E237613, &END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED},
		{0x25FBB336DF1804CB, &BEGIN_TEXT_COMMAND_DISPLAY_TEXT},
		{0xCD015E5BB0D96A57, &END_TEXT_COMMAND_DISPLAY_TEXT},
		{0x54CE8AC98E120CAB, &_BEGIN_TEXT_COMMAND_GET_WIDTH},
		{0x85F061DA64ED2F67, &_END_TEXT_COMMAND_GET_WIDTH},
		{0x521FB041D93DD0E4, &_BEGIN_TEXT_COMMAND_LINE_COUNT},
		{0x9040DFB09BE75706, &_END_TEXT_COMMAND_LINE_COUNT},
		{0x8509B634FBE7DA11, &BEGIN_TEXT_COMMAND_DISPLAY_HELP},
		{0x238FFE5C7B0498A6, &END_TEXT_COMMAND_DISPLAY_HELP},
		{0x0A24DA3A41B718F5, &BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED},
		{0x10BDDBFC529428DD, &END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED},
		{0xF9113A30DE5C6670, &BEGIN_TEXT_COMMAND_SET_BLIP_NAME},
		{0xBC38B49BCB83BC9B, &END_TEXT_COMMAND_SET_BLIP_NAME},
		{0x23D69E0465570028, &_BEGIN_TEXT_COMMAND_OBJECTIVE},
		{0xCFDBDF5AE59BA0F4, &_END_TEXT_COMMAND_OBJECTIVE},
		{0xE124FA80A759019C, &BEGIN_TEXT_COMMAND_CLEAR_PRINT},
		{0xFCC75460ABA29378, &END_TEXT_COMMAND_CLEAR_PRINT},
		{0x8F9EE5687F8EECCD, &BEGIN_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT},
		{0xA86911979638106F, &END_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT},
		{0x03B504CF259931BC, &ADD_TEXT_COMPONENT_INTEGER},
		{0xE7DCB5B874BCD96E, &ADD_TEXT_COMPONENT_FLOAT},
		{0xC63CD5D2920ACBE7, &ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL},
		{0x17299B63C7683A2B, &ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY},
		{0x80EAD8E2E1D5D52E, &ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME},
		{0x6C188BE134E074AA, &ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME},
		{0x1115F16B8AB9E8BF, &ADD_TEXT_COMPONENT_SUBSTRING_TIME},
		{0x0E4C749FF9DE9CC4, &ADD_TEXT_COMPONENT_FORMATTED_INTEGER},
		{0x761B77454205A61D, &ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER},
		{0x94CF4AC034C9C986, &ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE},
		{0x5F68520888E69014, &_ADD_TEXT_COMPONENT_SUBSTRING_UNK},
		{0x39BBF623FC803EAC, &SET_COLOUR_OF_NEXT_TEXT_COMPONENT},
		{0x169BD9382084C8C0, &char*},
		{0xB2798643312205C5, &char*},
		{0xCE94AEBA5D82908A, &char*},
		{0x7B5280EBA9840C72, &char*},
		{0xCC33FA791322B9D9, &CLEAR_PRINTS},
		{0x9D292F73ADBD9313, &CLEAR_BRIEF},
		{0x6178F68A87A4D3A0, &CLEAR_ALL_HELP_MESSAGES},
		{0xCF708001E1E536DD, &CLEAR_THIS_PRINT},
		{0x2CEA2839313C09AC, &CLEAR_SMALL_PRINTS},
		{0x1C7302E725259789, &DOES_TEXT_BLOCK_EXIST},
		{0x71A78003C8E71424, &REQUEST_ADDITIONAL_TEXT},
		{0x6009F9F1AE90D8A6, &REQUEST_ADDITIONAL_TEXT_FOR_DLC},
		{0x02245FE4BED318B8, &HAS_ADDITIONAL_TEXT_LOADED},
		{0x2A179DF17CCF04CD, &CLEAR_ADDITIONAL_TEXT},
		{0x8B6817B71B85EBF0, &IS_STREAMING_ADDITIONAL_TEXT},
		{0xADBF060E2B30C5BC, &HAS_THIS_ADDITIONAL_TEXT_LOADED},
		{0x7984C03AA5CC2F41, &IS_MESSAGE_BEING_DISPLAYED},
		{0xAC09CA973C564252, &DOES_TEXT_LABEL_EXIST},
		{0x98C3CF913D895111, &char*},
		{0x801BD273D3A23F74, &GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL},
		{0xF030907CCBB8A9FD, &GET_LENGTH_OF_LITERAL_STRING},
		{0x43E4111189E54F0E, &GET_LENGTH_OF_LITERAL_STRING_IN_BYTES},
		{0xD0EF8A959B8A4CB9, &char*},
		{0x1930DFA731813EC4, &IS_HUD_PREFERENCE_SWITCHED_ON},
		{0x9EB6522EA68F22FE, &IS_RADAR_PREFERENCE_SWITCHED_ON},
		{0xAD6DACA4BA53E0A4, &IS_SUBTITLE_PREFERENCE_SWITCHED_ON},
		{0xA6294919E56FF02A, &DISPLAY_HUD},
		{0x7669F9E39DC17063, &_0x7669F9E39DC17063},
		{0x402F9ED62087E898, &DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME},
		{0xA0EBB943C300E693, &DISPLAY_RADAR},
		{0xCD74233600C4EA6B, &_0xCD74233600C4EA6B},
		{0xC2D2AD9EAAE265B8, &_0xC2D2AD9EAAE265B8},
		{0xA86478C6958735C5, &IS_HUD_HIDDEN},
		{0x157F93B036700462, &IS_RADAR_HIDDEN},
		{0xAF754F20EB5CD51A, &IS_MINIMAP_RENDERING},
		{0x0C698D8F099174C7, &_0x0C698D8F099174C7},
		{0xE4C3B169876D33D7, &_0xE4C3B169876D33D7},
		{0xEB81A3DADD503187, &_0xEB81A3DADD503187},
		{0x4F7D8A9BFB0B43E9, &SET_BLIP_ROUTE},
		{0xD12882D3FF82BF11, &_CLEAR_ALL_BLIP_ROUTES},
		{0x837155CD2F63DA09, &SET_BLIP_ROUTE_COLOUR},
		{0x2790F4B17D098E26, &_0x2790F4B17D098E26},
		{0x6CDD58146A436083, &_0x6CDD58146A436083},
		{0xD1942374085C8469, &_0xD1942374085C8469},
		{0x60296AF4BA14ABC5, &ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS},
		{0x57D760D55F54E071, &_0x57D760D55F54E071},
		{0xBD12C5EEE184C337, &SET_RADAR_ZOOM_PRECISE},
		{0x096EF57A0C999BBA, &SET_RADAR_ZOOM},
		{0xF98E4B3E56AFC7B1, &SET_RADAR_ZOOM_TO_BLIP},
		{0xCB7CC0D58405AD41, &SET_RADAR_ZOOM_TO_DISTANCE},
		{0xD2049635DEB9C375, &_0xD2049635DEB9C375},
		{0x7C9C91AB74A0360F, &GET_HUD_COLOUR},
		{0xD68A5FF8A3A89874, &SET_SCRIPT_VARIABLE_HUD_COLOUR},
		{0x16A304E6CB2BFAB9, &_SET_SCRIPT_VARIABLE_2_HUD_COLOUR},
		{0x1CCC708F0F850613, &REPLACE_HUD_COLOUR},
		{0xF314CF4F0211894E, &REPLACE_HUD_COLOUR_WITH_RGBA},
		{0x1DFEDD15019315A9, &_SET_ABILITY_BAR_VISIBILITY_IN_MULTIPLAYER},
		{0x02CFBA0C9E9275CE, &FLASH_ABILITY_BAR},
		{0x9969599CCFF5D85E, &SET_ABILITY_BAR_VALUE},
		{0xA18AFB39081B6A1F, &FLASH_WANTED_DISPLAY},
		{0xBA8D65C1C65702E5, &_0xBA8D65C1C65702E5},
		{0xDB88A37483346780, &_GET_TEXT_SCALE_HEIGHT},
		{0x07C837F9A01C34C9, &SET_TEXT_SCALE},
		{0xBE6B23FFA53FB442, &SET_TEXT_COLOUR},
		{0xC02F4DBFB51D988B, &SET_TEXT_CENTRE},
		{0x6B3C4650BC8BEE47, &SET_TEXT_RIGHT_JUSTIFY},
		{0x4E096588B13FFECA, &SET_TEXT_JUSTIFICATION},
		{0x63145D9C883A1A70, &SET_TEXT_WRAP},
		{0xA50ABC31E3CDFAFF, &SET_TEXT_LEADING},
		{0x038C1F517D7FDCF8, &SET_TEXT_PROPORTIONAL},
		{0x66E0276CC5F6B9DA, &SET_TEXT_FONT},
		{0x1CA3E9EAC9D93E5E, &SET_TEXT_DROP_SHADOW},
		{0x465C84BC39F1C351, &SET_TEXT_DROPSHADOW},
		{0x2513DFB0FB8400FE, &SET_TEXT_OUTLINE},
		{0x441603240D202FA6, &SET_TEXT_EDGE},
		{0x5F15302936E07111, &SET_TEXT_RENDER_ID},
		{0x52F0982D7FD156B6, &GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID},
		{0x57D9C12635E25CE3, &REGISTER_NAMED_RENDERTARGET},
		{0x78DCDC15C9F116B4, &IS_NAMED_RENDERTARGET_REGISTERED},
		{0xE9F6FFE837354DD4, &RELEASE_NAMED_RENDERTARGET},
		{0xF6C09E276AEB3F2D, &LINK_NAMED_RENDERTARGET},
		{0x1A6478B61C6BDC3B, &GET_NAMED_RENDERTARGET_RENDER_ID},
		{0x113750538FA31298, &IS_NAMED_RENDERTARGET_LINKED},
		{0x8DFCED7A656F8802, &CLEAR_HELP},
		{0xDAD37F45428801AE, &IS_HELP_MESSAGE_ON_SCREEN},
		{0x214CD562A939246A, &_0x214CD562A939246A},
		{0x4D79439A6B55AC67, &IS_HELP_MESSAGE_BEING_DISPLAYED},
		{0x327EDEEEAC55C369, &IS_HELP_MESSAGE_FADING_OUT},
		{0xB9C362BABECDDC7A, &_SET_HELP_MESSAGE_TEXT_STYLE},
		{0x4A9923385BDB9DAD, &_GET_LEVEL_BLIP_SPRITE},
		{0x186E5D252FA50E7D, &_GET_WAYPOINT_BLIP_SPRITE},
		{0x9A3FF3DE163034E8, &GET_NUMBER_OF_ACTIVE_BLIPS},
		{0x14F96AA50D6FBEA7, &GET_NEXT_BLIP_INFO_ID},
		{0x1BEDE233E6CD2A1F, &GET_FIRST_BLIP_INFO_ID},
		{0xD484BF71050CA1EE, &_0xD484BF71050CA1EE},
		{0xFA7C7F0AADF25D09, &GET_BLIP_INFO_ID_COORD},
		{0x1E314167F701DC3B, &GET_BLIP_INFO_ID_DISPLAY},
		{0xBE9B0959FFD0779B, &GET_BLIP_INFO_ID_TYPE},
		{0x4BA4E2553AFEDC2C, &GET_BLIP_INFO_ID_ENTITY_INDEX},
		{0x9B6786E4C03DD382, &GET_BLIP_INFO_ID_PICKUP_INDEX},
		{0xBC8DBDCA2436F7E8, &GET_BLIP_FROM_ENTITY},
		{0x46818D79B1F7499A, &ADD_BLIP_FOR_RADIUS},
		{0xCE5D0E5E315DB238, &_ADD_BLIP_FOR_AREA},
		{0x5CDE92C702A8FCE7, &ADD_BLIP_FOR_ENTITY},
		{0xBE339365C863BD36, &ADD_BLIP_FOR_PICKUP},
		{0x5A039BB0BCA604B6, &ADD_BLIP_FOR_COORD},
		{0x72DD432F3CDFC0EE, &TRIGGER_SONAR_BLIP},
		{0x60734CC207C9833C, &ALLOW_SONAR_BLIPS},
		{0xAE2AF67E9D9AF65D, &SET_BLIP_COORDS},
		{0x586AFE3FF72D996E, &GET_BLIP_COORDS},
		{0xDF735600A4696DAF, &SET_BLIP_SPRITE},
		{0x1FC877464A04FC4F, &GET_BLIP_SPRITE},
		{0x9FCB3CBFB3EAD69A, &_0x9FCB3CBFB3EAD69A},
		{0xB7B873520C84C118, &_0xB7B873520C84C118},
		{0xEAA0FFE120D92784, &SET_BLIP_NAME_FROM_TEXT_FILE},
		{0x127DE7B20C60A6A3, &SET_BLIP_NAME_TO_PLAYER_NAME},
		{0x45FF974EEE1C8734, &SET_BLIP_ALPHA},
		{0x970F608F0EE6C885, &GET_BLIP_ALPHA},
		{0x2AEE8F8390D2298C, &SET_BLIP_FADE},
		{0x2C173AE2BDB9385E, &_0x2C173AE2BDB9385E},
		{0xF87683CDF73C3F6E, &SET_BLIP_ROTATION},
		{0xA8B6AFDAC320AC87, &_SET_BLIP_SQUARED_ROTATION},
		{0xD3CD6FD297AE87CC, &SET_BLIP_FLASH_TIMER},
		{0xAA51DB313C010A7E, &SET_BLIP_FLASH_INTERVAL},
		{0x03D7FB09E75D6B7E, &SET_BLIP_COLOUR},
		{0x14892474891E09EB, &SET_BLIP_SECONDARY_COLOUR},
		{0xDF729E8D20CF7327, &GET_BLIP_COLOUR},
		{0x729B5F1EFBC0AAEE, &GET_BLIP_HUD_COLOUR},
		{0xDA5F8727EB75B926, &IS_BLIP_SHORT_RANGE},
		{0xE41CA53051197A27, &IS_BLIP_ON_MINIMAP},
		{0xDD2238F57B977751, &DOES_BLIP_HAVE_GPS_ROUTE},
		{0x54318C915D27E4CE, &SET_BLIP_HIDDEN_ON_LEGEND},
		{0xE2590BC29220CEBB, &SET_BLIP_HIGH_DETAIL},
		{0x24AC0137444F9FD5, &SET_BLIP_AS_MISSION_CREATOR_BLIP},
		{0x26F49BF3381D933D, &IS_MISSION_CREATOR_BLIP},
		{0x5C90988E7C8E1AF4, &GET_NEW_SELECTED_MISSION_CREATOR_BLIP},
		{0x4167EFE0527D706E, &IS_HOVERING_OVER_MISSION_CREATOR_BLIP},
		{0xF1A6C18B35BCADE6, &_0xF1A6C18B35BCADE6},
		{0x2916A928514C9827, &_0x2916A928514C9827},
		{0xB552929B85FC27EC, &_0xB552929B85FC27EC},
		{0xB14552383D39CE3E, &SET_BLIP_FLASHES},
		{0x2E8D9498C56DD0D1, &SET_BLIP_FLASHES_ALTERNATE},
		{0xA5E41FD83AD6CEF0, &IS_BLIP_FLASHING},
		{0xBE8BE4FE60E27B72, &SET_BLIP_AS_SHORT_RANGE},
		{0xD38744167B2FA257, &SET_BLIP_SCALE},
		{0xCD6524439909C979, &_0xCD6524439909C979},
		{0xAE9FC9EF6A9FAC79, &SET_BLIP_PRIORITY},
		{0x9029B2F3DA924928, &SET_BLIP_DISPLAY},
		{0x234CDD44D996FD9A, &SET_BLIP_CATEGORY},
		{0x86A652570E5F25DD, &REMOVE_BLIP},
		{0x6F6F290102C02AB4, &SET_BLIP_AS_FRIENDLY},
		{0x742D6FD43115AF73, &PULSE_BLIP},
		{0xA3C0B359DCB848B6, &SHOW_NUMBER_ON_BLIP},
		{0x532CFF637EF80148, &HIDE_NUMBER_ON_BLIP},
		{0x75A16C3DA34F1245, &SHOW_HEIGHT_ON_BLIP},
		{0x74513EA3E505181E, &SHOW_TICK_ON_BLIP},
		{0x5FBCA48327B914DF, &SHOW_HEADING_INDICATOR_ON_BLIP},
		{0xB81656BC81FE24D1, &SHOW_OUTLINE_INDICATOR_ON_BLIP},
		{0x23C3EB807312F01A, &SHOW_FRIEND_INDICATOR_ON_BLIP},
		{0xDCFB5D4DB8BF367E, &SHOW_CREW_INDICATOR_ON_BLIP},
		{0xC4278F70131BAA6D, &_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP},
		{0x4B5B620C9B59ED34, &_0x4B5B620C9B59ED34},
		{0x2C9F302398E13141, &_0x2C9F302398E13141},
		{0x2B6D467DAB714E8D, &_SET_BLIP_SHRINK},
		{0x25615540D894B814, &SET_RADIUS_BLIP_EDGE},
		{0xA6DB27D19ECBB7DA, &DOES_BLIP_EXIST},
		{0xA7E4E2D361C2627F, &SET_WAYPOINT_OFF},
		{0xD8E694757BCEA8E9, &_DELETE_WAYPOINT},
		{0x81FA173F170560D1, &REFRESH_WAYPOINT},
		{0x1DD1F58F493F1DA5, &IS_WAYPOINT_ACTIVE},
		{0xFE43368D2AA4F2FC, &SET_NEW_WAYPOINT},
		{0xB203913733F27884, &SET_BLIP_BRIGHT},
		{0x13127EC3665E8EE1, &SET_BLIP_SHOW_CONE},
		{0xC594B315EDF2D4AF, &_0xC594B315EDF2D4AF},
		{0xF83D0FEBE75E62C9, &_0xF83D0FEBE75E62C9},
		{0x35A3CD97B2C0A6D2, &_0x35A3CD97B2C0A6D2},
		{0x8410C5E0CD847B9D, &_0x8410C5E0CD847B9D},
		{0x75A9A10948D1DEA6, &SET_MINIMAP_COMPONENT},
		{0x60E892BA4F5BDCA4, &_SHOW_SIGNIN_UI},
		{0xDCD4EC3F419D02FA, &GET_MAIN_PLAYER_BLIP_ID},
		{0x41350B4FC28E3941, &_0x41350B4FC28E3941},
		{0x4B0311D3CDC4648F, &HIDE_LOADING_ON_FADE_THIS_FRAME},
		{0x59E727A1C9D3E31A, &SET_RADAR_AS_INTERIOR_THIS_FRAME},
		{0x504DFE62A1692296, &_0x504DFE62A1692296},
		{0xE81B7D2A3DAB2D81, &SET_RADAR_AS_EXTERIOR_THIS_FRAME},
		{0x77E2DD177910E1CF, &_SET_PLAYER_BLIP_POSITION_THIS_FRAME},
		{0xA17784FCA9548D15, &_0xA17784FCA9548D15},
		{0x9049FE339D5F6F6F, &_IS_MINIMAP_IN_INTERIOR},
		{0x5FBAE526203990C9, &HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME},
		{0x20FE7FDFEEAD38C0, &HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME},
		{0x6D14BFDC33B34F55, &DONT_TILT_MINIMAP_THIS_FRAME},
		{0x55F5A5F07134DE60, &_0x55F5A5F07134DE60},
		{0xC3B07BA00A83B0F1, &SET_WIDESCREEN_FORMAT},
		{0x276B6CE369C33678, &DISPLAY_AREA_NAME},
		{0x96DEC8D5430208B7, &DISPLAY_CASH},
		{0x170F541E1CADD1DE, &_0x170F541E1CADD1DE},
		{0x0772DF77852C2E30, &_SET_PLAYER_CASH_CHANGE},
		{0xA5E78BA2B1331C55, &DISPLAY_AMMO_THIS_FRAME},
		{0x73115226F4814E62, &DISPLAY_SNIPER_SCOPE_THIS_FRAME},
		{0x719FF505F097FD20, &HIDE_HUD_AND_RADAR_THIS_FRAME},
		{0xE67C6DFD386EA5E7, &_0xE67C6DFD386EA5E7},
		{0xC2D15BEF167E27BC, &SET_MULTIPLAYER_WALLET_CASH},
		{0x95CF81BD06EE1887, &REMOVE_MULTIPLAYER_WALLET_CASH},
		{0xDD21B55DF695CD0A, &SET_MULTIPLAYER_BANK_CASH},
		{0xC7C6789AA1CFEDD0, &REMOVE_MULTIPLAYER_BANK_CASH},
		{0xFD1D220394BCB824, &SET_MULTIPLAYER_HUD_CASH},
		{0x968F270E39141ECA, &REMOVE_MULTIPLAYER_HUD_CASH},
		{0xD46923FC481CA285, &HIDE_HELP_TEXT_THIS_FRAME},
		{0x801879A9B4F4B2FB, &_0x801879A9B4F4B2FB},
		{0x960C9FF8F616E41C, &DISPLAY_HELP_TEXT_THIS_FRAME},
		{0xEB354E5376BC81A7, &HUD_FORCE_WEAPON_WHEEL},
		{0x488043841BBE156F, &_0x488043841BBE156F},
		{0x0AFC4AF510774B47, &_HUD_WEAPON_WHEEL_IGNORE_SELECTION},
		{0xA48931185F0536FE, &_HUD_WEAPON_WHEEL_GET_SELECTED_HASH},
		{0x72C1056D678BB7D8, &_HUD_WEAPON_WHEEL_SET_SLOT_HASH},
		{0xA13E93403F26C812, &_HUD_WEAPON_WHEEL_GET_SLOT_HASH},
		{0x14C9FDCC41F81F63, &_HUD_WEAPON_WHEEL_IGNORE_CONTROL_INPUT},
		{0x5B440763A4C8D15B, &SET_GPS_FLAGS},
		{0x21986729D6A3A830, &CLEAR_GPS_FLAGS},
		{0x1EAC5F91BCBC5073, &SET_RACE_TRACK_RENDER},
		{0x7AA5B4CE533C858B, &CLEAR_GPS_RACE_TRACK},
		{0xDB34E8D56FC13B08, &START_GPS_CUSTOM_ROUTE},
		{0x311438A071DD9B1A, &ADD_POINT_TO_GPS_CUSTOM_ROUTE},
		{0x900086F371220B6F, &SET_GPS_CUSTOM_ROUTE_RENDER},
		{0xE6DE0561D9232A64, &CLEAR_GPS_CUSTOM_ROUTE},
		{0x3D3D15AF7BCAAF83, &START_GPS_MULTI_ROUTE},
		{0xA905192A6781C41B, &ADD_POINT_TO_GPS_MULTI_ROUTE},
		{0x3DDA37128DD1ACA8, &SET_GPS_MULTI_ROUTE_RENDER},
		{0x67EEDEA1B9BAFD94, &CLEAR_GPS_MULTI_ROUTE},
		{0xFF4FB7C8CDFA3DA7, &CLEAR_GPS_PLAYER_WAYPOINT},
		{0x320D0E0D936A0E9B, &SET_GPS_FLASHES},
		{0x7B21E0BB01E8224A, &_0x7B21E0BB01E8224A},
		{0xF2DD778C22B15BDA, &FLASH_MINIMAP_DISPLAY},
		{0x6B1DE27EE78E6A19, &FLASH_MINIMAP_DISPLAY_WITH_COLOR},
		{0x6AFDFB93754950C7, &TOGGLE_STEALTH_RADAR},
		{0x1A5CD7752DD28CD3, &SET_MINIMAP_IN_SPECTATOR_MODE},
		{0x5F28ECF5FC84772F, &SET_MISSION_NAME},
		{0xE45087D85F468BC2, &_SET_MISSION_NAME_2},
		{0x817B86108EB94E51, &_0x817B86108EB94E51},
		{0x58FADDED207897DC, &SET_MINIMAP_BLOCK_WAYPOINT},
		{0x9133955F1A2DA957, &SET_MINIMAP_IN_PROLOGUE},
		{0xF8DEE0A5600CBB93, &SET_MINIMAP_HIDE_FOW},
		{0xE0130B41D3CF4574, &_GET_MINIMAP_REVEAL_PERCENTAGE},
		{0x6E31B91145873922, &_GET_MINIMAP_AREA_IS_REVEALED},
		{0x62E849B7EB28E770, &_0x62E849B7EB28E770},
		{0x0923DBF87DFF735E, &_0x0923DBF87DFF735E},
		{0x71BDB63DBAF8DA59, &SET_MINIMAP_GOLF_COURSE},
		{0x35EDD5B2E3FF01C0, &SET_MINIMAP_GOLF_COURSE_OFF},
		{0x299FAEBB108AE05B, &LOCK_MINIMAP_ANGLE},
		{0x8183455E16C42E3A, &UNLOCK_MINIMAP_ANGLE},
		{0x1279E861A329E73F, &LOCK_MINIMAP_POSITION},
		{0x3E93E06DB8EF1F30, &UNLOCK_MINIMAP_POSITION},
		{0xD201F3FF917A506D, &_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL},
		{0x3F5CC444DCAAA8F2, &SET_HEALTH_HUD_DISPLAY_VALUES},
		{0x975D66A0BC17064C, &SET_MAX_HEALTH_HUD_DISPLAY},
		{0x06A320535F5F0248, &SET_MAX_ARMOUR_HUD_DISPLAY},
		{0x231C8F89D0539D8F, &SET_BIGMAP_ACTIVE},
		{0xBC4C9EA5391ECC0D, &IS_HUD_COMPONENT_ACTIVE},
		{0xDD100EB17A94FF65, &IS_SCRIPTED_HUD_COMPONENT_ACTIVE},
		{0xE374C498D8BADC14, &HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME},
		{0x4F38DCA127DAAEA2, &_SHOW_SCRIPTED_HUD_COMPONENT_THIS_FRAME},
		{0x09C0403ED9A751C2, &IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME},
		{0x6806C51AD12B83B8, &HIDE_HUD_COMPONENT_THIS_FRAME},
		{0x0B4DF1FA60C0E664, &SHOW_HUD_COMPONENT_THIS_FRAME},
		{0xA4DEDE28B1814289, &_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME},
		{0x12782CE0A636E9F0, &RESET_RETICULE_VALUES},
		{0x450930E616475D0D, &RESET_HUD_COMPONENT_VALUES},
		{0xAABB1F56E2A17CED, &SET_HUD_COMPONENT_POSITION},
		{0x223CA69A8C4417FD, &GET_HUD_COMPONENT_POSITION},
		{0xB57D8DD645CFA2CF, &CLEAR_REMINDER_MESSAGE},
		{0xF9904D11F1ACBEC3, &GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION},
		{0x523A590C1A3CC0D3, &OPEN_REPORTUGC_MENU},
		{0xEE4C0E6DBC6F2C6F, &FORCE_CLOSE_REPORTUGC_MENU},
		{0x9135584D09A3437E, &IS_REPORTUGC_MENU_OPEN},
		{0x2432784ACA090DA4, &IS_FLOATING_HELP_TEXT_ON_SCREEN},
		{0x7679CC1BCEBE3D4C, &SET_FLOATING_HELP_TEXT_SCREEN_POSITION},
		{0x784BA7E0ECEB4178, &SET_FLOATING_HELP_TEXT_WORLD_POSITION},
		{0xB094BC1DB4018240, &SET_FLOATING_HELP_TEXT_TO_ENTITY},
		{0x788E7FD431BD67F1, &SET_FLOATING_HELP_TEXT_STYLE},
		{0x50085246ABD3FEFA, &CLEAR_FLOATING_HELP},
		{0x6DD05E9D83EFA4C9, &CREATE_MP_GAMER_TAG_WITH_CREW_COLOR},
		{0x6E0EB3EB47C8D7AA, &IS_MP_GAMER_TAG_MOVIE_ACTIVE},
		{0xBFEFE3321A3F5015, &CREATE_FAKE_MP_GAMER_TAG},
		{0x31698AA80E0223F8, &REMOVE_MP_GAMER_TAG},
		{0x4E929E7A5796FD26, &IS_MP_GAMER_TAG_ACTIVE},
		{0x595B5178E412E199, &IS_MP_GAMER_TAG_FREE},
		{0x63BB75ABEDC1F6A0, &SET_MP_GAMER_TAG_VISIBILITY},
		{0xEE76FF7E6A0166B0, &_0xEE76FF7E6A0166B0},
		{0xA67F9C46D612B6F1, &_SET_MP_GAMER_TAG_ICONS},
		{0xD29EC58C2F6B5014, &_SET_MP_GAMER_HEALTH_BAR_DISPLAY},
		{0x1563FE35E9928E67, &_SET_MP_GAMER_HEALTH_BAR_MAX},
		{0x613ED644950626AE, &SET_MP_GAMER_TAG_COLOUR},
		{0x3158C77A7E888AB4, &SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR},
		{0xD48FE545CD46F857, &SET_MP_GAMER_TAG_ALPHA},
		{0xCF228E2AA03099C3, &SET_MP_GAMER_TAG_WANTED_LEVEL},
		{0x9C16459B2324B2CF, &_SET_MP_GAMER_TAG_UNK},
		{0xDEA2B8283BAA3944, &SET_MP_GAMER_TAG_NAME},
		{0xEB709A36958ABE0D, &_IS_VALID_MP_GAMER_TAG_MOVIE},
		{0x7B7723747CCB55B6, &SET_MP_GAMER_TAG_BIG_TEXT},
		{0x01A358D9128B7A86, &GET_CURRENT_WEBPAGE_ID},
		{0x97D47996FC48CBAD, &GET_CURRENT_WEBSITE_ID},
		{0xE3B05614DCE1D014, &_0xE3B05614DCE1D014},
		{0xB99C4E4D9499DF29, &_0xB99C4E4D9499DF29},
		{0xAF42195A42C63BBA, &_IS_WARNING_MESSAGE_ACTIVE_2},
		{0x7B1776B3B53F8D74, &SET_WARNING_MESSAGE},
		{0xDC38CC1E35B6A5D7, &SET_WARNING_MESSAGE_WITH_HEADER},
		{0x701919482C74B5AB, &SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS},
		{0x38B55259C2E078ED, &_SET_WARNING_MESSAGE_WITH_HEADER_UNK},
		{0x15803FEC3B9A872B, &_SET_WARNING_MESSAGE_4},
		{0x81DF9ABA6C83DFF9, &_GET_WARNING_MESSAGE_TITLE_HASH},
		{0x0C5A80A9E096D529, &_SET_WARNING_MESSAGE_LIST_ROW},
		{0xDAF87174BE7454FF, &_0xDAF87174BE7454FF},
		{0x6EF54AB721DC6242, &_REMOVE_WARNING_MESSAGE_LIST_ITEMS},
		{0xE18B138FABC53103, &IS_WARNING_MESSAGE_ACTIVE},
		{0x7792424AA0EAC32E, &CLEAR_DYNAMIC_PAUSE_MENU_ERROR_MESSAGE},
		{0x5354C5BA2EA868A4, &_RACE_GALLERY_FULLSCREEN},
		{0x1EAE6DD17B7A5EFA, &_RACE_GALLERY_NEXT_BLIP_SPRITE},
		{0x551DF99658DB6EE8, &_RACE_GALLERY_ADD_BLIP},
		{0x2708FC083123F9FF, &_CLEAR_RACE_GALLERY_BLIPS},
		{0x1121BFA1A1A522A8, &FORCE_SONAR_BLIPS_THIS_FRAME},
		{0x3F0CF9CB7E589B88, &_0x3F0CF9CB7E589B88},
		{0x82CEDC33687E1F50, &_0x82CEDC33687E1F50},
		{0x211C4EF450086857, &_0x211C4EF450086857},
		{0xBF4F34A85CA2970C, &_0xBF4F34A85CA2970C},
		{0xEF01D36B9C9D0C7B, &ACTIVATE_FRONTEND_MENU},
		{0x10706DC6AD2D49C0, &RESTART_FRONTEND_MENU},
		{0x2309595AD6145265, &GET_CURRENT_FRONTEND_MENU_VERSION},
		{0xDF47FC56C71569CF, &SET_PAUSE_MENU_ACTIVE},
		{0x6D3465A73092F0E6, &DISABLE_FRONTEND_THIS_FRAME},
		{0xBA751764F0821256, &SUPPRESS_FRONTEND_RENDERING_THIS_FRAME},
		{0xCC3FDDED67BCFC63, &_ALLOW_PAUSE_MENU_WHEN_DEAD_THIS_FRAME},
		{0x745711A75AB09277, &SET_FRONTEND_ACTIVE},
		{0xB0034A223497FFCB, &IS_PAUSE_MENU_ACTIVE},
		{0x2F057596F2BD0061, &_0x2F057596F2BD0061},
		{0x272ACD84970869C5, &GET_PAUSE_MENU_STATE},
		{0x5BFF36D6ED83E0AE, &_0x5BFF36D6ED83E0AE},
		{0x1C491717107431C7, &IS_PAUSE_MENU_RESTARTING},
		{0x2162C446DFDF38FD, &_LOG_DEBUG_INFO},
		{0x77F16B447824DA6C, &_0x77F16B447824DA6C},
		{0xCDCA26E80FAECB8F, &_0xCDCA26E80FAECB8F},
		{0x2DE6C5E2E996F178, &_0x2DE6C5E2E996F178},
		{0xDD564BDD0472C936, &PAUSE_MENU_ACTIVATE_CONTEXT},
		{0x444D8CF241EC25C5, &PAUSE_MENU_DEACTIVATE_CONTEXT},
		{0x84698AB38D0C6636, &PAUSE_MENU_IS_CONTEXT_ACTIVE},
		{0x2A25ADC48F87841F, &_0x2A25ADC48F87841F},
		{0xDE03620F8703A9DF, &_0xDE03620F8703A9DF},
		{0x359AF31A4B52F5ED, &_0x359AF31A4B52F5ED},
		{0x13C4B962653A5280, &_0x13C4B962653A5280},
		{0xC8E1071177A23BE5, &_0xC8E1071177A23BE5},
		{0x4895BDEA16E7C080, &_0x4895BDEA16E7C080},
		{0xC78E239AC5B2DDB9, &_0xC78E239AC5B2DDB9},
		{0xF06EBB91A81E09E3, &_0xF06EBB91A81E09E3},
		{0x3BAB9A4E4F2FF5C7, &IS_FRONTEND_READY_FOR_CONTROL},
		{0xEC9264727EEC0F28, &_0xEC9264727EEC0F28},
		{0x14621BB1DF14E2B2, &_0x14621BB1DF14E2B2},
		{0x66E7CB63C97B7D20, &_0x66E7CB63C97B7D20},
		{0x593FEAE1F73392D4, &_0x593FEAE1F73392D4},
		{0x4E3CD0EF8A489541, &_0x4E3CD0EF8A489541},
		{0xF284AC67940C6812, &_0xF284AC67940C6812},
		{0x2E22FEFA0100275E, &_0x2E22FEFA0100275E},
		{0x0CF54F20DE43879C, &_0x0CF54F20DE43879C},
		{0x36C1451A88A09630, &_0x36C1451A88A09630},
		{0x7E17BE53E1AAABAF, &_0x7E17BE53E1AAABAF},
		{0xA238192F33110615, &_0xA238192F33110615},
		{0xEF4CED81CEBEDC6D, &_0xEF4CED81CEBEDC6D},
		{0xCA6B2F7CE32AB653, &_0xCA6B2F7CE32AB653},
		{0x90A6526CF0381030, &_0x90A6526CF0381030},
		{0x24A49BEAF468DC90, &_0x24A49BEAF468DC90},
		{0x5FBD7095FE7AE57F, &_0x5FBD7095FE7AE57F},
		{0x8F08017F9D7C47BD, &_0x8F08017F9D7C47BD},
		{0x052991E59076E4E4, &_0x052991E59076E4E4},
		{0x5E62BE5DC58E9E06, &CLEAR_PED_IN_PAUSE_MENU},
		{0xAC0BFBDC3BE00E14, &GIVE_PED_TO_PAUSE_MENU},
		{0x3CA6050692BC61B0, &SET_PAUSE_MENU_PED_LIGHTING},
		{0xECF128344E9FF9F1, &SET_PAUSE_MENU_PED_SLEEP_STATE},
		{0x805D7CBB36FD6C4C, &OPEN_ONLINE_POLICIES_MENU},
		{0xF13FE2A80C05C561, &_0xF13FE2A80C05C561},
		{0x6F72CD94F7B5B68C, &IS_ONLINE_POLICIES_MENU_ACTIVE},
		{0x75D3691713C3B05A, &OPEN_SOCIAL_CLUB_MENU},
		{0xD2B32BE3FC1626C6, &CLOSE_SOCIAL_CLUB_MENU},
		{0x9E778248D6685FE0, &SET_SOCIAL_CLUB_TOUR},
		{0xC406BE343FC4B9AF, &IS_SOCIAL_CLUB_ACTIVE},
		{0x1185A8087587322C, &_0x1185A8087587322C},
		{0x8817605C2BA76200, &_FORCE_CLOSE_TEXT_INPUT_BOX},
		{0x577599CCED639CA2, &_0x577599CCED639CA2},
		{0x6A1738B4323FE2D9, &_OVERRIDE_MULTIPLAYER_CHAT_PREFIX},
		{0xB118AF58B5F332A1, &_IS_MULTIPLAYER_CHAT_ACTIVE},
		{0x1AC8F4AD40E22127, &_CLOSE_MULTIPLAYER_CHAT},
		{0x7C226D5346D4D10A, &_0x7C226D5346D4D10A},
		{0xF47E567B3630DD12, &_OVERRIDE_MULTIPLAYER_CHAT_COLOUR},
		{0x1DB21A44B09E8BA3, &_SET_TEXT_CHAT_UNK},
		{0xCEF214315D276FD1, &FLAG_PLAYER_CONTEXT_IN_TOURNAMENT},
		{0xD30C50DF888D58B5, &SET_PED_HAS_AI_BLIP},
		{0xB13DCB4C6FAAD238, &_SET_PED_HAS_AI_BLIP_WITH_COLOR},
		{0x15B8ECF844EE67ED, &DOES_PED_HAVE_AI_BLIP},
		{0xE52B8E7F85D39A08, &SET_PED_AI_BLIP_GANG_ID},
		{0x3EED80DFF7325CAA, &SET_PED_AI_BLIP_HAS_CONE},
		{0x0C4BBF625CA98C4E, &SET_PED_AI_BLIP_FORCED_ON},
		{0x97C65887D4B37FA9, &SET_PED_AI_BLIP_NOTICE_RANGE},
		{0xFCFACD0DB9D7A57D, &_SET_PED_AI_BLIP_SPRITE},
		{0x7CD934010E115C2C, &_GET_AI_BLIP_2},
		{0x56176892826A4FE8, &_GET_AI_BLIP},
		{0xA277800A9EAE340E, &_HAS_DIRECTOR_MODE_BEEN_TRIGGERED},
		{0x2632482FD6B9AB87, &_SET_DIRECTOR_MODE_CLEAR_TRIGGERED_FLAG},
		{0x808519373FD336A3, &_SET_PLAYER_IS_IN_DIRECTOR_MODE},
		{0x04655F9D075D0AE5, &_0x04655F9D075D0AE5},
		{0xF49B58631D9E22D9, &_GET_INTERIOR_HEADING},
		{0x252BDC06B73FA6EA, &_GET_INTERIOR_INFO},
		{0xE4A84ABF135EF91A, &GET_INTERIOR_GROUP_ID},
		{0x9E3B3E6D66F6E22F, &GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS},
		{0xBC72B5D7A1CBD54D, &IS_INTERIOR_SCENE},
		{0x26B0E73D7EAAF4D3, &IS_VALID_INTERIOR},
		{0xB365FC0C4E27FFA7, &CLEAR_ROOM_FOR_ENTITY},
		{0x52923C4710DD9907, &FORCE_ROOM_FOR_ENTITY},
		{0x47C2A06D4F5F424B, &GET_ROOM_KEY_FROM_ENTITY},
		{0x399685DB942336BC, &GET_KEY_FOR_ENTITY_IN_ROOM},
		{0x2107BA504071A6BB, &GET_INTERIOR_FROM_ENTITY},
		{0x82EBB79E258FA2B7, &_0x82EBB79E258FA2B7},
		{0x38C1CB1CB119A016, &_0x38C1CB1CB119A016},
		{0x920D853F3E17F1DA, &FORCE_ROOM_FOR_GAME_VIEWPORT},
		{0xAF348AFCB575A441, &_0xAF348AFCB575A441},
		{0x405DC2AEF6AF95B9, &_0x405DC2AEF6AF95B9},
		{0xA6575914D2A0B450, &GET_ROOM_KEY_FOR_GAME_VIEWPORT},
		{0x23B59D8912F94246, &CLEAR_ROOM_FOR_GAME_VIEWPORT},
		{0xE7D267EC6CA966C3, &_0xE7D267EC6CA966C3},
		{0xB0F7F8663821D9C3, &GET_INTERIOR_AT_COORDS},
		{0x3F6167F351168730, &ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME},
		{0x2CA429C029CCF247, &PIN_INTERIOR_IN_MEMORY},
		{0x261CCE7EED010641, &UNPIN_INTERIOR},
		{0x6726BDCCC1932F0E, &IS_INTERIOR_READY},
		{0x4C2330E61D3DEB56, &_0x4C2330E61D3DEB56},
		{0x05B7A89BD78797FC, &GET_INTERIOR_AT_COORDS_WITH_TYPE},
		{0xF0F77ADB9F67E79D, &GET_INTERIOR_AT_COORDS_WITH_TYPEHASH},
		{0x483ACA1176CA93F1, &_0x483ACA1176CA93F1},
		{0xEEA5AC2EDA7C33E8, &_ARE_COORDS_COLLIDING_WITH_EXTERIOR},
		{0xEC4CF9FCB29A4424, &GET_INTERIOR_FROM_COLLISION},
		{0x7ECDF98587E92DEC, &_0x7ECDF98587E92DEC},
		{0x55E86AF2712B36A1, &ACTIVATE_INTERIOR_ENTITY_SET},
		{0x420BD37289EEE162, &DEACTIVATE_INTERIOR_ENTITY_SET},
		{0x35F7DD45E8C0A16D, &IS_INTERIOR_ENTITY_SET_ACTIVE},
		{0xC1F1920BAF281317, &_SET_INTERIOR_ENTITY_SET_COLOR},
		{0x41F37C3427C75AE0, &REFRESH_INTERIOR},
		{0xA97F257D0151A6AB, &ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME},
		{0x50C375537449F369, &_ENABLE_SCRIPT_CULL_MODEL_THIS_FRAME},
		{0x6170941419D7D8EC, &DISABLE_INTERIOR},
		{0xBC5115A5A939DD15, &IS_INTERIOR_DISABLED},
		{0xD9175F941610DB54, &CAP_INTERIOR},
		{0x92BAC8ACF88CEC26, &IS_INTERIOR_CAPPED},
		{0x9E6542F0CE8E70A3, &_0x9E6542F0CE8E70A3},
		{0x7241CCB7D020DB69, &_0x7241CCB7D020DB69},
		{0x35AD299F50D91B24, &CREATE_ITEMSET},
		{0xDE18220B1C183EDA, &DESTROY_ITEMSET},
		{0xB1B1EA596344DFAB, &IS_ITEMSET_VALID},
		{0xE3945201F14637DD, &ADD_TO_ITEMSET},
		{0x25E68244B0177686, &REMOVE_FROM_ITEMSET},
		{0xD9127E83ABF7C631, &GET_ITEMSET_SIZE},
		{0x7A197E2521EE2BAB, &GET_INDEXED_ITEM_IN_ITEMSET},
		{0x2D0FC594D1E9C107, &IS_IN_ITEMSET},
		{0x41BC0D722FC04221, &CLEAN_ITEMSET},
		{0xF2CA003F167E21D2, &_0xF2CA003F167E21D2},
		{0xEF7D17BC6C85264C, &_LOADINGSCREEN_GET_LOAD_FREEMODE},
		{0xB0C56BD3D808D863, &_LOADINGSCREEN_SET_LOAD_FREEMODE},
		{0x8AA464D4E0F6ACCD, &_LOADINGSCREEN_GET_LOAD_FREEMODE_WITH_EVENT_NAME},
		{0xFC309E94546FCDB5, &_LOADINGSCREEN_SET_LOAD_FREEMODE_WITH_EVENT_NAME},
		{0xC6DC823253FBB366, &_LOADINGSCREEN_IS_LOADING_FREEMODE},
		{0xC7E7181C09F33B69, &_LOADINGSCREEN_SET_IS_LOADING_FREEMODE},
		{0xFA1E0E893D915215, &_0xFA1E0E893D915215},
		{0x497420E022796B3F, &_LOCALIZATION_GET_SYSTEM_LANGUAGE},
		{0x2BDD44CC428A7EAE, &GET_CURRENT_LANGUAGE},
		{0xA8AE43AEC1A61314, &_LOCALIZATION_GET_USER_LANGUAGE},
		{0x8B3CA62B1EF19B62, &GET_ALLOCATED_STACK_SIZE},
		{0xFEAD16FC8F9DFC0F, &GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE},
		{0x444D98F98C11F3EC, &SET_RANDOM_SEED},
		{0x1D408577D440E81E, &SET_TIME_SCALE},
		{0xC4301E5121A0ED73, &SET_MISSION_FLAG},
		{0xA33CDCCDA663159E, &GET_MISSION_FLAG},
		{0x971927086CFD2158, &SET_RANDOM_EVENT_FLAG},
		{0xD2D57F1D764117B1, &GET_RANDOM_EVENT_FLAG},
		{0x24DA7D7667FD7B09, &char*},
		{0x4DCDF92BF64236CD, &_0x4DCDF92BF64236CD},
		{0x31125FD509D9043F, &_0x31125FD509D9043F},
		{0xEBD3205A207939ED, &_0xEBD3205A207939ED},
		{0x97E7E2C04245115B, &_0x97E7E2C04245115B},
		{0xEB078CA2B5E82ADD, &_0xEB078CA2B5E82ADD},
		{0x703CC7F60CBB2B57, &_0x703CC7F60CBB2B57},
		{0x8951EB9C6906D3C8, &_0x8951EB9C6906D3C8},
		{0xBA4B8D83BDC75551, &_0xBA4B8D83BDC75551},
		{0xE8B9C0EC9E183F35, &_HAS_RESUMED_FROM_SUSPEND},
		{0x65D2EBB47E1CEC21, &_0x65D2EBB47E1CEC21},
		{0x6F2135B6129620C1, &_0x6F2135B6129620C1},
		{0x8D74E26F54B4E5C3, &_0x8D74E26F54B4E5C3},
		{0xB335F761606DB47C, &_GET_BASE_ELEMENT_METADATA},
		{0x564B884A05EC45A3, &GET_PREV_WEATHER_TYPE_HASH_NAME},
		{0x711327CD09C8F162, &GET_NEXT_WEATHER_TYPE_HASH_NAME},
		{0x44F28F86433B10A9, &IS_PREV_WEATHER_TYPE},
		{0x2FAA3A30BEC0F25D, &IS_NEXT_WEATHER_TYPE},
		{0x704983DF373B198F, &SET_WEATHER_TYPE_PERSIST},
		{0xED712CA327900C8A, &SET_WEATHER_TYPE_NOW_PERSIST},
		{0x29B487C359E19889, &SET_WEATHER_TYPE_NOW},
		{0xFB5045B7C42B75BF, &SET_WEATHER_TYPE_OVERTIME_PERSIST},
		{0x8B05F884CF7E8020, &SET_RANDOM_WEATHER_TYPE},
		{0xCCC39339BEF76CF5, &CLEAR_WEATHER_TYPE_PERSIST},
		{0x0CF97F497FE7D048, &_0x0CF97F497FE7D048},
		{0xF3BBE884A14BB413, &_GET_WEATHER_TYPE_TRANSITION},
		{0x578C752848ECFA0C, &_SET_WEATHER_TYPE_TRANSITION},
		{0xA43D5C6FE51ADBEF, &SET_OVERRIDE_WEATHER},
		{0x338D2E3477711050, &CLEAR_OVERRIDE_WEATHER},
		{0xB8F87EAD7533B176, &_0xB8F87EAD7533B176},
		{0xC3EAD29AB273ECE8, &_0xC3EAD29AB273ECE8},
		{0xA7A1127490312C36, &_0xA7A1127490312C36},
		{0x31727907B2C43C55, &_0x31727907B2C43C55},
		{0x405591EC8FD9096D, &_0x405591EC8FD9096D},
		{0xF751B16FB32ABC1D, &_0xF751B16FB32ABC1D},
		{0xB3E6360DDE733E82, &_0xB3E6360DDE733E82},
		{0x7C9C0B1EEB1F9072, &_0x7C9C0B1EEB1F9072},
		{0x6216B116083A7CB4, &_0x6216B116083A7CB4},
		{0x9F5E6BB6B34540DA, &_0x9F5E6BB6B34540DA},
		{0xB9854DFDE0D833D6, &_0xB9854DFDE0D833D6},
		{0xC54A08C85AE4D410, &_0xC54A08C85AE4D410},
		{0xA8434F1DFF41D6E7, &_0xA8434F1DFF41D6E7},
		{0xC3C221ADDDE31A11, &_0xC3C221ADDDE31A11},
		{0xAC3A74E8384A9919, &SET_WIND},
		{0xEE09ECEDBABE47FC, &SET_WIND_SPEED},
		{0xA8CF1CC0AFCD3F12, &GET_WIND_SPEED},
		{0xEB0F4468467B4528, &SET_WIND_DIRECTION},
		{0x1F400FEF721170DA, &GET_WIND_DIRECTION},
		{0x643E26EA6E024D92, &_SET_RAIN_FX_INTENSITY},
		{0x96695E368AD855F3, &GET_RAIN_LEVEL},
		{0xC5868A966E5BE3AE, &GET_SNOW_LEVEL},
		{0xF6062E089251C898, &FORCE_LIGHTNING_FLASH},
		{0x02DEAAC8F8EA7FE7, &_0x02DEAAC8F8EA7FE7},
		{0x11B56FBBF7224868, &PRELOAD_CLOUD_HAT},
		{0xFC4842A34657BFCB, &LOAD_CLOUD_HAT},
		{0xA74802FB8D0B7814, &UNLOAD_CLOUD_HAT},
		{0x957E790EA1727B64, &_CLEAR_CLOUD_HAT},
		{0xF36199225D6D8C86, &_SET_CLOUD_HAT_OPACITY},
		{0x20AC25E781AE4A84, &_GET_CLOUD_HAT_OPACITY},
		{0x9CD27B0045628463, &GET_GAME_TIMER},
		{0x15C40837039FFAF7, &GET_FRAME_TIME},
		{0xE599A503B3837E1B, &_GET_BENCHMARK_TIME},
		{0xFC8202EFC642E6F2, &GET_FRAME_COUNT},
		{0x313CE5879CEB6FCD, &GET_RANDOM_FLOAT_IN_RANGE},
		{0xD53343AA4FB7DD28, &GET_RANDOM_INT_IN_RANGE},
		{0xF2D49816A804D134, &_GET_RANDOM_INT_IN_RANGE_2},
		{0xC906A7DAB05C8D2B, &GET_GROUND_Z_FOR_3D_COORD},
		{0x8BDC7BFC57A81E76, &GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD},
		{0x9E82F0F362881B29, &_GET_GROUND_Z_FOR_3D_COORD_2},
		{0xC843060B5765DCE7, &ASIN},
		{0x1D08B970013C34B6, &ACOS},
		{0x632106CC96E82E91, &TAN},
		{0xA9D1795CD5043663, &ATAN},
		{0x8927CBF9D22261A4, &ATAN2},
		{0xF1B760881820C952, &GET_DISTANCE_BETWEEN_COORDS},
		{0x186FC4BE848E1C92, &GET_ANGLE_BETWEEN_2D_VECTORS},
		{0x2FFB6B224F4B2926, &GET_HEADING_FROM_VECTOR_2D},
		{0x7F8F6405F4777AF6, &_0x7F8F6405F4777AF6},
		{0x21C235BC64831E5A, &_0x21C235BC64831E5A},
		{0xF56DFB7B61BE7276, &_0xF56DFB7B61BE7276},
		{0x933D6A9EEC1BACD0, &SET_BIT},
		{0xE80492A9AC099A93, &CLEAR_BIT},
		{0xD24D37CC275948CC, &GET_HASH_KEY},
		{0xF2F6A2FA49278625, &SLERP_NEAR_QUATERNION},
		{0xA61B4DF533DCB56E, &IS_AREA_OCCUPIED},
		{0xADCDE75E1C60F32D, &IS_POSITION_OCCUPIED},
		{0xE54E209C35FFA18D, &IS_POINT_OBSCURED_BY_A_MISSION_ENTITY},
		{0xA56F01F3765B93A0, &CLEAR_AREA},
		{0x957838AAF91BD12D, &_CLEAR_AREA_OF_EVERYTHING},
		{0x01C7B9B38428AEB6, &CLEAR_AREA_OF_VEHICLES},
		{0x11DB3500F042A8AA, &CLEAR_ANGLED_AREA_OF_VEHICLES},
		{0xDD9B9B385AAC7F5B, &CLEAR_AREA_OF_OBJECTS},
		{0xBE31FD6CE464AC59, &CLEAR_AREA_OF_PEDS},
		{0x04F8FC8FCF58F88D, &CLEAR_AREA_OF_COPS},
		{0x0A1CB9094635D1A6, &CLEAR_AREA_OF_PROJECTILES},
		{0x7EC6F9A478A6A512, &_0x7EC6F9A478A6A512},
		{0xC9BF75D28165FF77, &SET_SAVE_MENU_ACTIVE},
		{0x397BAA01068BAA96, &_0x397BAA01068BAA96},
		{0xB938B7E6D3C0620C, &SET_CREDITS_ACTIVE},
		{0xB51B9AB9EF81868C, &_0xB51B9AB9EF81868C},
		{0x075F1D57402C93BA, &HAVE_CREDITS_REACHED_END},
		{0x9DC711BC69C548DF, &TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME},
		{0x9243BAC96D64C050, &NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME},
		{0x1F464EF988465A81, &ADD_HOSPITAL_RESTART},
		{0xC8535819C450EBA8, &DISABLE_HOSPITAL_RESTART},
		{0x452736765B31FC4B, &ADD_POLICE_RESTART},
		{0x23285DED6EBD7EA3, &DISABLE_POLICE_RESTART},
		{0x706B5EDCAA7FA663, &_SET_RESTART_CUSTOM_POSITION},
		{0xA2716D40842EAF79, &_CLEAR_RESTART_CUSTOM_POSITION},
		{0x2C2B3493FBF51C71, &PAUSE_DEATH_ARREST_RESTART},
		{0x21FFB63D8C615361, &IGNORE_NEXT_RESTART},
		{0x4A18E01DF2C87B86, &SET_FADE_OUT_AFTER_DEATH},
		{0x1E0B4DC0D990A4E7, &SET_FADE_OUT_AFTER_ARREST},
		{0xDA66D2796BA33F12, &SET_FADE_IN_AFTER_DEATH_ARREST},
		{0xF3D78F59DFE18D79, &SET_FADE_IN_AFTER_LOAD},
		{0xC0714D0A7EEECA54, &REGISTER_SAVE_HOUSE},
		{0x4F548CABEAE553BC, &SET_SAVE_HOUSE},
		{0x1162EA8AE9D24EEA, &OVERRIDE_SAVE_HOUSE},
		{0xA4A0065E39C9F25C, &_0xA4A0065E39C9F25C},
		{0x50EEAAD86232EE55, &DO_AUTO_SAVE},
		{0x6E04F06094C87047, &GET_IS_AUTO_SAVE_OFF},
		{0x69240733738C19A0, &IS_AUTO_SAVE_IN_PROGRESS},
		{0x2107A3773771186D, &_0x2107A3773771186D},
		{0x06462A961E94B67C, &_0x06462A961E94B67C},
		{0xE0E500246FF73D66, &BEGIN_REPLAY_STATS},
		{0x69FE6DC87BD2A5E9, &ADD_REPLAY_STAT_VALUE},
		{0xA23E821FBDF8A5F2, &END_REPLAY_STATS},
		{0xD642319C54AADEB6, &_0xD642319C54AADEB6},
		{0x5B1F2E327B6B6FE1, &_0x5B1F2E327B6B6FE1},
		{0x2B626A0150E4D449, &GET_REPLAY_STAT_MISSION_TYPE},
		{0xDC9274A7EF6B2867, &GET_REPLAY_STAT_COUNT},
		{0x8098C8D6597AAE18, &GET_REPLAY_STAT_AT_INDEX},
		{0x1B1AB132A16FDA55, &CLEAR_REPLAY_STATS},
		{0x72DE52178C291CB5, &_0x72DE52178C291CB5},
		{0x44A0BDC559B35F6E, &_0x44A0BDC559B35F6E},
		{0xEB2104E905C6F2E9, &_0xEB2104E905C6F2E9},
		{0x2B5E102E4A42F2BF, &_0x2B5E102E4A42F2BF},
		{0x8A75CE2956274ADD, &IS_MEMORY_CARD_IN_USE},
		{0x867654CBC7606F2C, &SHOOT_SINGLE_BULLET_BETWEEN_COORDS},
		{0xE3A7742E0B7A2F8B, &SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY},
		{0xBFE5756E7407064A, &SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW},
		{0x03E8D3D5F549087A, &GET_MODEL_DIMENSIONS},
		{0x1454F2448DE30163, &SET_FAKE_WANTED_LEVEL},
		{0x4C9296CBCD1B971E, &GET_FAKE_WANTED_LEVEL},
		{0xA921AA820C25702F, &IS_BIT_SET},
		{0xF14878FC50BEC6EE, &USING_MISSION_CREATOR},
		{0xDEA36202FC3382DF, &ALLOW_MISSION_CREATOR_WARP},
		{0x19E00D7322C6F85B, &SET_MINIGAME_IN_PROGRESS},
		{0x2B4A15E44DE0F478, &IS_MINIGAME_IN_PROGRESS},
		{0x7B30F65D7B710098, &IS_THIS_A_MINIGAME_SCRIPT},
		{0x61A23B7EDA9BDA24, &IS_SNIPER_INVERTED},
		{0xD3D15555431AB793, &SHOULD_USE_METRIC_MEASUREMENTS},
		{0xC488FF2356EA7791, &GET_PROFILE_SETTING},
		{0x0C515FAB3FF9EA92, &ARE_STRINGS_EQUAL},
		{0x1E34710ECD4AB0EB, &COMPARE_STRINGS},
		{0xF0D31AD191A74F87, &ABSI},
		{0x73D57CFFDD12C355, &ABSF},
		{0xFEFCF11B01287125, &IS_SNIPER_BULLET_IN_AREA},
		{0x5270A8FBC098C3F8, &IS_PROJECTILE_IN_AREA},
		{0x2E0DC353342C4A6D, &IS_PROJECTILE_TYPE_IN_AREA},
		{0xF0BC12401061DEA0, &IS_PROJECTILE_TYPE_IN_ANGLED_AREA},
		{0x34318593248C8FB2, &_IS_PROJECTILE_TYPE_IN_RADIUS},
		{0x8D7A43EC6A5FEA45, &_GET_IS_PROJECTILE_TYPE_IN_AREA},
		{0xDFB4138EEFED7B81, &_GET_PROJECTILE_NEAR_PED_COORDS},
		{0x82FDE6A57EE4EE44, &_GET_PROJECTILE_NEAR_PED},
		{0x1A8B5F3C01E2B477, &IS_BULLET_IN_ANGLED_AREA},
		{0x3F2023999AD51C1F, &IS_BULLET_IN_AREA},
		{0xDE0F6D7450D37351, &IS_BULLET_IN_BOX},
		{0x9870ACFB89A90995, &HAS_BULLET_IMPACTED_IN_AREA},
		{0xDC8C5D7CFEAB8394, &HAS_BULLET_IMPACTED_IN_BOX},
		{0xA72BC0B675B1519E, &IS_ORBIS_VERSION},
		{0x4D982ADB1978442D, &IS_DURANGO_VERSION},
		{0xF6201B4DAF662A9D, &IS_XBOX360_VERSION},
		{0xCCA1072C29D096C2, &IS_PS3_VERSION},
		{0x48AF36444B965238, &IS_PC_VERSION},
		{0x9F1935CA1F724008, &IS_AUSSIE_VERSION},
		{0xF22B6C47C6EAB066, &IS_STRING_NULL},
		{0xCA042B6957743895, &IS_STRING_NULL_OR_EMPTY},
		{0x5A5F40FE637EB584, &STRING_TO_INT},
		{0x8EF07E15701D61ED, &SET_BITS_IN_RANGE},
		{0x53158863FCC0893A, &GET_BITS_IN_RANGE},
		{0x1A992DA297A4630C, &ADD_STUNT_JUMP},
		{0xBBE5D803A5360CBF, &ADD_STUNT_JUMP_ANGLED},
		{0xFB80AB299D2EE1BD, &_0xFB80AB299D2EE1BD},
		{0xDC518000E39DAE1F, &DELETE_STUNT_JUMP},
		{0xE369A5783B866016, &ENABLE_STUNT_JUMP_SET},
		{0xA5272EBEDD4747F6, &DISABLE_STUNT_JUMP_SET},
		{0xD79185689F8FD5DF, &SET_STUNT_JUMPS_CAN_TRIGGER},
		{0x7A3F19700A4D0525, &IS_STUNT_JUMP_IN_PROGRESS},
		{0x2272B0A1343129F4, &IS_STUNT_JUMP_MESSAGE_SHOWING},
		{0x996DD1E1E02F1008, &GET_NUM_SUCCESSFUL_STUNT_JUMPS},
		{0x6856EC3D35C81EA4, &GET_TOTAL_SUCCESSFUL_STUNT_JUMPS},
		{0xE6B7B0ACD4E4B75E, &CANCEL_STUNT_JUMP},
		{0x577D1284D6873711, &SET_GAME_PAUSED},
		{0xAA391C728106F7AF, &SET_THIS_SCRIPT_CAN_BE_PAUSED},
		{0xB98236CAAECEF897, &SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT},
		{0x071E2A839DE82D90, &_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED},
		{0x557E43C447E700A8, &_HAS_CHEAT_STRING_JUST_BEEN_ENTERED},
		{0x9BAE5AD2508DF078, &SET_INSTANCE_PRIORITY_MODE},
		{0xC5F0A8EBD3F361CE, &SET_INSTANCE_PRIORITY_HINT},
		{0x7EA2B6AF97ECA6ED, &IS_FRONTEND_FADING},
		{0x7472BB270D7B4F3E, &POPULATE_NOW},
		{0xCBAD6729F7B1F4FC, &GET_INDEX_OF_CURRENT_LEVEL},
		{0x740E14FAD5842351, &SET_GRAVITY_LEVEL},
		{0xA9575F812C6A7997, &START_SAVE_DATA},
		{0x74E20C9145FB66FD, &STOP_SAVE_DATA},
		{0xA09F896CE912481F, &_0xA09F896CE912481F},
		{0x34C9EE5986258415, &REGISTER_INT_TO_SAVE},
		{0xA735353C77334EA0, &_REGISTER_INT64_TO_SAVE},
		{0x10C2FA78D0E128A1, &REGISTER_ENUM_TO_SAVE},
		{0x7CAEC29ECB5DFEBB, &REGISTER_FLOAT_TO_SAVE},
		{0xC8F4131414C835A1, &REGISTER_BOOL_TO_SAVE},
		{0xEDB1232C5BEAE62F, &REGISTER_TEXT_LABEL_TO_SAVE},
		{0x6F7794F28C6B2535, &_REGISTER_TEXT_LABEL_TO_SAVE_2},
		{0x48F069265A0E4BEC, &_0x48F069265A0E4BEC},
		{0x8269816F6CFD40F8, &_0x8269816F6CFD40F8},
		{0xFAA457EF263E8763, &_0xFAA457EF263E8763},
		{0xBF737600CDDBEADD, &START_SAVE_STRUCT_WITH_SIZE},
		{0xEB1774DF12BB9F12, &STOP_SAVE_STRUCT},
		{0x60FE567DF1B1AF9D, &START_SAVE_ARRAY_WITH_SIZE},
		{0x04456F95153C6BE4, &STOP_SAVE_ARRAY},
		{0x213AEB2B90CBA7AC, &_COPY_MEMORY},
		{0xDC0F817884CDD856, &ENABLE_DISPATCH_SERVICE},
		{0x9B2BD3773123EA2F, &BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION},
		{0xEB4A0C2D56441717, &_GET_NUM_DISPATCHED_UNITS_FOR_PLAYER},
		{0x3F892CAF67444AE7, &CREATE_INCIDENT},
		{0x05983472F0494E60, &CREATE_INCIDENT_WITH_ENTITY},
		{0x556C1AA270D5A207, &DELETE_INCIDENT},
		{0xC8BC6461E629BEAA, &IS_INCIDENT_VALID},
		{0xB08B85D860E7BA3C, &SET_INCIDENT_REQUESTED_UNITS},
		{0xD261BA3E7E998072, &_SET_INCIDENT_UNK},
		{0x6874E2190B0C1972, &FIND_SPAWN_POINT_IN_DIRECTION},
		{0x67F6413D3220E18D, &ADD_POP_MULTIPLIER_AREA},
		{0x1327E2FE9746BAEE, &DOES_POP_MULTIPLIER_AREA_EXIST},
		{0xB129E447A2EDA4BF, &REMOVE_POP_MULTIPLIER_AREA},
		{0x1312F4B242609CE3, &_IS_POP_MULTIPLIER_AREA_UNK},
		{0x32C7A7E8C43A1F80, &ADD_POP_MULTIPLIER_SPHERE},
		{0x171BAFB3C60389F4, &DOES_POP_MULTIPLIER_SPHERE_EXIST},
		{0xE6869BECDD8F2403, &REMOVE_POP_MULTIPLIER_SPHERE},
		{0x28A04B411933F8A6, &ENABLE_TENNIS_MODE},
		{0x5D5479D115290C3F, &IS_TENNIS_MODE},
		{0xE266ED23311F24D4, &PLAY_TENNIS_SWING_ANIM},
		{0x17DF68D720AA77F8, &GET_TENNIS_SWING_ANIM_COMPLETE},
		{0x19BFED045C647C49, &_0x19BFED045C647C49},
		{0xE95B0C7D5BA3B96B, &_0xE95B0C7D5BA3B96B},
		{0x8FA9C42FC5D7C64B, &PLAY_TENNIS_DIVE_ANIM},
		{0x54F157E0336A3822, &_0x54F157E0336A3822},
		{0xD10F442036302D50, &SET_DISPATCH_SPAWN_LOCATION},
		{0x77A84429DD9F0A15, &RESET_DISPATCH_IDEAL_SPAWN_DISTANCE},
		{0x6FE601A64180D423, &SET_DISPATCH_IDEAL_SPAWN_DISTANCE},
		{0xEB2DB0CAD13154B3, &RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS},
		{0x44F7CBC1BEB3327D, &SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS},
		{0x48838ED9937A15D1, &SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER},
		{0x918C7B2D2FF3928B, &_ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA},
		{0x2D4259F1FEB81DA9, &_ADD_DISPATCH_SPAWN_BLOCKING_AREA},
		{0x264AC28B01B353A5, &REMOVE_DISPATCH_SPAWN_BLOCKING_AREA},
		{0xAC7BFD5C1D83EA75, &RESET_DISPATCH_SPAWN_BLOCKING_AREAS},
		{0xD9F692D349249528, &_0xD9F692D349249528},
		{0xE532EC1A63231B4F, &_0xE532EC1A63231B4F},
		{0xB8721407EE9C3FF6, &_ADD_TACTICAL_ANALYSIS_POINT},
		{0xB3CD58CCA6CDA852, &_CLEAR_TACTICAL_ANALYSIS_POINTS},
		{0x2587A48BC88DFADF, &_0x2587A48BC88DFADF},
		{0xCA78CFA0366592FE, &DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING},
		{0x00DC833F2568DBF6, &DISPLAY_ONSCREEN_KEYBOARD},
		{0x0CF2B696BBF945AE, &UPDATE_ONSCREEN_KEYBOARD},
		{0x8362B09B91893647, &char*},
		{0x58A39BE597CE99CD, &_CANCEL_ONSCREEN_KEYBOARD},
		{0x3ED1438C1F5C6612, &_0x3ED1438C1F5C6612},
		{0xA6A12939F16D85BE, &_REMOVE_STEALTH_KILL},
		{0x1EAE0A6E978894A2, &_0x1EAE0A6E978894A2},
		{0xA66C71C98D5F2CFB, &SET_EXPLOSIVE_AMMO_THIS_FRAME},
		{0x11879CDD803D30F4, &SET_FIRE_AMMO_THIS_FRAME},
		{0xFF1BED81BFDC0FE0, &SET_EXPLOSIVE_MELEE_THIS_FRAME},
		{0x57FFF03E423A4C0B, &SET_SUPER_JUMP_THIS_FRAME},
		{0x438822C279B73B93, &_0x438822C279B73B93},
		{0xA1183BCFEE0F93D1, &_0xA1183BCFEE0F93D1},
		{0x6FDDF453C0C756EC, &_0x6FDDF453C0C756EC},
		{0xFB00CA71DA386228, &_0xFB00CA71DA386228},
		{0x5AA3BEFA29F03AD4, &ARE_PROFILE_SETTINGS_VALID},
		{0xE3D969D2785FFB5E, &_0xE3D969D2785FFB5E},
		{0xC0AA53F866B3134D, &_RESET_LOCALPLAYER_STATE},
		{0x0A60017F841A54F2, &_0x0A60017F841A54F2},
		{0x1FF6BF9A63E5757F, &_0x1FF6BF9A63E5757F},
		{0x1BB299305C3E8C13, &_0x1BB299305C3E8C13},
		{0x8EF5573A1F801A5C, &_0x8EF5573A1F801A5C},
		{0x92790862E36C2ADA, &_START_BENCHMARK_RECORDING},
		{0xC7DB36C24634F52B, &_STOP_BENCHMARK_RECORDING},
		{0x437138B6A830166A, &_RESET_BENCHMARK_RECORDING},
		{0x37DEB0AA183FB6D8, &_SAVE_BENCHMARK_RECORDING},
		{0xEA2F2061875EED90, &_UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE},
		{0x3BBBD13E5041A79E, &_LANDING_MENU_IS_ACTIVE},
		{0xA049A5BE0F04F2F8, &_IS_COMMAND_LINE_BENCHMARK_VALUE_SET},
		{0x4750FC27570311EC, &_GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE},
		{0x1B2366C3F2A5C8DF, &_GET_BENCHMARK_PASS_FROM_COMMAND_LINE},
		{0xE574A662ACAEFBB1, &_RESTART_GAME},
		{0xEB6891F03362FB12, &_FORCE_SOCIAL_CLUB_UPDATE},
		{0x14832BF2ABA53FC5, &_HAS_ASYNC_INSTALL_FINISHED},
		{0xC79AE21974B01FB2, &_CLEANUP_ASYNC_INSTALL},
		{0x684A41975F077262, &_IS_IN_POWER_SAVING_MODE},
		{0xABB2FA71C83A1B72, &_GET_POWER_SAVING_MODE_DURATION},
		{0x4EBB7E87AA0DBED4, &_SET_PLAYER_IS_IN_ANIMAL_FORM},
		{0x9689123E3F213AA5, &GET_IS_PLAYER_IN_ANIMAL_FORM},
		{0x9D8D44ADBBA61EF2, &_SET_PLAYER_ROCKSTAR_EDITOR_DISABLED},
		{0x23227DF0B2115469, &_0x23227DF0B2115469},
		{0xD10282B6E3751BA0, &_0xD10282B6E3751BA0},
		{0x693478ACBD7F18E7, &_0x693478ACBD7F18E7},
		{0xA4E8E696C532FBC7, &CREATE_MOBILE_PHONE},
		{0x3BC861DF703E5097, &DESTROY_MOBILE_PHONE},
		{0xCBDD322A73D6D932, &SET_MOBILE_PHONE_SCALE},
		{0xBB779C0CA917E865, &SET_MOBILE_PHONE_ROTATION},
		{0x1CEFB61F193070AE, &GET_MOBILE_PHONE_ROTATION},
		{0x693A5C6D6734085B, &SET_MOBILE_PHONE_POSITION},
		{0x584FDFDA48805B86, &GET_MOBILE_PHONE_POSITION},
		{0xF511F759238A5122, &SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN},
		{0xC4E2813898C97A4B, &CAN_PHONE_BE_SEEN_ON_SCREEN},
		{0x375A706A5C2FD084, &_SET_MOBILE_PHONE_UNK},
		{0x95C9E72F3D7DEC9B, &_CELL_CAM_MOVE_FINGER},
		{0x44E44169EF70138E, &_CELL_CAM_SET_LEAN},
		{0xFDE8F069C542D126, &CELL_CAM_ACTIVATE},
		{0x015C49A93E3E086E, &_CELL_CAM_DISABLE_THIS_FRAME},
		{0xA2CCBE62CD4C91A4, &_0xA2CCBE62CD4C91A4},
		{0x1B0B4AEED5B9B41C, &_0x1B0B4AEED5B9B41C},
		{0x53F4892D18EC90A4, &_0x53F4892D18EC90A4},
		{0x3117D84EFA60F77B, &_0x3117D84EFA60F77B},
		{0x15E69E2802C24B8D, &_0x15E69E2802C24B8D},
		{0xAC2890471901861C, &_0xAC2890471901861C},
		{0xD6ADE981781FCA09, &_0xD6ADE981781FCA09},
		{0xF1E22DC13F5EEBAD, &_0xF1E22DC13F5EEBAD},
		{0x466DA42C89865553, &_0x466DA42C89865553},
		{0x439E9BC95B7E7FBE, &CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK},
		{0xB4A53E05F68B6FA1, &GET_MOBILE_PHONE_RENDER_ID},
		{0x3DA5ECD1A56CBA6D, &NETWORK_INITIALIZE_CASH},
		{0x05A50AF38947EB8D, &NETWORK_DELETE_CHARACTER},
		{0x821418C727FCACD7, &_NETWORK_MANUAL_DELETE_CHARACTER},
		{0xFB2456B2040A6A67, &_NETWORK_GET_IS_HIGH_EARNER},
		{0xA921DED15FDF28F5, &NETWORK_CLEAR_CHARACTER_WALLET},
		{0xFB18DF9CB95E0105, &NETWORK_GIVE_PLAYER_JOBSHARE_CASH},
		{0x56A3B51944C50598, &NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH},
		{0x1C2473301B1C66BA, &NETWORK_CAN_SHARE_JOB_CASH},
		{0xF9C812CD7C46E817, &NETWORK_REFUND_CASH},
		{0x18B7AE224B087E26, &_NETWORK_DEDUCT_CASH},
		{0x81404F3DC124FE5B, &NETWORK_MONEY_CAN_BET},
		{0x3A54E33660DED67F, &NETWORK_CAN_BET},
		{0xC62DD18375C99130, &NETWORK_CAN_BUY_LOTTERY_TICKET},
		{0x158C16F5E4CF41F8, &_NETWORK_CASINO_CAN_USE_GAMBLING_TYPE},
		{0x394DCDB9E836B7A9, &_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC},
		{0xF62F6D9528358FE4, &_NETWORK_CASINO_CAN_GAMBLE},
		{0x8968D4D8C6C40C11, &_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2},
		{0x3BD101471C7F9EEC, &_NETWORK_CASINO_PURCHASE_CHIPS},
		{0xED44897CB336F480, &_NETWORK_CASINO_SELL_CHIPS},
		{0xCD0F5B5D932AE473, &_0xCD0F5B5D932AE473},
		{0x9777734DAD16992F, &_CAN_PAY_GOON},
		{0xEFE9C9A1651B81E6, &_NETWORK_EARN_FROM_CASHING_OUT},
		{0xED1517D3AF17C698, &NETWORK_EARN_FROM_PICKUP},
		{0xA03D4ACE0A3284CE, &_NETWORK_EARN_FROM_GANG_PICKUP},
		{0xFA700D8A9905F78A, &_NETWORK_EARN_FROM_ASSASSINATE_TARGET_KILLED},
		{0xF514621E8EA463D0, &_NETWORK_EARN_FROM_ARMOUR_TRUCK},
		{0xB1CC1B9EC3007A2A, &NETWORK_EARN_FROM_CRATE_DROP},
		{0x827A5BA1A44ACA6D, &NETWORK_EARN_FROM_BETTING},
		{0xB2CC4836834E8A98, &NETWORK_EARN_FROM_JOB},
		{0xDEBBF584665411D0, &_NETWORK_EARN_FROM_JOB_X2},
		{0xC8407624CEF2354B, &_NETWORK_EARN_FROM_PREMIUM_JOB},
		{0x61326EE6DF15B0CA, &NETWORK_EARN_FROM_BEND_JOB},
		{0x2B171E6B2F64D8DF, &NETWORK_EARN_FROM_CHALLENGE_WIN},
		{0x131BB5DA15453ACF, &NETWORK_EARN_FROM_BOUNTY},
		{0xF92A014A634442D6, &NETWORK_EARN_FROM_IMPORT_EXPORT},
		{0x45B8154E077D9E4D, &NETWORK_EARN_FROM_HOLDUPS},
		{0x849648349D77F5C5, &NETWORK_EARN_FROM_PROPERTY},
		{0x515B4A22E4D3C6D7, &NETWORK_EARN_FROM_AI_TARGET_KILL},
		{0x4337511FA8221D36, &NETWORK_EARN_FROM_NOT_BADSPORT},
		{0x02CE1D6AC0FC73EA, &NETWORK_EARN_FROM_ROCKSTAR},
		{0xB539BD8A4C1EECF8, &NETWORK_EARN_FROM_VEHICLE},
		{0x3F4D00167E41E0AD, &NETWORK_EARN_FROM_PERSONAL_VEHICLE},
		{0x6EA318C91C1A8786, &NETWORK_EARN_FROM_DAILY_OBJECTIVES},
		{0xFB6DB092FBAE29E6, &NETWORK_EARN_FROM_AMBIENT_JOB},
		{0xD20D79671A598594, &_0xD20D79671A598594},
		{0x6816FB4416760775, &NETWORK_EARN_FROM_JOB_BONUS},
		{0x9D4FDBB035229669, &_0x9D4FDBB035229669},
		{0x11B0A20C493F7E36, &_0x11B0A20C493F7E36},
		{0xCDA1C62BE2777802, &_0xCDA1C62BE2777802},
		{0x08B0CA7A6AB3AC32, &_0x08B0CA7A6AB3AC32},
		{0x0CB1BE0633C024A8, &_0x0CB1BE0633C024A8},
		{0x3E4ADAFF1830F146, &_NETWORK_EARN_FROM_WAREHOUSE},
		{0xECA658CE2A4E5A72, &_NETWORK_EARN_FROM_CONTRABAND},
		{0x84C0116D012E8FC2, &_0x84C0116D012E8FC2},
		{0x6B7E4FB50D5F3D65, &_0x6B7E4FB50D5F3D65},
		{0x31BA138F6304FB9F, &_0x31BA138F6304FB9F},
		{0x55A1E095DB052FA5, &_0x55A1E095DB052FA5},
		{0x8586789730B10CAF, &_NETWORK_EARN_FROM_BUSINESS_PRODUCT},
		{0xEDEAD9A91EC768B3, &_NETWORK_EARN_FROM_VEHICLE_EXPORT},
		{0xDEE612F2D71B0308, &_NETWORK_EARN_FROM_SMUGGLING},
		{0xF6B170F9A02E9E87, &_0xF6B170F9A02E9E87},
		{0x42FCE14F50F27291, &_0x42FCE14F50F27291},
		{0xA75EAC69F59E96E7, &_0xA75EAC69F59E96E7},
		{0xC5156361F26E2212, &_0xC5156361F26E2212},
		{0x0B39CF0D53F1C883, &_0x0B39CF0D53F1C883},
		{0x1FDA0AA679C9919B, &_0x1FDA0AA679C9919B},
		{0xFFFBA1B1F7C0B6F4, &_0xFFFBA1B1F7C0B6F4},
		{0xAB3CAA6B422164DA, &NETWORK_CAN_SPEND_MONEY},
		{0x7303E27CC6532080, &_NETWORK_CAN_SPEND_MONEY_2},
		{0xF0077C797F66A355, &NETWORK_BUY_ITEM},
		{0x17C3A7D31EAE39F9, &NETWORK_SPENT_TAXI},
		{0x5FD5ED82CBBE9989, &NETWORK_PAY_EMPLOYEE_WAGE},
		{0xAFE08B35EC0C9EAE, &NETWORK_PAY_UTILITY_BILL},
		{0x9346E14F2AF74D46, &NETWORK_PAY_MATCH_ENTRY_FEE},
		{0x1C436FD11FFA692F, &NETWORK_SPENT_BETTING},
		{0xD99DB210089617FE, &_NETWORK_SPENT_WAGER},
		{0xEE99784E4467689C, &NETWORK_SPENT_IN_STRIPCLUB},
		{0xD9B067E55253E3DD, &NETWORK_BUY_HEALTHCARE},
		{0x763B4BD305338F19, &NETWORK_BUY_AIRSTRIKE},
		{0xA3EDDAA42411D3B9, &NETWORK_BUY_BACKUP_GANG},
		{0x81AA4610E3FD3A69, &NETWORK_BUY_HELI_STRIKE},
		{0xB162DC95C0A3317B, &NETWORK_SPENT_AMMO_DROP},
		{0x7B718E197453F2D9, &NETWORK_BUY_BOUNTY},
		{0x650A08A280870AF6, &NETWORK_BUY_PROPERTY},
		{0x75AF80E61248EEBD, &NETWORK_BUY_SMOKES},
		{0x7BF1D73DB2ECA492, &NETWORK_SPENT_HELI_PICKUP},
		{0x524EE43A37232C00, &NETWORK_SPENT_BOAT_PICKUP},
		{0xA6DD8458CE24012C, &NETWORK_SPENT_BULL_SHARK},
		{0x289016EC778D60E0, &NETWORK_SPENT_CASH_DROP},
		{0xE404BFB981665BF0, &NETWORK_SPENT_HIRE_MUGGER},
		{0x995A65F15F581359, &NETWORK_SPENT_ROBBED_BY_MUGGER},
		{0xE7B80E2BF9D80BD6, &NETWORK_SPENT_HIRE_MERCENARY},
		{0xE1B13771A843C4F6, &NETWORK_SPENT_BUY_WANTEDLEVEL},
		{0xA628A745E2275C5D, &NETWORK_SPENT_BUY_OFFTHERADAR},
		{0x6E176F1B18BC0637, &NETWORK_SPENT_BUY_REVEAL_PLAYERS},
		{0xEC03C719DB2F4306, &NETWORK_SPENT_CARWASH},
		{0x6B38ECB05A63A685, &NETWORK_SPENT_CINEMA},
		{0x7FE61782AD94CC09, &NETWORK_SPENT_TELESCOPE},
		{0xD9B86B9872039763, &NETWORK_SPENT_HOLDUPS},
		{0x6D3A430D1A809179, &NETWORK_SPENT_BUY_PASSIVE_MODE},
		{0xCA230C9682556CF1, &NETWORK_SPENT_BANK_INTEREST},
		{0xB21B89501CFAC79E, &NETWORK_SPENT_PROSTITUTES},
		{0x812F5488B1B2A299, &NETWORK_SPENT_ARREST_BAIL},
		{0x9FF28D88C766E3E8, &NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM},
		{0xACDE7185B374177C, &NETWORK_SPENT_CALL_PLAYER},
		{0x29B260B84947DFCC, &NETWORK_SPENT_BOUNTY},
		{0x6A445B64ED7ABEB5, &NETWORK_SPENT_FROM_ROCKSTAR},
		{0x9B5016A6433A68C5, &_0x9B5016A6433A68C5},
		{0x20194D48EAEC9A41, &char*},
		{0x7C99101F7FCE2EE5, &NETWORK_SPENT_PLAYER_HEALTHCARE},
		{0xD5BB406F4E04019F, &NETWORK_SPENT_NO_COPS},
		{0x8204DA7934DF3155, &NETWORK_SPENT_REQUEST_JOB},
		{0x9D26502BB97BFE62, &NETWORK_SPENT_REQUEST_HEIST},
		{0xD987F2489969668C, &NETWORK_BUY_LOTTERY_TICKET},
		{0x8A7B3952DD64D2B5, &NETWORK_BUY_FAIRGROUND_RIDE},
		{0x7C4FCCD2E4DEB394, &_0x7C4FCCD2E4DEB394},
		{0x28F174A67B8D0C2F, &_NETWORK_SPENT_JOB_SKIP},
		{0xFFBE02CD385356BD, &_NETWORK_SPENT_BOSS},
		{0x08A1B82B91900682, &_NETWORK_SPENT_PAY_GOON},
		{0xDBC966A01C02BCA7, &_0xDBC966A01C02BCA7},
		{0xE7DF4E0545DFB56E, &_NETWORK_SPENT_MOVE_YACHT},
		{0xFC4EE00A7B3BFB76, &_0xFC4EE00A7B3BFB76},
		{0x30FD873ECE50E9F6, &_NETWORK_BUY_CONTRABAND},
		{0x5182A339A3474510, &_NETWORK_SPENT_VIP_UTILITY_CHARGES},
		{0x112209CE0290C03A, &_0x112209CE0290C03A},
		{0xED5FD7AF10F5E262, &_0xED5FD7AF10F5E262},
		{0x0D30EB83668E63C5, &_0x0D30EB83668E63C5},
		{0xB49ECA122467D05F, &_0xB49ECA122467D05F},
		{0xE23ADC6FCB1F29AE, &_0xE23ADC6FCB1F29AE},
		{0x0FE8E1FCD2B86B33, &_0x0FE8E1FCD2B86B33},
		{0x69EF772B192614C1, &_0x69EF772B192614C1},
		{0x8E243837643D9583, &_0x8E243837643D9583},
		{0xBD0EFB25CCA8F97A, &_0xBD0EFB25CCA8F97A},
		{0xA95F667A755725DA, &_0xA95F667A755725DA},
		{0x33981D6804E62F49, &_NETWORK_SPENT_PURCHASE_WAREHOUSE},
		{0x4128464231E3CA0B, &_0x4128464231E3CA0B},
		{0x2FAB6614CE22E196, &_0x2FAB6614CE22E196},
		{0x05F04155A226FBBF, &_0x05F04155A226FBBF},
		{0xE8B0B270B6E7C76E, &_0xE8B0B270B6E7C76E},
		{0x5BCDE0F640C773D2, &_0x5BCDE0F640C773D2},
		{0x998E18CEB44487FC, &_0x998E18CEB44487FC},
		{0xFA07759E6FDDD7CF, &_0xFA07759E6FDDD7CF},
		{0x6FD97159FE3C971A, &_0x6FD97159FE3C971A},
		{0x675D19C6067CAE08, &_0x675D19C6067CAE08},
		{0xA51B086B0B2C0F7A, &_0xA51B086B0B2C0F7A},
		{0xD7CCCBA28C4ECAF0, &_0xD7CCCBA28C4ECAF0},
		{0x0035BB914316F1E3, &_0x0035BB914316F1E3},
		{0x5F456788B05FAEAC, &_0x5F456788B05FAEAC},
		{0xA75CCF58A60A5FD1, &_0xA75CCF58A60A5FD1},
		{0xB4C2EC463672474E, &_0xB4C2EC463672474E},
		{0x2AFC2D19B50797F2, &_0x2AFC2D19B50797F2},
		{0xC1952F3773BA18FE, &_NETWORK_SPENT_IMPORT_EXPORT_REPAIR},
		{0xCCB339CC970452DA, &_NETWORK_SPENT_PURCHASE_HANGAR},
		{0x615EB504B0788DAF, &_NETWORK_SPENT_UPGRADE_HANGAR},
		{0xB18AC2ECBB15CB6A, &_NETWORK_SPENT_HANGAR_UTILITY_CHARGES},
		{0xB1F1346FD57685D7, &_NETWORK_SPENT_HANGAR_STAFF_CHARGES},
		{0xAC272C0AE01B4BD8, &_NETWORK_SPENT_BUY_TRUCK},
		{0x365E877C61D6988B, &_NETWORK_SPENT_UPGRADE_TRUCK},
		{0x12D148D26538D0F9, &_NETWORK_SPENT_BUY_BUNKER},
		{0x0C82D21A77C22D49, &_NETWORK_SPENT_UPGRADE_BUNKER},
		{0x9251B6ABF2D0A5B4, &_NETWORK_EARN_FROM_SELL_BUNKER},
		{0x5D97630A8A0EF123, &_NETWORK_SPENT_BALLISTIC_EQUIPMENT},
		{0x7A5349B773584675, &_NETWORK_EARN_FROM_RDR_BONUS},
		{0x35F8DA0E8A31EF1B, &_NETWORK_EARN_FROM_WAGE_PAYMENT},
		{0x005ACA7100BD101D, &_NETWORK_EARN_FROM_WAGE_PAYMENT_BONUS},
		{0x4EA3F425C7744D21, &_NETWORK_SPENT_BUY_BASE},
		{0x3DD3F33A5D55EA6F, &_NETWORK_SPENT_UPGRADE_BASE},
		{0x0CCE73BC7A11E885, &_NETWORK_SPENT_BUY_TILTROTOR},
		{0x165E135D6DFA2907, &_NETWORK_SPENT_UPGRADE_TILTROTOR},
		{0x5BBBD92186E1F1C5, &_NETWORK_SPENT_EMPLOY_ASSASSINS},
		{0x771ADB0E7635B7BF, &_NETWORK_SPENT_GANGOPS_CANNON},
		{0xDA947AE8880D5C18, &_NETWORK_SPENT_GANGOPS_START_MISSION},
		{0x0E1E2FF3F4EC11AA, &_NETWORK_EARN_FROM_SELL_BASE},
		{0x5B669CF2299A271F, &_NETWORK_EARN_FROM_TARGET_REFUND},
		{0x2DCB19ABAB0380A8, &_NETWORK_EARN_FROM_GANGOPS_WAGES},
		{0x15BB2A5C757EB91F, &_NETWORK_EARN_FROM_GANGOPS_WAGES_BONUS},
		{0xCAC672087B4A24AB, &_NETWORK_EARN_FROM_DAR_CHALLENGE},
		{0x128A747F4A230952, &_NETWORK_EARN_FROM_DOOMSDAY_FINALE_BONUS},
		{0xA9A31475F530DFDA, &_NETWORK_EARN_FROM_GANGOPS_AWARDS},
		{0x2597A0D4A4FC2C77, &_NETWORK_EARN_FROM_GANGOPS_ELITE},
		{0x1B882107C23A9022, &_NETWORK_RIVAL_DELIVERY_COMPLETED},
		{0xA19EC0786E326E06, &_NETWORK_SPENT_GANGOPS_START_STRAND},
		{0x5ECE6FD7B4EC8D6A, &_NETWORK_SPENT_GANGOPS_TRIP_SKIP},
		{0xED26584F6BDCBBFD, &_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION},
		{0xA9160796D47A2CF8, &_NETWORK_EARN_FROM_GANGOPS_JOBS_SETUP},
		{0x1C121FC9545E0D52, &_NETWORK_EARN_FROM_GANGOPS_JOBS_FINALE},
		{0x2A7CEC72C3443BCC, &_0x2A7CEC72C3443BCC},
		{0xE0F82D68C7039158, &_0xE0F82D68C7039158},
		{0xB4DEAE67F35E2ACD, &_0xB4DEAE67F35E2ACD},
		{0xFDD8D2440DAF1590, &_NETWORK_EARN_FROM_BB_EVENT_BONUS},
		{0x2A93C46AAB1EACC9, &_0x2A93C46AAB1EACC9},
		{0x226C284C830D0CA8, &_0x226C284C830D0CA8},
		{0xE8815FE993896AD3, &_NETWORK_EARN_FROM_HACKER_TRUCK_MISSION},
		{0xED76D195E6E3BF7F, &_0xED76D195E6E3BF7F},
		{0x1DC9B749E7AE282B, &_0x1DC9B749E7AE282B},
		{0xC6E74CF8C884C880, &_0xC6E74CF8C884C880},
		{0x65482BFD0923C8A1, &_0x65482BFD0923C8A1},
		{0xE284D46FFDB82E36, &_NETWORK_SPENT_RDRHATCHET_BONUS},
		{0x876056684281655D, &_NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE},
		{0xDD21B016E4289465, &_NETWORK_SPENT_NIGHTCLUB_BAR_DRINK},
		{0x1BEA0CD93470BB1F, &_NETWORK_SPENT_BOUNTY_HUNTER_MISSION},
		{0xF6C8A544E4CF14FC, &_NETWORK_SPENT_REHIRE_DJ},
		{0x14EAEA58F93B55AF, &_NETWORK_SPENT_ARENA_JOIN_SPECTATOR},
		{0xE08256F972C7BB2C, &_NETWORK_EARN_FROM_ARENA_SKILL_LEVEL_PROGRESSION},
		{0x0F99F70C61F14619, &_NETWORK_EARN_FROM_ARENA_CAREER_PROGRESSION},
		{0xE5F5A060439C2F5D, &_NETWORK_SPENT_MAKE_IT_RAIN},
		{0x40D5DA9550B7CB46, &_NETWORK_SPENT_BUY_ARENA},
		{0x037ABB06825D7AB1, &_NETWORK_SPENT_UPGRADE_ARENA},
		{0x7049BF858601DC0F, &_NETWORK_SPENT_ARENA_SPECTATOR_BOX},
		{0x9A5BD1D0000B339C, &_NETWORK_SPENT_SPIN_THE_WHEEL_PAYMENT},
		{0x676C48776CACBB5A, &_NETWORK_EARN_FROM_SPIN_THE_WHEEL_CASH},
		{0x619496D837EFD920, &_NETWORK_SPENT_ARENA_PREMIUM},
		{0x631F1CB8FB4130AA, &_NETWORK_EARN_FROM_ARENA_WAR},
		{0x5E7AE8AABE8B7C0D, &_NETWORK_EARN_FROM_ASSASSINATE_TARGET_KILLED_2},
		{0xA82959062361B259, &_NETWORK_EARN_FROM_BB_EVENT_CARGO},
		{0xDFF49EE984E7AAE8, &_NETWORK_EARN_FROM_RC_TIME_TRIAL},
		{0x5128DF14A5BB86FC, &_NETWORK_EARN_FROM_DAILY_OBJECTIVE_EVENT},
		{0xFBBE0570EDF39D46, &_NETWORK_SPENT_CASINO_MEMBERSHIP},
		{0x34A6FC4D06C4DA0F, &_NETWORK_SPENT_BUY_CASINO},
		{0x4740D62BC1B4EBEA, &_NETWORK_SPENT_UPGRADE_CASINO},
		{0x88BF9B612B84D3C3, &_NETWORK_SPENT_CASINO_GENERIC},
		{0x0819DB99FD2FBBD8, &_NETWORK_EARN_FROM_TIME_TRIAL_WIN},
		{0x84FF63BD4966F33D, &_NETWORK_EARN_FROM_COLLECTION_ITEM},
		{0x5517F90043466049, &_NETWORK_EARN_FROM_COLLECTABLES_ACTION_FIGURES},
		{0x83AD64F53F4E9483, &_NETWORK_EARN_FROM_COMPLETE_COLLECTION},
		{0x8BCB27A057DF7B7F, &_NETWORK_EARN_FROM_SELLING_VEHICLE},
		{0x566FD402B25787DE, &_NETWORK_EARN_FROM_CASINO_MISSION_REWARD},
		{0xAC95ED552157E092, &_NETWORK_EARN_FROM_CASINO_STORY_MISSION_REWARD},
		{0x09E8F18641BE2575, &_NETWORK_EARN_FROM_CASINO_MISSION_PARTICIPATION},
		{0x973A9781A34F8DEB, &_NETWORK_EARN_FROM_CASINO_AWARD},
		{0x76EF28DA05EA395A, &NETWORK_GET_VC_BANK_BALANCE},
		{0xA40F9C2623F6A8B5, &NETWORK_GET_VC_WALLET_BALANCE},
		{0x5CBAD97E059E1B94, &NETWORK_GET_VC_BALANCE},
		{0x5D1E75F91C07DEE5, &NETWORK_GET_EVC_BALANCE},
		{0x4F54F3B6C202FB4E, &NETWORK_GET_PVC_BALANCE},
		{0xF9B10B529DCFB33B, &char*},
		{0xA6FA3979BED01B81, &char*},
		{0x700AF71AE615E6DD, &char*},
		{0xED5AB8860415BABA, &_NETWORK_GET_VC_WALLET_BALANCE_IS_NOT_LESS_THAN},
		{0xA31FD6A0865B6D14, &_NETWORK_GET_VC_BANK_BALANCE_IS_NOT_LESS_THAN},
		{0xDC18531D7019A535, &_NETWORK_GET_VC_BANK_WALLET_BALANCE_IS_NOT_LESS_THAN},
		{0x13A8DE2FD77D04F3, &NETWORK_GET_PVC_TRANSFER_BALANCE},
		{0x08E8EEADFD0DC4A0, &_0x08E8EEADFD0DC4A0},
		{0x5D17BE59D2123284, &NETWORK_CAN_RECEIVE_PLAYER_CASH},
		{0xEA560AC9EEB1E19B, &_NETWORK_GET_REMAINING_VC_DAILY_TRANSFERS_2},
		{0xF70EFA14FE091429, &WITHDRAW_VC},
		{0xE260E0BB9CD995AC, &DEPOSIT_VC},
		{0xE154B48B68EF72BC, &_0xE154B48B68EF72BC},
		{0x6FCF8DDEA146C45B, &_0x6FCF8DDEA146C45B},
		{0x7D2708796355B20B, &_NET_GAMESERVER_USE_SERVER_TRANSACTIONS},
		{0xBD4D7EAF8A30F637, &_NET_GAMESERVER_CATALOG_ITEM_EXISTS},
		{0x247F0F73A182EA0B, &_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH},
		{0xC27009422FCCA88D, &NET_GAMESERVER_GET_PRICE},
		{0x3C4487461E9B0DCB, &_NET_GAMESERVER_CATALOG_IS_READY},
		{0x2B949A1E6AEC8F6A, &_NET_GAMESERVER_IS_CATALOG_VALID},
		{0x85F6C9ABA1DE2BCF, &_0x85F6C9ABA1DE2BCF},
		{0x357B152EF96C30B6, &_0x357B152EF96C30B6},
		{0xCF38DAFBB49EDE5E, &_NET_GAMESERVER_GET_CATALOG_STATE},
		{0xE3E5A7C64CA2C6ED, &_0xE3E5A7C64CA2C6ED},
		{0x0395CB47B022E62C, &_0x0395CB47B022E62C},
		{0xA135AC892A58FC07, &NET_GAMESERVER_START_SESSION},
		{0x72EB7BA9B69BF6AB, &_0x72EB7BA9B69BF6AB},
		{0x170910093218C8B9, &_0x170910093218C8B9},
		{0xC13C38E47EA5DF31, &_0xC13C38E47EA5DF31},
		{0xB24F0944DA203D9E, &NET_GAMESERVER_IS_SESSION_VALID},
		{0x74A0FD0688F1EE45, &_0x74A0FD0688F1EE45},
		{0x2F41D51BA3BCD1F1, &NET_GAMESERVER_SESSION_APPLY_RECEIVED_DATA},
		{0x810E8431C0614BF9, &NET_GAMESERVER_IS_SESSION_REFRESH_PENDING},
		{0x35A1B3E1D1315CFA, &_NET_GAMESERVER_GET_BALANCE},
		{0x613F125BA3BD2EB9, &_0x613F125BA3BD2EB9},
		{0x897433D292B44130, &_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA},
		{0x279F08B1A4B29B7E, &NET_GAMESERVER_BASKET_START},
		{0xFA336E7F40C0A0D0, &_NET_GAMESERVER_BASKET_DELETE},
		{0xA65568121DF2EA26, &NET_GAMESERVER_BASKET_END},
		{0xF30980718C8ED876, &NET_GAMESERVER_BASKET_ADD_ITEM},
		{0x27F76CC6C55AD30E, &NET_GAMESERVER_BASKET_IS_FULL},
		{0xE1A0450ED46A7812, &NET_GAMESERVER_BASKET_APPLY_SERVER_DATA},
		{0x39BE7CEA8D9CC8E6, &NET_GAMESERVER_CHECKOUT_START},
		{0xC830417D630A50F9, &_0xC830417D630A50F9},
		{0x79EDAC677CA62F81, &_0x79EDAC677CA62F81},
		{0x3C5FD37B5499582E, &NET_GAMESERVER_BEGIN_SERVICE},
		{0xE2A99A9B524BEFFF, &NET_GAMESERVER_END_SERVICE},
		{0x51F1A8E48C3D2F6D, &_NET_GAMESERVER_DELETE_CHARACTER_SLOT},
		{0x0A6D923DFFC9BD89, &_NET_GAMESERVER_DELETE_CHARACTER_SLOT_GET_STATUS},
		{0x112CEF1615A1139F, &NET_GAMESERVER_DELETE_SET_TELEMETRY_NONCE_SEED},
		{0xD47A2C1BA117471D, &_NET_GAMESERVER_TRANSFER_BANK_TO_WALLET},
		{0xC2F7FE5309181C7D, &_NET_GAMESERVER_TRANSFER_WALLET_TO_BANK},
		{0x23789E777D14CE44, &_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS},
		{0x350AA5EBC03D3BD2, &_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2},
		{0x498C1E05CE5F7877, &_NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED},
		{0x9507D4271988E1AE, &NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED},
		{0xFCA9373EF340AC0A, &char*},
		{0x054354A99211EB96, &NETWORK_IS_SIGNED_IN},
		{0x1077788E268557C2, &NETWORK_IS_SIGNED_ONLINE},
		{0xBD545D44CCE70597, &_0xBD545D44CCE70597},
		{0xEBCAB9E5048434F4, &_0xEBCAB9E5048434F4},
		{0x74FB3E29E6D10FA9, &_0x74FB3E29E6D10FA9},
		{0x7808619F31FF22DB, &_0x7808619F31FF22DB},
		{0xA0FA4EC6A05DA44E, &_0xA0FA4EC6A05DA44E},
		{0x85443FF4C328F53B, &NETWORK_HAVE_JUST_UPLOAD_LATER},
		{0x8D11E61A4ABF49CC, &_0x8D11E61A4ABF49CC},
		{0x9A4CF4F48AD77302, &NETWORK_IS_CLOUD_AVAILABLE},
		{0x67A5589628E0CFF6, &NETWORK_HAS_SOCIAL_CLUB_ACCOUNT},
		{0xBA9775570DB788CF, &_0xBA9775570DB788CF},
		{0x8DB296B814EDDA07, &NETWORK_IS_HOST},
		{0x39EEE6E1039A3517, &_NETWORK_GET_HOST},
		{0x4237E822315D8BA9, &_0x4237E822315D8BA9},
		{0x25CB5A9F37BFD063, &NETWORK_HAVE_ONLINE_PRIVILEGES},
		{0x1353F87E89946207, &_NETWORK_HAS_AGE_RESTRICTED_PROFILE},
		{0x72D918C99BCACC54, &NETWORK_HAVE_USER_CONTENT_PRIVILEGES},
		{0xAEEF48CDF5B6CE7C, &_0xAEEF48CDF5B6CE7C},
		{0x78321BEA235FD8CD, &_0x78321BEA235FD8CD},
		{0x595F028698072DD9, &_0x595F028698072DD9},
		{0x83F28CE49FBBFFBA, &_0x83F28CE49FBBFFBA},
		{0x07EAB372C8841D99, &_0x07EAB372C8841D99},
		{0x906CA41A4B74ECA4, &_0x906CA41A4B74ECA4},
		{0x023ACAB2DC9DC4A4, &_0x023ACAB2DC9DC4A4},
		{0x76BF03FADBF154F5, &_0x76BF03FADBF154F5},
		{0x9614B71F8ADB982B, &NETWORK_GET_AGE_GROUP},
		{0x0CF6CC51AA18F0F8, &_0x0CF6CC51AA18F0F8},
		{0x64E5C4CC82847B73, &_0x64E5C4CC82847B73},
		{0x1F7BC3539F9E0224, &_0x1F7BC3539F9E0224},
		{0x5EA784D197556507, &_NETWORK_HAVE_ONLINE_PRIVILEGE_2},
		{0xA8ACB6459542A8C8, &_0xA8ACB6459542A8C8},
		{0x83FE8D7229593017, &_0x83FE8D7229593017},
		{0x53C10C8BD774F2C9, &_0x53C10C8BD774F2C9},
		{0x580CE4438479CC61, &NETWORK_CAN_BAIL},
		{0x95914459A87EBA28, &NETWORK_BAIL},
		{0x283B6062A2C01E9B, &_0x283B6062A2C01E9B},
		{0x8B4FFC790CA131EF, &_0x8B4FFC790CA131EF},
		{0xC3BFED92026A2AAD, &_NETWORK_TRANSITION_TRACK},
		{0x04918A41BC9B8157, &_0x04918A41BC9B8157},
		{0xAF50DA1A3F8B1BA4, &NETWORK_CAN_ACCESS_MULTIPLAYER},
		{0x9747292807126EDA, &NETWORK_IS_MULTIPLAYER_DISABLED},
		{0x7E782A910C362C25, &NETWORK_CAN_ENTER_MULTIPLAYER},
		{0x330ED4D05491934F, &NETWORK_SESSION_ENTER},
		{0x2CFC76E0D087C994, &NETWORK_SESSION_FRIEND_MATCHMAKING},
		{0x94BC51E9449D917F, &NETWORK_SESSION_CREW_MATCHMAKING},
		{0xBE3E347A87ACEB82, &NETWORK_SESSION_ACTIVITY_QUICKMATCH},
		{0x6F3D4ED9BEE4E61D, &NETWORK_SESSION_HOST},
		{0xED34C0C02C098BB7, &NETWORK_SESSION_HOST_CLOSED},
		{0xB9CFD27A5D578D83, &NETWORK_SESSION_HOST_FRIENDS_ONLY},
		{0xFBCFA2EA2E206890, &NETWORK_SESSION_IS_CLOSED_FRIENDS},
		{0x74732C6CA90DA2B4, &NETWORK_SESSION_IS_CLOSED_CREW},
		{0xF3929C2379B60CCE, &NETWORK_SESSION_IS_SOLO},
		{0xCEF70AA5B3F89BA1, &NETWORK_SESSION_IS_PRIVATE},
		{0xA02E59562D711006, &NETWORK_SESSION_END},
		{0xFA8904DC5F304220, &NETWORK_SESSION_KICK_PLAYER},
		{0xD6D09A6F32F49EF1, &NETWORK_SESSION_GET_KICK_VOTE},
		{0x041C7F2A6C9894E6, &_0x041C7F2A6C9894E6},
		{0x59DF79317F85A7E0, &_0x59DF79317F85A7E0},
		{0xFFE1E5B792D92B34, &_0xFFE1E5B792D92B34},
		{0x49EC8030F5015F8B, &NETWORK_SESSION_SET_MATCHMAKING_GROUP},
		{0x8B6A4DD0AF9CE215, &NETWORK_SESSION_SET_MATCHMAKING_GROUP_MAX},
		{0x56CE820830EF040B, &NETWORK_SESSION_GET_MATCHMAKING_GROUP_FREE},
		{0xCAE55F48D3D7875C, &_0xCAE55F48D3D7875C},
		{0xF49ABC20D8552257, &_0xF49ABC20D8552257},
		{0x4811BBAC21C5FCD5, &_0x4811BBAC21C5FCD5},
		{0x5539C3EBF104A53A, &_0x5539C3EBF104A53A},
		{0x702BC4D605522539, &_0x702BC4D605522539},
		{0x3F52E880AAF6C8CA, &NETWORK_SESSION_SET_MATCHMAKING_PROPERTY_ID},
		{0xF1EEA2DDA9FFA69D, &NETWORK_SESSION_SET_MATCHMAKING_MENTAL_STATE},
		{0x5ECD378EE64450AB, &_0x5ECD378EE64450AB},
		{0x59D421683D31835A, &_0x59D421683D31835A},
		{0x1153FA02A659051C, &_0x1153FA02A659051C},
		{0xC19F6C8E7865A6FF, &_NETWORK_SESSION_HOSTED},
		{0x236406F60CF216D6, &NETWORK_ADD_FOLLOWERS},
		{0x058F43EC59A8631A, &NETWORK_CLEAR_FOLLOWERS},
		{0x6D03BFBD643B2A02, &NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK},
		{0x600F8CB31C7AAB6E, &_0x600F8CB31C7AAB6E},
		{0xDFFA5BE8381C3314, &_NETWORK_GET_TARGETING_MODE},
		{0xE532D6811B3A4D2A, &_0xE532D6811B3A4D2A},
		{0xF7B2CFDE5C9F700D, &NETWORK_FIND_MATCHED_GAMERS},
		{0xDDDF64C91BFCF0AA, &NETWORK_IS_FINDING_GAMERS},
		{0xF9B83B77929D8863, &_0xF9B83B77929D8863},
		{0xA1B043EE79A916FB, &NETWORK_GET_NUM_FOUND_GAMERS},
		{0x9DCFF2AFB68B3476, &NETWORK_GET_FOUND_GAMER},
		{0x6D14CCEE1B40381A, &NETWORK_CLEAR_FOUND_GAMERS},
		{0x85A0EF54A500882C, &_NETWORK_GET_GAMER_STATUS},
		{0x2CC848A861D01493, &_0x2CC848A861D01493},
		{0x94A8394D150B013A, &_0x94A8394D150B013A},
		{0x5AE17C6B0134B7F1, &_0x5AE17C6B0134B7F1},
		{0x02A8BEC6FD9AF660, &NETWORK_GET_GAMER_STATUS_RESULT},
		{0x86E0660E4F5C956D, &NETWORK_CLEAR_GET_GAMER_STATUS},
		{0xC6F8AB8A4189CF3A, &NETWORK_SESSION_JOIN_INVITE},
		{0x2FBF47B1B36D36F9, &NETWORK_SESSION_CANCEL_INVITE},
		{0xA29177F7703B5644, &NETWORK_SESSION_FORCE_CANCEL_INVITE},
		{0xAC8C7B9B88C4A668, &NETWORK_HAS_PENDING_INVITE},
		{0xC42DD763159F3461, &_0xC42DD763159F3461},
		{0x62A0296C1BB1CEB3, &_NETWORK_ACCEPT_INVITE},
		{0x23DFB504655D0CE4, &NETWORK_SESSION_WAS_INVITED},
		{0xE57397B4A3429DD0, &NETWORK_SESSION_GET_INVITER},
		{0xD313DE83394AF134, &_0xD313DE83394AF134},
		{0xBDB6F89C729CF388, &_0xBDB6F89C729CF388},
		{0xA0682D67EF1FBA3D, &NETWORK_SUPPRESS_INVITE},
		{0x34F9E9049454A7A0, &NETWORK_BLOCK_INVITES},
		{0xCFEB8AF24FC1D0BB, &_NETWORK_BLOCK_INVITES_2},
		{0xF814FEC6A19FD6E0, &_0xF814FEC6A19FD6E0},
		{0x6B07B9CE4D390375, &_NETWORK_BLOCK_KICKED_PLAYERS},
		{0x7AC752103856FB20, &_0x7AC752103856FB20},
		{0x74698374C45701D2, &NETWORK_IS_OFFLINE_INVITE_PENDING},
		{0x140E6A44870A11CE, &_0x140E6A44870A11CE},
		{0xC74C33FCA52856D5, &NETWORK_SESSION_HOST_SINGLE_PLAYER},
		{0x3442775428FD2DAA, &NETWORK_SESSION_LEAVE_SINGLE_PLAYER},
		{0x10FAB35428CCC9D7, &NETWORK_IS_GAME_IN_PROGRESS},
		{0xD83C2B94E7508980, &NETWORK_IS_SESSION_ACTIVE},
		{0xCA97246103B63917, &NETWORK_IS_IN_SESSION},
		{0x9DE624D2FC4B603F, &NETWORK_IS_SESSION_STARTED},
		{0xF4435D66A8E2905E, &NETWORK_IS_SESSION_BUSY},
		{0x4EEBC3694E49C572, &NETWORK_CAN_SESSION_END},
		{0x271CC6AB59EBF9A5, &NETWORK_SESSION_MARK_VISIBLE},
		{0xBA416D68C631496A, &NETWORK_SESSION_IS_VISIBLE},
		{0xA73667484D7037C3, &NETWORK_SESSION_BLOCK_JOIN_REQUESTS},
		{0xB4AB419E0D86ACAE, &NETWORK_SESSION_CHANGE_SLOTS},
		{0x53AFD64C6758F2F9, &NETWORK_SESSION_GET_PRIVATE_SLOTS},
		{0x9C1556705F864230, &NETWORK_SESSION_VOICE_HOST},
		{0x6793E42BE02B575D, &NETWORK_SESSION_VOICE_LEAVE},
		{0xABD5E88B8A2D3DB2, &NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER},
		{0x7F8413B7FC2AA6B9, &NETWORK_SET_KEEP_FOCUSPOINT},
		{0x5B8ED3DB018927B1, &_0x5B8ED3DB018927B1},
		{0x855BC38818F6F684, &NETWORK_SESSION_IS_IN_VOICE_SESSION},
		{0xB5D3453C98456528, &_0xB5D3453C98456528},
		{0xEF0912DDF7C4CB4B, &NETWORK_SESSION_IS_VOICE_SESSION_BUSY},
		{0x3A214F2EC889B100, &NETWORK_SEND_TEXT_MESSAGE},
		{0x75138790B4359A74, &NETWORK_SET_ACTIVITY_SPECTATOR},
		{0x12103B9E0C9F92FB, &NETWORK_IS_ACTIVITY_SPECTATOR},
		{0x0E4F77F7B9D74D84, &_0x0E4F77F7B9D74D84},
		{0x9D277B76D1D12222, &NETWORK_SET_ACTIVITY_SPECTATOR_MAX},
		{0x73E2B500410DA5A2, &NETWORK_GET_ACTIVITY_PLAYER_NUM},
		{0x2763BBAA72A7BCB9, &NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE},
		{0xA60BB5CE242BB254, &NETWORK_HOST_TRANSITION},
		{0x71FB0EBCD4915D56, &NETWORK_DO_TRANSITION_QUICKMATCH},
		{0xA091A5E44F0072E5, &NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC},
		{0x9C4AB58491FDC98A, &NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP},
		{0xA06509A691D12BE4, &NETWORK_JOIN_GROUP_ACTIVITY},
		{0x1888694923EF4591, &_0x1888694923EF4591},
		{0xB13E88E655E5A3BC, &_0xB13E88E655E5A3BC},
		{0x6512765E3BE78C50, &NETWORK_IS_TRANSITION_CLOSED_FRIENDS},
		{0x0DBD5D7E3C5BEC3B, &NETWORK_IS_TRANSITION_CLOSED_CREW},
		{0x5DC577201723960A, &NETWORK_IS_TRANSITION_SOLO},
		{0x5A6AA44FF8E931E6, &NETWORK_IS_TRANSITION_PRIVATE},
		{0x617F49C2668E6155, &_0x617F49C2668E6155},
		{0x261E97AD7BCF3D40, &_0x261E97AD7BCF3D40},
		{0x39917E1B4CB0F911, &_0x39917E1B4CB0F911},
		{0x2CE9D95E4051AECD, &_0x2CE9D95E4051AECD},
		{0xEF26739BCD9907D5, &NETWORK_SET_TRANSITION_CREATOR_HANDLE},
		{0xFB3272229A82C759, &NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE},
		{0x4A595C32F77DFF76, &NETWORK_INVITE_GAMERS_TO_TRANSITION},
		{0xCA2C8073411ECDB6, &NETWORK_SET_GAMER_INVITED_TO_TRANSITION},
		{0xD23A1A815D21DB19, &NETWORK_LEAVE_TRANSITION},
		{0x2DCF46CB1A4F0884, &NETWORK_LAUNCH_TRANSITION},
		{0xA2E9C1AB8A92E8CD, &_0xA2E9C1AB8A92E8CD},
		{0xEAA572036990CD1B, &NETWORK_BAIL_TRANSITION},
		{0x3E9BB38102A589B0, &NETWORK_DO_TRANSITION_TO_GAME},
		{0x4665F51EFED00034, &NETWORK_DO_TRANSITION_TO_NEW_GAME},
		{0x3AAD8B2FCA1E289F, &NETWORK_DO_TRANSITION_TO_FREEMODE},
		{0x9E80A5BA8109F974, &NETWORK_DO_TRANSITION_TO_NEW_FREEMODE},
		{0x9D7696D8F4FA6CB7, &NETWORK_IS_TRANSITION_TO_GAME},
		{0x73B000F7FBC55829, &NETWORK_GET_TRANSITION_MEMBERS},
		{0x521638ADA1BA0D18, &NETWORK_APPLY_TRANSITION_PARAMETER},
		{0xEBEFC2E77084F599, &NETWORK_APPLY_TRANSITION_PARAMETER_STRING},
		{0x31D1D2B858D25E6B, &NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION},
		{0x5728BB6D63E3FF1D, &NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED},
		{0x0B824797C9BF2159, &NETWORK_IS_TRANSITION_HOST},
		{0x6B5C83BA3EFE6A10, &NETWORK_IS_TRANSITION_HOST_FROM_HANDLE},
		{0x65042B9774C4435E, &NETWORK_GET_TRANSITION_HOST},
		{0x68049AEFF83D8F0A, &NETWORK_IS_IN_TRANSITION},
		{0x53FA83401D9C07FE, &NETWORK_IS_TRANSITION_STARTED},
		{0x520F3282A53D26B7, &NETWORK_IS_TRANSITION_BUSY},
		{0x292564C735375EDF, &NETWORK_IS_TRANSITION_MATCHMAKING},
		{0xC571D0E77D8BBC29, &_0xC571D0E77D8BBC29},
		{0x1398582B7F72B3ED, &_0x1398582B7F72B3ED},
		{0x1F8E00FB18239600, &_0x1F8E00FB18239600},
		{0xF6F4383B7C92F11A, &_0xF6F4383B7C92F11A},
		{0x2B3A8F7CA3A38FDE, &NETWORK_OPEN_TRANSITION_MATCHMAKING},
		{0x43F4DBA69710E01E, &NETWORK_CLOSE_TRANSITION_MATCHMAKING},
		{0x37A4494483B9F5C9, &NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING},
		{0x0C978FDA19692C2C, &NETWORK_SET_TRANSITION_VISIBILITY_LOCK},
		{0xD0A484CB2F829FBE, &NETWORK_IS_TRANSITION_VISIBILITY_LOCKED},
		{0x30DE938B516F0AD2, &NETWORK_SET_TRANSITION_ACTIVITY_ID},
		{0xEEEDA5E6D7080987, &NETWORK_CHANGE_TRANSITION_SLOTS},
		{0x973D76AA760A6CB6, &_0x973D76AA760A6CB6},
		{0x9AC9CCBFA8C29795, &NETWORK_HAS_PLAYER_STARTED_TRANSITION},
		{0x2615AA2A695930C1, &NETWORK_ARE_TRANSITION_DETAILS_VALID},
		{0x9D060B08CD63321A, &NETWORK_JOIN_TRANSITION},
		{0x7284A47B3540E6CF, &NETWORK_HAS_INVITED_GAMER_TO_TRANSITION},
		{0x3F9990BF5F22759C, &_0x3F9990BF5F22759C},
		{0x05095437424397FA, &NETWORK_IS_ACTIVITY_SESSION},
		{0x4A9FDE3A5A6D0437, &_0x4A9FDE3A5A6D0437},
		{0xC3C7A6AFDB244624, &_NETWORK_SEND_PRESENCE_INVITE},
		{0xC116FF9B4D488291, &_NETWORK_SEND_PRESENCE_TRANSITION_INVITE},
		{0x1171A97A3D3981B6, &_0x1171A97A3D3981B6},
		{0x742B58F723233ED9, &_0x742B58F723233ED9},
		{0xCEFA968912D0F78D, &NETWORK_GET_NUM_PRESENCE_INVITES},
		{0xFA91550DF9318B22, &NETWORK_ACCEPT_PRESENCE_INVITE},
		{0xF0210268DB0974B1, &NETWORK_REMOVE_PRESENCE_INVITE},
		{0xDFF09646E12EC386, &NETWORK_GET_PRESENCE_INVITE_ID},
		{0x4962CC4AA2F345B7, &NETWORK_GET_PRESENCE_INVITE_INVITER},
		{0x38D5B0FEBB086F75, &NETWORK_GET_PRESENCE_INVITE_HANDLE},
		{0x26E1CD96B0903D60, &NETWORK_GET_PRESENCE_INVITE_SESSION_ID},
		{0x24409FC4C55CB22D, &NETWORK_GET_PRESENCE_INVITE_CONTENT_ID},
		{0xD39B3FFF8FFDD5BF, &_0xD39B3FFF8FFDD5BF},
		{0x728C4CC7920CD102, &_0x728C4CC7920CD102},
		{0x3DBF2DF0AEB7D289, &NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN},
		{0x8806CEBFABD3CE05, &_0x8806CEBFABD3CE05},
		{0x76D9B976C4C09FDE, &NETWORK_HAS_FOLLOW_INVITE},
		{0xC88156EBB786F8D5, &NETWORK_ACTION_FOLLOW_INVITE},
		{0x439BFDE3CD0610F6, &NETWORK_CLEAR_FOLLOW_INVITE},
		{0xEBF8284D8CADEB53, &_0xEBF8284D8CADEB53},
		{0x7524B431B2E6F7EE, &NETWORK_REMOVE_TRANSITION_INVITE},
		{0x726E0375C7A26368, &NETWORK_REMOVE_ALL_TRANSITION_INVITE},
		{0xF083835B70BA9BFE, &_0xF083835B70BA9BFE},
		{0x9D80CD1D0E6327DE, &NETWORK_INVITE_GAMERS},
		{0x4D86CD31E8976ECE, &NETWORK_HAS_INVITED_GAMER},
		{0x71DC455F5CD1C2B1, &_0x71DC455F5CD1C2B1},
		{0x3855FB5EB2C5E8B2, &_0x3855FB5EB2C5E8B2},
		{0x74881E6BCAE2327C, &NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU},
		{0x7206F674F2A3B1BB, &NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU},
		{0x66F010A4B031A331, &NETWORK_SET_INVITE_ON_CALL_FOR_INVITE_MENU},
		{0x44B37CDCAE765AAE, &NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE},
		{0x4AD490AE1536933B, &_0x4AD490AE1536933B},
		{0x0D77A82DC2D0DA59, &_0x0D77A82DC2D0DA59},
		{0xCBBD7C4991B64809, &FILLOUT_PM_PLAYER_LIST},
		{0x716B6DB9D1886106, &FILLOUT_PM_PLAYER_LIST_WITH_NAMES},
		{0xE26CCFF8094D8C74, &_0xE26CCFF8094D8C74},
		{0x796A87B3B68D1F3D, &NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE},
		{0x2FC5650B0271CB57, &NETWORK_IS_IN_PLATFORM_PARTY},
		{0x01ABCE5E7CBDA196, &_NETWORK_GET_PLATFORM_PARTY_UNK},
		{0x120364DE2845DAF8, &NETWORK_GET_PLATFORM_PARTY_MEMBERS},
		{0xFD8B834A8BA05048, &NETWORK_IS_IN_PLATFORM_PARTY_CHAT},
		{0x8DE9945BCC9AEC52, &NETWORK_IS_CHATTING_IN_PLATFORM_PARTY},
		{0x2BF66D2E7414F686, &_0x2BF66D2E7414F686},
		{0x14922ED3E38761F0, &_0x14922ED3E38761F0},
		{0x6CE50E47F5543D0C, &_0x6CE50E47F5543D0C},
		{0xFA2888E3833C8E96, &_0xFA2888E3833C8E96},
		{0x25D990F8E0E3F13C, &_0x25D990F8E0E3F13C},
		{0xF1B84178F8674195, &_0xF1B84178F8674195},
		{0x599E4FA1F87EB5FF, &NETWORK_GET_RANDOM_INT},
		{0xE30CF56F1EFA5F43, &NETWORK_GET_RANDOM_INT_RANGED},
		{0x655B91F1495A9090, &NETWORK_PLAYER_IS_CHEATER},
		{0x172F75B6EE2233BA, &NETWORK_PLAYER_GET_CHEATER_REASON},
		{0x19D8DA0E5A68045A, &NETWORK_PLAYER_IS_BADSPORT},
		{0x46FB3ED415C7641C, &_TRIGGER_SCRIPT_CRC_CHECK_ON_PLAYER},
		{0xA12D3A5A3753CC23, &_0xA12D3A5A3753CC23},
		{0xF287F506767CC8A9, &_0xF287F506767CC8A9},
		{0x472841A026D26D8B, &_REMOTE_CHEAT_DETECTED},
		{0xEC5E3AF5289DCA81, &BAD_SPORT_PLAYER_LEFT_DETECTED},
		{0xE66C690248F11150, &NETWORK_APPLY_PED_SCAR_DATA},
		{0x1CA59E306ECB80A5, &NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT},
		{0xD1110739EEADB592, &_NETWORK_IS_THIS_SCRIPT_MARKED},
		{0x2910669969E9535E, &NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT},
		{0xA6C90FBC38E395EE, &NETWORK_GET_MAX_NUM_PARTICIPANTS},
		{0x18D0456E86604654, &NETWORK_GET_NUM_PARTICIPANTS},
		{0x57D158647A6BFABF, &NETWORK_GET_SCRIPT_STATUS},
		{0x3E9B2F01C50DF595, &NETWORK_REGISTER_HOST_BROADCAST_VARIABLES},
		{0x3364AA97340CA215, &NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES},
		{0x64F62AFB081E260D, &NETWORK_FINISH_BROADCASTING_DATA},
		{0x5D10B3795F3FC886, &_0x5D10B3795F3FC886},
		{0x24FB80D107371267, &NETWORK_GET_PLAYER_INDEX},
		{0x1B84DF6AF2A46938, &NETWORK_GET_PARTICIPANT_INDEX},
		{0x6C0E2E0125610278, &NETWORK_GET_PLAYER_INDEX_FROM_PED},
		{0xA4A79DD2D9600654, &NETWORK_GET_NUM_CONNECTED_PLAYERS},
		{0x93DC1BE4E1ABE9D1, &NETWORK_IS_PLAYER_CONNECTED},
		{0xCF61D4B4702EE9EB, &NETWORK_GET_TOTAL_NUM_PLAYERS},
		{0x6FF8FF40B6357D45, &NETWORK_IS_PARTICIPANT_ACTIVE},
		{0xB8DFD30D6973E135, &NETWORK_IS_PLAYER_ACTIVE},
		{0x3CA58F6CB7CBD784, &NETWORK_IS_PLAYER_A_PARTICIPANT},
		{0x83CD99A1E6061AB5, &NETWORK_IS_HOST_OF_THIS_SCRIPT},
		{0xC7B4D79B01FA7A5C, &NETWORK_GET_HOST_OF_THIS_SCRIPT},
		{0x1D6A14F1F9A736FC, &NETWORK_GET_HOST_OF_SCRIPT},
		{0x3B3D11CD9FFCDFC9, &NETWORK_SET_MISSION_FINISHED},
		{0x9D40DF90FAD26098, &NETWORK_IS_SCRIPT_ACTIVE},
		{0x560B423D73015E77, &_0x560B423D73015E77},
		{0x3658E8CD94FC121A, &NETWORK_GET_NUM_SCRIPT_PARTICIPANTS},
		{0x638A3A81733086DB, &_0x638A3A81733086DB},
		{0x1AD5B71586B94820, &NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT},
		{0x2302C0264EA58D31, &_0x2302C0264EA58D31},
		{0x741A3D8380319A81, &_0x741A3D8380319A81},
		{0x90986E8876CE0A83, &PARTICIPANT_ID},
		{0x57A3BDDAD8E5AA0A, &PARTICIPANT_ID_TO_INT},
		{0x2DA41ED6E1FCD7A5, &_0x2DA41ED6E1FCD7A5},
		{0x7A1ADEEF01740A24, &NETWORK_GET_DESTROYER_OF_NETWORK_ID},
		{0xC434133D9BA52777, &_0xC434133D9BA52777},
		{0x83660B734994124D, &_0x83660B734994124D},
		{0x4CACA84440FA26F6, &_NETWORK_GET_DESTROYER_OF_ENTITY},
		{0x42B2DAA6B596F5F8, &NETWORK_GET_ENTITY_KILLER_OF_PLAYER},
		{0xEA23C49EAA83ACFB, &NETWORK_RESURRECT_LOCAL_PLAYER},
		{0x2D95C7E2D7E07307, &NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME},
		{0x8A8694B48715B000, &NETWORK_IS_LOCAL_PLAYER_INVINCIBLE},
		{0x9DD368BF06983221, &NETWORK_DISABLE_INVINCIBLE_FLASHING},
		{0x524FF0AEFF9C3973, &NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT},
		{0xB07D3185E11657A5, &_0xB07D3185E11657A5},
		{0xA11700682F3AD45C, &NETWORK_GET_NETWORK_ID_FROM_ENTITY},
		{0xCE4E5D9B0A4FF560, &NETWORK_GET_ENTITY_FROM_NETWORK_ID},
		{0xC7827959479DCC78, &NETWORK_GET_ENTITY_IS_NETWORKED},
		{0x0991549DE4D64762, &NETWORK_GET_ENTITY_IS_LOCAL},
		{0x06FAACD625D80CAA, &NETWORK_REGISTER_ENTITY_AS_NETWORKED},
		{0x7368E683BB9038D6, &NETWORK_UNREGISTER_NETWORKED_ENTITY},
		{0x38CE16C96BD11344, &NETWORK_DOES_NETWORK_ID_EXIST},
		{0x18A47D074708FD68, &NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID},
		{0xA670B3662FAFFBD0, &NETWORK_REQUEST_CONTROL_OF_NETWORK_ID},
		{0x4D36070FE0215186, &NETWORK_HAS_CONTROL_OF_NETWORK_ID},
		{0x7242F8B741CE1086, &_0x7242F8B741CE1086},
		{0xB69317BF5E782347, &NETWORK_REQUEST_CONTROL_OF_ENTITY},
		{0x870DDFD5A4A796E4, &NETWORK_REQUEST_CONTROL_OF_DOOR},
		{0x01BF60A500E28887, &NETWORK_HAS_CONTROL_OF_ENTITY},
		{0x5BC9495F0B3B6FA6, &NETWORK_HAS_CONTROL_OF_PICKUP},
		{0xCB3C68ADB06195DF, &NETWORK_HAS_CONTROL_OF_DOOR},
		{0xC01E93FAC20C3346, &NETWORK_IS_DOOR_NETWORKED},
		{0xB4C94523F023419C, &VEH_TO_NET},
		{0x0EDEC3C276198689, &PED_TO_NET},
		{0x99BFDC94A603E541, &OBJ_TO_NET},
		{0x367B936610BA360C, &NET_TO_VEH},
		{0xBDCD95FC216A8B3E, &NET_TO_PED},
		{0xD8515F5FEA14CB3F, &NET_TO_OBJ},
		{0xBFFEAB45A9A9094A, &NET_TO_ENT},
		{0xE86051786B66CD8E, &NETWORK_GET_LOCAL_HANDLE},
		{0xDCD51DD8F87AEC5C, &NETWORK_HANDLE_FROM_USER_ID},
		{0xA0FD21BED61E5C4C, &NETWORK_HANDLE_FROM_MEMBER_ID},
		{0x388EB2B86C73B6B3, &NETWORK_HANDLE_FROM_PLAYER},
		{0xBC1D768F2F5D6C05, &NETWORK_HASH_FROM_PLAYER_HANDLE},
		{0x58575AC3CF2CA8EC, &NETWORK_HASH_FROM_GAMER_HANDLE},
		{0xD45CB817D7E177D2, &NETWORK_HANDLE_FROM_FRIEND},
		{0x9F0C0A981D73FA56, &NETWORK_GAMERTAG_FROM_HANDLE_START},
		{0xB071E27958EF4CF0, &NETWORK_GAMERTAG_FROM_HANDLE_PENDING},
		{0xFD00798DBA7523DD, &NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED},
		{0x426141162EBE5CDB, &char*},
		{0xD66C9E72B3CC4982, &_0xD66C9E72B3CC4982},
		{0x58CC181719256197, &_0x58CC181719256197},
		{0x57DBA049E110F217, &NETWORK_ARE_HANDLES_THE_SAME},
		{0x6F79B93B0A8E4133, &NETWORK_IS_HANDLE_VALID},
		{0xCE5F689CF5A0A49D, &NETWORK_GET_PLAYER_FROM_GAMER_HANDLE},
		{0xC82630132081BB6F, &char*},
		{0x0F10B05DDF8D16E9, &NETWORK_IS_GAMER_IN_MY_SESSION},
		{0x859ED1CEA343FCA8, &NETWORK_SHOW_PROFILE_UI},
		{0x7718D2E2060837D2, &char*},
		{0x4927FC39CD0869A0, &char*},
		{0x544ABDDA3B409B6D, &NETWORK_PLAYER_IS_ROCKSTAR_DEV},
		{0x565E430DB3B05BEC, &NETWORK_PLAYER_INDEX_IS_CHEATER},
		{0x815F18AD865F057F, &_NETWORK_GET_ENTITY_NET_SCRIPT_ID},
		{0x37D5F739FD494675, &_0x37D5F739FD494675},
		{0x7E58745504313A2E, &NETWORK_IS_INACTIVE_PROFILE},
		{0xAFEBB0D5D8F687D2, &NETWORK_GET_MAX_FRIENDS},
		{0x203F1CFD823B27A4, &NETWORK_GET_FRIEND_COUNT},
		{0xE11EBBB2A783FE8B, &char*},
		{0x4164F227D052E293, &char*},
		{0x425A44533437B64D, &NETWORK_IS_FRIEND_ONLINE},
		{0x87EB7A3FFCB314DB, &NETWORK_IS_FRIEND_HANDLE_ONLINE},
		{0x2EA9A3BEDF3F17B8, &NETWORK_IS_FRIEND_IN_SAME_TITLE},
		{0x57005C18827F3A28, &NETWORK_IS_FRIEND_IN_MULTIPLAYER},
		{0x1A24A179F9B31654, &NETWORK_IS_FRIEND},
		{0x0BE73DA6984A6E33, &NETWORK_IS_PENDING_FRIEND},
		{0x6EA101606F6E4D81, &NETWORK_IS_ADDING_FRIEND},
		{0x8E02D73914064223, &NETWORK_ADD_FRIEND},
		{0xBAD8F2A42B844821, &NETWORK_IS_FRIEND_INDEX_ONLINE},
		{0x1B857666604B1A74, &NETWORK_SET_PLAYER_IS_PASSIVE},
		{0x82377B65E943F72D, &NETWORK_GET_PLAYER_OWNS_WAYPOINT},
		{0xC927EC229934AF60, &NETWORK_CAN_SET_WAYPOINT},
		{0x4C2A9FDC22377075, &_0x4C2A9FDC22377075},
		{0xB309EBEA797E001F, &_0xB309EBEA797E001F},
		{0x26F07DD83A5F7F98, &_0x26F07DD83A5F7F98},
		{0xE870F9F1F7B4F1FA, &NETWORK_HAS_HEADSET},
		{0x7D395EA61622E116, &_0x7D395EA61622E116},
		{0xC0D2AF00BCC234CA, &NETWORK_IS_LOCAL_TALKING},
		{0xF2FD55CB574BCC55, &NETWORK_GAMER_HAS_HEADSET},
		{0x71C33B22606CD88A, &NETWORK_IS_GAMER_TALKING},
		{0x8F5D1AD832AEB06C, &_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2},
		{0xA150A4F065806B1F, &NETWORK_CAN_COMMUNICATE_WITH_GAMER},
		{0xCE60DE011B6C7978, &NETWORK_IS_GAMER_MUTED_BY_ME},
		{0xDF02A2C93F1F26DA, &NETWORK_AM_I_MUTED_BY_GAMER},
		{0xE944C4F5AF1B5883, &NETWORK_IS_GAMER_BLOCKED_BY_ME},
		{0x15337C7C268A27B2, &NETWORK_AM_I_BLOCKED_BY_GAMER},
		{0xB57A49545BA53CE7, &NETWORK_CAN_VIEW_GAMER_USER_CONTENT},
		{0xCCA4318E1AB03F1F, &NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT},
		{0x07DD29D5E22763F1, &NETWORK_CAN_PLAY_MULTIPLAYER_WITH_GAMER},
		{0x135F9B7B7ADD2185, &NETWORK_CAN_GAMER_PLAY_MULTIPLAYER_WITH_ME},
		{0x031E11F3D447647E, &NETWORK_IS_PLAYER_TALKING},
		{0x3FB99A8B08D18FD6, &NETWORK_PLAYER_HAS_HEADSET},
		{0x8C71288AE68EDE39, &NETWORK_IS_PLAYER_MUTED_BY_ME},
		{0x9D6981DFC91A8604, &NETWORK_AM_I_MUTED_BY_PLAYER},
		{0x57AF1F8E27483721, &NETWORK_IS_PLAYER_BLOCKED_BY_ME},
		{0x87F395D957D4353D, &NETWORK_AM_I_BLOCKED_BY_PLAYER},
		{0x21A1684A25C2867F, &NETWORK_GET_PLAYER_LOUDNESS},
		{0xCBF12D65F95AD686, &NETWORK_SET_TALKER_PROXIMITY},
		{0x84F0F13120B4E098, &NETWORK_GET_TALKER_PROXIMITY},
		{0xBABEC9E69A91C57B, &NETWORK_SET_VOICE_ACTIVE},
		{0xCFEB46DCD7D8D5EB, &_0xCFEB46DCD7D8D5EB},
		{0xAF66059A131AA269, &NETWORK_OVERRIDE_TRANSITION_CHAT},
		{0xD5B4883AC32F24C3, &NETWORK_SET_TEAM_ONLY_CHAT},
		{0x265559DA40B3F327, &_0x265559DA40B3F327},
		{0x4348BFDA56023A2F, &_0x4348BFDA56023A2F},
		{0x6F697A66CE78674E, &NETWORK_OVERRIDE_TEAM_RESTRICTIONS},
		{0x70DA3BF8DACD3210, &NETWORK_SET_OVERRIDE_SPECTATOR_MODE},
		{0x3C5C1E2C2FF814B1, &_0x3C5C1E2C2FF814B1},
		{0x9D7AFCBF21C51712, &_0x9D7AFCBF21C51712},
		{0xF46A1E03E8755980, &NETWORK_SET_NO_SPECTATOR_CHAT},
		{0x6A5D89D7769A40D8, &_0x6A5D89D7769A40D8},
		{0x3039AE5AD2C9C0C4, &NETWORK_OVERRIDE_CHAT_RESTRICTIONS},
		{0x97DD4C5944CC2E6A, &NETWORK_OVERRIDE_SEND_RESTRICTIONS},
		{0x57B192B4D4AD23D5, &NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL},
		{0xDDF73E2B1FEC5AB4, &NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS},
		{0x0FF2862B61A58AF9, &NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL},
		{0xEF6212C2EFEF1A23, &NETWORK_SET_VOICE_CHANNEL},
		{0xE036A705F989E049, &NETWORK_CLEAR_VOICE_CHANNEL},
		{0xDBD2056652689917, &NETWORK_APPLY_VOICE_PROXIMITY_OVERRIDE},
		{0xF03755696450470C, &NETWORK_CLEAR_VOICE_PROXIMITY_OVERRIDE},
		{0x5E3AA4CA2B6FB0EE, &_0x5E3AA4CA2B6FB0EE},
		{0xCA575C391FEA25CC, &_0xCA575C391FEA25CC},
		{0xADB57E5B663CCA8B, &_0xADB57E5B663CCA8B},
		{0x8EF52ACAECC51D9C, &_0x8EF52ACAECC51D9C},
		{0x5FCF4D7069B09026, &_NETWORK_IS_TEXT_CHAT_ACTIVE},
		{0x593850C16A36B692, &SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME},
		{0x9ECA15ADFE141431, &_SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE},
		{0xF808475FA571D823, &NETWORK_SET_FRIENDLY_FIRE_OPTION},
		{0x1DCCACDCFC569362, &NETWORK_SET_RICH_PRESENCE},
		{0x3E200C2BCF4164EB, &NETWORK_SET_RICH_PRESENCE_STRING},
		{0x5ED0356A0CE3A34F, &NETWORK_GET_TIMEOUT_TIME},
		{0x9769F811D1785B03, &_NETWORK_RESPAWN_COORDS},
		{0xBF22E0F32968E967, &_0xBF22E0F32968E967},
		{0x715135F4B82AC90D, &REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY},
		{0x2E4C123D1C8A710E, &_0x2E4C123D1C8A710E},
		{0x579CCED0265D4896, &NETWORK_CLAN_SERVICE_IS_VALID},
		{0xB124B57F571D8F18, &NETWORK_CLAN_PLAYER_IS_ACTIVE},
		{0xEEE6EACBE8874FBA, &NETWORK_CLAN_PLAYER_GET_DESC},
		{0x7543BB439F63792B, &NETWORK_CLAN_IS_ROCKSTAR_CLAN},
		{0xF45352426FF3A4F0, &NETWORK_CLAN_GET_UI_FORMATTED_TAG},
		{0x1F471B79ACC90BEF, &NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT},
		{0x48DE78AF2C8885B8, &NETWORK_CLAN_GET_MEMBERSHIP_DESC},
		{0xA989044E70010ABE, &NETWORK_CLAN_DOWNLOAD_MEMBERSHIP},
		{0x5B9E023DC6EBEDC0, &NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING},
		{0xB3F64A6A91432477, &_NETWORK_IS_CLAN_MEMBERSHIP_FINISHED_DOWNLOADING},
		{0xBB6E6FEE99D866B2, &NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE},
		{0xAAB11F6C4ADBC2C1, &NETWORK_CLAN_GET_MEMBERSHIP_COUNT},
		{0x48A59CF88D43DF0E, &NETWORK_CLAN_GET_MEMBERSHIP_VALID},
		{0xC8BC2011F67B3411, &NETWORK_CLAN_GET_MEMBERSHIP},
		{0x9FAAA4F4FC71F87F, &NETWORK_CLAN_JOIN},
		{0x729E3401F0430686, &_NETWORK_CLAN_ANIMATION},
		{0x2B51EDBEFC301339, &_0x2B51EDBEFC301339},
		{0xC32EA7A2F6CA7557, &_0xC32EA7A2F6CA7557},
		{0x5835D9CD92E83184, &NETWORK_CLAN_GET_EMBLEM_TXD_NAME},
		{0x13518FF1C6B28938, &NETWORK_CLAN_REQUEST_EMBLEM},
		{0xA134777FF7F33331, &NETWORK_CLAN_IS_EMBLEM_READY},
		{0x113E6E3E50E286B0, &NETWORK_CLAN_RELEASE_EMBLEM},
		{0x9AA46BADAD0E27ED, &NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR},
		{0x042E4B70B93E6054, &NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL},
		{0xCE86D8191B762107, &NETWORK_GET_PRIMARY_CLAN_DATA_START},
		{0xB5074DB804E28CE7, &NETWORK_GET_PRIMARY_CLAN_DATA_PENDING},
		{0x5B4F04F19376A0BA, &NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS},
		{0xC080FF658B2E41DA, &NETWORK_GET_PRIMARY_CLAN_DATA_NEW},
		{0x299EEB23175895FC, &SET_NETWORK_ID_CAN_MIGRATE},
		{0xE05E81A888FA63C8, &SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES},
		{0xA8A024587329F36A, &_SET_NETWORK_ID_SYNC_TO_PLAYER},
		{0xD830567D88A1E873, &NETWORK_SET_ENTITY_CAN_BLEND},
		{0x0379DAF89BA09AA5, &_0x0379DAF89BA09AA5},
		{0xF1CA12B18AEF5298, &_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK},
		{0xA6928482543022B4, &SET_NETWORK_ID_VISIBLE_IN_CUTSCENE},
		{0x32EBD154CB6B8B99, &_0x32EBD154CB6B8B99},
		{0x6540EDC4F45DA089, &_0x6540EDC4F45DA089},
		{0xAAA553E7DD28A457, &SET_NETWORK_CUTSCENE_ENTITIES},
		{0x3FA36981311FA4FF, &_0x3FA36981311FA4FF},
		{0xA1607996431332DF, &IS_NETWORK_ID_OWNED_BY_PARTICIPANT},
		{0xD1065D68947E7B6E, &SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE},
		{0xE5F773C1A1D9D168, &SET_LOCAL_PLAYER_INVISIBLE_LOCALLY},
		{0x7619364C82D3BF14, &SET_LOCAL_PLAYER_VISIBLE_LOCALLY},
		{0x12B37D54667DB0B8, &SET_PLAYER_INVISIBLE_LOCALLY},
		{0xFAA10F1FAFB11AF2, &SET_PLAYER_VISIBLE_LOCALLY},
		{0x416DBD4CD6ED8DD2, &FADE_OUT_LOCAL_PLAYER},
		{0xDE564951F95E09ED, &NETWORK_FADE_OUT_ENTITY},
		{0x1F4ED342ACEFE62D, &NETWORK_FADE_IN_ENTITY},
		{0x631DC5DFF4B110E3, &NETWORK_IS_PLAYER_FADING},
		{0x422F32CC7E56ABAD, &NETWORK_IS_ENTITY_FADING},
		{0xE73092F4157CD126, &IS_PLAYER_IN_CUTSCENE},
		{0xE0031D3C8F36AB82, &SET_ENTITY_VISIBLE_IN_CUTSCENE},
		{0xE135A9FF3F5D05D8, &SET_ENTITY_LOCALLY_INVISIBLE},
		{0x241E289B5C059EDC, &SET_ENTITY_LOCALLY_VISIBLE},
		{0x6E192E33AD436366, &IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID},
		{0xD45B1FFCCD52FF19, &ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID},
		{0xB2092A1EAA7FD45F, &_IS_DAMAGE_TRACKER_ACTIVE_ON_PLAYER},
		{0xBEC0816FF5ACBCDA, &_ACTIVATE_DAMAGE_TRACKER_ON_PLAYER},
		{0xD82CF8E64C8729D8, &IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE},
		{0xDC3A310219E5DA62, &IS_SPHERE_VISIBLE_TO_PLAYER},
		{0x4E5C93BD0C32FBF8, &RESERVE_NETWORK_MISSION_OBJECTS},
		{0xB60FEBA45333D36F, &RESERVE_NETWORK_MISSION_PEDS},
		{0x76B02E21ED27A469, &RESERVE_NETWORK_MISSION_VEHICLES},
		{0x797F9C5E661D920E, &_RESERVE_NETWORK_LOCAL_OBJECTS},
		{0x2C8DF5D129595281, &_RESERVE_NETWORK_LOCAL_PEDS},
		{0x42613035157E4208, &_RESERVE_NETWORK_LOCAL_VEHICLES},
		{0x800DD4721A8B008B, &CAN_REGISTER_MISSION_OBJECTS},
		{0xBCBF4FEF9FA5D781, &CAN_REGISTER_MISSION_PEDS},
		{0x7277F1F2E085EE74, &CAN_REGISTER_MISSION_VEHICLES},
		{0x0A49D1CB6E34AF72, &_CAN_REGISTER_MISSION_PICKUPS},
		{0xE16AA70CE9BEEDC3, &_0xE16AA70CE9BEEDC3},
		{0x69778E7564BADE6D, &CAN_REGISTER_MISSION_ENTITIES},
		{0xAA81B5F10BC43AC2, &GET_NUM_RESERVED_MISSION_OBJECTS},
		{0x1F13D5AE5CB17E17, &GET_NUM_RESERVED_MISSION_PEDS},
		{0xCF3A965906452031, &GET_NUM_RESERVED_MISSION_VEHICLES},
		{0x12B6281B6C6706C0, &GET_NUM_CREATED_MISSION_OBJECTS},
		{0xCB215C4B56A7FAE7, &GET_NUM_CREATED_MISSION_PEDS},
		{0x0CD9AB83489430EA, &GET_NUM_CREATED_MISSION_VEHICLES},
		{0xE42D626EEC94E5D9, &_0xE42D626EEC94E5D9},
		{0xC7BE335216B5EC7C, &GET_MAX_NUM_NETWORK_OBJECTS},
		{0x0C1F7D49C39D2289, &GET_MAX_NUM_NETWORK_PEDS},
		{0x0AFCE529F69B21FF, &GET_MAX_NUM_NETWORK_VEHICLES},
		{0xA72835064DD63E4C, &GET_MAX_NUM_NETWORK_PICKUPS},
		{0xBA7F0B77D80A4EB7, &_0xBA7F0B77D80A4EB7},
		{0x7A5487FE9FAA6B48, &GET_NETWORK_TIME},
		{0x89023FBBF9200E9F, &GET_NETWORK_TIME_ACCURATE},
		{0x46718ACEEDEAFC84, &HAS_NETWORK_TIME_STARTED},
		{0x017008CCDAD48503, &GET_TIME_OFFSET},
		{0xCB2CF5148012C8D0, &IS_TIME_LESS_THAN},
		{0xDE350F8651E4346C, &IS_TIME_MORE_THAN},
		{0xF5BC95857BD6D512, &IS_TIME_EQUAL_TO},
		{0xA2C6FC031D46FFF0, &GET_TIME_DIFFERENCE},
		{0x9E23B1777A927DAD, &char*},
		{0xF12E6CD06C73D69E, &_0xF12E6CD06C73D69E},
		{0x9A73240B49945C76, &GET_CLOUD_TIME_AS_INT},
		{0xAC97AF97FA68E5D5, &_GET_DATE_AND_TIME_FROM_UNIX_EPOCH},
		{0x423DE3854BB50894, &NETWORK_SET_IN_SPECTATOR_MODE},
		{0x419594E137637120, &NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED},
		{0xFC18DB55AE19E046, &NETWORK_SET_IN_FREE_CAM_MODE},
		{0x5C707A667DF8B9FA, &_0x5C707A667DF8B9FA},
		{0x048746E388762E11, &NETWORK_IS_IN_SPECTATOR_MODE},
		{0x9CA5DE655269FEC4, &NETWORK_SET_IN_MP_CUTSCENE},
		{0x6CC27C9FA2040220, &NETWORK_IS_IN_MP_CUTSCENE},
		{0x63F9EE203C3619F2, &NETWORK_IS_PLAYER_IN_MP_CUTSCENE},
		{0xFAC18E7356BD3210, &_0xFAC18E7356BD3210},
		{0xEC51713AB6EC36E8, &SET_NETWORK_VEHICLE_RESPOT_TIMER},
		{0x6274C4712850841E, &SET_NETWORK_VEHICLE_AS_GHOST},
		{0xA2A707979FE754DC, &_0xA2A707979FE754DC},
		{0x838DA0936A24ED4D, &_0x838DA0936A24ED4D},
		{0x5FFE9B4144F9712F, &USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR},
		{0x21D04D7BC538C146, &_0x21D04D7BC538C146},
		{0x13F1FCB111B820B0, &_0x13F1FCB111B820B0},
		{0xA7C511FA1C5BDA38, &_0xA7C511FA1C5BDA38},
		{0x658500AE6D723A7E, &_0x658500AE6D723A7E},
		{0x17330EBF2F2124A8, &_0x17330EBF2F2124A8},
		{0x4BA166079D658ED4, &_0x4BA166079D658ED4},
		{0xD7B6C73CAD419BCF, &_0xD7B6C73CAD419BCF},
		{0x7EF7649B64D7FF10, &_0x7EF7649B64D7FF10},
		{0x77758139EC9B66C7, &_0x77758139EC9B66C7},
		{0x7CD6BC4C2BBDD526, &NETWORK_CREATE_SYNCHRONISED_SCENE},
		{0x742A637471BCECD9, &NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE},
		{0xA5EAFE473E45C442, &_0xA5EAFE473E45C442},
		{0xF2404D68CBC855FA, &NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE},
		{0x45F35C0EDC33B03B, &_0x45F35C0EDC33B03B},
		{0xCF8BD3B0BD6D42D7, &_NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA},
		{0x478DCBD2A98B705A, &NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY},
		{0x9A1B3FCDB36C8697, &NETWORK_START_SYNCHRONISED_SCENE},
		{0xC254481A4574CB2F, &NETWORK_STOP_SYNCHRONISED_SCENE},
		{0x02C40BF885C567B6, &_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE},
		{0xC9B43A33D09CADA7, &_0xC9B43A33D09CADA7},
		{0x144DA052257AE7D8, &_0x144DA052257AE7D8},
		{0xFB1F9381E80FA13F, &_0xFB1F9381E80FA13F},
		{0x5A6FFA2433E2F14C, &NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER},
		{0x4BA92A18502BCA61, &NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER},
		{0x3C891A251567DFCE, &NETWORK_QUERY_RESPAWN_RESULTS},
		{0xFB8F2A6F3DF08CBE, &NETWORK_CANCEL_RESPAWN_SEARCH},
		{0x371EA43692861CF1, &NETWORK_GET_RESPAWN_RESULT},
		{0x6C34F1208B8923FD, &NETWORK_GET_RESPAWN_RESULT_FLAGS},
		{0x17E0198B3882C2CB, &NETWORK_START_SOLO_TUTORIAL_SESSION},
		{0xFB680D403909DC70, &_0xFB680D403909DC70},
		{0xD0AFAFF5A51D72F7, &NETWORK_END_TUTORIAL_SESSION},
		{0xADA24309FE08DACF, &NETWORK_IS_IN_TUTORIAL_SESSION},
		{0xB37E4E6A2388CA7B, &_0xB37E4E6A2388CA7B},
		{0x35F0B98A8387274D, &NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING},
		{0x3B39236746714134, &NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE},
		{0x9DE986FC9A87C474, &_NETWORK_IS_PLAYER_EQUAL_TO_INDEX},
		{0xBBDF066252829606, &NETWORK_CONCEAL_PLAYER},
		{0x919B3C98ED8292F9, &NETWORK_IS_PLAYER_CONCEALED},
		{0x1632BE0AC1E62876, &_NETWORK_CONCEAL_ENTITY},
		{0x71302EC70689052A, &_NETWORK_IS_ENTITY_CONCEALED},
		{0xE679E3E06E363892, &NETWORK_OVERRIDE_CLOCK_TIME},
		{0xD972DF67326F966E, &NETWORK_CLEAR_CLOCK_TIME_OVERRIDE},
		{0xD7C95D322FF57522, &NETWORK_IS_CLOCK_TIME_OVERRIDDEN},
		{0x494C8FB299290269, &NETWORK_ADD_ENTITY_AREA},
		{0x376C6375BA60293A, &NETWORK_ADD_ENTITY_ANGLED_AREA},
		{0x25B99872D588A101, &NETWORK_ADD_ENTITY_DISPLAYED_BOUNDARIES},
		{0x2B1C623823DB0D9D, &_0x2B1C623823DB0D9D},
		{0x93CF869BAA0C4874, &NETWORK_REMOVE_ENTITY_AREA},
		{0xE64A3CA08DFA37A9, &NETWORK_ENTITY_AREA_DOES_EXIST},
		{0x4DF7CFFF471A7FB1, &_0x4DF7CFFF471A7FB1},
		{0x4A2D4E8BF4265B0F, &NETWORK_ENTITY_AREA_IS_OCCUPIED},
		{0x2B1813ABA29016C5, &_NETWORK_SET_NETWORK_ID_DYNAMIC},
		{0xA6FCECCF4721D679, &_0xA6FCECCF4721D679},
		{0x95BAF97C82464629, &_0x95BAF97C82464629},
		{0x924426BFFD82E915, &NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS},
		{0x8132C0EB8B2B3293, &_NETWORK_IS_CLOUD_BACKGROUND_SCRIPTS_REQUEST_PENDING},
		{0x42FB3B532D526E6C, &NETWORK_REQUEST_CLOUD_TUNABLES},
		{0x0467C11ED88B7D28, &NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING},
		{0x10BD227A753B0D84, &NETWORK_GET_TUNABLE_CLOUD_CRC},
		{0x85E5F8B9B898B20A, &NETWORK_DOES_TUNABLE_EXIST},
		{0x8BE1146DFD5D4468, &NETWORK_ACCESS_TUNABLE_INT},
		{0xE5608CA7BC163A5F, &NETWORK_ACCESS_TUNABLE_FLOAT},
		{0xAA6A47A573ABB75A, &NETWORK_ACCESS_TUNABLE_BOOL},
		{0xE4E53E1419D81127, &NETWORK_DOES_TUNABLE_EXIST_HASH},
		{0xFAFC23AEE23868DB, &_NETWORK_ALLOCATE_TUNABLES_REGISTRATION_DATA_MAP},
		{0x40FCE03E50E8DBE8, &NETWORK_ACCESS_TUNABLE_INT_HASH},
		{0x3A8B55FDA4C8DDEF, &_NETWORK_REGISTER_TUNABLE_INT_HASH},
		{0x972BC203BBC4C4D5, &NETWORK_ACCESS_TUNABLE_FLOAT_HASH},
		{0x1950DAE9848A4739, &_NETWORK_REGISTER_TUNABLE_FLOAT_HASH},
		{0xEA16B69D93D71A45, &NETWORK_ACCESS_TUNABLE_BOOL_HASH},
		{0x697F508861875B42, &_NETWORK_REGISTER_TUNABLE_BOOL_HASH},
		{0xC7420099936CE286, &NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH},
		{0x187382F8A3E0A6C3, &NETWORK_GET_CONTENT_MODIFIER_LIST_ID},
		{0x7DB53B37A2F211A0, &_0x7DB53B37A2F211A0},
		{0x72433699B4E6DD64, &NETWORK_RESET_BODY_TRACKER},
		{0xD38C4A6D047C019D, &_NETWORK_GET_NUM_BODY_TRACKERS},
		{0x2E0BF682CC778D49, &_0x2E0BF682CC778D49},
		{0x0EDE326D47CD0F3E, &_0x0EDE326D47CD0F3E},
		{0x890E2C5ABED7236D, &_NETWORK_SET_VEHICLE_WHEELS_DESTRUCTIBLE},
		{0x38B7C51AB1EDC7D8, &_0x38B7C51AB1EDC7D8},
		{0x301A42153C9AD707, &NETWORK_EXPLODE_VEHICLE},
		{0x2A5E0621DD815A9A, &_0x2A5E0621DD815A9A},
		{0xCD71A4ECAB22709E, &_0xCD71A4ECAB22709E},
		{0xA7E30DE9272B6D49, &NETWORK_OVERRIDE_COORDS_AND_HEADING},
		{0xE6717E652B8C8D8A, &_0xE6717E652B8C8D8A},
		{0x407091CF6037118E, &NETWORK_DISABLE_PROXIMITY_MIGRATION},
		{0x1775961C2FBBCB5C, &NETWORK_SET_PROPERTY_ID},
		{0xC2B82527CA77053E, &NETWORK_CLEAR_PROPERTY_ID},
		{0x367EF5E2F439B4C6, &_0x367EF5E2F439B4C6},
		{0x94538037EE44F5CF, &_0x94538037EE44F5CF},
		{0xBD0BE0BFC927EAC1, &NETWORK_CACHE_LOCAL_PLAYER_HEAD_BLEND_DATA},
		{0x237D5336A9A54108, &NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA},
		{0x99B72C7ABDE5C910, &NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA},
		{0xF2EAC213D5EA0623, &GET_NUM_COMMERCE_ITEMS},
		{0xEA14EEF5B7CD2C30, &IS_COMMERCE_DATA_VALID},
		{0xB606E6CC59664972, &_0xB606E6CC59664972},
		{0x1D4DC17C38FEAFF0, &_0x1D4DC17C38FEAFF0},
		{0x662635855957C411, &char*},
		{0xB4271092CA7EDF48, &char*},
		{0xCA94551B50B4932C, &char*},
		{0x2A7776C709904AB0, &GET_COMMERCE_ITEM_NUM_CATS},
		{0x6F44CBF56D79FAC0, &char*},
		{0x58C21165F6545892, &_0x58C21165F6545892},
		{0x2EAC52B4019E2782, &IS_COMMERCE_STORE_OPEN},
		{0x9641A9FF718E9C5E, &SET_STORE_ENABLED},
		{0xA2F952104FC6DD4B, &REQUEST_COMMERCE_ITEM_IMAGE},
		{0x72D0706CD6CCDB58, &RELEASE_ALL_COMMERCE_ITEM_IMAGES},
		{0x722F5D28B61C5EA8, &_0x722F5D28B61C5EA8},
		{0x883D79C4071E18B3, &IS_STORE_AVAILABLE_TO_USER},
		{0x265635150FB0D82E, &_0x265635150FB0D82E},
		{0x444C4525ECE0A4B9, &_0x444C4525ECE0A4B9},
		{0x59328EB08C5CEB2B, &_0x59328EB08C5CEB2B},
		{0xFAE628F1E9ADB239, &_0xFAE628F1E9ADB239},
		{0x754615490A029508, &_0x754615490A029508},
		{0x155467ACA0F55705, &_0x155467ACA0F55705},
		{0xC64DED7EF0D2FE37, &CLOUD_DELETE_MEMBER_FILE},
		{0x4C61B39930D045DA, &CLOUD_HAS_REQUEST_COMPLETED},
		{0x3A3D5568AF297CD5, &_0x3A3D5568AF297CD5},
		{0x4F18196C8D38768D, &CLOUD_CHECK_AVAILABILITY},
		{0xC7ABAC5DE675EE3B, &_0xC7ABAC5DE675EE3B},
		{0x0B0CC10720653F3B, &CLOUD_GET_AVAILABILITY_CHECK_RESULT},
		{0x8B0C2964BA471961, &_0x8B0C2964BA471961},
		{0x88B588B41FF7868E, &_0x88B588B41FF7868E},
		{0x67FC09BC554A75E5, &_0x67FC09BC554A75E5},
		{0x966DD84FB6A46017, &_0x966DD84FB6A46017},
		{0x152D90E4C1B4738A, &UGC_COPY_CONTENT},
		{0x9FEDF86898F100E9, &_0x9FEDF86898F100E9},
		{0x5E24341A7F92A74B, &UGC_HAS_CREATE_FINISHED},
		{0x24E4E51FC16305F9, &_0x24E4E51FC16305F9},
		{0xFBC5E768C7A77A6A, &UGC_GET_CREATE_RESULT},
		{0xC55A0B40FFB1ED23, &UGC_GET_CREATE_CONTENT_ID},
		{0x17440AA15D1D3739, &UGC_CLEAR_CREATE_RESULT},
		{0x9BF438815F5D96EA, &UGC_QUERY_MY_CONTENT},
		{0x692D58DF40657E8C, &_0x692D58DF40657E8C},
		{0x158EC424F35EC469, &UGC_QUERY_BY_CONTENT_ID},
		{0xC7397A83F7A2A462, &UGC_QUERY_BY_CONTENT_IDS},
		{0x6D4CB481FAC835E8, &_UGC_QUERY_RECENTLY_CREATED_CONTENT},
		{0xD5A4B59980401588, &UGC_GET_BOOKMARKED_CONTENT},
		{0x3195F8DD0D531052, &UGC_GET_MY_CONTENT},
		{0xF9E1CCAE8BA4C281, &UGC_GET_FRIEND_CONTENT},
		{0x9F6E2821885CAEE2, &UGC_GET_CREW_CONTENT},
		{0x678BB03C1A3BD51E, &UGC_GET_GET_BY_CATEGORY},
		{0x815E5E3073DA1D67, &SET_BALANCE_ADD_MACHINE},
		{0xB8322EEB38BE7C26, &SET_BALANCE_ADD_MACHINES},
		{0xA7862BC5ED1DFD7E, &_0xA7862BC5ED1DFD7E},
		{0x97A770BEEF227E2B, &_0x97A770BEEF227E2B},
		{0x5324A0E3E4CE3570, &_0x5324A0E3E4CE3570},
		{0xE9B99B6853181409, &UGC_CANCEL_QUERY},
		{0xD53ACDBEF24A46E8, &UGC_IS_GETTING},
		{0x02ADA21EA2F6918F, &UGC_HAS_GET_FINISHED},
		{0x941E5306BCD7C2C7, &_0x941E5306BCD7C2C7},
		{0xC87E740D9F3872CC, &_0xC87E740D9F3872CC},
		{0xEDF7F927136C224B, &UGC_GET_QUERY_RESULT},
		{0xE0A6138401BCB837, &UGC_GET_CONTENT_NUM},
		{0x769951E2455E2EB5, &UGC_GET_CONTENT_TOTAL},
		{0x3A17A27D75C74887, &UGC_GET_CONTENT_HASH},
		{0xBA96394A0EECFA65, &UGC_CLEAR_QUERY_RESULTS},
		{0xCD67AD041A394C9C, &char*},
		{0x584770794D758C18, &_0x584770794D758C18},
		{0x8C8D2739BA44AF0F, &_0x8C8D2739BA44AF0F},
		{0x703F12425ECA8BF5, &UGC_GET_CONTENT_USER_NAME},
		{0xAEAB987727C5A8A4, &_0xAEAB987727C5A8A4},
		{0xA7BAB11E7C9C6C5A, &_GET_CONTENT_CATEGORY},
		{0x55AA95F481D694D2, &char*},
		{0xC0173D6BFF4E0348, &char*},
		{0xBF09786A7FCAB582, &UGC_GET_CONTENT_NAME},
		{0x7CF0448787B23758, &UGC_GET_CONTENT_DESCRIPTION_HASH},
		{0xBAF6BABF9E7CCC13, &char*},
		{0xCFD115B373C0DF63, &UGC_GET_CONTENT_UPDATED_DATE},
		{0x37025B27D9B658B1, &UGC_GET_CONTENT_FILE_VERSION},
		{0x1D610EB0FEA716D9, &_0x1D610EB0FEA716D9},
		{0x7FCC39C46C3C03BD, &_0x7FCC39C46C3C03BD},
		{0x32DD916F3F7C9672, &UGC_GET_CONTENT_LANGUAGE},
		{0x3054F114121C21EA, &UGC_GET_CONTENT_IS_PUBLISHED},
		{0xA9240A96C74CCA13, &UGC_GET_CONTENT_IS_VERIFIED},
		{0x1ACCFBA3D8DAB2EE, &UGC_GET_CONTENT_RATING},
		{0x759299C5BB31D2A9, &UGC_GET_CONTENT_RATING_COUNT},
		{0x87E5C46C187FE0AE, &UGC_GET_CONTENT_RATING_POSITIVE_COUNT},
		{0x4E548C0D7AE39FF9, &UGC_GET_CONTENT_RATING_NEGATIVE_COUNT},
		{0x70EA8DA57840F9BE, &UGC_GET_CONTENT_HAS_PLAYER_RECORD},
		{0x993CBE59D350D225, &UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED},
		{0x171DF6A0C07FB3DC, &UGC_REQUEST_CONTENT_DATA_FROM_INDEX},
		{0x7FD2990AF016795E, &UGC_REQUEST_CONTENT_DATA_FROM_PARAMS},
		{0x5E0165278F6339EE, &UGC_REQUEST_CACHED_DESCRIPTION},
		{0x2D5DC831176D0114, &_0x2D5DC831176D0114},
		{0xEBFA8D50ADDC54C4, &_0xEBFA8D50ADDC54C4},
		{0x162C23CA83ED0A62, &_0x162C23CA83ED0A62},
		{0x40F7E66472DF3E5C, &UGC_GET_CACHED_DESCRIPTION},
		{0x5A34CD9C3C5BEC44, &_0x5A34CD9C3C5BEC44},
		{0x68103E2247887242, &_0x68103E2247887242},
		{0x1DE0F5F50D723CAA, &UGC_PUBLISH},
		{0x274A1519DFC1094F, &UGC_SET_BOOKMARKED},
		{0xD05D1A6C74DA3498, &UGC_SET_DELETED},
		{0x45E816772E93A9DB, &_0x45E816772E93A9DB},
		{0x299EF3C576773506, &UGC_HAS_MODIFY_FINISHED},
		{0x793FF272D5B365F4, &_0x793FF272D5B365F4},
		{0x5A0A3D1A186A5508, &UGC_GET_MODIFY_RESULT},
		{0xA1E5E0204A6FCC70, &UGC_CLEAR_MODIFY_RESULT},
		{0xB746D20B17F2A229, &_0xB746D20B17F2A229},
		{0x63B406D7884BFA95, &_0x63B406D7884BFA95},
		{0x4D02279C83BE69FE, &_0x4D02279C83BE69FE},
		{0x597F8DBA9B206FC7, &UGC_GET_CREATOR_NUM},
		{0x5CAE833B0EE0C500, &UGC_POLICIES_MAKE_PRIVATE},
		{0x61A885D3F7CFEE9A, &UGC_CLEAR_OFFLINE_QUERY},
		{0xF98DDE0A8ED09323, &_0xF98DDE0A8ED09323},
		{0xFD75DABC0957BF33, &_0xFD75DABC0957BF33},
		{0xF53E48461B71EECB, &UGC_IS_LANGUAGE_SUPPORTED},
		{0x098AB65B9ED9A9EC, &_FACEBOOK_SET_HEIST_COMPLETE},
		{0xDC48473142545431, &_FACEBOOK_SET_CREATE_CHARACTER_COMPLETE},
		{0x0AE1F1653B554AB9, &_FACEBOOK_SET_MILESTONE_COMPLETE},
		{0x62B9FEC9A11F10EF, &_FACEBOOK_IS_SENDING_DATA},
		{0xA75E2B6733DA5142, &_FACEBOOK_DO_UNK_CHECK},
		{0x43865688AE10F0D7, &_FACEBOOK_IS_AVAILABLE},
		{0x16160DA74A8E74A2, &TEXTURE_DOWNLOAD_REQUEST},
		{0x0B203B4AFDE53A4F, &_0x0B203B4AFDE53A4F},
		{0x308F96458B7087CC, &UGC_TEXTURE_DOWNLOAD_REQUEST},
		{0x487EB90B98E9FB19, &TEXTURE_DOWNLOAD_RELEASE},
		{0x5776ED562C134687, &TEXTURE_DOWNLOAD_HAS_FAILED},
		{0x3448505B6E35262D, &char*},
		{0x8BD6C6DEA20E82C6, &_GET_STATUS_OF_TEXTURE_DOWNLOAD},
		{0x60EDD13EB3AC1FF3, &_0x60EDD13EB3AC1FF3},
		{0x82A2B386716608F1, &_NETWORK_SHOULD_SHOW_CONNECTIVITY_TROUBLESHOOTING},
		{0xEFFB25453D8600F9, &NETWORK_IS_CABLE_CONNECTED},
		{0x66B59CFFD78467AF, &_NETWORK_GET_ROS_PRIVILEGE_9},
		{0x606E4D3E3CCCF3EB, &_NETWORK_GET_ROS_PRIVILEGE_10},
		{0x8020A73847E0CA7D, &_NETWORK_HAS_PLAYER_BEEN_BANNED},
		{0xA0AD7E2AF5349F61, &_NETWORK_HAVE_SOCIAL_CLUB_PRIVILEGE},
		{0x5F91D5D0B36AA310, &_NETWORK_GET_ROS_PRIVILEGE_3},
		{0x422D396F80A96547, &_NETWORK_GET_ROS_PRIVILEGE_4},
		{0xA699957E60D80214, &NETWORK_HAS_ROS_PRIVILEGE},
		{0xC22912B1D85F26B1, &NETWORK_HAS_ROS_PRIVILEGE_END_DATE},
		{0x593570C289A77688, &_NETWORK_GET_ROS_PRIVILEGE_24},
		{0x91B87C55093DE351, &_NETWORK_GET_ROS_PRIVILEGE_25},
		{0x36391F397731595D, &_0x36391F397731595D},
		{0xDEB2B99A1AF1A2A6, &_0xDEB2B99A1AF1A2A6},
		{0x9465E683B12D3F6B, &_0x9465E683B12D3F6B},
		{0xCA59CCAE5D01E4CE, &_0xCA59CCAE5D01E4CE},
		{0x659CF2EF7F550C4F, &_NETWORK_HAS_GAME_BEEN_ALTERED},
		{0xB7C7F6AD6424304B, &_NETWORK_UPDATE_PLAYER_SCARS},
		{0xC505036A35AFD01B, &_0xC505036A35AFD01B},
		{0x267C78C60E806B9A, &_0x267C78C60E806B9A},
		{0x6BFF5F84102DF80A, &_0x6BFF5F84102DF80A},
		{0x5C497525F803486B, &_0x5C497525F803486B},
		{0x6FB7BB3607D27FA2, &_0x6FB7BB3607D27FA2},
		{0x45A83257ED02D9BC, &_0x45A83257ED02D9BC},
		{0x16D3D49902F697BB, &_0x16D3D49902F697BB},
		{0xD414BE129BB81B32, &_0xD414BE129BB81B32},
		{0x0E3A041ED6AC2B45, &_0x0E3A041ED6AC2B45},
		{0x350C23949E43686C, &_0x350C23949E43686C},
		{0xFF8FCF9FFC458A1C, &_NETWORK_GET_NUM_UNACKED_FOR_PLAYER},
		{0x3765C3A3E8192E10, &_0x3765C3A3E8192E10},
		{0x52C1EADAF7B10302, &_NETWORK_GET_OLDEST_RESEND_COUNT_FOR_PLAYER},
		{0x5626D9D6810730D5, &_NETWORK_REPORT_MYSELF},
		{0x64D779659BC37B19, &_0x64D779659BC37B19},
		{0x125E6D638B8605D4, &_NETWORK_GET_PLAYER_COORDS},
		{0x33DE49EDF4DDE77A, &_0x33DE49EDF4DDE77A},
		{0xAA5FAFCD2C5F5E47, &_0xAA5FAFCD2C5F5E47},
		{0xAEDF1BC1C133D6E3, &_0xAEDF1BC1C133D6E3},
		{0x2555CF7DA5473794, &_0x2555CF7DA5473794},
		{0x6FD992C4A1C1B986, &_0x6FD992C4A1C1B986},
		{0xDB663CC9FF3407A9, &_0xDB663CC9FF3407A9},
		{0x509D5878EB39E842, &CREATE_OBJECT},
		{0x9A294B2138ABB884, &CREATE_OBJECT_NO_OFFSET},
		{0x539E0AE3E6634B9F, &DELETE_OBJECT},
		{0x58A850EAEE20FAA3, &PLACE_OBJECT_ON_GROUND_PROPERLY},
		{0xD76EEEF746057FD6, &_PLACE_OBJECT_ON_GROUND_PROPERLY_2},
		{0xAFE24E4D29249E4A, &_0xAFE24E4D29249E4A},
		{0x2FDFF4107B8C1147, &SLIDE_OBJECT},
		{0x8A7391690F5AFD81, &SET_OBJECT_TARGETTABLE},
		{0x77F33F2CCF64B3AA, &_SET_OBJECT_SOMETHING},
		{0xE143FA2249364369, &GET_CLOSEST_OBJECT_OF_TYPE},
		{0x8ABFB70C49CC43E2, &HAS_OBJECT_BEEN_BROKEN},
		{0x761B0E69AC4D007E, &HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN},
		{0x46494A2475701343, &HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_COMPLETELY_DESTROYED},
		{0x2542269291C6AC84, &_0x2542269291C6AC84},
		{0x163E252DE035A133, &_GET_OBJECT_OFFSET_FROM_COORDS},
		{0x163F8B586BC95F2A, &GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE},
		{0xF82D8F1926A02C3D, &SET_STATE_OF_CLOSEST_DOOR_OF_TYPE},
		{0xEDC1A5B84AEF33FF, &GET_STATE_OF_CLOSEST_DOOR_OF_TYPE},
		{0x9B12F9A24FABEDB0, &_DOOR_CONTROL},
		{0x6F8838D03D1DC226, &ADD_DOOR_TO_SYSTEM},
		{0x464D8E1427156FE4, &REMOVE_DOOR_FROM_SYSTEM},
		{0x6BAB9442830C7F53, &DOOR_SYSTEM_SET_DOOR_STATE},
		{0x160AA1B32F6139B8, &DOOR_SYSTEM_GET_DOOR_STATE},
		{0x4BC2854478F3A749, &DOOR_SYSTEM_GET_DOOR_PENDING_STATE},
		{0x03C27E13B42A0E82, &DOOR_SYSTEM_SET_AUTOMATIC_RATE},
		{0x9BA001CB45CBF627, &DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE},
		{0xB6E6FBA95C7324AC, &DOOR_SYSTEM_SET_OPEN_RATIO},
		{0x65499865FCA6E5EC, &DOOR_SYSTEM_GET_OPEN_RATIO},
		{0xC485E07E4F0B7958, &DOOR_SYSTEM_SET_SPRING_REMOVED},
		{0xD9B71952F78A2640, &DOOR_SYSTEM_SET_HOLD_OPEN},
		{0xA85A21582451E951, &_0xA85A21582451E951},
		{0xC153C43EA202C8C1, &IS_DOOR_REGISTERED_WITH_SYSTEM},
		{0xC531EE8A1145A149, &IS_DOOR_CLOSED},
		{0xC7F29CA00F46350E, &_0xC7F29CA00F46350E},
		{0x701FDA1E82076BA4, &_0x701FDA1E82076BA4},
		{0xDF97CDD4FC08FD34, &DOOR_SYSTEM_GET_IS_PHYSICS_LOADED},
		{0x589F80B325CC82C5, &DOOR_SYSTEM_FIND_EXISTING_DOOR},
		{0x90E47239EA1980B8, &IS_GARAGE_EMPTY},
		{0x024A60DEB0EA69F0, &IS_PLAYER_ENTIRELY_INSIDE_GARAGE},
		{0x1761DC5D8471CBAA, &IS_PLAYER_PARTIALLY_INSIDE_GARAGE},
		{0x85B6C850546FDDE2, &ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE},
		{0x673ED815D6E323B7, &IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE},
		{0x372EF6699146A1E4, &IS_OBJECT_ENTIRELY_INSIDE_GARAGE},
		{0xF0EED5A6BC7B237A, &IS_OBJECT_PARTIALLY_INSIDE_GARAGE},
		{0xDA05194260CDCDF9, &_CLEAR_GARAGE_AREA},
		{0x190428512B240692, &_0x190428512B240692},
		{0x659F9D71F52843F8, &_0x659F9D71F52843F8},
		{0xF2E1A7133DD356A6, &ENABLE_SAVING_IN_GARAGE},
		{0x66A49D021870FE88, &_0x66A49D021870FE88},
		{0xBFA48E2FF417213F, &DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS},
		{0x2A70BAE8883E4C81, &IS_POINT_IN_ANGLED_AREA},
		{0x4D89D607CB3DD1D2, &_SET_OBJECT_CAN_CLIMB_ON},
		{0xF6DF6E90DE7DF90F, &SET_OBJECT_PHYSICS_PARAMS},
		{0xB6FBFD079B8D0596, &GET_OBJECT_FRAGMENT_DAMAGE_HEALTH},
		{0x406137F8EF90EAF5, &SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN},
		{0x397DC58FF00298D1, &IS_ANY_OBJECT_NEAR_POINT},
		{0x8C90FE4B381BA60A, &IS_OBJECT_NEAR_POINT},
		{0x4A39DB43E47CF3AA, &REMOVE_OBJECT_HIGH_DETAIL_MODEL},
		{0xE7E4C198B0185900, &_0xE7E4C198B0185900},
		{0xE05F6AEEFEB0BB02, &_0xE05F6AEEFEB0BB02},
		{0xF9C1681347C8BD15, &_0xF9C1681347C8BD15},
		{0xB252BC036B525623, &TRACK_OBJECT_VISIBILITY},
		{0x8B32ACE6326A7546, &IS_OBJECT_VISIBLE},
		{0xC6033D32241F6FB5, &_0xC6033D32241F6FB5},
		{0xEB6F1A9B5510A5D2, &_0xEB6F1A9B5510A5D2},
		{0xABDABF4E1EDECBFA, &_SET_UNK_GLOBAL_BOOL_RELATED_TO_DAMAGE},
		{0xBCE595371A5FBAAF, &_SET_CREATE_WEAPON_OBJECT_LIGHT_SOURCE},
		{0xB48FCED898292E52, &GET_RAYFIRE_MAP_OBJECT},
		{0x5C29F698D404C5E1, &SET_STATE_OF_RAYFIRE_MAP_OBJECT},
		{0x899BA936634A322E, &GET_STATE_OF_RAYFIRE_MAP_OBJECT},
		{0x52AF537A0C5B8AAD, &DOES_RAYFIRE_MAP_OBJECT_EXIST},
		{0x260EE4FDBDF4DB01, &GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE},
		{0xFBA08C503DD5FA58, &CREATE_PICKUP},
		{0x891804727E0A98B7, &CREATE_PICKUP_ROTATE},
		{0x394CD08E31313C28, &_0x394CD08E31313C28},
		{0x826D1EE4D1CAFC78, &_0x826D1EE4D1CAFC78},
		{0x673966A0C0FD7171, &CREATE_AMBIENT_PICKUP},
		{0x1E3F1B1B891A2AAA, &_0x1E3F1B1B891A2AAA},
		{0x2EAF1FDB2FB55698, &CREATE_PORTABLE_PICKUP},
		{0x125494B98A21AAF7, &_CREATE_PORTABLE_PICKUP_2},
		{0x8DC39368BDD57755, &ATTACH_PORTABLE_PICKUP_TO_PED},
		{0xCF463D1E9A0AECB1, &DETACH_PORTABLE_PICKUP_FROM_PED},
		{0x867458251D47CCB2, &_HIDE_PICKUP},
		{0x0BF3B3BD47D79C08, &_0x0BF3B3BD47D79C08},
		{0x78857FC65CADB909, &_0x78857FC65CADB909},
		{0x6E16BC2503FF1FF0, &GET_SAFE_PICKUP_COORDS},
		{0xD4A7A435B3710D05, &_0xD4A7A435B3710D05},
		{0xB7C6D80FB371659A, &_0xB7C6D80FB371659A},
		{0x225B8B35C88029B3, &GET_PICKUP_COORDS},
		{0x8DCA505A5C196F05, &_0x8DCA505A5C196F05},
		{0x27F9D613092159CF, &REMOVE_ALL_PICKUPS_OF_TYPE},
		{0x80EC48E6679313F9, &HAS_PICKUP_BEEN_COLLECTED},
		{0x3288D8ACAECD2AB2, &REMOVE_PICKUP},
		{0x0589B5E791CE9B2B, &CREATE_MONEY_PICKUPS},
		{0xAFC1CA75AD4074D1, &DOES_PICKUP_EXIST},
		{0xD9EFB6DBF7DAAEA3, &DOES_PICKUP_OBJECT_EXIST},
		{0x5099BC55630B25AE, &GET_PICKUP_OBJECT},
		{0xFC481C641EBBD27D, &_0xFC481C641EBBD27D},
		{0x0378C08504160D0D, &_0x0378C08504160D0D},
		{0xF9C36251F6E48E33, &DOES_PICKUP_OF_TYPE_EXIST_IN_AREA},
		{0x78015C9B4B3ECC9D, &SET_PICKUP_REGENERATION_TIME},
		{0x758A5C1B3B1E1990, &_0x758A5C1B3B1E1990},
		{0x616093EC6B139DD9, &_0x616093EC6B139DD9},
		{0x88EAEC617CD26926, &_SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL},
		{0xFDC07C58E8AAB715, &_0xFDC07C58E8AAB715},
		{0x53E0DF1A2A3CF0CA, &SET_TEAM_PICKUP_OBJECT},
		{0x92AEFB5F6E294023, &_0x92AEFB5F6E294023},
		{0x0596843B34B95CE5, &_0x0596843B34B95CE5},
		{0xA08FE5E49BDC39DD, &_0xA08FE5E49BDC39DD},
		{0x62454A641B41F3C5, &_0x62454A641B41F3C5},
		{0x39A5FB7EAF150840, &_0x39A5FB7EAF150840},
		{0xDB41D07A45A6D4B7, &_0xDB41D07A45A6D4B7},
		{0x318516E02DE3ECE2, &SET_PICKUP_GENERATION_RANGE_MULTIPLIER},
		{0xB3ECA65C7317F174, &_GET_PICKUP_GENERATION_RANGE_MULTIPLIER},
		{0x31F924B53EADDF65, &_0x31F924B53EADDF65},
		{0x1C1B69FAE509BA97, &_0x1C1B69FAE509BA97},
		{0x858EC9FD25DE04AA, &_0x858EC9FD25DE04AA},
		{0x3ED2B83AB2E82799, &_0x3ED2B83AB2E82799},
		{0x8881C98A31117998, &_0x8881C98A31117998},
		{0x8CFF648FBD7330F1, &_0x8CFF648FBD7330F1},
		{0x46F3ADD1E2D5BAF2, &_0x46F3ADD1E2D5BAF2},
		{0x641F272B52E2F0F8, &_0x641F272B52E2F0F8},
		{0x4C134B4DF76025D0, &_0x4C134B4DF76025D0},
		{0xAA059C615DE9DD03, &_0xAA059C615DE9DD03},
		{0xF92099527DB8E2A7, &_0xF92099527DB8E2A7},
		{0xA2C1F5E92AFE49ED, &_0xA2C1F5E92AFE49ED},
		{0x762DB2D380B48D04, &_0x762DB2D380B48D04},
		{0x3430676B11CDF21D, &_HIGHLIGHT_PLACEMENT_COORDS},
		{0x7813E8B8C4AE4799, &_0x7813E8B8C4AE4799},
		{0xBFFE53AE7E67FCDC, &_0xBFFE53AE7E67FCDC},
		{0xD05A3241B9A86F19, &_0xD05A3241B9A86F19},
		{0xB2D0BDE54F0E8E5A, &_0xB2D0BDE54F0E8E5A},
		{0x08F96CA6C551AD51, &GET_WEAPON_TYPE_FROM_PICKUP_TYPE},
		{0xD6429A016084F1A5, &_0xD6429A016084F1A5},
		{0x11D1E53A726891FE, &IS_PICKUP_WEAPON_OBJECT_VALID},
		{0xE84EB93729C5F36A, &_GET_OBJECT_TEXTURE_VARIATION},
		{0x971DA0055324D033, &_SET_OBJECT_TEXTURE_VARIATION},
		{0xF12E33034D887F66, &_0xF12E33034D887F66},
		{0x5F048334B4A4E774, &_SET_OBJECT_LIGHT_COLOR},
		{0xADF084FB8F075D06, &_0xADF084FB8F075D06},
		{0x3B2FD68DB5F8331C, &_0x3B2FD68DB5F8331C},
		{0x96EE0EBA0163DF80, &_SET_OBJECT_STUNT_PROP_SPEEDUP},
		{0xDF6CA0330F2E737B, &_SET_OBJECT_STUNT_PROP_DURATION},
		{0x5EAAD83F8CFB4575, &_GET_PICKUP_HASH},
		{0xF538081986E49E9D, &SET_FORCE_OBJECT_THIS_FRAME},
		{0xADBE4809F19F927A, &_MARK_OBJECT_FOR_DELETION},
		{0x8CAAB2BD3EA58BD4, &_0x8CAAB2BD3EA58BD4},
		{0x63ECF581BC70E363, &_0x63ECF581BC70E363},
		{0x911024442F4898F0, &_SET_ENABLE_ARENA_PROP_PHYSICS},
		{0xB20834A7DD3D8896, &_SET_ENABLE_ARENA_PROP_PHYSICS_ON_PED},
		{0x734E1714D077DA9A, &_0x734E1714D077DA9A},
		{0x1A6CBB06E2D0D79D, &_0x1A6CBB06E2D0D79D},
		{0x43C677F1E1158005, &_GET_IS_ARENA_PROP_PHYSICS_DISABLED},
		{0x3BD770D281982DB5, &_0x3BD770D281982DB5},
		{0x1C57C94A6446492A, &_0x1C57C94A6446492A},
		{0xB5B7742424BD4445, &_0xB5B7742424BD4445},
		{0x1CEA6BFDF248E5D9, &IS_CONTROL_ENABLED},
		{0xF3A21BCD95725A4A, &IS_CONTROL_PRESSED},
		{0x648EE3E7F38877DD, &IS_CONTROL_RELEASED},
		{0x580417101DDB492F, &IS_CONTROL_JUST_PRESSED},
		{0x50F940259D3841E6, &IS_CONTROL_JUST_RELEASED},
		{0xD95E79E8686D2C27, &GET_CONTROL_VALUE},
		{0xEC3C9B8D5327B563, &GET_CONTROL_NORMAL},
		{0x5B73C77D9EB66E24, &_0x5B73C77D9EB66E24},
		{0x5B84D09CEC5209C5, &GET_CONTROL_UNBOUND_NORMAL},
		{0xE8A25867FBA3B05E, &_SET_CONTROL_NORMAL},
		{0xE2587F8CBBD87B1D, &IS_DISABLED_CONTROL_PRESSED},
		{0xFB6C4072E9A32E92, &IS_DISABLED_CONTROL_RELEASED},
		{0x91AEF906BCA88877, &IS_DISABLED_CONTROL_JUST_PRESSED},
		{0x305C8DCD79DA8B0F, &IS_DISABLED_CONTROL_JUST_RELEASED},
		{0x11E65974A982637C, &GET_DISABLED_CONTROL_NORMAL},
		{0x4F8A26A890FD62FB, &GET_DISABLED_CONTROL_UNBOUND_NORMAL},
		{0xD7D22F5592AED8BA, &_0xD7D22F5592AED8BA},
		{0xA571D46727E2B718, &_IS_INPUT_DISABLED},
		{0x13337B38DB572509, &_IS_INPUT_JUST_DISABLED},
		{0xFC695459D4D0E219, &_SET_CURSOR_LOCATION},
		{0x23F09EADC01449D6, &_0x23F09EADC01449D6},
		{0x6CD79468A1E595C6, &_0x6CD79468A1E595C6},
		{0x0499D7B09FC9B407, &char*},
		{0x80C2FD58D720C801, &char*},
		{0x8290252FFF36ACB5, &_SET_CONTROL_GROUP_COLOR},
		{0xCB0360EFEFB2580D, &_0xCB0360EFEFB2580D},
		{0x48B3886C1358D0D5, &SET_PAD_SHAKE},
		{0x14D29BB12D47F68C, &_0x14D29BB12D47F68C},
		{0x38C16A305E8CDC8D, &STOP_PAD_SHAKE},
		{0xF239400E16C23E08, &_0xF239400E16C23E08},
		{0xA0CEFCEA390AAB9B, &_0xA0CEFCEA390AAB9B},
		{0x77B612531280010D, &IS_LOOK_INVERTED},
		{0xE1615EC03B3BB4FD, &_0xE1615EC03B3BB4FD},
		{0xBB41AFBBBC0A0287, &GET_LOCAL_PLAYER_AIM_STATE},
		{0x59B9A7AF4C95133C, &_GET_LOCAL_PLAYER_AIM_STATE_2},
		{0x25AAA32BDC98F2A3, &_0x25AAA32BDC98F2A3},
		{0x0F70731BACCFBB96, &GET_IS_USING_ALTERNATE_DRIVEBY},
		{0xFC859E2374407556, &GET_ALLOW_MOVEMENT_WHILE_ZOOMED},
		{0x798FDEB5B1575088, &SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED},
		{0xEDE476E5EE29EDB1, &SET_INPUT_EXCLUSIVE},
		{0xFE99B66D079CF6BC, &DISABLE_CONTROL_ACTION},
		{0x351220255D64C155, &ENABLE_CONTROL_ACTION},
		{0x5F4B6931816E599B, &DISABLE_ALL_CONTROL_ACTIONS},
		{0xA5FFE9B05F199DE7, &ENABLE_ALL_CONTROL_ACTIONS},
		{0x3D42B92563939375, &_SWITCH_TO_INPUT_MAPPING_SCHEME},
		{0x4683149ED1DDE7A1, &_SWITCH_TO_INPUT_MAPPING_SCHEME_2},
		{0x643ED62D5EA3BEBD, &_RESET_INPUT_MAPPING_SCHEME},
		{0x7F4724035FDCA1DD, &_0x7F4724035FDCA1DD},
		{0xBF1A602B5BA52FEE, &SET_ROADS_IN_AREA},
		{0x1A5AA1208AF5DB59, &SET_ROADS_IN_ANGLED_AREA},
		{0x34F060F4BF92E018, &SET_PED_PATHS_IN_AREA},
		{0xB61C8E878A4199CA, &GET_SAFE_COORD_FOR_PED},
		{0x240A18690AE96513, &GET_CLOSEST_VEHICLE_NODE},
		{0x2EABE3B06F58C1BE, &GET_CLOSEST_MAJOR_VEHICLE_NODE},
		{0xFF071FB798B803B0, &GET_CLOSEST_VEHICLE_NODE_WITH_HEADING},
		{0xE50E52416CCF948B, &GET_NTH_CLOSEST_VEHICLE_NODE},
		{0x22D7275A79FE8215, &GET_NTH_CLOSEST_VEHICLE_NODE_ID},
		{0x80CA6A8B6C094CC4, &GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING},
		{0x6448050E9C2A7207, &GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING},
		{0x45905BE8654AE067, &GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION},
		{0x0568566ACBB5DEDC, &GET_VEHICLE_NODE_PROPERTIES},
		{0x1EAF30FCFBF5AF74, &IS_VEHICLE_NODE_ID_VALID},
		{0x703123E5E7D429C2, &GET_VEHICLE_NODE_POSITION},
		{0xA2AE5C478B96E3B6, &GET_VEHICLE_NODE_IS_GPS_ALLOWED},
		{0x4F5070AA58F69279, &GET_VEHICLE_NODE_IS_SWITCHED_OFF},
		{0x132F52BBA570FE92, &GET_CLOSEST_ROAD},
		{0x228E5C6AD4D74BFD, &_0x228E5C6AD4D74BFD},
		{0xF7B79A50B905A30D, &_ARE_PATH_NODES_LOADED_IN_AREA},
		{0x07FB139B592FA687, &_0x07FB139B592FA687},
		{0x1EE7063B80FFC77C, &SET_ROADS_BACK_TO_ORIGINAL},
		{0x0027501B9F3B407E, &SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA},
		{0x0B919E1FB47CC4E0, &SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME},
		{0xAA76052DDA9BFC3E, &_0xAA76052DDA9BFC3E},
		{0xE04B48F2CC926253, &SET_PED_PATHS_BACK_TO_ORIGINAL},
		{0x93E0DB8440B73A7D, &GET_RANDOM_VEHICLE_NODE},
		{0x2EB41072B4C1E4C0, &GET_STREET_NAME_AT_COORD},
		{0xF90125F1F79ECDF8, &GENERATE_DIRECTIONS_TO_COORD},
		{0x72751156E7678833, &SET_IGNORE_NO_GPS_FLAG},
		{0x1FC289A0C3FF470F, &_SET_IGNORE_SECONDARY_ROUTE_NODES},
		{0xDC20483CD3DD5201, &SET_GPS_DISABLED_ZONE},
		{0xBBB45C3CF5C8AA85, &GET_GPS_BLIP_ROUTE_LENGTH},
		{0xF3162836C28F9DA5, &_0xF3162836C28F9DA5},
		{0x869DAACBBE9FA006, &GET_GPS_BLIP_ROUTE_FOUND},
		{0xA0F8A7517A273C05, &_GET_ROAD_SIDE_POINT_WITH_HEADING},
		{0x16F46FB18C8009E4, &_GET_POINT_ON_ROAD_SIDE},
		{0x125BF4ABFC536B09, &IS_POINT_ON_ROAD},
		{0xD3A6A0EF48823A8C, &GET_NEXT_GPS_DISABLED_ZONE_INDEX},
		{0xD0BC1C6FB18EE154, &SET_GPS_DISABLED_ZONE_AT_INDEX},
		{0x2801D0012266DF07, &CLEAR_GPS_DISABLED_ZONE_AT_INDEX},
		{0x387EAD7EE42F6685, &ADD_NAVMESH_REQUIRED_REGION},
		{0x916F0A3CDEC3445E, &REMOVE_NAVMESH_REQUIRED_REGIONS},
		{0x705A844002B39DC0, &_IS_NAVMESH_REQUIRED_REGION_OWNED_BY_ANY_THREAD},
		{0x4C8872D8CDBE1B8B, &DISABLE_NAVMESH_IN_AREA},
		{0x8415D95B194A3AEA, &ARE_ALL_NAVMESH_REGIONS_LOADED},
		{0xF813C7E63F9062A5, &IS_NAVMESH_LOADED_IN_AREA},
		{0x01708E8DD3FF8C65, &_0x01708E8DD3FF8C65},
		{0xFCD5C8E06E502F5A, &ADD_NAVMESH_BLOCKING_OBJECT},
		{0x109E99373F290687, &UPDATE_NAVMESH_BLOCKING_OBJECT},
		{0x46399A7895957C0E, &REMOVE_NAVMESH_BLOCKING_OBJECT},
		{0x0EAEB0DB4B132399, &DOES_NAVMESH_BLOCKING_OBJECT_EXIST},
		{0x29C24BFBED8AB8FB, &_GET_HEIGHTMAP_TOP_Z_FOR_POSITION},
		{0x8ABE8608576D9CE3, &_GET_HEIGHTMAP_TOP_Z_FOR_AREA},
		{0x336511A34F2E5185, &_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION},
		{0x3599D741C9AC6310, &_GET_HEIGHTMAP_BOTTOM_Z_FOR_AREA},
		{0xADD95C7005C4A197, &CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS},
		{0xD49F9B0955C367DE, &CREATE_PED},
		{0x9614299DCB53E54B, &DELETE_PED},
		{0xEF29A16337FACADB, &CLONE_PED},
		{0x668FD40BCBA5DE48, &_CLONE_PED_EX},
		{0xE952D6431689AD9A, &CLONE_PED_TO_TARGET},
		{0x148B08C2D2ACB884, &_CLONE_PED_TO_TARGET_EX},
		{0xA3EE4A07279BB9DB, &IS_PED_IN_VEHICLE},
		{0x796D90EFB19AA332, &IS_PED_IN_MODEL},
		{0x997ABD671D25CA0B, &IS_PED_IN_ANY_VEHICLE},
		{0x16EC4839969F9F5E, &IS_COP_PED_IN_AREA_3D},
		{0x84A2DD9AC37C35C1, &IS_PED_INJURED},
		{0x5983BB449D7FDB12, &IS_PED_HURT},
		{0xD839450756ED5A80, &IS_PED_FATALLY_INJURED},
		{0x3317DEDB88C95038, &IS_PED_DEAD_OR_DYING},
		{0xE0A0AEC214B1FABA, &IS_CONVERSATION_PED_DEAD},
		{0x3998B1276A3300E5, &IS_PED_AIMING_FROM_COVER},
		{0x24B100C68C645951, &IS_PED_RELOADING},
		{0x12534C348C6CB68B, &IS_PED_A_PLAYER},
		{0x7DD959874C1FD534, &CREATE_PED_INSIDE_VEHICLE},
		{0xAA5A7ECE2AA8FE70, &SET_PED_DESIRED_HEADING},
		{0xFF287323B0E2C69A, &_FREEZE_PED_CAMERA_ROTATION},
		{0xD71649DB0A545AA3, &IS_PED_FACING_PED},
		{0x4E209B2C1EAD5159, &IS_PED_IN_MELEE_COMBAT},
		{0x530944F6F4B8A214, &IS_PED_STOPPED},
		{0x7E9DFE24AC1E58EF, &IS_PED_SHOOTING_IN_AREA},
		{0xA0D3D71EA1086C55, &IS_ANY_PED_SHOOTING_IN_AREA},
		{0x34616828CD07F1A1, &IS_PED_SHOOTING},
		{0x7AEFB85C1D49DEB6, &SET_PED_ACCURACY},
		{0x37F4AD56ECBC0CD6, &GET_PED_ACCURACY},
		{0x87DDEB611B329A9C, &_0x87DDEB611B329A9C},
		{0xC9D55B1A358A5BF7, &IS_PED_MODEL},
		{0x2D05CED3A38D0F3A, &EXPLODE_PED_HEAD},
		{0xAC6D445B994DF95E, &REMOVE_PED_ELEGANTLY},
		{0x5BA652A0CD14DF2F, &ADD_ARMOUR_TO_PED},
		{0xCEA04D83135264CC, &SET_PED_ARMOUR},
		{0xF75B0D629E1C063D, &SET_PED_INTO_VEHICLE},
		{0x3C028C636A414ED9, &SET_PED_ALLOW_VEHICLES_OVERRIDE},
		{0x3E8349C08E4B82E4, &CAN_CREATE_RANDOM_PED},
		{0xB4AC7D0CF06BFE8F, &CREATE_RANDOM_PED},
		{0x9B62392B474F44A0, &CREATE_RANDOM_PED_AS_DRIVER},
		{0xB8EB95E5B4E56978, &CAN_CREATE_RANDOM_DRIVER},
		{0xEACEEDA81751915C, &CAN_CREATE_RANDOM_BIKE_RIDER},
		{0x9E8C908F41584ECD, &SET_PED_MOVE_ANIMS_BLEND_OUT},
		{0xC1670E958EEE24E5, &SET_PED_CAN_BE_DRAGGED_OUT},
		{0xF2BEBCDFAFDAA19E, &_0xF2BEBCDFAFDAA19E},
		{0x6D9F5FAA7488BA46, &IS_PED_MALE},
		{0xB980061DA992779D, &IS_PED_HUMAN},
		{0x9A9112A0FE9A4713, &GET_VEHICLE_PED_IS_IN},
		{0xBB8DE8CF6A8DD8BB, &RESET_PED_LAST_VEHICLE},
		{0x95E3D6257B166CF2, &SET_PED_DENSITY_MULTIPLIER_THIS_FRAME},
		{0x7A556143A1C03898, &SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME},
		{0x5A7F62FDA59759BD, &_0x5A7F62FDA59759BD},
		{0x5086C7843552CF85, &SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME},
		{0xEE01041D559983EA, &SET_PED_NON_CREATION_AREA},
		{0x2E05208086BA0651, &CLEAR_PED_NON_CREATION_AREA},
		{0x4759CC730F947C81, &_0x4759CC730F947C81},
		{0x460BC76A0E10655E, &IS_PED_ON_MOUNT},
		{0xE7E11B8DCBED1058, &GET_MOUNT},
		{0x67722AEB798E5FAB, &IS_PED_ON_VEHICLE},
		{0xEC5F66E459AF3BB2, &IS_PED_ON_SPECIFIC_VEHICLE},
		{0xA9C8960E8684C1B5, &SET_PED_MONEY},
		{0x3F69145BBA87BAE7, &GET_PED_MONEY},
		{0xFF4803BC019852D9, &_0xFF4803BC019852D9},
		{0x6B0E6172C9A4D902, &_0x6B0E6172C9A4D902},
		{0x9911F4A24485F653, &_0x9911F4A24485F653},
		{0xEBD76F2359F190AC, &SET_PED_SUFFERS_CRITICAL_HITS},
		{0xAFC976FD0580C7B3, &_0xAFC976FD0580C7B3},
		{0xA808AA1D79230FC2, &IS_PED_SITTING_IN_VEHICLE},
		{0x826AA586EDB9FEF8, &IS_PED_SITTING_IN_ANY_VEHICLE},
		{0x01FEE67DB37F59B2, &IS_PED_ON_FOOT},
		{0x94495889E22C6479, &IS_PED_ON_ANY_BIKE},
		{0xC70B5FAE151982D8, &IS_PED_PLANTING_BOMB},
		{0xCD5003B097200F36, &GET_DEAD_PED_PICKUP_COORDS},
		{0x2E0E1C2B4F6CB339, &IS_PED_IN_ANY_BOAT},
		{0xFBFC01CCFB35D99E, &IS_PED_IN_ANY_SUB},
		{0x298B91AE825E5705, &IS_PED_IN_ANY_HELI},
		{0x5FFF4CFC74D8FB80, &IS_PED_IN_ANY_PLANE},
		{0x9134873537FA419C, &IS_PED_IN_FLYING_VEHICLE},
		{0x56CEF0AC79073BDE, &SET_PED_DIES_IN_WATER},
		{0xD718A22995E2B4BC, &SET_PED_DIES_IN_SINKING_VEHICLE},
		{0x9483AF821605B1D8, &GET_PED_ARMOUR},
		{0xEDF4079F9D54C9A1, &SET_PED_STAY_IN_VEHICLE_WHEN_JACKED},
		{0xC7EF1BA83230BA07, &SET_PED_CAN_BE_SHOT_IN_VEHICLE},
		{0xD75960F6BD9EA49C, &GET_PED_LAST_DAMAGE_BONE},
		{0x8EF6B7AC68E2F01B, &CLEAR_PED_LAST_DAMAGE_BONE},
		{0x1B1E2A40A65B8521, &SET_AI_WEAPON_DAMAGE_MODIFIER},
		{0xEA16670E7BA4743C, &RESET_AI_WEAPON_DAMAGE_MODIFIER},
		{0x66460DEDDD417254, &SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER},
		{0x46E56A7CD1D63C3F, &RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER},
		{0x2F3C3D9F50681DE4, &_0x2F3C3D9F50681DE4},
		{0x63F58F7C80513AAD, &SET_PED_CAN_BE_TARGETTED},
		{0xBF1CA77833E58F2C, &SET_PED_CAN_BE_TARGETTED_BY_TEAM},
		{0x66B57B72E0836A76, &SET_PED_CAN_BE_TARGETTED_BY_PLAYER},
		{0x061CB768363D6424, &_0x061CB768363D6424},
		{0xFD325494792302D7, &_0xFD325494792302D7},
		{0x0BD04E29640C9C12, &IS_PED_IN_ANY_POLICE_VEHICLE},
		{0x16E42E800B472221, &FORCE_PED_TO_OPEN_PARACHUTE},
		{0x7DCE8BDA0F1C1200, &IS_PED_IN_PARACHUTE_FREE_FALL},
		{0xFB92A102F1C4DFA3, &IS_PED_FALLING},
		{0xCEDABC5900A0BF97, &IS_PED_JUMPING},
		{0x412F1364FA066CFB, &_0x412F1364FA066CFB},
		{0x451D05012CCEC234, &_0x451D05012CCEC234},
		{0x53E8CB4F48BFE623, &IS_PED_CLIMBING},
		{0x117C70D1F5730B5E, &IS_PED_VAULTING},
		{0x5527B8246FEF9B11, &IS_PED_DIVING},
		{0x433DDFFE2044B636, &IS_PED_JUMPING_OUT_OF_VEHICLE},
		{0x26AF0E8E30BD2A2C, &_IS_PED_OPENING_A_DOOR},
		{0x79CFD9827CC979B6, &GET_PED_PARACHUTE_STATE},
		{0x8B9F1FC6AE8166C0, &GET_PED_PARACHUTE_LANDING_TYPE},
		{0x333FC8DB079B7186, &SET_PED_PARACHUTE_TINT_INDEX},
		{0xEAF5F7E5AE7C6C9D, &GET_PED_PARACHUTE_TINT_INDEX},
		{0xE88DA0751C22A2AD, &SET_PED_RESERVE_PARACHUTE_TINT_INDEX},
		{0x8C4F3BF23B6237DB, &_CREATE_PARACHUTE_OBJECT},
		{0x030983CA930B692D, &SET_PED_DUCKING},
		{0xD125AE748725C6BC, &IS_PED_DUCKING},
		{0x6E575D6A898AB852, &IS_PED_IN_ANY_TAXI},
		{0xF107E836A70DCE05, &SET_PED_ID_RANGE},
		{0x52D59AB61DDC05DD, &SET_PED_HIGHLY_PERCEPTIVE},
		{0x2F074C904D85129E, &_0x2F074C904D85129E},
		{0xEC4B4B3B9908052A, &_0xEC4B4B3B9908052A},
		{0x733C87D4CE22BEA2, &_0x733C87D4CE22BEA2},
		{0xF29CF591C4BF6CEE, &SET_PED_SEEING_RANGE},
		{0x33A8F7F7D5F7F33C, &SET_PED_HEARING_RANGE},
		{0x2DB492222FB21E26, &SET_PED_VISUAL_FIELD_MIN_ANGLE},
		{0x70793BDCA1E854D4, &SET_PED_VISUAL_FIELD_MAX_ANGLE},
		{0x7A276EB2C224D70F, &SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE},
		{0x78D0B67629D75856, &SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE},
		{0x9C74B0BC831B753A, &SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE},
		{0x3B6405E8AB34A907, &SET_PED_VISUAL_FIELD_CENTER_ANGLE},
		{0xEF2C71A32CAD5FBD, &_GET_PED_VISUAL_FIELD_CENTER_ANGLE},
		{0x88CBB5CEB96B7BD2, &SET_PED_STEALTH_MOVEMENT},
		{0x7C2AC9CA66575FBF, &GET_PED_STEALTH_MOVEMENT},
		{0x90370EBE0FEE1A3D, &CREATE_GROUP},
		{0x2A7819605465FBCE, &SET_PED_AS_GROUP_LEADER},
		{0x9F3480FE65DB31B5, &SET_PED_AS_GROUP_MEMBER},
		{0x2E2F4240B3F24647, &SET_PED_CAN_TELEPORT_TO_GROUP_LEADER},
		{0x8EB2F69076AF7053, &REMOVE_GROUP},
		{0xED74007FFB146BC2, &REMOVE_PED_FROM_GROUP},
		{0x9BB01E3834671191, &IS_PED_GROUP_MEMBER},
		{0x1C86D8AEF8254B78, &IS_PED_HANGING_ON_TO_VEHICLE},
		{0x4102C7858CFEE4E4, &SET_GROUP_SEPARATION_RANGE},
		{0xFA0675AB151073FA, &SET_PED_MIN_GROUND_TIME_FOR_STUNGUN},
		{0xD6A86331A537A7B9, &IS_PED_PRONE},
		{0x4859F1FC66A6278E, &IS_PED_IN_COMBAT},
		{0xEAD42DE3610D0721, &CAN_PED_IN_COMBAT_SEE_TARGET},
		{0xB2C086CC1BF8F2BF, &IS_PED_DOING_DRIVEBY},
		{0x4AE4FF911DFB61DA, &IS_PED_JACKING},
		{0x9A497FE2DF198913, &IS_PED_BEING_JACKED},
		{0x4FBACCE3B4138EE8, &IS_PED_BEING_STUNNED},
		{0x9B128DC36C1E04CF, &GET_PEDS_JACKER},
		{0x5486A79D9FBD342D, &GET_JACK_TARGET},
		{0xBBCCE00B381F8482, &IS_PED_FLEEING},
		{0x60DFD0691A170B88, &IS_PED_IN_COVER},
		{0x845333B3150583AB, &IS_PED_IN_COVER_FACING_LEFT},
		{0x6A03BF943D767C93, &IS_PED_IN_HIGH_COVER},
		{0x9F65DBC537E59AD5, &IS_PED_GOING_INTO_COVER},
		{0xAAD6D1ACF08F4612, &SET_PED_PINNED_DOWN},
		{0x6F4C85ACD641BCD2, &GET_SEAT_PED_IS_TRYING_TO_ENTER},
		{0x814FA8BE5449445D, &GET_VEHICLE_PED_IS_TRYING_TO_ENTER},
		{0x93C8B64DEB84728C, &GET_PED_SOURCE_OF_DEATH},
		{0x16FFE42AB2D2DC59, &GET_PED_CAUSE_OF_DEATH},
		{0x1E98817B311AE98A, &GET_PED_TIME_OF_DEATH},
		{0x5407B7288D0478B7, &_0x5407B7288D0478B7},
		{0x336B3D200AB007CB, &_0x336B3D200AB007CB},
		{0xADB3F206518799E8, &SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH},
		{0xC80A74AC829DDD92, &SET_PED_RELATIONSHIP_GROUP_HASH},
		{0xBF25EB89375A37AD, &SET_RELATIONSHIP_BETWEEN_GROUPS},
		{0x5E29243FB56FC6D4, &CLEAR_RELATIONSHIP_BETWEEN_GROUPS},
		{0xF372BC22FCB88606, &ADD_RELATIONSHIP_GROUP},
		{0xB6BA2444AB393DA2, &REMOVE_RELATIONSHIP_GROUP},
		{0xCC6E3B6BB69501F1, &_DOES_RELATIONSHIP_GROUP_EXIST},
		{0xEBA5AD3A0EAF7121, &GET_RELATIONSHIP_BETWEEN_PEDS},
		{0x42FDD0F017B1E38E, &GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH},
		{0x7DBDD04862D95F04, &GET_PED_RELATIONSHIP_GROUP_HASH},
		{0x9E6B70061662AE5C, &GET_RELATIONSHIP_BETWEEN_GROUPS},
		{0x5615E0C5EB2BC6E2, &_0x5615E0C5EB2BC6E2},
		{0xAD27D957598E49E9, &_0xAD27D957598E49E9},
		{0x4328652AE5769C71, &SET_PED_CAN_BE_TARGETED_WITHOUT_LOS},
		{0x112942C6E708F70B, &SET_PED_TO_INFORM_RESPECTED_FRIENDS},
		{0x625B774D75C87068, &IS_PED_RESPONDING_TO_EVENT},
		{0x9AC577F5A12AD8A9, &SET_PED_FIRING_PATTERN},
		{0x614DA022990752DC, &SET_PED_SHOOT_RATE},
		{0xFF41B4B141ED981C, &SET_COMBAT_FLOAT},
		{0x52DFF8A10508090A, &GET_COMBAT_FLOAT},
		{0x8DE69FE35CA09A45, &GET_GROUP_SIZE},
		{0x7C6B0C22F9F40BBE, &DOES_GROUP_EXIST},
		{0xF162E133B4E7A675, &GET_PED_GROUP_INDEX},
		{0x5891CAC5D4ACFF74, &IS_PED_IN_GROUP},
		{0x6A3975DEA89F9A17, &GET_PLAYER_PED_IS_FOLLOWING},
		{0xCE2F5FC3AF7E8C1E, &SET_GROUP_FORMATION},
		{0x1D9D45004C28C916, &SET_GROUP_FORMATION_SPACING},
		{0x63DAB4CCB3273205, &RESET_GROUP_FORMATION_DEFAULT_SPACING},
		{0x6094AD011A2EA87D, &GET_VEHICLE_PED_IS_USING},
		{0xF92691AED837A5FC, &GET_VEHICLE_PED_IS_ENTERING},
		{0x9FF447B6B6AD960A, &SET_PED_GRAVITY},
		{0x697157CED63F18D4, &APPLY_DAMAGE_TO_PED},
		{0x36B77BB84687C318, &_GET_TIME_OF_LAST_PED_WEAPON_DAMAGE},
		{0xDA1F1B7BE1A8766F, &SET_PED_ALLOWED_TO_DUCK},
		{0x3DBFC55D5C9BB447, &SET_PED_NEVER_LEAVES_GROUP},
		{0xFF059E1E4C01E63C, &GET_PED_TYPE},
		{0xBB03C38DD3FB7FFD, &SET_PED_AS_COP},
		{0xF5F6378C4F3419D3, &SET_PED_MAX_HEALTH},
		{0x4700A416E8324EF3, &GET_PED_MAX_HEALTH},
		{0x43C851690662113D, &SET_PED_MAX_TIME_IN_WATER},
		{0x6BA428C528D9E522, &SET_PED_MAX_TIME_UNDERWATER},
		{0x2735233A786B1BEF, &_0x2735233A786B1BEF},
		{0x952F06BEECD775CC, &SET_PED_VEHICLE_FORCED_SEAT_USAGE},
		{0xE6CA85E7259CE16B, &CLEAR_ALL_PED_VEHICLE_FORCED_SEAT_USAGE},
		{0xB282749D5E028163, &_0xB282749D5E028163},
		{0x7A6535691B477C48, &SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE},
		{0x51AC07A44D4F5B8A, &CAN_KNOCK_PED_OFF_VEHICLE},
		{0x45BBCBA77C29A841, &KNOCK_PED_OFF_VEHICLE},
		{0x87052FE446E07247, &SET_PED_COORDS_NO_GANG},
		{0x51455483CF23ED97, &GET_PED_AS_GROUP_MEMBER},
		{0x5CCE68DBD5FE93EC, &GET_PED_AS_GROUP_LEADER},
		{0x971D38760FBC02EF, &SET_PED_KEEP_TASK},
		{0x49E50BDB8BA4DAB2, &_0x49E50BDB8BA4DAB2},
		{0x9DE327631295B4C2, &IS_PED_SWIMMING},
		{0xC024869A53992F34, &IS_PED_SWIMMING_UNDER_WATER},
		{0x9AFEFF481A85AB2E, &SET_PED_COORDS_KEEP_VEHICLE},
		{0x2A30922C90C9B42C, &SET_PED_DIES_IN_VEHICLE},
		{0x102E68B2024D536D, &SET_CREATE_RANDOM_COPS},
		{0x8A4986851C4EF6E7, &SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS},
		{0x444CB7D7DBE6973D, &SET_CREATE_RANDOM_COPS_ON_SCENARIOS},
		{0x5EE2CAFF7F17770D, &CAN_CREATE_RANDOM_COPS},
		{0x02A0C9720B854BFA, &SET_PED_AS_ENEMY},
		{0x1CCE141467FF42A2, &SET_PED_CAN_SMASH_GLASS},
		{0x6F972C1AB75A1ED0, &IS_PED_IN_ANY_TRAIN},
		{0xBB062B2B5722478E, &IS_PED_GETTING_INTO_A_VEHICLE},
		{0x44D28D5DDFE5F68C, &IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE},
		{0xDF1AF8B5D56542FA, &SET_ENABLE_HANDCUFFS},
		{0xC52E0F855C58FC2E, &SET_ENABLE_BOUND_ANKLES},
		{0xF99F62004024D506, &SET_ENABLE_SCUBA},
		{0xB3B1CB349FF9C75D, &SET_CAN_ATTACK_FRIENDLY},
		{0xF6AA118530443FD2, &GET_PED_ALERTNESS},
		{0xDBA71115ED9941A6, &SET_PED_ALERTNESS},
		{0xBC0ED94165A48BC2, &SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE},
		{0xAF8A94EDE7712BEF, &SET_PED_MOVEMENT_CLIPSET},
		{0xAA74EC0CB0AAEA2C, &RESET_PED_MOVEMENT_CLIPSET},
		{0x29A28F3F8CF6D854, &SET_PED_STRAFE_CLIPSET},
		{0x20510814175EA477, &RESET_PED_STRAFE_CLIPSET},
		{0x2622E35B77D3ACA2, &SET_PED_WEAPON_MOVEMENT_CLIPSET},
		{0x97B0DB5B4AA74E77, &RESET_PED_WEAPON_MOVEMENT_CLIPSET},
		{0xED34AB6C5CB36520, &SET_PED_DRIVE_BY_CLIPSET_OVERRIDE},
		{0x4AFE3690D7E0B5AC, &CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE},
		{0x9DBA107B4937F809, &_SET_PED_COVER_CLIPSET_OVERRIDE},
		{0xC79196DCB36F6121, &_CLEAR_PED_COVER_CLIPSET_OVERRIDE},
		{0x80054D7FCC70EEC6, &_0x80054D7FCC70EEC6},
		{0x530071295899A8C6, &SET_PED_IN_VEHICLE_CONTEXT},
		{0x22EF8FF8778030EB, &RESET_PED_IN_VEHICLE_CONTEXT},
		{0x6EC47A344923E1ED, &IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM},
		{0x6C60394CB4F75E9A, &SET_PED_ALTERNATE_WALK_ANIM},
		{0x8844BBFCE30AA9E9, &CLEAR_PED_ALTERNATE_WALK_ANIM},
		{0x90A43CC281FFAB46, &SET_PED_ALTERNATE_MOVEMENT_ANIM},
		{0xD8D19675ED5FBDCE, &CLEAR_PED_ALTERNATE_MOVEMENT_ANIM},
		{0xDDF803377F94AAA8, &SET_PED_GESTURE_GROUP},
		{0xBE22B26DD764C040, &GET_ANIM_INITIAL_OFFSET_POSITION},
		{0x4B805E6046EE9E47, &GET_ANIM_INITIAL_OFFSET_ROTATION},
		{0x67F3780DD425D4FC, &GET_PED_DRAWABLE_VARIATION},
		{0x27561561732A7842, &GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS},
		{0x04A355E041E004E6, &GET_PED_TEXTURE_VARIATION},
		{0x8F7156A3142A6BAD, &GET_NUMBER_OF_PED_TEXTURE_VARIATIONS},
		{0x5FAF9754E789FB47, &GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS},
		{0xA6E7F1CEB523E171, &GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS},
		{0xE3DD5F2A84B42281, &GET_PED_PALETTE_VARIATION},
		{0x9E30E91FB03A2CAF, &_0x9E30E91FB03A2CAF},
		{0x1E77FA7A62EE6C4C, &_0x1E77FA7A62EE6C4C},
		{0xF033419D1B81FAE8, &_0xF033419D1B81FAE8},
		{0xE825F6B6CEA7671D, &IS_PED_COMPONENT_VARIATION_VALID},
		{0x262B14F48D29DE80, &SET_PED_COMPONENT_VARIATION},
		{0xC8A9481A01E63C28, &SET_PED_RANDOM_COMPONENT_VARIATION},
		{0xC44AA05345C992C6, &SET_PED_RANDOM_PROPS},
		{0x45EEE61580806D63, &SET_PED_DEFAULT_COMPONENT_VARIATION},
		{0x137BBD05230DB22D, &SET_PED_BLEND_FROM_PARENTS},
		{0x9414E18B9434C2FE, &SET_PED_HEAD_BLEND_DATA},
		{0x2746BD9D88C5C5D0, &GET_PED_HEAD_BLEND_DATA},
		{0x723538F61C647C5A, &UPDATE_PED_HEAD_BLEND_DATA},
		{0x50B56988B170AFDF, &_SET_PED_EYE_COLOR},
		{0x76BBA2CEE66D47E9, &_0x76BBA2CEE66D47E9},
		{0x48F44967FA05CC1E, &SET_PED_HEAD_OVERLAY},
		{0xA60EF3B6461A4D43, &_GET_PED_HEAD_OVERLAY_VALUE},
		{0xCF1CE768BB43480E, &GET_PED_HEAD_OVERLAY_NUM},
		{0x497BF74A7B9CB952, &_SET_PED_HEAD_OVERLAY_COLOR},
		{0x4CFFC65454C93A49, &_SET_PED_HAIR_COLOR},
		{0xE5C0CF872C2AD150, &_GET_NUM_HAIR_COLORS},
		{0xD1F7CA1535D22818, &_GET_NUM_MAKEUP_COLORS},
		{0x4852FC386E2E1BB5, &_GET_PED_HAIR_RGB_COLOR},
		{0x013E5CFC38CD5387, &_GET_PED_MAKEUP_RGB_COLOR},
		{0xED6D8E27A43B8CDE, &_IS_PED_HAIR_COLOR_VALID_2},
		{0xEA9960D07DADCF10, &_0xEA9960D07DADCF10},
		{0x3E802F11FBE27674, &_IS_PED_LIPSTICK_COLOR_VALID_2},
		{0xF41B5D290C99A3D6, &_IS_PED_BLUSH_COLOR_VALID_2},
		{0xE0D36E5D9E99CC21, &_IS_PED_HAIR_COLOR_VALID},
		{0xAAA6A3698A69E048, &_0xAAA6A3698A69E048},
		{0x0525A2C2562F3CD4, &_IS_PED_LIPSTICK_COLOR_VALID},
		{0x604E810189EE3A59, &_IS_PED_BLUSH_COLOR_VALID},
		{0x09E7ECA981D9B210, &_0x09E7ECA981D9B210},
		{0xC56FBF2F228E1DAC, &_0xC56FBF2F228E1DAC},
		{0x71A5C1DBA060049E, &_SET_PED_FACE_FEATURE},
		{0x654CD0A825161131, &HAS_PED_HEAD_BLEND_FINISHED},
		{0x4668D80430D6C299, &_0x4668D80430D6C299},
		{0xCC9682B8951C5229, &SET_HEAD_BLEND_PALETTE_COLOR},
		{0xA21C118553BBDF02, &DISABLE_HEAD_BLEND_PALETTE_COLOR},
		{0x68D353AB88B97E0C, &GET_PED_HEAD_BLEND_FIRST_INDEX},
		{0x5EF37013A6539C9D, &_GET_NUM_PARENT_PEDS_OF_TYPE},
		{0x39D55A620FCB6A3A, &SET_PED_PRELOAD_VARIATION_DATA},
		{0x66680A92700F43DF, &HAS_PED_PRELOAD_VARIATION_DATA_FINISHED},
		{0x5AAB586FFEC0FD96, &RELEASE_PED_PRELOAD_VARIATION_DATA},
		{0x2B16A3BFF1FBCE49, &SET_PED_PRELOAD_PROP_DATA},
		{0x784002A632822099, &HAS_PED_PRELOAD_PROP_DATA_FINISHED},
		{0xF79F9DEF0AADE61A, &RELEASE_PED_PRELOAD_PROP_DATA},
		{0x898CC20EA75BACD8, &GET_PED_PROP_INDEX},
		{0x93376B65A266EB5F, &SET_PED_PROP_INDEX},
		{0x6FD7816A36615F48, &KNOCK_OFF_PED_PROP},
		{0x0943E5B8E078E76E, &CLEAR_PED_PROP},
		{0xCD8A7537A9B52F06, &CLEAR_ALL_PED_PROPS},
		{0xAFF4710E2A0A6C12, &DROP_AMBIENT_PROP},
		{0xE131A28626F81AB2, &GET_PED_PROP_TEXTURE_INDEX},
		{0x1280804F7CFD2D6C, &CLEAR_PED_PARACHUTE_PACK_VARIATION},
		{0x36C6984C3ED0C911, &_0x36C6984C3ED0C911},
		{0xB50EB4CCB29704AC, &CLEAR_PED_SCUBA_GEAR_VARIATION},
		{0xFEC9A3B1820F3331, &_0xFEC9A3B1820F3331},
		{0x9F8AA94D6D97DBF4, &SET_BLOCKING_OF_NON_TEMPORARY_EVENTS},
		{0x4F5F651ACCC9C4CF, &SET_PED_BOUNDS_ORIENTATION},
		{0x2F25D9AEFA34FBA2, &REGISTER_TARGET},
		{0x9222F300BF8354FE, &REGISTER_HATED_TARGETS_AROUND_PED},
		{0x876046A8E3A4B71C, &GET_RANDOM_PED_AT_COORD},
		{0xC33AB876A77F8164, &GET_CLOSEST_PED},
		{0x14F19A8782C8071E, &SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND},
		{0x03EA03AF85A85CB7, &_0x03EA03AF85A85CB7},
		{0xDED5AF5A0EA4B297, &SET_DRIVER_RACING_MODIFIER},
		{0xB195FFA8042FC5C3, &SET_DRIVER_ABILITY},
		{0xA731F608CA104E3C, &SET_DRIVER_AGGRESSIVENESS},
		{0x128F79EDCECE4FD5, &CAN_PED_RAGDOLL},
		{0xAE99FB955581844A, &SET_PED_TO_RAGDOLL},
		{0xD76632D99E4966C8, &SET_PED_TO_RAGDOLL_WITH_FALL},
		{0xF0A4F1BBF4FA7497, &SET_PED_RAGDOLL_ON_COLLISION},
		{0x47E4E977581C5B55, &IS_PED_RAGDOLL},
		{0xE3B6097CC25AA69E, &IS_PED_RUNNING_RAGDOLL_TASK},
		{0x01F6594B923B9251, &SET_PED_RAGDOLL_FORCE_FALL},
		{0x9FA4664CF62E47E8, &RESET_PED_RAGDOLL_TIMER},
		{0xB128377056A54E2A, &SET_PED_CAN_RAGDOLL},
		{0xD1871251F3B5ACD7, &IS_PED_RUNNING_MELEE_TASK},
		{0x2AFE52F782F25775, &IS_PED_RUNNING_MOBILE_PHONE_TASK},
		{0xA3F3564A5B3646C0, &_0xA3F3564A5B3646C0},
		{0x26695EC767728D84, &SET_RAGDOLL_BLOCKING_FLAGS},
		{0xD86D101FCFD00A4B, &CLEAR_RAGDOLL_BLOCKING_FLAGS},
		{0xC7F76DF27A5045A1, &SET_PED_ANGLED_DEFENSIVE_AREA},
		{0x9D3151A373974804, &SET_PED_SPHERE_DEFENSIVE_AREA},
		{0xF9B8F91AAD3B953E, &SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED},
		{0xE4723DB6E736CCFF, &SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE},
		{0x4EF47FE21698A8B6, &SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED},
		{0x413C6C763A4AFFAD, &SET_PED_DEFENSIVE_AREA_DIRECTION},
		{0x74D4E028107450A9, &REMOVE_PED_DEFENSIVE_AREA},
		{0x3C06B8786DD94CD1, &GET_PED_DEFENSIVE_AREA_POSITION},
		{0xBA63D9FE45412247, &IS_PED_DEFENSIVE_AREA_ACTIVE},
		{0x8421EB4DA7E391B9, &SET_PED_PREFERRED_COVER_SET},
		{0xFDDB234CF74073D9, &REMOVE_PED_PREFERRED_COVER_SET},
		{0x8D8ACD8388CD99CE, &REVIVE_INJURED_PED},
		{0x71BC8E838B9C6035, &RESURRECT_PED},
		{0x98EFA132A4117BE1, &SET_PED_NAME_DEBUG},
		{0xE0AF41401ADF87E3, &GET_PED_EXTRACTED_DISPLACEMENT},
		{0x5BA7919BED300023, &SET_PED_DIES_WHEN_INJURED},
		{0x97A790315D3831FD, &SET_PED_ENABLE_WEAPON_BLOCKING},
		{0xF9ACF4A08098EA25, &_0xF9ACF4A08098EA25},
		{0x3AC1F7B898F30C05, &RESET_PED_VISIBLE_DAMAGE},
		{0x816F6981C60BF53B, &APPLY_PED_BLOOD_DAMAGE_BY_ZONE},
		{0x83F7E01C7B769A26, &APPLY_PED_BLOOD},
		{0x3311E47B91EDCBBC, &APPLY_PED_BLOOD_BY_ZONE},
		{0xEF0D582CBF2D9B0F, &APPLY_PED_BLOOD_SPECIFIC},
		{0x397C38AA7B4A5F83, &APPLY_PED_DAMAGE_DECAL},
		{0x46DF918788CB093F, &APPLY_PED_DAMAGE_PACK},
		{0x8FE22675A5A45817, &CLEAR_PED_BLOOD_DAMAGE},
		{0x56E3B78C5408D9F4, &CLEAR_PED_BLOOD_DAMAGE_BY_ZONE},
		{0x62AB793144DE75DC, &HIDE_PED_BLOOD_DAMAGE_BY_ZONE},
		{0x523C79AEEFCC4A2A, &CLEAR_PED_DAMAGE_DECAL_BY_ZONE},
		{0x71EAB450D86954A1, &GET_PED_DECORATIONS_STATE},
		{0x2B694AFCF64E6994, &_0x2B694AFCF64E6994},
		{0x9C720776DAA43E7E, &CLEAR_PED_WETNESS},
		{0x44CB6447D2571AA0, &SET_PED_WETNESS_HEIGHT},
		{0xB5485E4907B53019, &SET_PED_WETNESS_ENABLED_THIS_FRAME},
		{0x6585D955A68452A5, &CLEAR_PED_ENV_DIRT},
		{0x27B0405F59637D1F, &SET_PED_SWEAT},
		{0x5F5D1665E352A839, &ADD_PED_DECORATION_FROM_HASHES},
		{0x5619BFA07CFD7833, &ADD_PED_DECORATION_FROM_HASHES_IN_CORONA},
		{0x9FD452BFBE7A7A8B, &GET_PED_DECORATION_ZONE_FROM_HASHES},
		{0x0E5173C163976E38, &CLEAR_PED_DECORATIONS},
		{0xE3B27E70CEAB9F0C, &CLEAR_PED_DECORATIONS_LEAVE_SCARS},
		{0x11B499C1E0FF8559, &WAS_PED_SKELETON_UPDATED},
		{0x17C07FC640E86B4E, &GET_PED_BONE_COORDS},
		{0x418EF2A1BCE56685, &CREATE_NM_MESSAGE},
		{0xB158DFCCC56E5C5B, &GIVE_PED_NM_MESSAGE},
		{0x1B5C85C612E5256E, &ADD_SCENARIO_BLOCKING_AREA},
		{0xD37401D78A929A49, &REMOVE_SCENARIO_BLOCKING_AREAS},
		{0x31D16B74C6E29D66, &REMOVE_SCENARIO_BLOCKING_AREA},
		{0x28157D43CF600981, &SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA},
		{0x8A24B067D175A7BD, &_DOES_SCENARIO_BLOCKING_AREA_EXIST},
		{0x1BF094736DD62C2E, &IS_PED_USING_SCENARIO},
		{0x57AB4A3080F85143, &IS_PED_USING_ANY_SCENARIO},
		{0xFE07FF6495D52E2A, &SET_PED_PANIC_EXIT_SCENARIO},
		{0x9A77DFD295E29B09, &_0x9A77DFD295E29B09},
		{0x25361A96E0F7E419, &_0x25361A96E0F7E419},
		{0xEC6935EBE0847B90, &_0xEC6935EBE0847B90},
		{0xA3A9299C4F2ADB98, &_0xA3A9299C4F2ADB98},
		{0xF1C03A5352243A30, &_0xF1C03A5352243A30},
		{0xEEED8FAFEC331A70, &_0xEEED8FAFEC331A70},
		{0x425AECF167663F48, &_0x425AECF167663F48},
		{0x5B6010B3CBC29095, &_0x5B6010B3CBC29095},
		{0xCEDA60A74219D064, &_0xCEDA60A74219D064},
		{0xE1E65CA8AC9C00ED, &PLAY_FACIAL_ANIM},
		{0x5687C7F05B39E401, &_0x5687C7F05B39E401},
		{0xFFC24B988B938B38, &SET_FACIAL_IDLE_ANIM_OVERRIDE},
		{0x726256CC1EEB182F, &CLEAR_FACIAL_IDLE_ANIM_OVERRIDE},
		{0xBAF20C5432058024, &SET_PED_CAN_PLAY_GESTURE_ANIMS},
		{0xF833DDBA3B104D43, &SET_PED_CAN_PLAY_VISEME_ANIMS},
		{0x33A60D8BDD6E508C, &_SET_PED_CAN_PLAY_INJURED_ANIMS},
		{0x6373D1349925A70E, &SET_PED_CAN_PLAY_AMBIENT_ANIMS},
		{0x0EB0585D15254740, &SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS},
		{0xC2EE020F5FB4DB53, &_0xC2EE020F5FB4DB53},
		{0x6C3B4D6D13B4C841, &SET_PED_CAN_ARM_IK},
		{0xC11C18092C5530DC, &SET_PED_CAN_HEAD_IK},
		{0x73518ECE2485412B, &SET_PED_CAN_LEG_IK},
		{0xF2B7106D37947CE0, &SET_PED_CAN_TORSO_IK},
		{0xF5846EDB26A98A24, &SET_PED_CAN_TORSO_REACT_IK},
		{0x6647C5F6F5792496, &_0x6647C5F6F5792496},
		{0xEC4686EC06434678, &SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT},
		{0x5CD3CB88A7F8850D, &IS_PED_HEADTRACKING_PED},
		{0x813A0A7C9D2E831F, &IS_PED_HEADTRACKING_ENTITY},
		{0xCD17B554996A8D9E, &SET_PED_PRIMARY_LOOKAT},
		{0x78C4E9961DB3EB5B, &SET_PED_CLOTH_PACKAGE_INDEX},
		{0x82A3D6D9CC2CB8E3, &SET_PED_CLOTH_PRONE},
		{0xA660FAF550EB37E5, &_0xA660FAF550EB37E5},
		{0x1913FE4CBF41C463, &SET_PED_CONFIG_FLAG},
		{0xC1E8A365BF3B29F2, &SET_PED_RESET_FLAG},
		{0x7EE53118C892B513, &GET_PED_CONFIG_FLAG},
		{0xAF9E59B1B1FBF2A0, &GET_PED_RESET_FLAG},
		{0x0BDDB8D9EC6BCF3C, &SET_PED_GROUP_MEMBER_PASSENGER_INDEX},
		{0x6B7A646C242A7059, &SET_PED_CAN_EVASIVE_DIVE},
		{0x414641C26E105898, &IS_PED_EVASIVE_DIVING},
		{0x96A05E4FB321B1BA, &SET_PED_SHOOTS_AT_COORD},
		{0xE163A4BCE4DE6F11, &SET_PED_MODEL_IS_SUPPRESSED},
		{0xB47BD05FA66B40CF, &STOP_ANY_PED_MODEL_BEING_SUPPRESSED},
		{0x638C03B0F9878F57, &SET_PED_CAN_BE_TARGETED_WHEN_INJURED},
		{0x7FB17BA2E7DECA5B, &SET_PED_GENERATES_DEAD_BODY_EVENTS},
		{0xE43A13C9E4CCCBCF, &_BLOCK_PED_DEAD_BODY_SHOCKING_EVENTS},
		{0x3E9679C1DFCF422C, &_0x3E9679C1DFCF422C},
		{0xDF993EE5E90ABA25, &SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT},
		{0x54C7C4A94367717E, &GIVE_PED_HELMET},
		{0xA7B2458D0AD6DED8, &REMOVE_PED_HELMET},
		{0x14590DDBEDB1EC85, &_0x14590DDBEDB1EC85},
		{0x560A43136EB58105, &SET_PED_HELMET},
		{0xC0E78D5C2CE3EB25, &SET_PED_HELMET_FLAG},
		{0x26D83693ED99291C, &SET_PED_HELMET_PROP_INDEX},
		{0x3F7325574E41B44D, &_SET_PED_HELMET_UNK},
		{0xB9496CE47546DB2C, &_IS_PED_HELMET_UNK},
		{0xF1550C4BD22582E2, &SET_PED_HELMET_TEXTURE_INDEX},
		{0xF33BDFE19B309B19, &IS_PED_WEARING_HELMET},
		{0x687C0B594907D2E8, &_0x687C0B594907D2E8},
		{0x451294E859ECC018, &_0x451294E859ECC018},
		{0x9D728C1E12BF5518, &_0x9D728C1E12BF5518},
		{0xF2385935BFFD4D92, &_0xF2385935BFFD4D92},
		{0x332B562EEDA62399, &SET_PED_TO_LOAD_COVER},
		{0xCB7553CDCEF4A735, &SET_PED_CAN_COWER_IN_COVER},
		{0xC514825C507E3736, &SET_PED_CAN_PEEK_IN_COVER},
		{0x94D94BF1A75AED3D, &SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE},
		{0xC396F5B86FF9FEBD, &SET_PED_LEG_IK_MODE},
		{0x0A986918B102B448, &SET_PED_MOTION_BLUR},
		{0xED7F7EFE9FABF340, &SET_PED_CAN_SWITCH_WEAPON},
		{0xEEB64139BA29A7CF, &SET_PED_DIES_INSTANTLY_IN_WATER},
		{0x1A330D297AAC6BC1, &_0x1A330D297AAC6BC1},
		{0xC158D28142A34608, &STOP_PED_WEAPON_FIRING_WHEN_DROPPED},
		{0x5917BBA32D06C230, &SET_SCRIPTED_ANIM_SEAT_OFFSET},
		{0x4D9CA1009AFBD057, &SET_PED_COMBAT_MOVEMENT},
		{0xDEA92412FCAEB3F5, &GET_PED_COMBAT_MOVEMENT},
		{0xC7622C0D36B2FDA8, &SET_PED_COMBAT_ABILITY},
		{0x3C606747B23E497B, &SET_PED_COMBAT_RANGE},
		{0xF9D9F7F2DB8E2FA0, &GET_PED_COMBAT_RANGE},
		{0x9F7794730795E019, &SET_PED_COMBAT_ATTRIBUTES},
		{0x0703B9079823DA4A, &SET_PED_TARGET_LOSS_RESPONSE},
		{0xDCCA191DF9980FD7, &IS_PED_PERFORMING_MELEE_ACTION},
		{0xFD4CCDBCC59941B7, &IS_PED_PERFORMING_STEALTH_KILL},
		{0xEBD0EDBA5BE957CF, &IS_PED_PERFORMING_DEPENDENT_COMBO_LIMIT},
		{0x863B23EFDE9C5DF2, &IS_PED_BEING_STEALTH_KILLED},
		{0x18A3E9EE1297FD39, &GET_MELEE_TARGET_FOR_PED},
		{0xF9800AA1A771B000, &WAS_PED_KILLED_BY_STEALTH},
		{0x7F08E26039C7347C, &WAS_PED_KILLED_BY_TAKEDOWN},
		{0x61767F73EACEED21, &WAS_PED_KNOCKED_OUT},
		{0x70A2D1137C8ED7C9, &SET_PED_FLEE_ATTRIBUTES},
		{0xA549131166868ED3, &SET_PED_COWER_HASH},
		{0x2016C603D6B8987C, &_0x2016C603D6B8987C},
		{0x46F2193B3AD1D891, &SET_PED_STEERS_AROUND_PEDS},
		{0x1509C089ADC208BF, &SET_PED_STEERS_AROUND_OBJECTS},
		{0xEB6FB9D48DDE23EC, &SET_PED_STEERS_AROUND_VEHICLES},
		{0xA9B61A329BFDCBEA, &_0xA9B61A329BFDCBEA},
		{0x570389D1C3DE3C6B, &SET_PED_INCREASED_AVOIDANCE_RADIUS},
		{0x576594E8D64375E2, &SET_PED_BLOCKS_PATHING_WHEN_DEAD},
		{0xA52D5247A4227E14, &_0xA52D5247A4227E14},
		{0x083961498679DC9F, &IS_ANY_PED_NEAR_POINT},
		{0x2208438012482A1A, &_0x2208438012482A1A},
		{0xFCF37A457CB96DC0, &IS_PED_HEADING_TOWARDS_POSITION},
		{0x7D7A2E43E74E2EB8, &REQUEST_PED_VISIBILITY_TRACKING},
		{0x2BC338A7B21F4608, &REQUEST_PED_VEHICLE_VISIBILITY_TRACKING},
		{0xCD018C591F94CB43, &_0xCD018C591F94CB43},
		{0x75BA1CB3B7D40CAF, &_0x75BA1CB3B7D40CAF},
		{0x91C8E617F64188AC, &IS_TRACKED_PED_VISIBLE},
		{0x511F1A683387C7E2, &_0x511F1A683387C7E2},
		{0x4C5E1F087CD10BB7, &IS_PED_TRACKED},
		{0x8507BCB710FA6DC0, &HAS_PED_RECEIVED_EVENT},
		{0x6CD5A433374D4CFB, &CAN_PED_SEE_HATED_PED},
		{0x9C6A6C19B6C0C496, &_0x9C6A6C19B6C0C496},
		{0x2DFC81C9B9608549, &_0x2DFC81C9B9608549},
		{0x3F428D08BE5AAE31, &GET_PED_BONE_INDEX},
		{0x2057EF813397A772, &GET_PED_RAGDOLL_BONE_INDEX},
		{0xBF29516833893561, &SET_PED_ENVEFF_SCALE},
		{0x9C14D30395A51A3C, &GET_PED_ENVEFF_SCALE},
		{0xD2C5AA0C0E8D0F1E, &SET_ENABLE_PED_ENVEFF_SCALE},
		{0x110F526AB784111F, &_0x110F526AB784111F},
		{0xD69411AA0CEBF9E9, &SET_PED_ENVEFF_COLOR_MODULATOR},
		{0x4E90D746056E273D, &_SET_PED_REFLECTION_INTENSITY},
		{0x1461B28A06717D68, &_GET_PED_REFLECTION_INTENSITY},
		{0x81AA517FBBA05D39, &_IS_PED_SHADER_EFFECT_VALID},
		{0xE906EC930F5FE7C8, &_0xE906EC930F5FE7C8},
		{0x1216E0BFA72CC703, &_0x1216E0BFA72CC703},
		{0x2B5AA717A181FB4C, &_0x2B5AA717A181FB4C},
		{0xB8B52E498014F5B0, &_0xB8B52E498014F5B0},
		{0x8C18E0F9080ADD73, &CREATE_SYNCHRONIZED_SCENE},
		{0x62EC273D00187DCA, &_CREATE_SYNCHRONIZED_SCENE_2},
		{0x25D39B935A038A26, &IS_SYNCHRONIZED_SCENE_RUNNING},
		{0x6ACF6B7225801CD7, &SET_SYNCHRONIZED_SCENE_ORIGIN},
		{0x734292F4F0ABF6D0, &SET_SYNCHRONIZED_SCENE_PHASE},
		{0xE4A310B1D7FA73CC, &GET_SYNCHRONIZED_SCENE_PHASE},
		{0xB6C49F8A5E295A5D, &SET_SYNCHRONIZED_SCENE_RATE},
		{0xD80932D577274D40, &GET_SYNCHRONIZED_SCENE_RATE},
		{0xD9A897A4C6C2974F, &SET_SYNCHRONIZED_SCENE_LOOPED},
		{0x62522002E0C391BA, &IS_SYNCHRONIZED_SCENE_LOOPED},
		{0x394B9CD12435C981, &_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL},
		{0x7F2F4F13AC5257EF, &_0x7F2F4F13AC5257EF},
		{0x272E4723B56A3B96, &ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY},
		{0x6D38F1F04CBB37EA, &DETACH_SYNCHRONIZED_SCENE},
		{0xCD9CC7E200A52A6F, &_DISPOSE_SYNCHRONIZED_SCENE},
		{0xF28965D04F570DCA, &FORCE_PED_MOTION_STATE},
		{0xF60165E1D2C5370B, &_0xF60165E1D2C5370B},
		{0x433083750C5E064A, &SET_PED_MAX_MOVE_BLEND_RATIO},
		{0x01A898D26E2333DD, &SET_PED_MIN_MOVE_BLEND_RATIO},
		{0x085BF80FA50A39D1, &SET_PED_MOVE_RATE_OVERRIDE},
		{0x0B3E35AC043707D9, &_0x0B3E35AC043707D9},
		{0x46B05BCAE43856B0, &_0x46B05BCAE43856B0},
		{0xCFF869CBFA210D82, &GET_PED_NEARBY_VEHICLES},
		{0x23F8F5FC7E8C4A6B, &GET_PED_NEARBY_PEDS},
		{0x7350823473013C02, &_HAS_STREAMED_PED_ASSETS_LOADED},
		{0x00E73468D085F745, &IS_PED_USING_ACTION_MODE},
		{0xD75ACCF5E0FB5367, &SET_PED_USING_ACTION_MODE},
		{0x781DE8FA214E87D2, &SET_MOVEMENT_MODE_OVERRIDE},
		{0x364DF566EC833DE2, &SET_PED_CAPSULE},
		{0x4462658788425076, &REGISTER_PEDHEADSHOT},
		{0xBA8805A1108A2515, &_REGISTER_PEDHEADSHOT_3},
		{0x953563CE563143AF, &REGISTER_PEDHEADSHOT_TRANSPARENT},
		{0x96B1361D9B24C2FF, &UNREGISTER_PEDHEADSHOT},
		{0xA0A9668F158129A2, &IS_PEDHEADSHOT_VALID},
		{0x7085228842B13A67, &IS_PEDHEADSHOT_READY},
		{0xDB4EACD4AD0A5D6B, &char*},
		{0xF0DAEF2F545BEE25, &REQUEST_PEDHEADSHOT_IMG_UPLOAD},
		{0x5D517B27CF6ECD04, &RELEASE_PEDHEADSHOT_IMG_UPLOAD},
		{0xEBB376779A760AA8, &IS_PEDHEADSHOT_IMG_UPLOAD_AVAILABLE},
		{0x876928DDDFCCC9CD, &HAS_PEDHEADSHOT_IMG_UPLOAD_FAILED},
		{0xE8A169E666CBC541, &HAS_PEDHEADSHOT_IMG_UPLOAD_SUCCEEDED},
		{0xC1F6EBF9A3D55538, &SET_PED_HEATSCALE_OVERRIDE},
		{0x600048C60D5C2C51, &DISABLE_PED_HEATSCALE_OVERRIDE},
		{0x2DF9038C90AD5264, &_0x2DF9038C90AD5264},
		{0xB2AFF10216DEFA2F, &_0xB2AFF10216DEFA2F},
		{0xFEE4A5459472A9F8, &_0xFEE4A5459472A9F8},
		{0x3C67506996001F5E, &_0x3C67506996001F5E},
		{0xA586FBEB32A53DBB, &_0xA586FBEB32A53DBB},
		{0xF445DE8DA80A1792, &_0xF445DE8DA80A1792},
		{0xA635C11B8C44AFC2, &_0xA635C11B8C44AFC2},
		{0x280C7E3AC7F56E90, &_0x280C7E3AC7F56E90},
		{0xB782F8238512BAD5, &_0xB782F8238512BAD5},
		{0xC32779C16FCEECD9, &SET_IK_TARGET},
		{0xED3C76ADFA6D07C4, &_0xED3C76ADFA6D07C4},
		{0x290E2780BB7AA598, &REQUEST_ACTION_MODE_ASSET},
		{0xE4B5F4BF2CB24E65, &HAS_ACTION_MODE_ASSET_LOADED},
		{0x13E940F88470FA51, &REMOVE_ACTION_MODE_ASSET},
		{0x2A0A62FCDEE16D4F, &REQUEST_STEALTH_MODE_ASSET},
		{0xE977FC5B08AF3441, &HAS_STEALTH_MODE_ASSET_LOADED},
		{0x9219857D21F0E842, &REMOVE_STEALTH_MODE_ASSET},
		{0xDC2C5C242AAC342B, &SET_PED_LOD_MULTIPLIER},
		{0xE861D0B05C7662B8, &_0xE861D0B05C7662B8},
		{0x129466ED55140F8D, &SET_FORCE_FOOTSTEP_UPDATE},
		{0xCB968B53FC7F916D, &SET_FORCE_STEP_TYPE},
		{0x68772DB2B2526F9F, &IS_ANY_HOSTILE_PED_NEAR_POINT},
		{0x820E9892A77E97CD, &_0x820E9892A77E97CD},
		{0x06087579E7AA85A9, &_0x06087579E7AA85A9},
		{0xD8C3BE3EE94CAF2D, &SET_POP_CONTROL_SPHERE_THIS_FRAME},
		{0xD33DAA36272177C4, &_0xD33DAA36272177C4},
		{0x711794453CFD692B, &_0x711794453CFD692B},
		{0x83A169EABCDB10A2, &_0x83A169EABCDB10A2},
		{0x288DF530C92DAD6F, &_0x288DF530C92DAD6F},
		{0x3795688A307E1EB6, &_0x3795688A307E1EB6},
		{0x0F62619393661D6E, &_0x0F62619393661D6E},
		{0xDFE68C4B787E1BFB, &_0xDFE68C4B787E1BFB},
		{0xEE2476B9EE4A094F, &_SET_ENABLE_SCUBA_GEAR_LIGHT},
		{0x88274C11CF0D866D, &_IS_SCUBA_GEAR_LIGHT_ENABLED},
		{0x637822DC2AFEEBF8, &_0x637822DC2AFEEBF8},
		{0xFAB944D4D481ACCB, &_0xFAB944D4D481ACCB},
		{0xE832D760399EB220, &ADD_ROPE},
		{0x52B4829281364649, &DELETE_ROPE},
		{0xAA5D6B1888E4DB20, &DELETE_CHILD_ROPE},
		{0xFD5448BE3111ED96, &DOES_ROPE_EXIST},
		{0xF159A63806BB5BA8, &ROPE_DRAW_SHADOW_ENABLED},
		{0xCBB203C04D1ABD27, &LOAD_ROPE_DATA},
		{0x2B320CF14146B69A, &PIN_ROPE_VERTEX},
		{0x4B5AE2EEE4A8F180, &UNPIN_ROPE_VERTEX},
		{0x3655F544CD30F0B5, &GET_ROPE_VERTEX_COUNT},
		{0x3D95EC8B6D940AC3, &ATTACH_ENTITIES_TO_ROPE},
		{0x4B490A6832559A65, &ATTACH_ROPE_TO_ENTITY},
		{0xBCF3026912A8647D, &DETACH_ROPE_FROM_ENTITY},
		{0xC8D667EE52114ABA, &ROPE_SET_UPDATE_PINVERTS},
		{0xDC57A637A20006ED, &ROPE_SET_UPDATE_ORDER},
		{0x36CCB9BE67B970FD, &_0x36CCB9BE67B970FD},
		{0x84DE3B5FB3E666F0, &_0x84DE3B5FB3E666F0},
		{0x21BB0FBD3E217C2D, &GET_ROPE_LAST_VERTEX_COORD},
		{0xEA61CA8E80F09E4D, &GET_ROPE_VERTEX_COORD},
		{0x1461C72C889E343E, &START_ROPE_WINDING},
		{0xCB2D4AB84A19AA7C, &STOP_ROPE_WINDING},
		{0x538D1179EC1AA9A9, &START_ROPE_UNWINDING_FRONT},
		{0xFFF3A50779EFBBB3, &STOP_ROPE_UNWINDING_FRONT},
		{0x5389D48EFA2F079A, &ROPE_CONVERT_TO_SIMPLE},
		{0x9B9039DBF2D258C1, &ROPE_LOAD_TEXTURES},
		{0xF2D0E6A75CC05597, &ROPE_ARE_TEXTURES_LOADED},
		{0x6CE36C35C1AC8163, &ROPE_UNLOAD_TEXTURES},
		{0x271C9D3ACA5D6409, &_DOES_ROPE_BELONG_TO_THIS_SCRIPT},
		{0xBC0CE682D4D05650, &_0xBC0CE682D4D05650},
		{0xB1B6216CA2E7B55E, &_0xB1B6216CA2E7B55E},
		{0xB743F735C03D7810, &_0xB743F735C03D7810},
		{0x73040398DFF9A4A6, &ROPE_GET_DISTANCE_BETWEEN_ENDS},
		{0xD009F759A723DB1B, &ROPE_FORCE_LENGTH},
		{0xC16DE94D9BEA14A0, &ROPE_RESET_LENGTH},
		{0xE37F721824571784, &APPLY_IMPULSE_TO_CLOTH},
		{0xEEA3B200A6FEB65B, &SET_DAMPING},
		{0x710311ADF0E20730, &ACTIVATE_PHYSICS},
		{0xD8FA3908D7B86904, &SET_CGOFFSET},
		{0x8214A4B5A7A33612, &GET_CGOFFSET},
		{0xBE520D9761FF811F, &SET_CG_AT_BOUNDCENTER},
		{0x2E648D16F6E308F3, &BREAK_ENTITY_GLASS},
		{0x0C112765300C7E1E, &_GET_HAS_OBJECT_FRAG_INST},
		{0x5CEC1A84620E7D5B, &SET_DISABLE_BREAKING},
		{0xCC6E963682533882, &_0xCC6E963682533882},
		{0x01BA3AED21C16CFB, &SET_DISABLE_FRAG_DAMAGE},
		{0x15F944730C832252, &_SET_ENTITY_PROOF_UNK},
		{0x9EBD751E5787BAF2, &_0x9EBD751E5787BAF2},
		{0xAA6A6098851C396F, &_0xAA6A6098851C396F},
		{0x43A66C31C68491C0, &GET_PLAYER_PED},
		{0x50FAC3A3E030A6E1, &GET_PLAYER_PED_SCRIPT_INDEX},
		{0x00A1CADD00108836, &SET_PLAYER_MODEL},
		{0x048189FAC643DEEE, &CHANGE_PLAYER_PED},
		{0xE902EF951DCE178F, &GET_PLAYER_RGB_COLOUR},
		{0x407C7F91DDB46C16, &GET_NUMBER_OF_PLAYERS},
		{0x37039302F4E0A008, &GET_PLAYER_TEAM},
		{0x0299FA38396A4940, &SET_PLAYER_TEAM},
		{0x1FC200409F10E6F1, &_GET_NUMBER_OF_PLAYERS_IN_TEAM},
		{0x6D0DE6A7B5DA71F8, &char*},
		{0x085DEB493BE80812, &GET_WANTED_LEVEL_RADIUS},
		{0x0C92BA89F1AF26F8, &GET_PLAYER_WANTED_CENTRE_POSITION},
		{0x520E541A97A13354, &SET_PLAYER_WANTED_CENTRE_POSITION},
		{0xFDD179EAF45B556C, &GET_WANTED_LEVEL_THRESHOLD},
		{0x39FF19C64EF7DA5B, &SET_PLAYER_WANTED_LEVEL},
		{0x340E61DE7F471565, &SET_PLAYER_WANTED_LEVEL_NO_DROP},
		{0xE0A7D1E497FFCD6F, &SET_PLAYER_WANTED_LEVEL_NOW},
		{0xAFAF86043E5874E9, &ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP},
		{0x0A6EB355EE14A2DB, &ARE_PLAYER_STARS_GREYED_OUT},
		{0x7E07C78925D5FD96, &_0x7E07C78925D5FD96},
		{0xDB172424876553F4, &SET_DISPATCH_COPS_FOR_PLAYER},
		{0x238DB2A2C23EE9EF, &IS_PLAYER_WANTED_LEVEL_GREATER},
		{0xB302540597885499, &CLEAR_PLAYER_WANTED_LEVEL},
		{0x424D4687FA1E5652, &IS_PLAYER_DEAD},
		{0xFA1E2BF8B10598F9, &IS_PLAYER_PRESSING_HORN},
		{0x8D32347D6D4C40A2, &SET_PLAYER_CONTROL},
		{0xE28E54788CE8F12D, &GET_PLAYER_WANTED_LEVEL},
		{0xAA5F02DB48D704B9, &SET_MAX_WANTED_LEVEL},
		{0x43286D561B72B8BF, &SET_POLICE_RADAR_BLIPS},
		{0x32C62AA929C2DA6A, &SET_POLICE_IGNORE_PLAYER},
		{0x5E9564D8246B909A, &IS_PLAYER_PLAYING},
		{0x8EEDA153AD141BA4, &SET_EVERYONE_IGNORE_PLAYER},
		{0x056E0FE8534C2949, &SET_ALL_RANDOM_PEDS_FLEE},
		{0x471D2FF42A94B4F2, &SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME},
		{0xDE45D1A1EF45EE61, &_0xDE45D1A1EF45EE61},
		{0xC3376F42B1FACCC6, &_0xC3376F42B1FACCC6},
		{0xFAC75988A7D078D3, &_0xFAC75988A7D078D3},
		{0x596976B02B6B5700, &SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS},
		{0x020E5F00CDA207BA, &SET_WANTED_LEVEL_MULTIPLIER},
		{0x9B0BB33B04405E7A, &SET_WANTED_LEVEL_DIFFICULTY},
		{0xB9D0DD990DC141DD, &RESET_WANTED_LEVEL_DIFFICULTY},
		{0xBF9BD71691857E48, &START_FIRING_AMNESTY},
		{0xE9B09589827545E7, &REPORT_CRIME},
		{0x9A987297ED8BD838, &_SWITCH_CRIME_TYPE},
		{0xBC9490CA15AEA8FB, &_0xBC9490CA15AEA8FB},
		{0x4669B3ED80F24B4E, &_0x4669B3ED80F24B4E},
		{0x2F41A3BAE005E5FA, &_0x2F41A3BAE005E5FA},
		{0xAD73CE5A09E42D12, &_0xAD73CE5A09E42D12},
		{0x36F1B38855F2A8DF, &_0x36F1B38855F2A8DF},
		{0xDC64D2C53493ED12, &_0xDC64D2C53493ED12},
		{0xB45EFF719D8427A6, &_0xB45EFF719D8427A6},
		{0x0032A6DBA562C518, &_0x0032A6DBA562C518},
		{0xDE7465A27D403C06, &CAN_PLAYER_START_MISSION},
		{0x908CBECC2CAA3690, &IS_PLAYER_READY_FOR_CUTSCENE},
		{0x7912F7FC4F6264B6, &IS_PLAYER_TARGETTING_ENTITY},
		{0x13EDE1A5DBF797C9, &GET_PLAYER_TARGET_ENTITY},
		{0x2E397FD2ECD37C87, &IS_PLAYER_FREE_AIMING},
		{0x3C06B5C839B38F7B, &IS_PLAYER_FREE_AIMING_AT_ENTITY},
		{0x2975C866E6713290, &GET_ENTITY_PLAYER_IS_FREE_AIMING_AT},
		{0x29961D490E5814FD, &SET_PLAYER_LOCKON_RANGE_OVERRIDE},
		{0x6E8834B52EC20C77, &SET_PLAYER_CAN_DO_DRIVE_BY},
		{0xD5E460AD7020A246, &SET_PLAYER_CAN_BE_HASSLED_BY_GANGS},
		{0xD465A8599DFF6814, &SET_PLAYER_CAN_USE_COVER},
		{0x462E0DB9B137DC5F, &GET_MAX_WANTED_LEVEL},
		{0x78CFE51896B6B8A4, &IS_PLAYER_TARGETTING_ANYTHING},
		{0xA01B8075D8B92DF4, &SET_PLAYER_SPRINT},
		{0xA6F312FCCE9C1DFE, &RESET_PLAYER_STAMINA},
		{0xA352C1B864CAFD33, &RESTORE_PLAYER_STAMINA},
		{0x3F9F16F8E65A7ED7, &GET_PLAYER_SPRINT_STAMINA_REMAINING},
		{0x1885BC9B108B4C99, &GET_PLAYER_SPRINT_TIME_REMAINING},
		{0xA1FCF8E6AF40B731, &GET_PLAYER_UNDERWATER_TIME_REMAINING},
		{0xA0D3E4F7AAFB7E78, &_0xA0D3E4F7AAFB7E78},
		{0x0D127585F77030AF, &GET_PLAYER_GROUP},
		{0x92659B4CE1863CB3, &GET_PLAYER_MAX_ARMOUR},
		{0x49C32D60007AFA47, &IS_PLAYER_CONTROL_ON},
		{0x7C814D2FB49F40C0, &_IS_PLAYER_CAM_CONTROL_DISABLED},
		{0x8A876A65283DD7D7, &IS_PLAYER_SCRIPT_CONTROL_ON},
		{0x95E8F73DC65EFB9C, &IS_PLAYER_CLIMBING},
		{0x388A47C51ABDAC8E, &IS_PLAYER_BEING_ARRESTED},
		{0x2D03E13C460760D6, &RESET_PLAYER_ARREST_STATE},
		{0xB6997A7EB3F5C8C0, &GET_PLAYERS_LAST_VEHICLE},
		{0xA5EDC40EF369B48D, &GET_PLAYER_INDEX},
		{0x41BD2A6B006AF756, &INT_TO_PLAYERINDEX},
		{0x9EC6603812C24710, &INT_TO_PARTICIPANTINDEX},
		{0x5D35ECF3A81A0EE0, &GET_TIME_SINCE_PLAYER_HIT_VEHICLE},
		{0xE36A25322DC35F42, &GET_TIME_SINCE_PLAYER_HIT_PED},
		{0xD559D2BE9E37853B, &GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT},
		{0xDB89591E290D9182, &GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC},
		{0xDCCFD3F106C36AB4, &IS_PLAYER_FREE_FOR_AMBIENT_TASK},
		{0x4F8644AF03D0E0D6, &PLAYER_ID},
		{0xD80958FC74E988A6, &PLAYER_PED_ID},
		{0xEE68096F9F37341E, &NETWORK_PLAYER_ID_TO_INT},
		{0xC968670BFACE42D9, &HAS_FORCE_CLEANUP_OCCURRED},
		{0xBC8983F38F78ED51, &FORCE_CLEANUP},
		{0x4C68DDDDF0097317, &FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME},
		{0xF745B37630DF176B, &FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID},
		{0x9A41CF4674A12272, &GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP},
		{0x8026FF78F208978A, &SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE},
		{0x1DE37BBF9E9CC14A, &SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE},
		{0xBEC7076D64130195, &GIVE_ACHIEVEMENT_TO_PLAYER},
		{0xC2AFFFDABBDC2C5C, &_SET_ACHIEVEMENT_PROGRESS},
		{0x1C186837D0619335, &_GET_ACHIEVEMENT_PROGRESS},
		{0x867365E111A3B6EB, &HAS_ACHIEVEMENT_BEEN_PASSED},
		{0xF25D331DC2627BBC, &IS_PLAYER_ONLINE},
		{0x74556E1420867ECA, &IS_PLAYER_LOGGING_IN_NP},
		{0x94DD7888C10A979E, &DISPLAY_SYSTEM_SIGNIN_UI},
		{0x5D511E3867C87139, &IS_SYSTEM_UI_BEING_DISPLAYED},
		{0x239528EACDC3E7DE, &SET_PLAYER_INVINCIBLE},
		{0xB721981B2B939E07, &GET_PLAYER_INVINCIBLE},
		{0x6BC97F4F4BB3C04B, &_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED},
		{0xCAC57395B151135F, &_0xCAC57395B151135F},
		{0xF3AC26D3CC576528, &REMOVE_PLAYER_HELMET},
		{0x3C49C870E66F0A28, &GIVE_PLAYER_RAGDOLL_CONTROL},
		{0x5C8B2F450EE4328E, &SET_PLAYER_LOCKON},
		{0xB1906895227793F3, &SET_PLAYER_TARGETING_MODE},
		{0x5702B917B99DB1CD, &SET_PLAYER_TARGET_LEVEL},
		{0xB9CF1F793A9F1BF1, &_0xB9CF1F793A9F1BF1},
		{0xCB645E85E97EA48B, &_0xCB645E85E97EA48B},
		{0xF0B67A4DE6AB5F98, &CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED},
		{0x20CE80B0C2BF4ACC, &HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED},
		{0x4AACB96203D11A31, &CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED},
		{0xE4B90F367BD81752, &HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED},
		{0xCA7DC8329F0A1E9E, &SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE},
		{0xA91C6F0FF7D16A13, &SET_SWIM_MULTIPLIER_FOR_PLAYER},
		{0x6DB47AA77FD94E09, &SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER},
		{0x5063F92F07C2A316, &GET_TIME_SINCE_LAST_ARREST},
		{0xC7034807558DDFCA, &GET_TIME_SINCE_LAST_DEATH},
		{0xAEBF081FFC0A0E5E, &ASSISTED_MOVEMENT_CLOSE_ROUTE},
		{0x8621390F0CDCFE1F, &ASSISTED_MOVEMENT_FLUSH_ROUTE},
		{0x0FEE4F80AC44A726, &SET_PLAYER_FORCED_AIM},
		{0x75E7D505F2B15902, &SET_PLAYER_FORCED_ZOOM},
		{0x7651BC64AE59E128, &SET_PLAYER_FORCE_SKIP_AIM_INTRO},
		{0x5E6CC07646BBEAB8, &DISABLE_PLAYER_FIRING},
		{0xB885852C39CC265D, &_0xB885852C39CC265D},
		{0x2E8AABFA40A84F8C, &SET_DISABLE_AMBIENT_MELEE_MOVE},
		{0x77DFCCF5948B8C71, &SET_PLAYER_MAX_ARMOUR},
		{0x821FDC827D6F4090, &_SPECIAL_ABILITY_ACTIVATE},
		{0xB214D570EAD7F81A, &_SET_SPECIAL_ABILITY},
		{0x17F7471EACA78290, &_SPECIAL_ABILITY_DEPLETE},
		{0xD6A953C6D1492057, &SPECIAL_ABILITY_DEACTIVATE},
		{0x9CB5CE07A3968D5A, &SPECIAL_ABILITY_DEACTIVATE_FAST},
		{0x375F0E738F861A94, &SPECIAL_ABILITY_RESET},
		{0xC9A763D8FE87436A, &SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED},
		{0x2E7B9B683481687D, &SPECIAL_ABILITY_CHARGE_SMALL},
		{0xF113E3AA9BC54613, &SPECIAL_ABILITY_CHARGE_MEDIUM},
		{0xF733F45FA4497D93, &SPECIAL_ABILITY_CHARGE_LARGE},
		{0xED481732DFF7E997, &SPECIAL_ABILITY_CHARGE_CONTINUOUS},
		{0xB7B0870EB531D08D, &SPECIAL_ABILITY_CHARGE_ABSOLUTE},
		{0xA0696A65F009EE18, &SPECIAL_ABILITY_CHARGE_NORMALIZED},
		{0x3DACA8DDC6FD4980, &SPECIAL_ABILITY_FILL_METER},
		{0x1D506DBBBC51E64B, &SPECIAL_ABILITY_DEPLETE_METER},
		{0x6A09D0D590A47D13, &SPECIAL_ABILITY_LOCK},
		{0xF145F3BE2EFA9A3B, &SPECIAL_ABILITY_UNLOCK},
		{0xC6017F6A6CDFA694, &IS_SPECIAL_ABILITY_UNLOCKED},
		{0x3E5F7FC85D854E15, &IS_SPECIAL_ABILITY_ACTIVE},
		{0x05A1FE504B7F2587, &IS_SPECIAL_ABILITY_METER_FULL},
		{0x181EC197DAEFE121, &ENABLE_SPECIAL_ABILITY},
		{0xB1D200FE26AEF3CB, &IS_SPECIAL_ABILITY_ENABLED},
		{0xA49C426ED0CA4AB7, &SET_SPECIAL_ABILITY_MULTIPLIER},
		{0xFFEE8FA29AB9A18E, &_0xFFEE8FA29AB9A18E},
		{0x5FC472C501CCADB3, &_0x5FC472C501CCADB3},
		{0xF10B44FD479D69F3, &_0xF10B44FD479D69F3},
		{0xDD2620B7B9D16FF1, &_0xDD2620B7B9D16FF1},
		{0xAD15F075A4DA0FDE, &START_PLAYER_TELEPORT},
		{0xE23D5873C2394C61, &_HAS_PLAYER_TELEPORT_FINISHED},
		{0xC449EDED9D73009C, &STOP_PLAYER_TELEPORT},
		{0x02B15662D7F8886F, &IS_PLAYER_TELEPORT_ACTIVE},
		{0x2F395D61F3A1F877, &GET_PLAYER_CURRENT_STEALTH_NOISE},
		{0x5DB660B38DD98A31, &SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER},
		{0x8BC515BAE4AAF8FF, &_GET_PLAYER_HEALTH_RECHARGE_LIMIT},
		{0xC388A0F065F5BC34, &_SET_PLAYER_HEALTH_RECHARGE_LIMIT},
		{0xEFD79FA81DFBA9CB, &_SET_PLAYER_FALL_DISTANCE},
		{0xCE07B9F7817AADA3, &SET_PLAYER_WEAPON_DAMAGE_MODIFIER},
		{0x2D83BC011CA14A3C, &SET_PLAYER_WEAPON_DEFENSE_MODIFIER},
		{0xBCFDE9EDE4CF27DC, &_SET_PLAYER_WEAPON_DEFENSE_MODIFIER_2},
		{0x4A3DC7ECCC321032, &SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER},
		{0xAE540335B4ABC4E2, &SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER},
		{0xA50E117CDDF82F0C, &SET_PLAYER_VEHICLE_DAMAGE_MODIFIER},
		{0x4C60E6EFDAFF2462, &SET_PLAYER_VEHICLE_DEFENSE_MODIFIER},
		{0x8D768602ADEF2245, &_0x8D768602ADEF2245},
		{0xD821056B9ACF8052, &_0xD821056B9ACF8052},
		{0x31E90B8873A4CD3B, &_0x31E90B8873A4CD3B},
		{0xA3D0E54541D9A5E5, &SET_PLAYER_PARACHUTE_TINT_INDEX},
		{0x75D3F7A1B0D9B145, &GET_PLAYER_PARACHUTE_TINT_INDEX},
		{0xAF04C87F5DC1DF38, &SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX},
		{0xD5A016BC3C09CF40, &GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX},
		{0x93B0FB27C9A04060, &SET_PLAYER_PARACHUTE_PACK_TINT_INDEX},
		{0x6E9C742F340CE5A2, &GET_PLAYER_PARACHUTE_PACK_TINT_INDEX},
		{0x7DDAB28D31FAC363, &SET_PLAYER_HAS_RESERVE_PARACHUTE},
		{0x5DDFE2FF727F3CA3, &GET_PLAYER_HAS_RESERVE_PARACHUTE},
		{0xF401B182DBA8AF53, &SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL},
		{0x8217FD371A4625CF, &SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR},
		{0xEF56DBABD3CD4887, &GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR},
		{0x11D5F725F0E780E0, &SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS},
		{0xDB89EF50FF25FCE9, &SET_PLAYER_NOISE_MULTIPLIER},
		{0xB2C1A29588A9F47C, &SET_PLAYER_SNEAKING_NOISE_MULTIPLIER},
		{0xF297383AA91DCA29, &CAN_PED_HEAR_PLAYER},
		{0x477D5D63E63ECA5D, &SIMULATE_PLAYER_INPUT_GAIT},
		{0x19531C47A2ABD691, &RESET_PLAYER_INPUT_GAIT},
		{0x9F343285A00B4BB6, &SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE},
		{0xD2B315B6689D537D, &SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE},
		{0x4E9021C1FCDD507A, &SET_PLAYER_STEALTH_PERCEPTION_MODIFIER},
		{0x690A61A6D13583F6, &_0x690A61A6D13583F6},
		{0x9EDD76E87D5D51BA, &_0x9EDD76E87D5D51BA},
		{0xC54C95DA968EC5B5, &SET_PLAYER_SIMULATE_AIMING},
		{0x749FADDF97DFE930, &SET_PLAYER_CLOTH_PIN_FRAMES},
		{0x9F7BBA2EA6372500, &SET_PLAYER_CLOTH_PACKAGE_INDEX},
		{0x14D913B777DFF5DA, &SET_PLAYER_CLOTH_LOCK_COUNTER},
		{0xED51733DC73AED51, &PLAYER_ATTACH_VIRTUAL_BOUND},
		{0x1DD5897E2FA6E7C9, &PLAYER_DETACH_VIRTUAL_BOUND},
		{0xD705740BB0A1CF4C, &HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE},
		{0x38D28DA81E4E9BF9, &IS_PLAYER_BATTLE_AWARE},
		{0xBC0753C9CA14B506, &_0xBC0753C9CA14B506},
		{0x5006D96C995A5827, &EXTEND_WORLD_BOUNDARY_FOR_PLAYER},
		{0xDA1DF03D5A315F4E, &RESET_WORLD_BOUNDARY_FOR_PLAYER},
		{0x4EC12697209F2196, &IS_PLAYER_RIDING_TRAIN},
		{0xD55DDFB47991A294, &HAS_PLAYER_LEFT_THE_WORLD},
		{0xFF300C7649724A0B, &SET_PLAYER_LEAVE_PED_BEHIND},
		{0xD9284A8C0D48352C, &SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE},
		{0x0F4CC924CF8C7B21, &CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE},
		{0x977DB4641F6FC3DB, &SET_PLAYER_PARACHUTE_MODEL_OVERRIDE},
		{0x8753997EB5F6EE3F, &CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE},
		{0xDC80A4C2F18A2B64, &SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE},
		{0x10C54E4389C12B42, &CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE},
		{0xC142BE3BB9CE125F, &DISABLE_PLAYER_VEHICLE_REWARDS},
		{0x2F7CEB6520288061, &_0x2F7CEB6520288061},
		{0x5DC40A8869C22141, &SET_PLAYER_BLUETOOTH_STATE},
		{0x65FAEE425DE637B0, &IS_PLAYER_BLUETOOTH_ENABLE},
		{0x5501B7A5CDB79D37, &_0x5501B7A5CDB79D37},
		{0x56105E599CAB0EFA, &GET_PLAYER_FAKE_WANTED_LEVEL},
		{0x55FCC0C390620314, &_0x55FCC0C390620314},
		{0x2382AB11450AE7BA, &_0x2382AB11450AE7BA},
		{0x6E4361FF3E8CD7CA, &_0x6E4361FF3E8CD7CA},
		{0x237440E46D918649, &_0x237440E46D918649},
		{0xEE4EBDD2593BA844, &_SET_PLAYER_HOMING_ROCKET_DISABLED},
		{0x7BAE68775557AE0B, &_0x7BAE68775557AE0B},
		{0x7148E0F43D11F0D9, &_0x7148E0F43D11F0D9},
		{0x70A382ADEC069DD3, &_0x70A382ADEC069DD3},
		{0x48621C9FCA3EBD28, &_0x48621C9FCA3EBD28},
		{0x81CBAE94390F9F89, &_0x81CBAE94390F9F89},
		{0x13B350B8AD0EEE10, &_0x13B350B8AD0EEE10},
		{0x293220DA1B46CEBC, &_0x293220DA1B46CEBC},
		{0x208784099002BC30, &_0x208784099002BC30},
		{0xEB2D525B57F42B40, &_STOP_RECORDING_THIS_FRAME},
		{0xF854439EFBB3B583, &_0xF854439EFBB3B583},
		{0xAF66DCEE6609B148, &_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES},
		{0x66972397E0757E7A, &_0x66972397E0757E7A},
		{0xC3AC2FFF9612AC81, &_START_RECORDING},
		{0x071A5197D6AFC8B3, &_STOP_RECORDING_AND_SAVE_CLIP},
		{0x88BB3507ED41A240, &_STOP_RECORDING_AND_DISCARD_CLIP},
		{0x644546EC5287471B, &_SAVE_RECORDING_CLIP},
		{0x1897CA71995A90B4, &_IS_RECORDING},
		{0xDF4B952F7D381B95, &_0xDF4B952F7D381B95},
		{0x4282E08174868BE3, &_0x4282E08174868BE3},
		{0x33D47E85B476ABCD, &_0x33D47E85B476ABCD},
		{0x7E2BD3EF6C205F09, &_0x7E2BD3EF6C205F09},
		{0x95AB8B5C992C7B58, &_IS_INTERIOR_RENDERING_DISABLED},
		{0x5AD3932DAEB1E5D3, &_0x5AD3932DAEB1E5D3},
		{0xE058175F8EAFE79A, &_0xE058175F8EAFE79A},
		{0x3353D13F09307691, &_RESET_EDITOR_VALUES},
		{0x49DA8145672B2725, &_ACTIVATE_ROCKSTAR_EDITOR},
		{0x6EB5F71AA68F2E8E, &REQUEST_SCRIPT},
		{0xC90D2DCACD56184C, &SET_SCRIPT_AS_NO_LONGER_NEEDED},
		{0xE6CC9F3BA0FB9EF1, &HAS_SCRIPT_LOADED},
		{0xFC04745FBE67C19A, &DOES_SCRIPT_EXIST},
		{0xD62A67D26D9653E6, &REQUEST_SCRIPT_WITH_NAME_HASH},
		{0xC5BC038960E9DB27, &SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED},
		{0x5F0F0C783EB16C04, &HAS_SCRIPT_WITH_NAME_HASH_LOADED},
		{0xF86AA3C56BA31381, &DOES_SCRIPT_WITH_NAME_HASH_EXIST},
		{0xC8B189ED9138BCD4, &TERMINATE_THREAD},
		{0x46E9AE36D8FA6417, &IS_THREAD_ACTIVE},
		{0x05A42BA9FC8DA96B, &char*},
		{0xDADFADA5A20143A8, &SCRIPT_THREAD_ITERATOR_RESET},
		{0x30B4FA1C82DD4B9F, &SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID},
		{0xC30338E8088E2E21, &GET_ID_OF_THIS_THREAD},
		{0x1090044AD1DA76FA, &TERMINATE_THIS_THREAD},
		{0x2C83A9DA6BFFC4F9, &_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH},
		{0x442E0A7EDE4A738A, &char*},
		{0x8A1C8B1738FFE87E, &GET_HASH_OF_THIS_SCRIPT_NAME},
		{0x5F92A689A06620AA, &GET_NUMBER_OF_EVENTS},
		{0x936E6168A9BCEDB5, &GET_EVENT_EXISTS},
		{0xD8F66A3A60C62153, &GET_EVENT_AT_INDEX},
		{0x2902843FCD2B2D79, &GET_EVENT_DATA},
		{0x5AE99C571D5BBE5D, &TRIGGER_SCRIPT_EVENT},
		{0x078EBE9809CCD637, &SHUTDOWN_LOADING_SCREEN},
		{0x5262CC1995D07E09, &SET_NO_LOADING_SCREEN},
		{0x18C1270EA7F199BC, &GET_NO_LOADING_SCREEN},
		{0xB1577667C3708F9B, &_0xB1577667C3708F9B},
		{0x836B62713E0534CA, &_0x836B62713E0534CA},
		{0x760910B49D2B98EA, &_0x760910B49D2B98EA},
		{0x75B18E49607874C7, &BG_START_CONTEXT_HASH},
		{0x107E5CC7CA942BC1, &BG_END_CONTEXT_HASH},
		{0x9D5A25BADB742ACD, &BG_START_CONTEXT},
		{0xDC2BACD920D0A0DD, &BG_END_CONTEXT},
		{0x0F6F1EBBC4E1D5E6, &_0x0F6F1EBBC4E1D5E6},
		{0x22E21FBCFC88C149, &_0x22E21FBCFC88C149},
		{0x829CD22E043A2577, &_0x829CD22E043A2577},
		{0xA40CC53DF8E50837, &_TRIGGER_SCRIPT_EVENT_2},
		{0x7EE9F5D83DD4F90E, &START_SHAPE_TEST_LOS_PROBE},
		{0x377906D8A31E5586, &_START_SHAPE_TEST_RAY},
		{0x052837721A854EC7, &START_SHAPE_TEST_BOUNDING_BOX},
		{0xFE466162C4401D18, &START_SHAPE_TEST_BOX},
		{0x37181417CE7C8900, &START_SHAPE_TEST_BOUND},
		{0x28579D1B8F8AAC80, &START_SHAPE_TEST_CAPSULE},
		{0xE6AC6C45FBE83004, &START_SHAPE_TEST_SWEPT_SPHERE},
		{0xFF6BE494C7987F34, &_START_SHAPE_TEST_SURROUNDING_COORDS},
		{0x3D87450E15D98694, &GET_SHAPE_TEST_RESULT},
		{0x65287525D951F6BE, &GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL},
		{0x2B3334BCA57CD799, &_SHAPE_TEST_RESULT_ENTITY},
		{0x03A93FF1A2CA0864, &_GET_TOTAL_SC_INBOX_IDS},
		{0xBB8EA16ECBC976C4, &_SC_INBOX_MESSAGE_INIT},
		{0x93028F1DB42BFD08, &_IS_SC_INBOX_VALID},
		{0x2C015348CF19CA1D, &_SC_INBOX_MESSAGE_POP},
		{0xA00EFE4082C4056E, &SC_INBOX_MESSAGE_GET_DATA_INT},
		{0xFFE5C16F402D851D, &_SC_INBOX_MESSAGE_GET_DATA_BOOL},
		{0x7572EF42FC6A9B6D, &SC_INBOX_MESSAGE_GET_DATA_STRING},
		{0x9A2C8064B6C1E41A, &SC_INBOX_MESSAGE_DO_APPLY},
		{0xF3E31D16CBDCB304, &char*},
		{0xDA024BDBD600F44A, &_SC_INBOX_MESSAGE_PUSH_GAMER_TO_EVENT_RECIP_LIST},
		{0xA68D3D229F4F3B06, &_SC_INBOX_MESSAGE_SEND_UGC_STAT_UPDATE_EVENT},
		{0x69D82604A1A5A254, &SC_INBOX_MESSAGE_GET_UGCDATA},
		{0x6AFD2CD753FEEF83, &_SC_INBOX_MESSAGE_SEND_BOUNTY_PRESENCE_EVENT},
		{0x87E0052F08BD64E6, &_SC_INBOX_MESSAGE_GET_BOUNTY_DATA},
		{0x040ADDCBAFA1018A, &_SC_INBOX_GET_EMAILS},
		{0x16DA8172459434AA, &_0x16DA8172459434AA},
		{0x7DB18CA8CAD5B098, &_0x7DB18CA8CAD5B098},
		{0x4737980E8A283806, &_0x4737980E8A283806},
		{0x44ACA259D67651DB, &_0x44ACA259D67651DB},
		{0x2330C12A7A605D16, &SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST},
		{0x55DF6DB45179236E, &SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST},
		{0x116FB94DC4B79F17, &_0x116FB94DC4B79F17},
		{0x07DBD622D9533857, &_0x07DBD622D9533857},
		{0xBFA0A56A817C6C7D, &_SET_HANDLE_ROCKSTAR_MESSAGE_VIA_SCRIPT},
		{0xBC1CC91205EC8D6E, &_IS_ROCKSTAR_MESSAGE_READY_FOR_SCRIPT},
		{0xDF649C4E9AFDD788, &char*},
		{0x1F1E9682483697C7, &_0x1F1E9682483697C7},
		{0xC4C4575F62534A24, &_0xC4C4575F62534A24},
		{0x287F1F75D2803595, &_0x287F1F75D2803595},
		{0x487912FD248EFDDF, &_0x487912FD248EFDDF},
		{0xC85A7127E7AD02AA, &_0xC85A7127E7AD02AA},
		{0xA770C8EEC6FB2AC5, &_0xA770C8EEC6FB2AC5},
		{0x8416FE4E4629D7D7, &_SC_GET_IS_PROFILE_ATTRIBUTE_SET},
		{0x7FFCBFEE44ECFABF, &_0x7FFCBFEE44ECFABF},
		{0x2D874D4AE612A65F, &_0x2D874D4AE612A65F},
		{0x75632C5ECD7ED843, &SC_PROFANITY_CHECK_STRING},
		{0xEB2BF817463DFA28, &_SC_PROFANITY_CHECK_UGC_STRING},
		{0x1753344C770358AE, &SC_PROFANITY_GET_CHECK_IS_VALID},
		{0x82E4A58BABC15AE7, &SC_PROFANITY_GET_CHECK_IS_PENDING},
		{0x85535ACF97FC0969, &SC_PROFANITY_GET_STRING_PASSED},
		{0x930DE22F07B1CCE3, &SC_PROFANITY_GET_STRING_STATUS},
		{0xF6BAAAF762E1BF40, &_0xF6BAAAF762E1BF40},
		{0xF22CA0FD74B80E7A, &_0xF22CA0FD74B80E7A},
		{0x9237E334F6E43156, &_0x9237E334F6E43156},
		{0x700569DBA175A77C, &_0x700569DBA175A77C},
		{0x1D4446A62D35B0D0, &_0x1D4446A62D35B0D0},
		{0x2E89990DDFF670C3, &_0x2E89990DDFF670C3},
		{0xD0EE05FE193646EA, &_0xD0EE05FE193646EA},
		{0x1989C6E6F67E76A8, &_0x1989C6E6F67E76A8},
		{0x07C61676E5BB52CD, &_0x07C61676E5BB52CD},
		{0x8147FFF6A718E1AD, &_0x8147FFF6A718E1AD},
		{0x0F73393BAC7E6730, &_0x0F73393BAC7E6730},
		{0xD302E99EDF0449CF, &_0xD302E99EDF0449CF},
		{0x5C4EBFFA98BDB41C, &_0x5C4EBFFA98BDB41C},
		{0xFF8F3A92B75ED67A, &_0xFF8F3A92B75ED67A},
		{0x4ED9C8D6DA297639, &_0x4ED9C8D6DA297639},
		{0x710BCDA8071EDED1, &_0x710BCDA8071EDED1},
		{0x50A8A36201DBF83E, &_0x50A8A36201DBF83E},
		{0x9DE5D2F723575ED0, &_0x9DE5D2F723575ED0},
		{0xC2C97EA97711D1AE, &_0xC2C97EA97711D1AE},
		{0x450819D8CF90C416, &_0x450819D8CF90C416},
		{0x4A7D6E727F941747, &_0x4A7D6E727F941747},
		{0xE75A4A2E5E316D86, &_0xE75A4A2E5E316D86},
		{0x2570E26BE63964E3, &_0x2570E26BE63964E3},
		{0x1D12A56FC95BE92E, &_0x1D12A56FC95BE92E},
		{0x33DF47CC0642061B, &_0x33DF47CC0642061B},
		{0xA468E0BE12B12C70, &_0xA468E0BE12B12C70},
		{0x8CC469AB4D349B7C, &_0x8CC469AB4D349B7C},
		{0xC5A35C73B68F3C49, &_0xC5A35C73B68F3C49},
		{0x699E4A5C8C893A18, &_0x699E4A5C8C893A18},
		{0x19853B5B17D77BCA, &_0x19853B5B17D77BCA},
		{0x6BFB12CE158E3DD4, &_0x6BFB12CE158E3DD4},
		{0xFE4C1D0D3B9CC17E, &_0xFE4C1D0D3B9CC17E},
		{0xD8122C407663B995, &_0xD8122C407663B995},
		{0x3001BEF2FECA3680, &_0x3001BEF2FECA3680},
		{0x92DA6E70EF249BD1, &_0x92DA6E70EF249BD1},
		{0x675721C9F644D161, &_0x675721C9F644D161},
		{0xE4F6E8D07A2F0F51, &_0xE4F6E8D07A2F0F51},
		{0x8A4416C0DB05FA66, &_0x8A4416C0DB05FA66},
		{0xEA95C0853A27888E, &_0xEA95C0853A27888E},
		{0x198D161F458ECC7F, &char*},
		{0x225798743970412B, &_0x225798743970412B},
		{0x418DC16FAE452C1C, &_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED},
		{0xEB0A72181D4AA4AD, &STAT_CLEAR_SLOT_FOR_RELOAD},
		{0xA651443F437B1CE6, &STAT_LOAD},
		{0xE07BCA305B82D2FD, &STAT_SAVE},
		{0x5688585E6D563CD8, &_0x5688585E6D563CD8},
		{0xA1750FFAFA181661, &STAT_LOAD_PENDING},
		{0x7D3A583856F2C5AC, &STAT_SAVE_PENDING},
		{0xBBB6AD006F1BBEA3, &STAT_SAVE_PENDING_OR_REQUESTED},
		{0x49A49BED12794D70, &STAT_DELETE_SLOT},
		{0x0D0A9F0E7BD91E3C, &STAT_SLOT_IS_LOADED},
		{0x7F2C4CDF2E82DF4C, &_0x7F2C4CDF2E82DF4C},
		{0xE496A53BA5F50A56, &_0xE496A53BA5F50A56},
		{0xF434A10BA01C37D0, &_0xF434A10BA01C37D0},
		{0x7E6946F68A38B74F, &_0x7E6946F68A38B74F},
		{0xA8733668D1047B51, &_0xA8733668D1047B51},
		{0xECB41AC6AB754401, &_0xECB41AC6AB754401},
		{0x9B4BD21D69B1E609, &_0x9B4BD21D69B1E609},
		{0xC0E0D686DDFC6EAE, &_0xC0E0D686DDFC6EAE},
		{0xB3271D7AB655B441, &STAT_SET_INT},
		{0x4851997F37FE9B3C, &STAT_SET_FLOAT},
		{0x4B33C4243DE0C432, &STAT_SET_BOOL},
		{0x17695002FD8B2AE0, &STAT_SET_GXT_LABEL},
		{0x2C29BFB64F4FCBE4, &STAT_SET_DATE},
		{0xA87B2335D12531D7, &STAT_SET_STRING},
		{0xDB283FDE680FE72E, &STAT_SET_POS},
		{0x7BBB1B54583ED410, &STAT_SET_MASKED_INT},
		{0x8CDDF1E452BABE11, &STAT_SET_USER_ID},
		{0xC2F84B7F9C4D0C61, &STAT_SET_CURRENT_POSIX_TIME},
		{0x767FBC2AC802EF3D, &STAT_GET_INT},
		{0xD7AE6C9C9C6AC54C, &STAT_GET_FLOAT},
		{0x11B5E6D2AE73F48E, &STAT_GET_BOOL},
		{0x8B0FACEFC36C824B, &STAT_GET_DATE},
		{0xE50384ACC2C3DB74, &char*},
		{0x350F82CCB186AA1B, &STAT_GET_POS},
		{0x655185A06D9EEAAB, &STAT_GET_MASKED_INT},
		{0x2365C388E393BBE2, &char*},
		{0x5473D4195058B2E4, &char*},
		{0x69FF13266D7296DA, &STAT_SET_LICENSE_PLATE},
		{0x9B5A68C6489E9909, &STAT_INCREMENT},
		{0x5A556B229A169402, &_0x5A556B229A169402},
		{0xB1D2BB1E1631F5B1, &_0xB1D2BB1E1631F5B1},
		{0xBED9F5693F34ED17, &_0xBED9F5693F34ED17},
		{0x26D7399B9587FE89, &_0x26D7399B9587FE89},
		{0xA78B8FA58200DA56, &_0xA78B8FA58200DA56},
		{0xE0E854F5280FB769, &STAT_GET_NUMBER_OF_DAYS},
		{0xF2D4B2FE415AAFC3, &STAT_GET_NUMBER_OF_HOURS},
		{0x7583B4BE4C5A41B5, &STAT_GET_NUMBER_OF_MINUTES},
		{0x2CE056FF3723F00B, &STAT_GET_NUMBER_OF_SECONDS},
		{0x68F01422BE1D838F, &STAT_SET_PROFILE_SETTING_VALUE},
		{0xF4D8E7AC2A27758C, &_0xF4D8E7AC2A27758C},
		{0x94F12ABF9C79E339, &_0x94F12ABF9C79E339},
		{0x80C75307B1C42837, &GET_PACKED_BOOL_STAT_KEY},
		{0x61E111E323419E07, &GET_PACKED_INT_STAT_KEY},
		{0xC4BB08EE7907471E, &_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY},
		{0xD16C2AD6B8E32854, &_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY},
		{0xBA52FF538ED2BC71, &_GET_NGSTAT_BOOL_HASH},
		{0x2B4CDCA6F07FF3DA, &_GET_NGSTAT_INT_HASH},
		{0x10FE3F1B79F9B071, &STAT_GET_BOOL_MASKED},
		{0x5BC62EC1937B9E5B, &STAT_SET_BOOL_MASKED},
		{0x5009DFD741329729, &PLAYSTATS_BACKGROUND_SCRIPT_ACTION},
		{0x93054C88E6AA7C44, &PLAYSTATS_NPC_INVITE},
		{0x46F917F6B4128FE4, &PLAYSTATS_AWARD_XP},
		{0xC7F2DE41D102BFB4, &PLAYSTATS_RANK_UP},
		{0x098760C7461724CD, &_PLAYSTATS_START_OFFLINE_MODE},
		{0xA071E0ED98F91286, &_0xA071E0ED98F91286},
		{0xC5BE134EC7BA96A0, &_0xC5BE134EC7BA96A0},
		{0xC19A2925C34D2231, &PLAYSTATS_MISSION_STARTED},
		{0x7C4BB33A8CED7324, &PLAYSTATS_MISSION_OVER},
		{0xC900596A63978C1D, &PLAYSTATS_MISSION_CHECKPOINT},
		{0x71862B1D855F32E1, &PLAYSTATS_RANDOM_MISSION_DONE},
		{0x121FB4DDDC2D5291, &PLAYSTATS_ROS_BET},
		{0x9C375C315099DDE4, &PLAYSTATS_RACE_CHECKPOINT},
		{0x6DEE77AFF8C21BD1, &_0x6DEE77AFF8C21BD1},
		{0xBC80E22DED931E3D, &PLAYSTATS_MATCH_STARTED},
		{0x176852ACAAC173D1, &PLAYSTATS_SHOP_ITEM},
		{0x1CAE5D2E3F9A07F0, &_PLAYSTATS_CRATE_DROP},
		{0xAFC7E5E075A96F46, &_PLAYSTATS_CRATE_CREATED},
		{0xCB00196B31C39EB1, &_PLAYSTATS_HOLD_UP},
		{0x2B69F5074C894811, &_PLAYSTATS_IMP_EXP},
		{0xADDD1C754E2E2914, &_PLAYSTATS_RACE_TO_POINT},
		{0x79AB33F0FBFAC40C, &PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE},
		{0xDDF24D535060F811, &PLAYSTATS_WEBSITE_VISITED},
		{0x0F71DE29AB2258F1, &PLAYSTATS_FRIEND_ACTIVITY},
		{0x69DEA3E9DB727B4C, &PLAYSTATS_ODDJOB_DONE},
		{0xBA739D6D5A05D6E7, &PLAYSTATS_PROP_CHANGE},
		{0x34B973047A2268B9, &PLAYSTATS_CLOTH_CHANGE},
		{0xE95C8A1875A02CA4, &PLAYSTATS_WEAPON_MODE_CHANGE},
		{0x6058665D72302D3F, &PLAYSTATS_CHEAT_APPLIED},
		{0xF8C54A461C3E11DC, &_0xF8C54A461C3E11DC},
		{0xF5BB8DAC426A52C0, &_0xF5BB8DAC426A52C0},
		{0xA736CF7FB7C5BFF4, &_0xA736CF7FB7C5BFF4},
		{0x14E0B2D1AD1044E0, &_0x14E0B2D1AD1044E0},
		{0x90D0622866E80445, &PLAYSTATS_QUICKFIX_TOOL},
		{0x5DA3A8DE8CB6226F, &PLAYSTATS_IDLE_KICK},
		{0xD1032E482629049E, &_0xD1032E482629049E},
		{0xF4FF020A08BC8863, &_PLAYSTATS_HEIST_SAVE_CHEAT},
		{0x46326E13DA4E0546, &_PLAYSTATS_DIRECTOR_MODE},
		{0x47B32F5611E6E483, &_PLAYSTATS_AWARD_BADSPORT},
		{0x9572BD4DD6B72122, &_PLAYSTATS_PEGASAIRCRAFT},
		{0x6A60E43998228229, &_0x6A60E43998228229},
		{0xBFAFDB5FAAA5C5AB, &_0xBFAFDB5FAAA5C5AB},
		{0x8C9D11605E59D955, &_0x8C9D11605E59D955},
		{0x3DE3AA516FB126A4, &_0x3DE3AA516FB126A4},
		{0xBAA2F0490E146BE8, &_0xBAA2F0490E146BE8},
		{0x1A7CE7CD3E653485, &_0x1A7CE7CD3E653485},
		{0x419615486BBF1956, &_0x419615486BBF1956},
		{0x84DFC579C2FC214C, &_0x84DFC579C2FC214C},
		{0x0A9C7F36E5D7B683, &_0x0A9C7F36E5D7B683},
		{0x164C5FF663790845, &_0x164C5FF663790845},
		{0xEDBF6C9B0D2C65C8, &_0xEDBF6C9B0D2C65C8},
		{0x6551B1F7F6CD46EA, &_0x6551B1F7F6CD46EA},
		{0x2CD90358F67D0AA8, &_0x2CD90358F67D0AA8},
		{0x203B381133817079, &_PLAYSTATS_PI_MENU_HIDE_SETTINGS},
		{0x117B45156D7EFF2E, &LEADERBOARDS_GET_NUMBER_OF_COLUMNS},
		{0xC4B5467A1886EA7E, &LEADERBOARDS_GET_COLUMN_ID},
		{0xBF4FEF46DB7894D3, &LEADERBOARDS_GET_COLUMN_TYPE},
		{0xA34CB6E6F0DF4A0B, &LEADERBOARDS_READ_CLEAR_ALL},
		{0x7CCE5C737A665701, &LEADERBOARDS_READ_CLEAR},
		{0xAC392C8483342AC2, &LEADERBOARDS_READ_PENDING},
		{0xA31FD15197B192BD, &LEADERBOARDS_READ_ANY_PENDING},
		{0x2FB19228983E832C, &LEADERBOARDS_READ_SUCCESSFUL},
		{0x918B101666F9CB83, &LEADERBOARDS2_READ_FRIENDS_BY_ROW},
		{0xC30713A383BFBF0E, &LEADERBOARDS2_READ_BY_HANDLE},
		{0xA9CDB1E3F0A49883, &LEADERBOARDS2_READ_BY_ROW},
		{0xBA2C7DB0C129449A, &LEADERBOARDS2_READ_BY_RANK},
		{0x5CE587FB5A42C8C4, &LEADERBOARDS2_READ_BY_RADIUS},
		{0x7EEC7E4F6984A16A, &LEADERBOARDS2_READ_BY_SCORE_INT},
		{0xE662C8B759D08F3C, &LEADERBOARDS2_READ_BY_SCORE_FLOAT},
		{0xC38DC1E90D22547C, &LEADERBOARDS2_READ_RANK_PREDICTION},
		{0xF1AE5DCDBFCA2721, &_LEADERBOARDS2_READ_BY_PLATFORM},
		{0xA0F93D5465B3094D, &_0xA0F93D5465B3094D},
		{0x71B008056E5692D6, &_0x71B008056E5692D6},
		{0x34770B9CE0E03B91, &_0x34770B9CE0E03B91},
		{0x88578F6EC36B4A3A, &_0x88578F6EC36B4A3A},
		{0x38491439B6BA7F7D, &_0x38491439B6BA7F7D},
		{0xAE2206545888AE49, &LEADERBOARDS2_WRITE_DATA},
		{0x0BCA1D2C47B0D269, &LEADERBOARDS_WRITE_ADD_COLUMN},
		{0x2E65248609523599, &LEADERBOARDS_WRITE_ADD_COLUMN_LONG},
		{0xB9BB18E2C40142ED, &LEADERBOARDS_CACHE_DATA_ROW},
		{0xD4B02A6B476E1FDC, &LEADERBOARDS_CLEAR_CACHE_DATA},
		{0x8EC74CEB042E7CFF, &_0x8EC74CEB042E7CFF},
		{0x9C51349BE6CDFE2C, &LEADERBOARDS_GET_CACHE_EXISTS},
		{0xF04C1C27DA35F6C8, &LEADERBOARDS_GET_CACHE_TIME},
		{0x58A651CD201D89AD, &LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS},
		{0x9120E8DBA3D69273, &LEADERBOARDS_GET_CACHE_DATA_ROW},
		{0x11FF1C80276097ED, &_UPDATE_STAT_INT},
		{0x30A6614C1F7799B8, &_UPDATE_STAT_FLOAT},
		{0x6483C25849031C4F, &_0x6483C25849031C4F},
		{0x5EAD2BF6484852E4, &_0x5EAD2BF6484852E4},
		{0xC141B8917E0017EC, &_0xC141B8917E0017EC},
		{0xB475F27C6A994D65, &_0xB475F27C6A994D65},
		{0xC67E2DA1CBE759E2, &_0xC67E2DA1CBE759E2},
		{0xF1A1803D3476F215, &_0xF1A1803D3476F215},
		{0x38BAAA5DD4C9D19F, &_0x38BAAA5DD4C9D19F},
		{0x55384438FC55AD8E, &_0x55384438FC55AD8E},
		{0x723C1CE13FBFDB67, &_0x723C1CE13FBFDB67},
		{0x0D01D20616FC73FB, &_0x0D01D20616FC73FB},
		{0x428EAF89E24F6C36, &_0x428EAF89E24F6C36},
		{0x047CBED6F6F8B63C, &_0x047CBED6F6F8B63C},
		{0xC980E62E33DF1D5C, &LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE},
		{0x6F361B8889A792A3, &_0x6F361B8889A792A3},
		{0xC847B43F369AC0B5, &_0xC847B43F369AC0B5},
		{0xA5C80D8E768A9E66, &_STAT_MIGRATE_SAVE},
		{0x9A62EC95AE10E011, &_0x9A62EC95AE10E011},
		{0x4C89FE2BDEB3F169, &_0x4C89FE2BDEB3F169},
		{0xC6E0E2616A7576BB, &_0xC6E0E2616A7576BB},
		{0x5BD5F255321C4AAF, &_0x5BD5F255321C4AAF},
		{0xDEAAF77EB3687E97, &_0xDEAAF77EB3687E97},
		{0xC70DDCE56D0D3A99, &STAT_SAVE_MIGRATION_STATUS_START},
		{0x886913BBEACA68C1, &STAT_GET_SAVE_MIGRATION_STATUS},
		{0x4FEF53183C3C6414, &_STAT_SAVE_MIGRATION_CANCEL},
		{0x567384DFA67029E6, &_STAT_GET_CANCEL_SAVE_MIGRATION_STATUS},
		{0x3270F67EED31FBC1, &_STAT_SAVE_MIGRATION_CONSUME_CONTENT_UNLOCK},
		{0xCE5AA445ABA8DEE0, &_STAT_GET_SAVE_MIGRATION_CONSUME_CONTENT_UNLOCK_STATUS},
		{0x98E2BC1CA26287C3, &_0x98E2BC1CA26287C3},
		{0x629526ABA383BCAA, &_0x629526ABA383BCAA},
		{0xBE3DB208333D9844, &_0xBE3DB208333D9844},
		{0x33D72899E24C3365, &_0x33D72899E24C3365},
		{0xA761D4AC6115623D, &_0xA761D4AC6115623D},
		{0xF11F01D98113536A, &_0xF11F01D98113536A},
		{0x8B9CDBD6C566C38C, &_0x8B9CDBD6C566C38C},
		{0xE8853FBCE7D8D0D6, &_0xE8853FBCE7D8D0D6},
		{0xA943FD1722E11EFD, &_0xA943FD1722E11EFD},
		{0x84A810B375E69C0E, &_0x84A810B375E69C0E},
		{0x9EC8858184CD253A, &_0x9EC8858184CD253A},
		{0xBA9749CC94C1FD85, &_0xBA9749CC94C1FD85},
		{0x55A8BECAF28A4EB7, &_0x55A8BECAF28A4EB7},
		{0x32CAC93C9DE73D32, &_0x32CAC93C9DE73D32},
		{0xAFF47709F1D5DCCE, &_0xAFF47709F1D5DCCE},
		{0x6E0A5253375C4584, &_0x6E0A5253375C4584},
		{0x1A8EA222F9C67DBB, &_0x1A8EA222F9C67DBB},
		{0xF9F2922717B819EC, &_0xF9F2922717B819EC},
		{0x0B8B7F74BF061C6D, &_0x0B8B7F74BF061C6D},
		{0xB3DA2606774A8E2D, &_0xB3DA2606774A8E2D},
		{0xDAC073C7901F9E15, &_SET_HAS_CONTENT_UNLOCKS_FLAGS},
		{0xF6792800AC95350D, &_SET_SAVE_MIGRATION_TRANSACTION_ID},
		{0x6BC0ACD0673ACEBE, &_0x6BC0ACD0673ACEBE},
		{0x8D8ADB562F09A245, &_0x8D8ADB562F09A245},
		{0xD1A1EE3B4FA8E760, &_0xD1A1EE3B4FA8E760},
		{0x88087EE1F28024AE, &_0x88087EE1F28024AE},
		{0xFCC228E07217FCAC, &_0xFCC228E07217FCAC},
		{0x678F86D8FC040BDB, &_0x678F86D8FC040BDB},
		{0xA6F54BB2FFCA35EA, &_0xA6F54BB2FFCA35EA},
		{0x5FF2C33B13A02A11, &_0x5FF2C33B13A02A11},
		{0x282B6739644F4347, &_0x282B6739644F4347},
		{0xF06A6F41CB445443, &_0xF06A6F41CB445443},
		{0x7B18DA61F6BAE9D5, &_0x7B18DA61F6BAE9D5},
		{0x06EAF70AE066441E, &_0x06EAF70AE066441E},
		{0x14EDA9EE27BD1626, &_0x14EDA9EE27BD1626},
		{0x930F504203F561C9, &_0x930F504203F561C9},
		{0xE3261D791EB44ACB, &_0xE3261D791EB44ACB},
		{0x73001E34F85137F8, &_0x73001E34F85137F8},
		{0x53CAE13E9B426993, &_0x53CAE13E9B426993},
		{0x7D36291161859389, &_0x7D36291161859389},
		{0xBE509B0A3693DE8B, &_PLAYSTATS_SPENT_PI_CUSTOM_LOADOUT},
		{0xD6781E42755531F7, &_0xD6781E42755531F7},
		{0xC729991A9065376E, &_0xC729991A9065376E},
		{0x2605663BD4F23B5D, &_0x2605663BD4F23B5D},
		{0x04D90BA8207ADA2D, &_0x04D90BA8207ADA2D},
		{0x60EEDC12AF66E846, &_0x60EEDC12AF66E846},
		{0x3EBEAC6C3F81F6BD, &_0x3EBEAC6C3F81F6BD},
		{0x96E6D5150DBF1C09, &_0x96E6D5150DBF1C09},
		{0xA3C53804BDB68ED2, &_0xA3C53804BDB68ED2},
		{0x6BCCF9948492FD85, &_0x6BCCF9948492FD85},
		{0x792271AB35C356A4, &_HIRED_LIMO},
		{0xCEA553E35C2246E1, &_ORDERED_BOSS_VEHICLE},
		{0xD1C9B92BDD3F151D, &_0xD1C9B92BDD3F151D},
		{0x44919CC079BB60BF, &_0x44919CC079BB60BF},
		{0x7033EEFD9B28088E, &_0x7033EEFD9B28088E},
		{0xAA525DFF66BB82F5, &_0xAA525DFF66BB82F5},
		{0x015B03EE1C43E6EC, &_0x015B03EE1C43E6EC},
		{0x928DBFB892638EF3, &_PLAYSTATS_STUNT_PERFORMED_EVENT_ALLOW_TRIGGER},
		{0x8A800DACCC0DA55D, &_PLAYSTATS_STUNT_PERFORMED_EVENT_DISALLOW_TRIGGER},
		{0xBF371CD2B64212FD, &_0xBF371CD2B64212FD},
		{0x7D8BA05688AD64C7, &_0x7D8BA05688AD64C7},
		{0x0B565B0AAE56A0E8, &_0x0B565B0AAE56A0E8},
		{0x28ECB8AC2F607DB2, &_0x28ECB8AC2F607DB2},
		{0x0A50D2604E05CB94, &_PLAYSTATS_CHANGE_MC_EMBLEM},
		{0xCC25A4553DFBF9EA, &_0xCC25A4553DFBF9EA},
		{0xF534D94DFA2EAD26, &_0xF534D94DFA2EAD26},
		{0xD558BEC0BBA7E8D2, &_0xD558BEC0BBA7E8D2},
		{0x501478855A6074CE, &_PLAYSTATS_EARNED_MC_POINTS},
		{0x03C2EEBB04B3FB72, &_0x03C2EEBB04B3FB72},
		{0x8989CBD7B4E82534, &_0x8989CBD7B4E82534},
		{0x27AA1C973CACFE63, &_0x27AA1C973CACFE63},
		{0xB7257BA2550EA10A, &_PLAYSTATS_COPY_RANK_INTO_NEW_SLOT},
		{0x848B66100EE33B05, &_PLAYSTATS_DUPE_DETECTION},
		{0x516FC96EB88EEFE5, &_PLAYSTATS_BAN_ALERT},
		{0x0EACDF8487D5155A, &_PLAYSTATS_GUNRUN_MISSION_ENDED},
		{0xDAF80797FC534BEC, &_0xDAF80797FC534BEC},
		{0x316DB59CD14C1774, &_0x316DB59CD14C1774},
		{0x2D7A9B577E72385E, &_0x2D7A9B577E72385E},
		{0x830C3A44EB3F2CF9, &_0x830C3A44EB3F2CF9},
		{0xB26F670685631727, &_0xB26F670685631727},
		{0xC14BD9F5337219B2, &_0xC14BD9F5337219B2},
		{0x35E39E5570358630, &_PLAYSTATS_STONE_HATCHET_END},
		{0x320C35147D5B5DDD, &_PLAYSTATS_SMUG_MISSION_ENDED},
		{0xD8AFB345A9C5CCBB, &_PLAYSTATS_H2_FMPREP_END},
		{0x1E1497D0D2108115, &_PLAYSTATS_H2_INSTANCE_END},
		{0x0BC254FF3A911501, &_PLAYSTATS_DAR_MISSION_END},
		{0x878FF156D36E9956, &_PLAYSTATS_ENTER_SESSION_PACK},
		{0x66C7BB2416ED3FCE, &_PLAYSTATS_DRONE_USAGE},
		{0x6731DE84A38BFAD0, &_PLAYSTATS_SPECTATOR_WHEEL_SPIN},
		{0x6F4F599753F8200A, &_PLAYSTATS_ARENA_WAR_SPECTATOR},
		{0xB479D9F0D48A1BC5, &_PLAYSTATS_ARENA_WARS_ENDED},
		{0x35EEC6C2BC821A71, &_PLAYSTATS_PASSIVE_MODE},
		{0xCD0A8A9338681CF2, &_PLAYSTATS_COLLECTIBLE},
		{0xFCCCAC2BD3C1F180, &_PLAYSTATS_CASINO_STORY_MISSION_ENDED},
		{0x0999F3F090EC5012, &_PLAYSTATS_CASINO_CHIP},
		{0x95101C443A84E7F1, &_PLAYSTATS_CASINO_ROULETTE},
		{0x3EAE97309727E7AD, &_PLAYSTATS_CASINO_BLACKJACK},
		{0xF740FB339D471C35, &_PLAYSTATS_CASINO_THREECARDPOKER},
		{0xEF5EC67D392B830A, &_PLAYSTATS_CASINO_SLOTMACHINE},
		{0x049F059625058A86, &_PLAYSTATS_CASINO_INSIDETRACK},
		{0x0C432C1435F5E4FA, &_PLAYSTATS_CASINO_LUCKYSEVEN},
		{0x6572ABA3DE1197FC, &_PLAYSTATS_CASINO_ROULETTE_LIGHT},
		{0xD5451C7BF151EB6F, &_PLAYSTATS_CASINO_BLACKJACK_LIGHT},
		{0xC9001364B4388F22, &_PLAYSTATS_CASINO_THREECARDPOKER_LIGHT},
		{0xE60054A0FAE8227F, &_PLAYSTATS_CASINO_SLOTMACHINE_LIGHT},
		{0x23A3CBCD50D54E47, &_PLAYSTATS_CASINO_INSIDETRACK_LIGHT},
		{0x533A7D1EA58DF958, &_PLAYSTATS_ARCADEGAME},
		{0x1A0D4A6C336B7BC5, &_PLAYSTATS_CASINO_MISSION_ENDED},
		{0xBD6E84632DD4CB3F, &LOAD_ALL_OBJECTS_NOW},
		{0x4448EB75B4904BDB, &LOAD_SCENE},
		{0xC4582015556D1C46, &NETWORK_UPDATE_LOAD_SCENE},
		{0x41CA5A33160EA4AB, &IS_NETWORK_LOADING_SCENE},
		{0xE37B76C387BE28ED, &SET_INTERIOR_ACTIVE},
		{0x963D27A58DF860AC, &REQUEST_MODEL},
		{0xA0261AEF7ACFC51E, &REQUEST_MENU_PED_MODEL},
		{0x98A4EB5D89A0C952, &HAS_MODEL_LOADED},
		{0x8A7A40100EDFEC58, &REQUEST_MODELS_IN_ROOM},
		{0xE532F5D78798DAAB, &SET_MODEL_AS_NO_LONGER_NEEDED},
		{0x35B9E0803292B641, &IS_MODEL_IN_CDIMAGE},
		{0xC0296A2EDF545E92, &IS_MODEL_VALID},
		{0x75816577FEA6DAD5, &IS_MODEL_A_PED},
		{0x19AAC8F07BFEC53E, &IS_MODEL_A_VEHICLE},
		{0x07503F7948F491A7, &REQUEST_COLLISION_AT_COORD},
		{0x923CB32A3B874FCB, &REQUEST_COLLISION_FOR_MODEL},
		{0x22CCA434E368F03A, &HAS_COLLISION_FOR_MODEL_LOADED},
		{0xC9156DC11411A9EA, &REQUEST_ADDITIONAL_COLLISION_AT_COORD},
		{0x2DA49C3B79856961, &DOES_ANIM_DICT_EXIST},
		{0xD3BD40951412FEF6, &REQUEST_ANIM_DICT},
		{0xD031A9162D01088C, &HAS_ANIM_DICT_LOADED},
		{0xF66A602F829E2A06, &REMOVE_ANIM_DICT},
		{0x6EA47DAE7FAD0EED, &REQUEST_ANIM_SET},
		{0xC4EA073D86FB29B0, &HAS_ANIM_SET_LOADED},
		{0x16350528F93024B3, &REMOVE_ANIM_SET},
		{0xD2A71E1A77418A49, &REQUEST_CLIP_SET},
		{0x318234F4F3738AF3, &HAS_CLIP_SET_LOADED},
		{0x01F73A131C18CD94, &REMOVE_CLIP_SET},
		{0x41B4893843BBDB74, &REQUEST_IPL},
		{0xEE6C5AD3ECE0A82D, &REMOVE_IPL},
		{0x88A741E44A2B3495, &IS_IPL_ACTIVE},
		{0x6E0C692677008888, &SET_STREAMING},
		{0x717CD6E6FAEBBEDC, &SET_GAME_PAUSES_FOR_STREAMING},
		{0x77B5F9A36BF96710, &SET_REDUCE_PED_MODEL_BUDGET},
		{0x80C527893080CCF3, &SET_REDUCE_VEHICLE_MODEL_BUDGET},
		{0x42CBE54462D92634, &SET_DITCH_POLICE_MODELS},
		{0x4060057271CEBC89, &GET_NUMBER_OF_STREAMING_REQUESTS},
		{0x944955FB2A3935C8, &REQUEST_PTFX_ASSET},
		{0xCA7D9B86ECA7481B, &HAS_PTFX_ASSET_LOADED},
		{0x88C6814073DD4A73, &REMOVE_PTFX_ASSET},
		{0xB80D8756B4668AB6, &REQUEST_NAMED_PTFX_ASSET},
		{0x8702416E512EC454, &HAS_NAMED_PTFX_ASSET_LOADED},
		{0x5F61EBBE1A00F96D, &REMOVE_NAMED_PTFX_ASSET},
		{0xCB9E1EB3BE2AF4E9, &SET_VEHICLE_POPULATION_BUDGET},
		{0x8C95333CFC3340F3, &SET_PED_POPULATION_BUDGET},
		{0x31B73D1EA9F01DA2, &CLEAR_FOCUS},
		{0xBB7454BAFF08FE25, &SET_FOCUS_POS_AND_VEL},
		{0x198F77705FA0931D, &SET_FOCUS_ENTITY},
		{0x2DDFF3FB9075D747, &IS_ENTITY_FOCUS},
		{0x0811381EF5062FEC, &_0x0811381EF5062FEC},
		{0xAF12610C644A35C9, &SET_MAPDATACULLBOX_ENABLED},
		{0x4E52E752C76E7E7A, &_0x4E52E752C76E7E7A},
		{0x219C7B8D53E429FD, &FORMAT_FOCUS_HEADING},
		{0x1F3F018BC3AFA77C, &_0x1F3F018BC3AFA77C},
		{0x0AD9710CEE2F590F, &_0x0AD9710CEE2F590F},
		{0x1EE7D8DF4425F053, &_0x1EE7D8DF4425F053},
		{0x7D41E9D2D17C5B2D, &_0x7D41E9D2D17C5B2D},
		{0x07C313F94746702C, &_0x07C313F94746702C},
		{0xBC9823AB80A3DCAC, &_0xBC9823AB80A3DCAC},
		{0x212A8D0D2BABFAC2, &NEW_LOAD_SCENE_START},
		{0xACCFB4ACF53551B0, &NEW_LOAD_SCENE_START_SPHERE},
		{0xC197616D221FF4A4, &NEW_LOAD_SCENE_STOP},
		{0xA41A05B6CB741B85, &IS_NEW_LOAD_SCENE_ACTIVE},
		{0x01B8247A7A8B9AD1, &IS_NEW_LOAD_SCENE_LOADED},
		{0x71E7B2E657449AAD, &_0x71E7B2E657449AAD},
		{0xFAA23F2CBA159D67, &START_PLAYER_SWITCH},
		{0x95C0A5BBDC189AA1, &STOP_PLAYER_SWITCH},
		{0xD9D2CFFF49FAB35F, &IS_PLAYER_SWITCH_IN_PROGRESS},
		{0xB3C94A90D9FC9E62, &GET_PLAYER_SWITCH_TYPE},
		{0xB5D7B26B45720E05, &GET_IDEAL_PLAYER_SWITCH_TYPE},
		{0x470555300D10B2A5, &GET_PLAYER_SWITCH_STATE},
		{0x20F898A5D9782800, &GET_PLAYER_SHORT_SWITCH_STATE},
		{0x5F2013F8BC24EE69, &_0x5F2013F8BC24EE69},
		{0x78C0D93253149435, &GET_PLAYER_SWITCH_JUMP_CUT_INDEX},
		{0xC208B673CE446B61, &SET_PLAYER_SWITCH_OUTRO},
		{0x0FDE9DBFC0A6BC65, &SET_PLAYER_SWITCH_ESTABLISHING_SHOT},
		{0x43D1680C6D19A8E9, &_0x43D1680C6D19A8E9},
		{0x74DE2E8739086740, &_0x74DE2E8739086740},
		{0x8E2A065ABDAE6994, &_0x8E2A065ABDAE6994},
		{0xAD5FDF34B81BFE79, &_0xAD5FDF34B81BFE79},
		{0xDFA80CB25D0A19B3, &IS_SWITCH_READY_FOR_DESCENT},
		{0xD4793DFF3AF2ABCD, &ENABLE_SWITCH_PAUSE_BEFORE_DESCENT},
		{0xBD605B8E0E18B3BB, &DISABLE_SWITCH_OUTRO_FX},
		{0xAAB3200ED59016BC, &_SWITCH_OUT_PLAYER},
		{0xD8295AF639FD9CB8, &_SWITCH_IN_PLAYER},
		{0x933BBEEB8C61B5F4, &_0x933BBEEB8C61B5F4},
		{0x08C2D6C52A3104BB, &GET_PLAYER_SWITCH_INTERP_OUT_DURATION},
		{0x5B48A06DD0E792A5, &_0x5B48A06DD0E792A5},
		{0x5B74EA8CFD5E3E7E, &IS_SWITCH_SKIPPING_DESCENT},
		{0x1E9057A74FD73E23, &_0x1E9057A74FD73E23},
		{0x0C15B0E443B2349D, &_0x0C15B0E443B2349D},
		{0xA76359FC80B2438E, &_0xA76359FC80B2438E},
		{0xBED8CA5FF5E04113, &_0xBED8CA5FF5E04113},
		{0x472397322E92A856, &_0x472397322E92A856},
		{0x40AEFD1A244741F2, &_0x40AEFD1A244741F2},
		{0x03F1A106BDA7DD3E, &_0x03F1A106BDA7DD3E},
		{0x95A7DABDDBB78AE7, &_0x95A7DABDDBB78AE7},
		{0x63EB2B972A218CAC, &_0x63EB2B972A218CAC},
		{0xFB199266061F820A, &_0xFB199266061F820A},
		{0xF4A0DADB70F57FA6, &_0xF4A0DADB70F57FA6},
		{0x5068F488DDB54DD8, &_0x5068F488DDB54DD8},
		{0x3D245789CE12982C, &PREFETCH_SRL},
		{0xD0263801A4C5B0BB, &IS_SRL_LOADED},
		{0x9BADDC94EF83B823, &BEGIN_SRL},
		{0x0A41540E63C9EE17, &END_SRL},
		{0xA74A541C6884E7B8, &SET_SRL_TIME},
		{0xEF39EE20C537E98C, &_0xEF39EE20C537E98C},
		{0xBEB2D9A1D9A8F55A, &_0xBEB2D9A1D9A8F55A},
		{0x20C6C7E4EB082A7F, &_0x20C6C7E4EB082A7F},
		{0xF8155A7F03DDFC8E, &_0xF8155A7F03DDFC8E},
		{0xB85F26619073E775, &SET_HD_AREA},
		{0xCE58B1CFB9290813, &CLEAR_HD_AREA},
		{0xB5A4DB34FE89B88A, &INIT_CREATOR_BUDGET},
		{0xCCE26000E9A6FAD7, &SHUTDOWN_CREATOR_BUDGET},
		{0x0BC3144DEB678666, &ADD_MODEL_TO_CREATOR_BUDGET},
		{0xF086AD9354FAC3A3, &REMOVE_MODEL_FROM_CREATOR_BUDGET},
		{0x3D3D8B3BE5A83D35, &_GET_USED_CREATOR_MODEL_MEMORY_PERCENTAGE},
		{0xE73A266DB0CA9042, &TASK_PAUSE},
		{0x919BE13EED931959, &TASK_STAND_STILL},
		{0x0AE4086104E067B1, &TASK_JUMP},
		{0x3EB1FE9E8E908E15, &TASK_COWER},
		{0xF2EAB31979A7F910, &TASK_HANDS_UP},
		{0xA98FCAFD7893C834, &UPDATE_TASK_HANDS_UP_DURATION},
		{0x965791A9A488A062, &TASK_OPEN_VEHICLE_DOOR},
		{0xC20E50AA46D09CA8, &TASK_ENTER_VEHICLE},
		{0xD3DBCE61A490BE02, &TASK_LEAVE_VEHICLE},
		{0x9C00E77AF14B2DFF, &TASK_GET_OFF_BOAT},
		{0x601736CFE536B0A0, &TASK_SKY_DIVE},
		{0xD2F1C53C97EE81AB, &TASK_PARACHUTE},
		{0xB33E291AFA6BD03A, &TASK_PARACHUTE_TO_TARGET},
		{0xC313379AF0FCEDA7, &SET_PARACHUTE_TASK_TARGET},
		{0x0729BAC1B8C64317, &SET_PARACHUTE_TASK_THRUST},
		{0x09693B0312F91649, &TASK_RAPPEL_FROM_HELI},
		{0xE2A2AA2F659D77A7, &TASK_VEHICLE_DRIVE_TO_COORD},
		{0x158BB33F920D360C, &TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE},
		{0x480142959D337D00, &TASK_VEHICLE_DRIVE_WANDER},
		{0x304AE42E357B8C7E, &TASK_FOLLOW_TO_OFFSET_OF_ENTITY},
		{0xD76B57B44F1E6F8B, &TASK_GO_STRAIGHT_TO_COORD},
		{0x61E360B7E040D12E, &TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY},
		{0x93B93A37987F1F3D, &TASK_ACHIEVE_HEADING},
		{0x841142A1376E9006, &TASK_FLUSH_ROUTE},
		{0x1E7889778264843A, &TASK_EXTEND_ROUTE},
		{0x595583281858626E, &TASK_FOLLOW_POINT_ROUTE},
		{0x6A071245EB0D1882, &TASK_GO_TO_ENTITY},
		{0x94587F17E9C365D5, &TASK_SMART_FLEE_COORD},
		{0x22B0D0E37CCB840D, &TASK_SMART_FLEE_PED},
		{0x72C896464915D1B1, &TASK_REACT_AND_FLEE_PED},
		{0x452419CBD838065B, &TASK_SHOCKING_EVENT_REACT},
		{0xE054346CA3A0F315, &TASK_WANDER_IN_AREA},
		{0xBB9CE077274F6A1B, &TASK_WANDER_STANDARD},
		{0x0F3E34E968EA374E, &TASK_VEHICLE_PARK},
		{0xAA5DC05579D60BD9, &TASK_STEALTH_KILL},
		{0x965FEC691D55E9BF, &TASK_PLANT_BOMB},
		{0x15D3A79D4E44B913, &TASK_FOLLOW_NAV_MESH_TO_COORD},
		{0x17F58B88D085DBAC, &TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED},
		{0x8E06A6FE76C9EFF4, &SET_PED_PATH_CAN_USE_CLIMBOVERS},
		{0x77A5B103C87F476E, &SET_PED_PATH_CAN_USE_LADDERS},
		{0xE361C5C71C431A4F, &SET_PED_PATH_CAN_DROP_FROM_HEIGHT},
		{0x88E32DB8C1A4AA4B, &_0x88E32DB8C1A4AA4B},
		{0xF35425A4204367EC, &SET_PED_PATH_MAY_ENTER_WATER},
		{0x38FE1EC73743793C, &SET_PED_PATH_PREFER_TO_AVOID_WATER},
		{0x4455517B28441E60, &SET_PED_PATH_AVOID_FIRE},
		{0x6C6B148586F934F7, &SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT},
		{0xC6F5C0BCDC74D62D, &GET_NAVMESH_ROUTE_DISTANCE_REMAINING},
		{0x632E831F382A0FA8, &GET_NAVMESH_ROUTE_RESULT},
		{0x3E38E28A1D80DDF6, &_0x3E38E28A1D80DDF6},
		{0x5BC448CB78FA3E88, &TASK_GO_TO_COORD_ANY_MEANS},
		{0x1DD45F9ECFDB1BC9, &TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS},
		{0xB8ECD61F531A7B02, &TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED},
		{0xEA47FE3719165B94, &TASK_PLAY_ANIM},
		{0x83CDB10EA29B370B, &TASK_PLAY_ANIM_ADVANCED},
		{0x97FF36A1D40EA00A, &STOP_ANIM_TASK},
		{0x126EF75F1E17ABE5, &TASK_SCRIPTED_ANIMATION},
		{0x77A1EEC547E7FCF1, &PLAY_ENTITY_SCRIPTED_ANIM},
		{0xEE08C992D238C5D1, &STOP_ANIM_PLAYBACK},
		{0x207F1A47C0342F48, &SET_ANIM_WEIGHT},
		{0x032D49C5E359C847, &SET_ANIM_RATE},
		{0x70033C3CC29A1FF4, &SET_ANIM_LOOPED},
		{0x8FBB6758B3B3E9EC, &TASK_PLAY_PHONE_GESTURE_ANIMATION},
		{0x3FA00D4F4641BFAE, &TASK_STOP_PHONE_GESTURE_ANIMATION},
		{0xB8EBB1E9D3588C10, &IS_PLAYING_PHONE_GESTURE_ANIM},
		{0x47619ABE8B268C60, &GET_PHONE_GESTURE_ANIM_CURRENT_TIME},
		{0x1EE0F68A7C25DEC6, &GET_PHONE_GESTURE_ANIM_TOTAL_TIME},
		{0x69F5C3BD0F3EBD89, &TASK_VEHICLE_PLAY_ANIM},
		{0x6FA46612594F7973, &TASK_LOOK_AT_COORD},
		{0x69F4BE8C8CC4796C, &TASK_LOOK_AT_ENTITY},
		{0x0F804F1DB19B9689, &TASK_CLEAR_LOOK_AT},
		{0xE8854A4326B9E12B, &OPEN_SEQUENCE_TASK},
		{0x39E72BC99E6360CB, &CLOSE_SEQUENCE_TASK},
		{0x5ABA3986D90D8A3B, &TASK_PERFORM_SEQUENCE},
		{0x8C33220C8D78CA0D, &TASK_PERFORM_SEQUENCE_LOCALLY},
		{0x3841422E9C488D8C, &CLEAR_SEQUENCE_TASK},
		{0x58C70CF3A41E4AE7, &SET_SEQUENCE_TO_REPEAT},
		{0x00A9010CFE1E3533, &GET_SEQUENCE_PROGRESS},
		{0xB0760331C7AA4155, &GET_IS_TASK_ACTIVE},
		{0x77F1BEB8863288D5, &GET_SCRIPT_TASK_STATUS},
		{0x534AEBA6E5ED4CAB, &GET_ACTIVE_VEHICLE_MISSION_TYPE},
		{0x504D54DF3F6F2247, &TASK_LEAVE_ANY_VEHICLE},
		{0x7A192BE16D373D00, &TASK_AIM_GUN_SCRIPTED},
		{0x8605AF0DE8B3A5AC, &TASK_AIM_GUN_SCRIPTED_WITH_TARGET},
		{0x9724FB59A3E72AD0, &UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET},
		{0x3A8CADC7D37AACC5, &char*},
		{0x9B53BB6E8943AF53, &TASK_AIM_GUN_AT_ENTITY},
		{0x5AD23D40115353AC, &TASK_TURN_PED_TO_FACE_ENTITY},
		{0x6671F3EEC681BDA1, &TASK_AIM_GUN_AT_COORD},
		{0x46A6CC01E0826106, &TASK_SHOOT_AT_COORD},
		{0x7AA80209BDA643EB, &TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT},
		{0xE1EF3C1216AFF2CD, &CLEAR_PED_TASKS},
		{0x176CECF6F920D707, &CLEAR_PED_SECONDARY_TASK},
		{0x7F93691AB4B92272, &TASK_EVERYONE_LEAVE_VEHICLE},
		{0xE39B4FF4FDEBDE27, &TASK_GOTO_ENTITY_OFFSET},
		{0x338E7EF52B6095A9, &TASK_GOTO_ENTITY_OFFSET_XY},
		{0x1DDA930A0AC38571, &TASK_TURN_PED_TO_FACE_COORD},
		{0xC429DCEEB339E129, &TASK_VEHICLE_TEMP_ACTION},
		{0x659427E0EF36BCDE, &TASK_VEHICLE_MISSION},
		{0x9454528DF15D657A, &TASK_VEHICLE_MISSION_PED_TARGET},
		{0xF0AF20AA7731F8C3, &TASK_VEHICLE_MISSION_COORS_TARGET},
		{0x0FA6E4B75F302400, &TASK_VEHICLE_ESCORT},
		{0xFC545A9F0626E3B6, &TASK_VEHICLE_FOLLOW},
		{0x3C08A8E30363B353, &TASK_VEHICLE_CHASE},
		{0x1E09C32048FEFD1C, &TASK_VEHICLE_HELI_PROTECT},
		{0xCC665AAC360D31E7, &SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG},
		{0x639B642FACBE4EDD, &SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE},
		{0xAC83B1DB38D0ADA0, &TASK_HELI_CHASE},
		{0x2D2386F273FF7A25, &TASK_PLANE_CHASE},
		{0xBF19721FA34D32C0, &TASK_PLANE_LAND},
		{0xDBBC7A2432524127, &_0xDBBC7A2432524127},
		{0x53DDC75BC3AC0A90, &_0x53DDC75BC3AC0A90},
		{0xF7F9DCCA89E7505B, &TASK_PLANE_GOTO_PRECISE_VTOL},
		{0xDAD029E187A2BEB4, &TASK_HELI_MISSION},
		{0xB385523325077210, &TASK_HELI_ESCORT_HELI},
		{0x23703CD154E83B88, &TASK_PLANE_MISSION},
		{0x92C360B5F15D2302, &TASK_PLANE_TAXI},
		{0x15C86013127CE63F, &TASK_BOAT_MISSION},
		{0x2F8AF0E82773A171, &TASK_DRIVE_BY},
		{0xE5B302114D8162EE, &SET_DRIVEBY_TASK_TARGET},
		{0xC35B5CDB2824CF69, &CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK},
		{0x8785E6E40C7A8818, &IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK},
		{0xDCFE42068FE0135A, &CONTROL_MOUNTED_WEAPON},
		{0xCCD892192C6D2BB9, &SET_MOUNTED_WEAPON_TARGET},
		{0xA320EF046186FA3B, &IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK},
		{0xBD2A8EC3AF4DE7DB, &TASK_USE_MOBILE_PHONE},
		{0x5EE02954A14C69DB, &TASK_USE_MOBILE_PHONE_TIMED},
		{0x8C338E0263E4FD19, &TASK_CHAT_TO_PED},
		{0x9A7D091411C5F684, &TASK_WARP_PED_INTO_VEHICLE},
		{0x08DA95E8298AE772, &TASK_SHOOT_AT_ENTITY},
		{0x89D9FCC2435112F1, &TASK_CLIMB},
		{0xB6C987F9285A3814, &TASK_CLIMB_LADDER},
		{0xAAA34F8A7CB32098, &CLEAR_PED_TASKS_IMMEDIATELY},
		{0x89221B16730234F0, &TASK_PERFORM_SEQUENCE_FROM_PROGRESS},
		{0xF1B9F16E89E2C93A, &SET_NEXT_DESIRED_MOVE_STATE},
		{0x1E982AC8716912C5, &SET_PED_DESIRED_MOVE_BLEND_RATIO},
		{0x8517D4A6CA8513ED, &GET_PED_DESIRED_MOVE_BLEND_RATIO},
		{0xA9DA48FAB8A76C12, &TASK_GOTO_ENTITY_AIMING},
		{0xEB8517DDA73720DA, &TASK_SET_DECISION_MAKER},
		{0x933C06518B52A9A4, &TASK_SET_SPHERE_DEFENSIVE_AREA},
		{0x95A6C46A31D1917D, &TASK_CLEAR_DEFENSIVE_AREA},
		{0xD04FE6765D990A06, &TASK_PED_SLIDE_TO_COORD},
		{0x5A4A6A6D3DC64F52, &TASK_PED_SLIDE_TO_COORD_HDG_RATE},
		{0xD5C12A75C7B9497F, &ADD_COVER_POINT},
		{0xAE287C923D891715, &REMOVE_COVER_POINT},
		{0xA98B8E3C088E5A31, &DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS},
		{0x594A1028FC2A3E85, &GET_SCRIPTED_COVER_POINT_COORDS},
		{0xF166E48407BAC484, &TASK_COMBAT_PED},
		{0x944F30DCB7096BDE, &TASK_COMBAT_PED_TIMED},
		{0x75AC2B60386D89F2, &TASK_SEEK_COVER_FROM_POS},
		{0x84D32B3BEC531324, &TASK_SEEK_COVER_FROM_PED},
		{0xD43D95C7A869447F, &TASK_SEEK_COVER_TO_COVER_POINT},
		{0x39246A6958EF072C, &TASK_SEEK_COVER_TO_COORDS},
		{0x4172393E6BE1FECE, &TASK_PUT_PED_DIRECTLY_INTO_COVER},
		{0x79B258E397854D29, &TASK_EXIT_COVER},
		{0x1C6CD14A876FFE39, &TASK_PUT_PED_DIRECTLY_INTO_MELEE},
		{0xAC96609B9995EDF8, &TASK_TOGGLE_DUCK},
		{0x4A58A47A72E3FCB4, &TASK_GUARD_CURRENT_POSITION},
		{0xD2A207EEBDF9889B, &TASK_GUARD_ASSIGNED_DEFENSIVE_AREA},
		{0xC946FE14BE0EB5E2, &TASK_GUARD_SPHERE_DEFENSIVE_AREA},
		{0xAE032F8BBA959E90, &TASK_STAND_GUARD},
		{0x5C9B84BD7D31D908, &SET_DRIVE_TASK_CRUISE_SPEED},
		{0x404A5AA9B9F0B746, &SET_DRIVE_TASK_MAX_CRUISE_SPEED},
		{0xDACE1BE37D88AF67, &SET_DRIVE_TASK_DRIVING_STYLE},
		{0x45C597097DD7CB81, &ADD_COVER_BLOCKING_AREA},
		{0xDB6708C0B46F56D8, &REMOVE_ALL_COVER_BLOCKING_AREAS},
		{0xFA83CA6776038F64, &_0xFA83CA6776038F64},
		{0x1F351CF1C6475734, &_0x1F351CF1C6475734},
		{0x142A02425FF02BD9, &TASK_START_SCENARIO_IN_PLACE},
		{0xFA4EFC79F69D4F07, &TASK_START_SCENARIO_AT_POSITION},
		{0x277F471BA9DB000B, &TASK_USE_NEAREST_SCENARIO_TO_COORD},
		{0x58E2E0F23F6B76C3, &TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP},
		{0x9FDA1B3D7E7028B3, &TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD},
		{0x97A28E63F0BA5631, &TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP},
		{0x5A59271FFADD33C1, &DOES_SCENARIO_EXIST_IN_AREA},
		{0x0A9D0C2A3BBC86C1, &DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA},
		{0x788756D73AC2E07C, &IS_SCENARIO_OCCUPIED},
		{0x295E3CCEC879CCD7, &PED_HAS_USE_SCENARIO_TASK},
		{0x748040460F8DF5DC, &PLAY_ANIM_ON_RUNNING_SCENARIO},
		{0xF9034C136C9E00D3, &DOES_SCENARIO_GROUP_EXIST},
		{0x367A09DED4E05B99, &IS_SCENARIO_GROUP_ENABLED},
		{0x02C8E5B49848664E, &SET_SCENARIO_GROUP_ENABLED},
		{0xDD902D0349AFAD3A, &RESET_SCENARIO_GROUPS_ENABLED},
		{0x535E97E1F7FC0C6A, &SET_EXCLUSIVE_SCENARIO_GROUP},
		{0x4202BBCB8684563D, &RESET_EXCLUSIVE_SCENARIO_GROUP},
		{0x3A815DB3EA088722, &IS_SCENARIO_TYPE_ENABLED},
		{0xEB47EC4E34FB7EE1, &SET_SCENARIO_TYPE_ENABLED},
		{0x0D40EE2A7F2B2D6D, &RESET_SCENARIO_TYPES_ENABLED},
		{0xAA135F9482C82CC3, &IS_PED_ACTIVE_IN_SCENARIO},
		{0x621C6E4729388E41, &_0x621C6E4729388E41},
		{0x8FD89A6240813FD0, &SET_PED_CAN_PLAY_AMBIENT_IDLES},
		{0x4CF5F55DAC3280A0, &TASK_COMBAT_HATED_TARGETS_IN_AREA},
		{0x7BF835BB9E2698C8, &TASK_COMBAT_HATED_TARGETS_AROUND_PED},
		{0x2BBA30B854534A0C, &TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED},
		{0x7285951DBF6B5A51, &TASK_THROW_PROJECTILE},
		{0xA21C51255B205245, &TASK_SWAP_WEAPON},
		{0x62D2916F56B9CD2D, &TASK_RELOAD_WEAPON},
		{0x2A74E1D5F2F00EEC, &IS_PED_GETTING_UP},
		{0xCDDC2B77CE54AC6E, &TASK_WRITHE},
		{0xDEB6D52126E7D640, &IS_PED_IN_WRITHE},
		{0xA36BFB5EE89F3D82, &OPEN_PATROL_ROUTE},
		{0xB043ECA801B8CBC1, &CLOSE_PATROL_ROUTE},
		{0x8EDF950167586B7C, &ADD_PATROL_ROUTE_NODE},
		{0x23083260DEC3A551, &ADD_PATROL_ROUTE_LINK},
		{0xAF8A443CCC8018DC, &CREATE_PATROL_ROUTE},
		{0x7767DD9D65E91319, &DELETE_PATROL_ROUTE},
		{0xBDA5DF49D080FE4E, &TASK_PATROL},
		{0xE5DA8615A6180789, &TASK_STAY_IN_COVER},
		{0x5CF0D8F9BBA0DD75, &ADD_VEHICLE_SUBTASK_ATTACK_COORD},
		{0x85F462BADC7DA47F, &ADD_VEHICLE_SUBTASK_ATTACK_PED},
		{0x10AB107B887214D8, &TASK_VEHICLE_SHOOT_AT_PED},
		{0xE41885592B08B097, &TASK_VEHICLE_AIM_AT_PED},
		{0x5190796ED39C9B6D, &TASK_VEHICLE_SHOOT_AT_COORD},
		{0x447C1E9EF844BC0F, &TASK_VEHICLE_AIM_AT_COORD},
		{0x195AEEB13CEFE2EE, &TASK_VEHICLE_GOTO_NAVMESH},
		{0x11315AB3385B8AC0, &TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD},
		{0xB2A16444EAD9AE47, &TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY},
		{0xA55547801EB331FC, &TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD},
		{0x04701832B739DCE5, &TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD},
		{0x97465886D35210E9, &TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY},
		{0x8C825BDC7741D37C, &SET_HIGH_FALL_TASK},
		{0x9EEFB62EB27B5792, &REQUEST_WAYPOINT_RECORDING},
		{0xCB4E8BE8A0063C5D, &GET_IS_WAYPOINT_RECORDING_LOADED},
		{0xFF1B8B4AA1C25DC8, &REMOVE_WAYPOINT_RECORDING},
		{0x5343532C01A07234, &WAYPOINT_RECORDING_GET_NUM_POINTS},
		{0x2FB897405C90B361, &WAYPOINT_RECORDING_GET_COORD},
		{0x005622AEBC33ACA9, &WAYPOINT_RECORDING_GET_SPEED_AT_POINT},
		{0xB629A298081F876F, &WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT},
		{0x0759591819534F7B, &TASK_FOLLOW_WAYPOINT_RECORDING},
		{0xE03B3F2D3DC59B64, &IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED},
		{0x2720AAA75001E094, &GET_PED_WAYPOINT_PROGRESS},
		{0xE6A877C64CAF1BC5, &GET_PED_WAYPOINT_DISTANCE},
		{0xED98E10B0AFCE4B4, &SET_PED_WAYPOINT_ROUTE_OFFSET},
		{0xA5B769058763E497, &GET_WAYPOINT_DISTANCE_ALONG_ROUTE},
		{0x701375A7D43F01CB, &WAYPOINT_PLAYBACK_GET_IS_PAUSED},
		{0x0F342546AA06FED5, &WAYPOINT_PLAYBACK_PAUSE},
		{0x244F70C84C547D2D, &WAYPOINT_PLAYBACK_RESUME},
		{0x7D7D2B47FA788E85, &WAYPOINT_PLAYBACK_OVERRIDE_SPEED},
		{0x6599D834B12D0800, &WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED},
		{0x5A353B8E6B1095B5, &USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE},
		{0x20E330937C399D29, &WAYPOINT_PLAYBACK_START_AIMING_AT_PED},
		{0x8968400D900ED8B3, &WAYPOINT_PLAYBACK_START_AIMING_AT_COORD},
		{0xE70BA7B90F8390DC, &WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED},
		{0x057A25CFCC9DB671, &WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD},
		{0x47EFA040EBB8E2EA, &WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING},
		{0x817268968605947A, &ASSISTED_MOVEMENT_REQUEST_ROUTE},
		{0x3548536485DD792B, &ASSISTED_MOVEMENT_REMOVE_ROUTE},
		{0x60F9A4393A21F741, &ASSISTED_MOVEMENT_IS_ROUTE_LOADED},
		{0xD5002D78B7162E1B, &ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES},
		{0x13945951E16EF912, &ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME},
		{0x3123FAA6DB1CF7ED, &TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING},
		{0xF5134943EA29868C, &IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE},
		{0x9824CFF8FC66E159, &GET_VEHICLE_WAYPOINT_PROGRESS},
		{0x416B62AC8B9E5BBD, &GET_VEHICLE_WAYPOINT_TARGET_POINT},
		{0x8A4E6AC373666BC5, &VEHICLE_WAYPOINT_PLAYBACK_PAUSE},
		{0xDC04FCAA7839D492, &VEHICLE_WAYPOINT_PLAYBACK_RESUME},
		{0x5CEB25A7D2848963, &VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED},
		{0x121F0593E0A431D7, &VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED},
		{0x90D2156198831D69, &TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS},
		{0x4F056E1AFFEF17AB, &TASK_FORCE_MOTION_STATE},
		{0x2D537BA194896636, &TASK_MOVE_NETWORK_BY_NAME},
		{0xD5B35BEA41919ACB, &TASK_MOVE_NETWORK_ADVANCED_BY_NAME},
		{0x3D45B0B355C5E0C9, &_TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS},
		{0x921CE12C489C4C41, &IS_TASK_MOVE_NETWORK_ACTIVE},
		{0x30ED88D5E0C56A37, &IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION},
		{0xD01015C7316AE176, &REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION},
		{0xAB13A5565480B6D9, &_0xAB13A5565480B6D9},
		{0x717E4D1F2048376D, &char*},
		{0x8423541E8B3A1589, &_0x8423541E8B3A1589},
		{0xD5BB4025AE449A4E, &SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT},
		{0x373EF409B82697A3, &_SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2},
		{0x8634CEF2522D987B, &_0x8634CEF2522D987B},
		{0xB0A6CFD2C69C1088, &SET_TASK_MOVE_NETWORK_SIGNAL_BOOL},
		{0x44AB0B3AFECCE242, &_GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT},
		{0xA7FFBA498E4AAF67, &GET_TASK_MOVE_NETWORK_SIGNAL_BOOL},
		{0xB4F47213DF45A64C, &GET_TASK_MOVE_NETWORK_EVENT},
		{0x349CE7B56DAFD95C, &IS_MOVE_BLEND_RATIO_STILL},
		{0xF133BBBE91E1691F, &IS_MOVE_BLEND_RATIO_WALKING},
		{0xD4D8636C0199A939, &IS_MOVE_BLEND_RATIO_RUNNING},
		{0x24A2AD74FA9814E2, &IS_MOVE_BLEND_RATIO_SPRINTING},
		{0xAC29253EEF8F0180, &IS_PED_STILL},
		{0xDE4C184B2B9B071A, &IS_PED_WALKING},
		{0xC5286FFC176F28A2, &IS_PED_RUNNING},
		{0x57E457CD2C0FC168, &IS_PED_SPRINTING},
		{0xE45B7F222DE47E09, &IS_PED_STRAFING},
		{0xEEA929141F699854, &TASK_SYNCHRONIZED_SCENE},
		{0x19D1B791CB3670FE, &TASK_AGITATED_ACTION},
		{0x2047C02158D6405A, &TASK_SWEEP_AIM_ENTITY},
		{0xE4973DBDBE6E44B3, &UPDATE_TASK_SWEEP_AIM_ENTITY},
		{0x7AFE8FDC10BC07D2, &TASK_SWEEP_AIM_POSITION},
		{0xBB106883F5201FC4, &UPDATE_TASK_SWEEP_AIM_POSITION},
		{0xF3B9A78A178572B1, &TASK_ARREST_PED},
		{0x3DC52677769B4AE0, &IS_PED_RUNNING_ARREST_TASK},
		{0x90A09F3A45FED688, &IS_PED_BEING_ARRESTED},
		{0x67406F2C8F87FC4F, &UNCUFF_PED},
		{0x74E559B3BC910685, &IS_PED_CUFFED},
		{0xAF35D0D2583051B0, &CREATE_VEHICLE},
		{0xEA386986E786A54F, &DELETE_VEHICLE},
		{0x7D6F9A3EF26136A0, &_0x7D6F9A3EF26136A0},
		{0x1DDA078D12879EEE, &_SET_VEHICLE_CAN_BE_LOCKED_ON},
		{0x5D14D4154BFE7B2C, &SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON},
		{0xE6B0E8CFC3633BF0, &_0xE6B0E8CFC3633BF0},
		{0x6EAAEFC76ACC311F, &_0x6EAAEFC76ACC311F},
		{0x407DC5E97DB1A4D3, &_0x407DC5E97DB1A4D3},
		{0x423E8DE37D934D89, &IS_VEHICLE_MODEL},
		{0xF6086BC836400876, &DOES_SCRIPT_VEHICLE_GENERATOR_EXIST},
		{0x9DEF883114668116, &CREATE_SCRIPT_VEHICLE_GENERATOR},
		{0x22102C9ABFCF125D, &DELETE_SCRIPT_VEHICLE_GENERATOR},
		{0xD9D620E0AC6DC4B0, &SET_SCRIPT_VEHICLE_GENERATOR},
		{0xC12321827687FE4D, &SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA},
		{0x34AD89078831A4BC, &SET_ALL_VEHICLE_GENERATORS_ACTIVE},
		{0x608207E7A8FB787C, &SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE},
		{0x9A75585FB2E54FAD, &_0x9A75585FB2E54FAD},
		{0x0A436B8643716D14, &_0x0A436B8643716D14},
		{0x49733E92263139D1, &SET_VEHICLE_ON_GROUND_PROPERLY},
		{0xE023E8AC4EF7C117, &SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION},
		{0xB497F06B288DCFDF, &IS_VEHICLE_STUCK_ON_ROOF},
		{0xB72E26D81006005B, &ADD_VEHICLE_UPSIDEDOWN_CHECK},
		{0xC53EB42A499A7E90, &REMOVE_VEHICLE_UPSIDEDOWN_CHECK},
		{0x5721B434AD84D57A, &IS_VEHICLE_STOPPED},
		{0x24CB2137731FFE89, &GET_VEHICLE_NUMBER_OF_PASSENGERS},
		{0xA7C4F2C6E744A550, &GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS},
		{0x2AD93716F184EDA4, &GET_VEHICLE_MODEL_NUMBER_OF_SEATS},
		{0xF7F203E31F96F6A1, &IS_SEAT_WARP_ONLY},
		{0xE33FFA906CE74880, &IS_TURRET_SEAT},
		{0x4E417C547182C84D, &_DOES_VEHICLE_ALLOW_RAPPEL},
		{0x245A6883D966D537, &SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME},
		{0xB3B3359379FE77D3, &SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME},
		{0xEAE6DCC7EEE3DB1D, &SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME},
		{0xD4B8E3D1917BC86B, &SET_DISABLE_RANDOM_TRAINS_THIS_FRAME},
		{0x90B6DA738A9A25DA, &SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME},
		{0x26324F33423F3CC3, &SET_FAR_DRAW_VEHICLES},
		{0xCAA15F13EBD417FF, &SET_NUMBER_OF_PARKED_VEHICLES},
		{0xB664292EAECF7FA6, &SET_VEHICLE_DOORS_LOCKED},
		{0xBE70724027F85BCD, &_SET_VEHICLE_DOOR_DESTROY_TYPE},
		{0xD8050E0EB60CF274, &SET_VEHICLE_HAS_MUTED_SIRENS},
		{0x517AAF684BB50CD1, &SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER},
		{0xF6AF6CB341349015, &GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER},
		{0xA2F80B8D040727CC, &SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS},
		{0x9737A37136F07E75, &SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS},
		{0xB81F6D4A8F5EEBA8, &SET_VEHICLE_DOORS_LOCKED_FOR_TEAM},
		{0x203B527D1B77904C, &_SET_VEHICLE_DOORS_LOCKED_FOR_UNK},
		{0x76D26A22750E849E, &_0x76D26A22750E849E},
		{0xBA71116ADF5B514C, &EXPLODE_VEHICLE},
		{0xF19D095E42D430CC, &SET_VEHICLE_OUT_OF_CONTROL},
		{0x2E0A74E1002380B1, &SET_VEHICLE_TIMED_EXPLOSION},
		{0x99AD4CCCB128CBC9, &ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE},
		{0xAA3F739ABDDCF21F, &_CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE},
		{0x6ADAABD3068C5235, &HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE},
		{0xEF49CF0270307CBE, &DETONATE_VEHICLE_PHONE_EXPLOSIVE_DEVICE},
		{0x598803E85E8448D9, &SET_TAXI_LIGHTS},
		{0x7504C0F113AB50FC, &IS_TAXI_LIGHT_ON},
		{0xCEE4490CD57BB3C2, &IS_VEHICLE_IN_GARAGE_AREA},
		{0x4F1D4BE3A7F24601, &SET_VEHICLE_COLOURS},
		{0x8B7FD87F0DDB421E, &SET_VEHICLE_FULLBEAM},
		{0x07116E24E9D1929D, &SET_VEHICLE_IS_RACING},
		{0x7141766F91D15BEA, &SET_VEHICLE_CUSTOM_PRIMARY_COLOUR},
		{0xB64CF2CCA9D95F52, &GET_VEHICLE_CUSTOM_PRIMARY_COLOUR},
		{0x55E1D2758F34E437, &CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR},
		{0xF095C0405307B21B, &GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM},
		{0x36CED73BFED89754, &SET_VEHICLE_CUSTOM_SECONDARY_COLOUR},
		{0x8389CD56CA8072DC, &GET_VEHICLE_CUSTOM_SECONDARY_COLOUR},
		{0x5FFBDEEC3E8E2009, &CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR},
		{0x910A32E7AAD2656C, &GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM},
		{0x3AFDC536C3D01674, &SET_VEHICLE_ENVEFF_SCALE},
		{0xA82819CAC9C4C403, &GET_VEHICLE_ENVEFF_SCALE},
		{0x52BBA29D5EC69356, &SET_CAN_RESPRAY_VEHICLE},
		{0xAB31EF4DE6800CE9, &_0xAB31EF4DE6800CE9},
		{0x1B212B26DD3C04DF, &_0x1B212B26DD3C04DF},
		{0x33506883545AC0DF, &FORCE_SUBMARINE_SURFACE_MODE},
		{0xC59872A5134879C7, &SET_SUBMARINE_CRUSH_DEPTHS},
		{0xED5EDE9E676643C9, &_0xED5EDE9E676643C9},
		{0x75DBEC174AEEAD10, &SET_BOAT_ANCHOR},
		{0x26C10ECBDA5D043B, &CAN_ANCHOR_BOAT_HERE},
		{0x24F4121D07579880, &_CAN_ANCHOR_BOAT_HERE_2},
		{0xE3EBAAE484798530, &_SET_BOAT_FROZEN_WHEN_ANCHORED},
		{0xB28B1FE5BFADD7F5, &_0xB28B1FE5BFADD7F5},
		{0xE842A9398079BD82, &_SET_BOAT_MOVEMENT_RESISTANCE},
		{0xB0AD1238A709B1A2, &_IS_BOAT_ANCHORED_AND_FROZEN},
		{0x8F719973E1445BA2, &SET_BOAT_SINKS_WHEN_WRECKED},
		{0xBD32E46AA95C1DD2, &_SET_BOAT_IS_SINKING},
		{0xF4924635A19EB37D, &SET_VEHICLE_SIREN},
		{0x4C9BF537BE2634B2, &IS_VEHICLE_SIREN_ON},
		{0xB5CC40FBCB586380, &IS_VEHICLE_SIREN_AUDIO_ON},
		{0x3E8C8727991A8A0B, &SET_VEHICLE_STRONG},
		{0x8386BFB614D06749, &REMOVE_VEHICLE_STUCK_CHECK},
		{0xA19435F193E081AC, &GET_VEHICLE_COLOURS},
		{0x22AC59A870E6A669, &IS_VEHICLE_SEAT_FREE},
		{0xBB40DD2270B65366, &GET_PED_IN_VEHICLE_SEAT},
		{0x83F969AA1EE2A664, &GET_LAST_PED_IN_VEHICLE_SEAT},
		{0xB91B4C20085BD12F, &GET_VEHICLE_LIGHTS_STATE},
		{0xBA291848A0815CA9, &IS_VEHICLE_TYRE_BURST},
		{0xAB54A438726D25D5, &SET_VEHICLE_FORWARD_SPEED},
		{0x6501129C9E0FFA05, &_0x6501129C9E0FFA05},
		{0x260BE8F09E326A20, &BRING_VEHICLE_TO_HALT},
		{0xDCE97BDF8A0EABC8, &_0xDCE97BDF8A0EABC8},
		{0x9849DE24FCF23CCC, &_0x9849DE24FCF23CCC},
		{0x7C06330BFDDA182E, &_0x7C06330BFDDA182E},
		{0xC69BB1D832A710EF, &_0xC69BB1D832A710EF},
		{0x37EBBF3117BD6A25, &SET_FORKLIFT_FORK_HEIGHT},
		{0x57715966069157AD, &IS_ENTITY_ATTACHED_TO_HANDLER_FRAME},
		{0x62CA17B74C435651, &_0x62CA17B74C435651},
		{0x375E7FC44F21C8AB, &_FIND_VEHICLE_CARRYING_THIS_ENTITY},
		{0x89D630CF5EA96D23, &_IS_HANDLER_FRAME_ABOVE_CONTAINER},
		{0x6A98C2ECF57FA5D4, &_0x6A98C2ECF57FA5D4},
		{0x7C0043FDFF6436BC, &DETACH_CONTAINER_FROM_HANDLER_FRAME},
		{0x8AA9180DE2FEDD45, &_0x8AA9180DE2FEDD45},
		{0x0A6A279F3AA4FD70, &SET_BOAT_DISABLE_AVOIDANCE},
		{0x634148744F385576, &IS_HELI_LANDING_AREA_BLOCKED},
		{0x107A473D7A6647A9, &_0x107A473D7A6647A9},
		{0xE6F13851780394DA, &SET_HELI_TURBULENCE_SCALAR},
		{0xFC40CBF7B90CA77C, &SET_CAR_BOOT_OPEN},
		{0xEC6A202EE4960385, &SET_VEHICLE_TYRE_BURST},
		{0x781B3D62BB013EF5, &SET_VEHICLE_DOORS_SHUT},
		{0xEB9DC3C7D8596C46, &SET_VEHICLE_TYRES_CAN_BURST},
		{0x678B9BB8C3F58FEB, &GET_VEHICLE_TYRES_CAN_BURST},
		{0x29B18B4FD460CA8F, &SET_VEHICLE_WHEELS_CAN_BREAK},
		{0x7C65DAC73C35C862, &SET_VEHICLE_DOOR_OPEN},
		{0x3B458DDB57038F08, &_0x3B458DDB57038F08},
		{0xA247F9EF01D8082E, &_0xA247F9EF01D8082E},
		{0xA711568EEDB43069, &REMOVE_VEHICLE_WINDOW},
		{0x85796B0549DDE156, &ROLL_DOWN_WINDOWS},
		{0x7AD9E6CE657D69E3, &ROLL_DOWN_WINDOW},
		{0x602E548F46E24D59, &ROLL_UP_WINDOW},
		{0x9E5B5E4D2CCD2259, &SMASH_VEHICLE_WINDOW},
		{0x772282EBEB95E682, &FIX_VEHICLE_WINDOW},
		{0x6D645D59FB5F5AD3, &_DETACH_VEHICLE_WINDSCREEN},
		{0xE38CB9D7D39FDBCC, &_EJECT_JB700_ROOF},
		{0x34E710FF01247C5A, &SET_VEHICLE_LIGHTS},
		{0xC45C27EF50F36ADC, &_SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS},
		{0x1FD09E7390A74D54, &_SET_VEHICLE_LIGHTS_MODE},
		{0xCDE5E70C1DDB954C, &SET_VEHICLE_ALARM},
		{0xB8FF7AB45305C345, &START_VEHICLE_ALARM},
		{0x4319E335B71FFF34, &IS_VEHICLE_ALARM_ACTIVATED},
		{0xBC2042F090AF6AD3, &SET_VEHICLE_INTERIORLIGHT},
		{0x8821196D91FA2DE5, &_0x8821196D91FA2DE5},
		{0xB385454F8791F57C, &SET_VEHICLE_LIGHT_MULTIPLIER},
		{0x3C7D42D58F770B54, &ATTACH_VEHICLE_TO_TRAILER},
		{0x16B5E274BDE402F8, &ATTACH_VEHICLE_ON_TO_TRAILER},
		{0x374706271354CB18, &STABILISE_ENTITY_ATTACHED_TO_HELI},
		{0x90532EDF0D2BDD86, &DETACH_VEHICLE_FROM_TRAILER},
		{0xE7CF3C4F9F489F0C, &IS_VEHICLE_ATTACHED_TO_TRAILER},
		{0x2A8F319B392E7B3F, &SET_TRAILER_INVERSE_MASS_SCALE},
		{0x95CF53B3D687F9FA, &SET_TRAILER_LEGS_RAISED},
		{0x878C75C09FBDB942, &_SET_TRAILER_LEGS_LOWERED},
		{0x6E13FC662B882D1D, &SET_VEHICLE_TYRE_FIXED},
		{0x95A88F0B409CDA47, &SET_VEHICLE_NUMBER_PLATE_TEXT},
		{0x7CE1CCB9B293020E, &char*},
		{0x4C4D6B2644F458CB, &GET_NUMBER_OF_VEHICLE_NUMBER_PLATES},
		{0x9088EB5A43FFB0A1, &SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX},
		{0xF11BC2DD9A3E7195, &GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX},
		{0x80D9F74197EA47D9, &SET_RANDOM_TRAINS},
		{0x63C6CCA8E68AE8C8, &CREATE_MISSION_TRAIN},
		{0xFD813BB7DB977F20, &SWITCH_TRAIN_TRACK},
		{0x21973BBF8D17EDFA, &SET_TRAIN_TRACK_SPAWN_FREQUENCY},
		{0x736A718577F39C7D, &DELETE_ALL_TRAINS},
		{0xAA0BC91BE0B796E3, &SET_TRAIN_SPEED},
		{0x16469284DB8C62B5, &SET_TRAIN_CRUISE_SPEED},
		{0x84436EC293B1415F, &SET_RANDOM_BOATS},
		{0x2AFD795EEAC8D30D, &SET_GARBAGE_TRUCKS},
		{0x57E4C39DE5EE8470, &DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK},
		{0x21543C612379DB3C, &GET_VEHICLE_RECORDING_ID},
		{0xAF514CABE74CBF15, &REQUEST_VEHICLE_RECORDING},
		{0x300D614A4C785FC4, &HAS_VEHICLE_RECORDING_BEEN_LOADED},
		{0xF1160ACCF98A3FC8, &REMOVE_VEHICLE_RECORDING},
		{0x92523B76657A517D, &GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME},
		{0xD242728AA6F0FBA2, &GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME},
		{0xF0F2103EFAF8CBA7, &GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME},
		{0x2058206FBE79A8AD, &GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME},
		{0x102D125411A7B6E6, &GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID},
		{0x0E48D1C262390950, &GET_TOTAL_DURATION_OF_VEHICLE_RECORDING},
		{0x2DACD605FC681475, &GET_POSITION_IN_RECORDING},
		{0x5746F3A7AB7FE544, &GET_TIME_POSITION_IN_RECORDING},
		{0x3F878F92B3A7A071, &START_PLAYBACK_RECORDED_VEHICLE},
		{0x7D80FD645D4DA346, &START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS},
		{0x1F2E4E06DEA8992B, &_0x1F2E4E06DEA8992B},
		{0x54833611C17ABDEA, &STOP_PLAYBACK_RECORDED_VEHICLE},
		{0x632A689BF42301B1, &PAUSE_PLAYBACK_RECORDED_VEHICLE},
		{0x8879EE09268305D5, &UNPAUSE_PLAYBACK_RECORDED_VEHICLE},
		{0x1C8A4C2C19E68EEC, &IS_PLAYBACK_GOING_ON_FOR_VEHICLE},
		{0xAEA8FD591FAD4106, &IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE},
		{0x42BC05C27A946054, &GET_CURRENT_PLAYBACK_FOR_VEHICLE},
		{0xAB8E2EDA0C0A5883, &SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE},
		{0x6683AB880E427778, &SET_PLAYBACK_SPEED},
		{0x29DE5FA52D00428C, &START_PLAYBACK_RECORDED_VEHICLE_USING_AI},
		{0x9438F7AD68771A20, &SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE},
		{0xA549C3B37EA28131, &SET_PLAYBACK_TO_USE_AI},
		{0x6E63860BBB190730, &SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER},
		{0x5845066D8A1EA7F7, &_0x5845066D8A1EA7F7},
		{0x796A877E459B99EA, &_0x796A877E459B99EA},
		{0xFAF2A78061FD9EF4, &_0xFAF2A78061FD9EF4},
		{0x063AE2B2CC273588, &_0x063AE2B2CC273588},
		{0x786A4EB67B01BF0B, &EXPLODE_VEHICLE_IN_CUTSCENE},
		{0x2FA9923062DD396C, &ADD_VEHICLE_STUCK_CHECK_WITH_WARP},
		{0x0FC2D89AC25A5814, &SET_VEHICLE_MODEL_IS_SUPPRESSED},
		{0x386F6CE5BAF6091C, &GET_RANDOM_VEHICLE_IN_SPHERE},
		{0xC5574E0AEB86BA68, &GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE},
		{0xB50807EABE20A8DC, &GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE},
		{0xF73EB622C4F1689B, &GET_CLOSEST_VEHICLE},
		{0x08AAFD0814722BC3, &GET_TRAIN_CARRIAGE},
		{0x5B76B14AE875C795, &DELETE_MISSION_TRAIN},
		{0xBBE7648349B49BE8, &SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED},
		{0x591CA673AA6AB736, &SET_MISSION_TRAIN_COORDS},
		{0x45A9187928F4B9E3, &IS_THIS_MODEL_A_BOAT},
		{0x9537097412CF75FE, &IS_THIS_MODEL_A_JETSKI},
		{0xA0948AB42D7BA0DE, &IS_THIS_MODEL_A_PLANE},
		{0xDCE4334788AF94EA, &IS_THIS_MODEL_A_HELI},
		{0x7F6DB52EEFC96DF8, &IS_THIS_MODEL_A_CAR},
		{0xAB935175B22E822B, &IS_THIS_MODEL_A_TRAIN},
		{0xB50C0B0CEDC6CE84, &IS_THIS_MODEL_A_BIKE},
		{0xBF94DD42F63BDED2, &IS_THIS_MODEL_A_BICYCLE},
		{0x39DAC362EE65FA28, &IS_THIS_MODEL_A_QUADBIKE},
		{0x633F6F44A537EBB6, &_IS_THIS_MODEL_AN_AMPHIBIOUS_CAR},
		{0xA1A9FC1C76A6730D, &_IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE},
		{0xA178472EBB8AE60D, &SET_HELI_BLADES_FULL_SPEED},
		{0xFD280B4D7F3ABC4D, &SET_HELI_BLADES_SPEED},
		{0x99CAD8E7AFDB60FA, &_0x99CAD8E7AFDB60FA},
		{0x3750146A28097A82, &SET_VEHICLE_CAN_BE_TARGETTED},
		{0xDBC631F109350B8C, &_0xDBC631F109350B8C},
		{0x4C7028F78FFD3681, &SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED},
		{0x1AA8A837D2169D94, &_SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED},
		{0x2311DD7159F00582, &_0x2311DD7159F00582},
		{0x065D03A9D6B2C6B5, &_0x065D03A9D6B2C6B5},
		{0x8F17BC8BA08DA62B, &GET_VEHICLE_DIRT_LEVEL},
		{0x79D3B596FE44EE8B, &SET_VEHICLE_DIRT_LEVEL},
		{0xBCDC5017D3CE1E9E, &_IS_VEHICLE_DAMAGED},
		{0x3E933CFF7B111C22, &IS_VEHICLE_DOOR_FULLY_OPEN},
		{0x2497C4717C8B881E, &SET_VEHICLE_ENGINE_ON},
		{0x8ABA6AF54B942B95, &SET_VEHICLE_UNDRIVEABLE},
		{0x5AFEEDD9BB2899D7, &SET_VEHICLE_PROVIDES_COVER},
		{0xF2BFA0430F0A0FCB, &SET_VEHICLE_DOOR_CONTROL},
		{0xA5A9653A8D2CAF48, &SET_VEHICLE_DOOR_LATCHED},
		{0xFE3F9C29F7B32BD5, &GET_VEHICLE_DOOR_ANGLE_RATIO},
		{0x218297BF0CFD853B, &GET_PED_USING_VEHICLE_DOOR},
		{0x93D9BD300D7789E5, &SET_VEHICLE_DOOR_SHUT},
		{0xD4D4F6A4AB575A33, &SET_VEHICLE_DOOR_BROKEN},
		{0x59BF8C3D52C92F66, &SET_VEHICLE_CAN_BREAK},
		{0x8AC862B0B32C5B80, &DOES_VEHICLE_HAVE_ROOF},
		{0xC4B3347BD68BD609, &_0xC4B3347BD68BD609},
		{0xD3301660A57C9272, &_0xD3301660A57C9272},
		{0xB9562064627FF9DB, &_0xB9562064627FF9DB},
		{0x9F243D3919F442FE, &IS_BIG_VEHICLE},
		{0x3B963160CD65D41E, &GET_NUMBER_OF_VEHICLE_COLOURS},
		{0x33E8CD3322E2FE31, &SET_VEHICLE_COLOUR_COMBINATION},
		{0x6A842D197F845D56, &GET_VEHICLE_COLOUR_COMBINATION},
		{0xE41033B25D003A07, &_SET_VEHICLE_XENON_LIGHTS_COLOR},
		{0x3DFF319A831E0CDB, &_GET_VEHICLE_XENON_LIGHTS_COLOR},
		{0x31B927BBC44156CD, &SET_VEHICLE_IS_CONSIDERED_BY_PLAYER},
		{0xBE5C1255A1830FF5, &_0xBE5C1255A1830FF5},
		{0x9BECD4B9FEF3F8A6, &_0x9BECD4B9FEF3F8A6},
		{0x88BC673CA9E0AE99, &_0x88BC673CA9E0AE99},
		{0xE851E480B814D4BA, &_0xE851E480B814D4BA},
		{0x055BF0AC0C34F4FD, &GET_RANDOM_VEHICLE_MODEL_IN_MEMORY},
		{0x25BC98A59C2EA962, &GET_VEHICLE_DOOR_LOCK_STATUS},
		{0xCA4AC3EAAE46EC7B, &_0xCA4AC3EAAE46EC7B},
		{0xB8E181E559464527, &IS_VEHICLE_DOOR_DAMAGED},
		{0x2FA133A4A9D37ED8, &_SET_VEHICLE_DOOR_CAN_BREAK},
		{0x27B926779DEB502D, &IS_VEHICLE_BUMPER_BOUNCING},
		{0x468056A6BB6F3846, &IS_VEHICLE_BUMPER_BROKEN_OFF},
		{0x7EEF65D5F153E26A, &IS_COP_VEHICLE_IN_AREA_3D},
		{0xB104CD1BABF302E2, &IS_VEHICLE_ON_ALL_WHEELS},
		{0x5873C14A52D74236, &_0x5873C14A52D74236},
		{0x28D37D4F71AC5C58, &GET_VEHICLE_LAYOUT_HASH},
		{0xA01BC64DD4BFBBAC, &_0xA01BC64DD4BFBBAC},
		{0x317B11A312DF5534, &SET_RENDER_TRAIN_AS_DERAILED},
		{0x2036F561ADD12E33, &SET_VEHICLE_EXTRA_COLOURS},
		{0x3BC4245933A166F7, &GET_VEHICLE_EXTRA_COLOURS},
		{0xF40DD601A65F7F19, &_SET_VEHICLE_INTERIOR_COLOR},
		{0x7D1464D472D32136, &_GET_VEHICLE_INTERIOR_COLOR},
		{0x6089CDF6A57F326C, &_SET_VEHICLE_DASHBOARD_COLOR},
		{0xB7635E80A5C31BFF, &_GET_VEHICLE_DASHBOARD_COLOR},
		{0x0F87E938BDF29D66, &STOP_ALL_GARAGE_ACTIVITY},
		{0x115722B1B9C14C1C, &SET_VEHICLE_FIXED},
		{0x953DA1E1B12C0491, &SET_VEHICLE_DEFORMATION_FIXED},
		{0x206BC5DC9D1AC70A, &_SET_VEHICLE_CAN_ENGINE_OPERATE_ON_FIRE},
		{0x51BB2D88D31A914B, &SET_VEHICLE_CAN_LEAK_OIL},
		{0x192547247864DFDD, &SET_VEHICLE_CAN_LEAK_PETROL},
		{0x465BF26AB9684352, &SET_DISABLE_VEHICLE_PETROL_TANK_FIRES},
		{0x37C8252A7C92D017, &SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE},
		{0x91A0BD635321F145, &SET_DISABLE_VEHICLE_ENGINE_FIRES},
		{0xC50CE861B55EAB8B, &_0xC50CE861B55EAB8B},
		{0x6EBFB22D646FFC18, &_0x6EBFB22D646FFC18},
		{0x25367DE49D64CF16, &SET_DISABLE_PRETEND_OCCUPANTS},
		{0x46A1E1A299EC4BBA, &REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA},
		{0x42A8EC77D5150CBE, &SET_VEHICLE_STEER_BIAS},
		{0xD2E6822DBFD6C8BD, &IS_VEHICLE_EXTRA_TURNED_ON},
		{0x7EE3A3C5E4A40CC9, &SET_VEHICLE_EXTRA},
		{0x1262D55792428154, &DOES_EXTRA_EXIST},
		{0x534E36D4DB9ECC5D, &_0x534E36D4DB9ECC5D},
		{0xF39C4F538B5124C2, &SET_CONVERTIBLE_ROOF},
		{0xDED51F703D0FA83D, &LOWER_CONVERTIBLE_ROOF},
		{0x8F5FB35D7E88FC70, &RAISE_CONVERTIBLE_ROOF},
		{0xF8C397922FC03F41, &GET_CONVERTIBLE_ROOF_STATE},
		{0x52F357A30698BCCE, &IS_VEHICLE_A_CONVERTIBLE},
		{0xBE4C854FFDB6EEBE, &_TRANSFORM_VEHICLE_TO_SUBMARINE},
		{0x2A69FFD1B42BFF9E, &_TRANSFORM_SUBMARINE_TO_VEHICLE},
		{0xA77DC70BD689A1E5, &_GET_IS_SUBMARINE_VEHICLE_TRANSFORMED},
		{0x2959F696AE390A99, &IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS},
		{0xA1DD317EA8FD4F29, &SET_VEHICLE_DAMAGE},
		{0x35BB21DE06784373, &_0x35BB21DE06784373},
		{0xC45D23BAF168AAB8, &GET_VEHICLE_ENGINE_HEALTH},
		{0x45F6D8EEF34ABEF1, &SET_VEHICLE_ENGINE_HEALTH},
		{0x2A86A0475B6A1434, &_0x2A86A0475B6A1434},
		{0x7D5DABE888D2D074, &GET_VEHICLE_PETROL_TANK_HEALTH},
		{0x70DB57649FA8D0D8, &SET_VEHICLE_PETROL_TANK_HEALTH},
		{0x679BE1DAF71DA874, &IS_VEHICLE_STUCK_TIMER_UP},
		{0xD7591B0065AFAA7A, &RESET_VEHICLE_STUCK_TIMER},
		{0x4C241E39B23DF959, &IS_VEHICLE_DRIVEABLE},
		{0x2B5F9D2AF1F1722D, &SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER},
		{0xFBA550EA44404EE6, &SET_VEHICLE_NEEDS_TO_BE_HOTWIRED},
		{0x9F3F689B814F2599, &_0x9F3F689B814F2599},
		{0x4E74E62E0A97E901, &_0x4E74E62E0A97E901},
		{0x9C8C6504B5B63D2C, &START_VEHICLE_HORN},
		{0x9D44FCCE98450843, &_SET_VEHICLE_SILENT},
		{0x92F0CF722BC4202F, &SET_VEHICLE_HAS_STRONG_AXLES},
		{0xB215AAC32D25D019, &char*},
		{0x4EC6CFBC7B2E9536, &GET_VEHICLE_DEFORMATION_AT_POS},
		{0x60BF608F1B8CD1B6, &SET_VEHICLE_LIVERY},
		{0x2BB9230590DA5E8A, &GET_VEHICLE_LIVERY},
		{0x87B63E25A529D526, &GET_VEHICLE_LIVERY_COUNT},
		{0xA6D3A8750DC73270, &_SET_VEHICLE_ROOF_LIVERY},
		{0x60190048C0764A26, &_GET_VEHICLE_ROOF_LIVERY},
		{0x5ECB40269053C0D4, &_GET_VEHICLE_ROOF_LIVERY_COUNT},
		{0x46E571A0E20D01F1, &IS_VEHICLE_WINDOW_INTACT},
		{0x11D862A3E977A9EF, &ARE_ALL_VEHICLE_WINDOWS_INTACT},
		{0x2D34FC3BC4ADB780, &ARE_ANY_VEHICLE_SEATS_FREE},
		{0x21D2E5662C1F6FED, &RESET_VEHICLE_WHEELS},
		{0xBC74B4BE25EB6C8A, &IS_HELI_PART_BROKEN},
		{0xE4CB7541F413D2C5, &GET_HELI_MAIN_ROTOR_HEALTH},
		{0xAE8CE82A4219AC8C, &GET_HELI_TAIL_ROTOR_HEALTH},
		{0xAC51915D27E4A5F7, &GET_HELI_TAIL_BOOM_HEALTH},
		{0x4056EA1105F5ABD7, &_0x4056EA1105F5ABD7},
		{0xFE205F38AAA58E5B, &_SET_HELI_TAIL_ROTOR_HEALTH},
		{0x3EC8BF18AA453FE9, &SET_HELI_TAIL_EXPLODE_THROW_DASHBOARD},
		{0xBFDF984E2C22B94F, &SET_VEHICLE_NAME_DEBUG},
		{0x71B0892EC081D60A, &SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE},
		{0xD565F438137F0E10, &_0xD565F438137F0E10},
		{0x3441CAD2F2231923, &_0x3441CAD2F2231923},
		{0x2B6747FAA9DB9D6B, &SET_VEHICLE_DISABLE_TOWING},
		{0xE43701C36CAFF1A4, &_DOES_VEHICLE_HAVE_LANDING_GEAR},
		{0xCFC8BE9A5E1FE575, &CONTROL_LANDING_GEAR},
		{0x9B0F3DCA3DB0F4CD, &GET_LANDING_GEAR_STATE},
		{0x61E1DD6125A3EEE6, &IS_ANY_VEHICLE_NEAR_POINT},
		{0xA6E9FDCB2C76785E, &REQUEST_VEHICLE_HIGH_DETAIL_MODEL},
		{0x00689CDE5F7C6787, &REMOVE_VEHICLE_HIGH_DETAIL_MODEL},
		{0x1F25887F3C104278, &IS_VEHICLE_HIGH_DETAIL},
		{0x81A15811460FAB3A, &REQUEST_VEHICLE_ASSET},
		{0x1BBE0523B8DB9A21, &HAS_VEHICLE_ASSET_LOADED},
		{0xACE699C71AB9DEB5, &REMOVE_VEHICLE_ASSET},
		{0xFE54B92A344583CA, &SET_VEHICLE_TOW_TRUCK_ARM_POSITION},
		{0x29A16F8D621C4508, &ATTACH_VEHICLE_TO_TOW_TRUCK},
		{0xC2DB6B6708350ED8, &DETACH_VEHICLE_FROM_TOW_TRUCK},
		{0xD0E9CE05A1E68CD8, &DETACH_VEHICLE_FROM_ANY_TOW_TRUCK},
		{0x146DF9EC4C4B9FD4, &IS_VEHICLE_ATTACHED_TO_TOW_TRUCK},
		{0xEFEA18DCF10F8F75, &GET_ENTITY_ATTACHED_TO_TOW_TRUCK},
		{0x8BA6F76BC53A1493, &SET_VEHICLE_AUTOMATICALLY_ATTACHES},
		{0xF8EBCCC96ADB9FB7, &SET_VEHICLE_BULLDOZER_ARM_POSITION},
		{0x56B94C6D7127DFBA, &SET_VEHICLE_TANK_TURRET_POSITION},
		{0x0581730AB9380412, &_0x0581730AB9380412},
		{0x737E398138550FFF, &_0x737E398138550FFF},
		{0x1093408B4B9D1146, &_0x1093408B4B9D1146},
		{0x32CAEDF24A583345, &_DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME},
		{0x30D779DE7C4F6DD3, &SET_VEHICLE_FLIGHT_NOZZLE_POSITION},
		{0x9AA47FFF660CB932, &SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE},
		{0xDA62027C8BDB326E, &_GET_VEHICLE_FLIGHT_NOZZLE_POSITION},
		{0xCE2B43770B655F8F, &_SET_DISABLE_VEHICLE_FLIGHT_NOZZLE_POSITION},
		{0xA4822F1CF23F4810, &_0xA4822F1CF23F4810},
		{0xFB8794444A7D60FB, &SET_VEHICLE_BURNOUT},
		{0x1297A88E081430EB, &IS_VEHICLE_IN_BURNOUT},
		{0x222FF6A823D122E2, &SET_VEHICLE_REDUCE_GRIP},
		{0x6DEE944E1EE90CFB, &_0x6DEE944E1EE90CFB},
		{0xB5D45264751B7DF0, &SET_VEHICLE_INDICATOR_LIGHTS},
		{0x92B35082E0B42F66, &SET_VEHICLE_BRAKE_LIGHTS},
		{0x684785568EF26A22, &SET_VEHICLE_HANDBRAKE},
		{0xE4E2FD323574965C, &SET_VEHICLE_BRAKE},
		{0x48ADC8A773564670, &_0x48ADC8A773564670},
		{0x91D6DD290888CBAB, &_0x91D6DD290888CBAB},
		{0x51DB102F4A3BA5E0, &_0x51DB102F4A3BA5E0},
		{0xA4A9A4C40E615885, &_0xA4A9A4C40E615885},
		{0x1CDD6BADC297830D, &GET_VEHICLE_TRAILER_VEHICLE},
		{0xCAC66558B944DA67, &_0xCAC66558B944DA67},
		{0x09606148B6C71DEF, &SET_VEHICLE_RUDDER_BROKEN},
		{0x1A78AD3D8240536F, &SET_CONVERTIBLE_ROOF_LATCH_STATE},
		{0x53AF99BAA671CA47, &GET_VEHICLE_ESTIMATED_MAX_SPEED},
		{0xAD7E85FC227197C4, &GET_VEHICLE_MAX_BRAKING},
		{0xA132FB5370554DB0, &GET_VEHICLE_MAX_TRACTION},
		{0x5DD35C8D074E57AE, &GET_VEHICLE_ACCELERATION},
		{0xF417C2502FFFED43, &GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED},
		{0xDC53FD41B4ED944C, &GET_VEHICLE_MODEL_MAX_BRAKING},
		{0xBFBA3BA79CFF7EBF, &GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS},
		{0x539DE94D44FDFD0D, &GET_VEHICLE_MODEL_MAX_TRACTION},
		{0x8C044C5C84505B6A, &GET_VEHICLE_MODEL_ACCELERATION},
		{0x53409B5163D5B846, &_GET_VEHICLE_MODEL_ESTIMATED_AGILITY},
		{0xC6AD107DDC9054CC, &_GET_VEHICLE_MODEL_MAX_KNOTS},
		{0x5AA3F878A178C4FC, &_GET_VEHICLE_MODEL_MOVE_RESISTANCE},
		{0x00C09F246ABEDD82, &GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED},
		{0xDBC86D85C5059461, &GET_VEHICLE_CLASS_MAX_TRACTION},
		{0x4F930AD022D6DE3B, &GET_VEHICLE_CLASS_MAX_AGILITY},
		{0x2F83E7E45D9EA7AE, &GET_VEHICLE_CLASS_MAX_ACCELERATION},
		{0x4BF54C16EC8FEC03, &GET_VEHICLE_CLASS_MAX_BRAKING},
		{0x2CE544C68FB812A0, &_ADD_SPEED_ZONE_FOR_COORD},
		{0x1033371FC8E842A7, &_REMOVE_SPEED_ZONE},
		{0x87E7F24270732CB1, &OPEN_BOMB_BAY_DOORS},
		{0x3556041742A0DC74, &CLOSE_BOMB_BAY_DOORS},
		{0xD0917A423314BBA8, &_ARE_BOMB_BAY_DOORS_OPEN},
		{0xC0F97FCE55094987, &IS_VEHICLE_SEARCHLIGHT_ON},
		{0x14E85C5EE7A4D542, &SET_VEHICLE_SEARCHLIGHT},
		{0x639431E895B9AA57, &_0x639431E895B9AA57},
		{0xC0572928C0ABFDA3, &_GET_ENTRY_POSITION_OF_DOOR},
		{0x30785D90C956BF35, &CAN_SHUFFLE_SEAT},
		{0x33F2E3FE70EAAE1D, &GET_NUM_MOD_KITS},
		{0x1F2AA07F00B3217A, &SET_VEHICLE_MOD_KIT},
		{0x6325D1A044AE510D, &GET_VEHICLE_MOD_KIT},
		{0xFC058F5121E54C32, &GET_VEHICLE_MOD_KIT_TYPE},
		{0xB3ED1BFB4BE636DC, &GET_VEHICLE_WHEEL_TYPE},
		{0x487EB21CC7295BA1, &SET_VEHICLE_WHEEL_TYPE},
		{0xA551BE18C11A476D, &GET_NUM_MOD_COLORS},
		{0x43FEB945EE7F85B8, &SET_VEHICLE_MOD_COLOR_1},
		{0x816562BADFDEC83E, &SET_VEHICLE_MOD_COLOR_2},
		{0xE8D65CA700C9A693, &GET_VEHICLE_MOD_COLOR_1},
		{0x81592BE4E3878728, &GET_VEHICLE_MOD_COLOR_2},
		{0xB45085B721EFD38C, &char*},
		{0x4967A516ED23A5A1, &char*},
		{0x9A83F5F9963775EF, &_IS_VEHICLE_MOD_LOAD_DONE},
		{0x6AF0636DDEDCB6DD, &SET_VEHICLE_MOD},
		{0x772960298DA26FDB, &GET_VEHICLE_MOD},
		{0xB3924ECD70E095DC, &GET_VEHICLE_MOD_VARIATION},
		{0xE38E9162A2500646, &GET_NUM_VEHICLE_MODS},
		{0x92D619E420858204, &REMOVE_VEHICLE_MOD},
		{0x2A1F4F37F95BAD08, &TOGGLE_VEHICLE_MOD},
		{0x84B233A8C8FC8AE7, &IS_TOGGLE_MOD_ON},
		{0x8935624F8C5592CC, &char*},
		{0x51F0FEB9F6AE98C0, &char*},
		{0xB4C7A93837C91A1F, &char*},
		{0x90A38E9838E0A8C1, &GET_VEHICLE_MOD_MODIFIER_VALUE},
		{0x4593CF82AA179706, &GET_VEHICLE_MOD_IDENTIFIER_HASH},
		{0x758F49C24925568A, &PRELOAD_VEHICLE_MOD},
		{0x06F43E5175EB6D96, &HAS_PRELOAD_MODS_FINISHED},
		{0x445D79F995508307, &RELEASE_PRELOAD_MODS},
		{0xB5BA80F839791C0F, &SET_VEHICLE_TYRE_SMOKE_COLOR},
		{0xB635392A4938B3C3, &GET_VEHICLE_TYRE_SMOKE_COLOR},
		{0x57C51E6BAD752696, &SET_VEHICLE_WINDOW_TINT},
		{0x0EE21293DAD47C95, &GET_VEHICLE_WINDOW_TINT},
		{0x9D1224004B3A6707, &GET_NUM_VEHICLE_WINDOW_TINTS},
		{0xF3CC740D36221548, &GET_VEHICLE_COLOR},
		{0xEEBFC7A7EFDC35B4, &_0xEEBFC7A7EFDC35B4},
		{0xE495D1EF4C91FD20, &GET_VEHICLE_CAUSE_OF_DESTRUCTION},
		{0x5EE5632F47AE9695, &_0x5EE5632F47AE9695},
		{0x5EF77C9ADD3B11A3, &GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED},
		{0xA7ECB73355EB2F20, &GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED},
		{0xEC69ADF931AAE0C3, &_IS_VEHICLE_ENGINE_ON_FIRE},
		{0x93A3996368C94158, &MODIFY_VEHICLE_TOP_SPEED},
		{0xBAA045B4E42F3C06, &_SET_VEHICLE_MAX_SPEED},
		{0x1CF38D529D7441D9, &_0x1CF38D529D7441D9},
		{0x1F9FB66F3A3842D2, &_0x1F9FB66F3A3842D2},
		{0x59C3757B3B7408E8, &_0x59C3757B3B7408E8},
		{0x54B0F614960F4A5F, &ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA},
		{0xE30524E1871F481D, &REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA},
		{0x291E373D483E7EE7, &_IS_ANY_PASSENGER_RAPPELING_FROM_VEHICLE},
		{0xB59E4BD37AE292DB, &SET_VEHICLE_CHEAT_POWER_INCREASE},
		{0x0AD9E8F87FF7C16F, &_0x0AD9E8F87FF7C16F},
		{0xF7EC25A3EBEEC726, &SET_VEHICLE_IS_WANTED},
		{0xF488C566413B4232, &_0xF488C566413B4232},
		{0xC1F981A6F74F0C23, &GET_BOAT_BOOM_POSITION_RATIO},
		{0x0F3B4D4E43177236, &_0x0F3B4D4E43177236},
		{0x6636C535F6CC2725, &GET_BOAT_BOOM_POSITION_RATIO},
		{0x23428FC53C60919C, &DISABLE_PLANE_AILERON},
		{0xAE31E7DF9B5B132E, &GET_IS_VEHICLE_ENGINE_RUNNING},
		{0x1D97D1E3A70A649F, &SET_VEHICLE_USE_ALTERNATE_HANDLING},
		{0x9CFA4896C3A53CBB, &SET_BIKE_ON_STAND},
		{0xAB04325045427AAE, &_0xAB04325045427AAE},
		{0xCFD778E7904C255E, &_0xCFD778E7904C255E},
		{0xACFB2463CC22BED2, &SET_LAST_DRIVEN_VEHICLE},
		{0xB2D06FAEDE65B577, &GET_LAST_DRIVEN_VEHICLE},
		{0xE01903C47C7AC89E, &CLEAR_LAST_DRIVEN_VEHICLE},
		{0x02398B627547189C, &SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG},
		{0xB893215D8D4C015B, &SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN},
		{0x93AE6A61BE015BF1, &SET_VEHICLE_LOD_MULTIPLIER},
		{0x428BACCDF5E26EAD, &SET_VEHICLE_CAN_SAVE_IN_GARAGE},
		{0x42A4BEB35D372407, &_GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES},
		{0x2C8CBFE1EA5FC631, &_GET_VEHICLE_NUMBER_OF_BROKEN_BONES},
		{0x4D9D109F63FEE1D4, &_0x4D9D109F63FEE1D4},
		{0x279D50DE5652D935, &_0x279D50DE5652D935},
		{0xE44A982368A4AF23, &COPY_VEHICLE_DAMAGES},
		{0xF25E02CB9C5818F8, &_0xF25E02CB9C5818F8},
		{0xBC3CCA5844452B06, &SET_LIGHTS_CUTOFF_DISTANCE_TWEAK},
		{0x74CD9A9327A282EA, &SET_VEHICLE_SHOOT_AT_TARGET},
		{0x8F5EBAB1F260CFCE, &GET_VEHICLE_LOCK_ON_TARGET},
		{0x97CE68CB032583F0, &SET_FORCE_HD_VEHICLE},
		{0x182F266C2D9E2BEB, &_0x182F266C2D9E2BEB},
		{0x9CCC9525BF2408E0, &GET_VEHICLE_PLATE_TYPE},
		{0x64473AEFDCF47DCA, &TRACK_VEHICLE_VISIBILITY},
		{0xAA0A52D24FB98293, &IS_VEHICLE_VISIBLE},
		{0x89F149B6131E57DA, &SET_VEHICLE_GRAVITY},
		{0xE6C0C80B8C867537, &_0xE6C0C80B8C867537},
		{0xF051D9BFB6BA39C0, &_0xF051D9BFB6BA39C0},
		{0x36492C2F0D134C56, &_0x36492C2F0D134C56},
		{0x48C633E94A8142A7, &_0x48C633E94A8142A7},
		{0x06582AFF74894C75, &SET_VEHICLE_INACTIVE_DURING_PLAYBACK},
		{0xDFFCEF48E511DB48, &SET_VEHICLE_ACTIVE_DURING_PLAYBACK},
		{0x8D474C8FAEFF6CDE, &IS_VEHICLE_SPRAYABLE},
		{0x983765856F2564F9, &SET_VEHICLE_ENGINE_CAN_DEGRADE},
		{0xF0E4BA16D1DB546C, &_0xF0E4BA16D1DB546C},
		{0xF87D9F2301F7D206, &_0xF87D9F2301F7D206},
		{0x4198AB0022B15F87, &IS_PLANE_LANDING_GEAR_INTACT},
		{0x755D6D5267CBBD7E, &ARE_PLANE_PROPELLERS_INTACT},
		{0x4C815EB175086F84, &_0x4C815EB175086F84},
		{0x0CDDA42F9E360CA6, &SET_VEHICLE_CAN_DEFORM_WHEELS},
		{0x4AF9BD80EEBEB453, &IS_VEHICLE_STOLEN},
		{0x67B2C79AA7FF5738, &SET_VEHICLE_IS_STOLEN},
		{0xAD2D28A1AFDFF131, &SET_PLANE_TURBULENCE_MULTIPLIER},
		{0x5991A01434CE9677, &_ARE_PLANE_WINGS_INTACT},
		{0xB264C4D2F2B0A78B, &_0xB264C4D2F2B0A78B},
		{0x0E21D3DF1051399D, &DETACH_VEHICLE_FROM_CARGOBOB},
		{0xADF7BE450512C12F, &DETACH_VEHICLE_FROM_ANY_CARGOBOB},
		{0xAF03011701811146, &_DETACH_ENTITY_FROM_CARGOBOB},
		{0xD40148F22E81A1D9, &IS_VEHICLE_ATTACHED_TO_CARGOBOB},
		{0x873B82D42AC2B9E5, &GET_VEHICLE_ATTACHED_TO_CARGOBOB},
		{0x99093F60746708CA, &_GET_ENTITY_ATTACHED_TO_CARGOBOB},
		{0x4127F1D84E347769, &ATTACH_VEHICLE_TO_CARGOBOB},
		{0xA1DD82F3CCF9A01E, &_ATTACH_ENTITY_TO_CARGOBOB},
		{0x571FEB383F629926, &_0x571FEB383F629926},
		{0x1F34B0626C594380, &_0x1F34B0626C594380},
		{0x2C1D8B3B19E517CC, &_0x2C1D8B3B19E517CC},
		{0xCBDB9B923CACC92D, &_GET_CARGOBOB_HOOK_POSITION},
		{0x1821D91AD4B56108, &DOES_CARGOBOB_HAVE_PICK_UP_ROPE},
		{0x7BEB0C7A235F6F3B, &CREATE_PICK_UP_ROPE_FOR_CARGOBOB},
		{0x9768CF648F54C804, &REMOVE_PICK_UP_ROPE_FOR_CARGOBOB},
		{0x877C1EAEAC531023, &_SET_CARGOBOB_HOOK_POSITION},
		{0xC0ED6438E6D39BA8, &_0xC0ED6438E6D39BA8},
		{0xCF1182F682F65307, &SET_CARGOBOB_PICKUP_ROPE_DAMPING_MULTIPLIER},
		{0x0D5F65A8F4EBDAB5, &SET_CARGOBOB_PICKUP_ROPE_TYPE},
		{0x6E08BF5B3722BAC9, &DOES_CARGOBOB_HAVE_PICKUP_MAGNET},
		{0x9A665550F8DA349B, &SET_CARGOBOB_PICKUP_MAGNET_ACTIVE},
		{0xBCBFCD9D1DAC19E2, &SET_CARGOBOB_PICKUP_MAGNET_STRENGTH},
		{0xA17BAD153B51547E, &SET_CARGOBOB_PICKUP_MAGNET_EFFECT_RADIUS},
		{0x66979ACF5102FD2F, &SET_CARGOBOB_PICKUP_MAGNET_REDUCED_FALLOFF},
		{0x6D8EAC07506291FB, &SET_CARGOBOB_PICKUP_MAGNET_PULL_ROPE_LENGTH},
		{0xED8286F71A819BAA, &SET_CARGOBOB_PICKUP_MAGNET_PULL_STRENGTH},
		{0x685D5561680D088B, &SET_CARGOBOB_PICKUP_MAGNET_FALLOFF},
		{0xE301BD63E9E13CF0, &SET_CARGOBOB_PICKUP_MAGNET_REDUCED_STRENGTH},
		{0x9BDDC73CC6A115D4, &_0x9BDDC73CC6A115D4},
		{0x56EB5E94318D3FB6, &_0x56EB5E94318D3FB6},
		{0x25ECB9F8017D98E0, &DOES_VEHICLE_HAVE_WEAPONS},
		{0x2C4A1590ABF43E8B, &_0x2C4A1590ABF43E8B},
		{0xF4FC6A6F67D8D856, &DISABLE_VEHICLE_WEAPON},
		{0x563B65A643ED072E, &_IS_VEHICLE_WEAPON_DISABLED},
		{0xE05DD0E9707003A3, &_0xE05DD0E9707003A3},
		{0x21115BCD6E44656A, &_SET_VEHICLE_CLOSE_DOOR_DEFERED_ACTION},
		{0x29439776AAA00A62, &GET_VEHICLE_CLASS},
		{0xDEDF1C8BD47C2200, &GET_VEHICLE_CLASS_FROM_NAME},
		{0xBCDF8BAF56C87B6A, &SET_PLAYERS_LAST_VEHICLE},
		{0x300504B23BD3B711, &SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS},
		{0xE5810AC70602F2F5, &_0xE5810AC70602F2F5},
		{0x068F64F2470F9656, &SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP},
		{0xB8FBC8B1330CA9B4, &_SET_VEHICLE_JET_ENGINE_ON},
		{0x6A973569BA094650, &_0x6A973569BA094650},
		{0x10655FAB9915623D, &_SET_VEHICLE_HANDLING_HASH_FOR_AI},
		{0x79DF7E806202CE01, &SET_VEHICLE_EXTENDED_REMOVAL_RANGE},
		{0x9007A2F21DC108D4, &SET_VEHICLE_STEERING_BIAS_SCALAR},
		{0x6E0859B530A365CC, &_SET_HELICOPTER_ROLL_PITCH_YAW_MULT},
		{0x1837AF7C627009BA, &SET_VEHICLE_FRICTION_OVERRIDE},
		{0xA37B9A517B133349, &SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP},
		{0xF78F94D60248C737, &_0xF78F94D60248C737},
		{0xA46413066687A328, &SET_VEHICLE_CEILING_HEIGHT},
		{0x5E569EC46EC21CAE, &_0x5E569EC46EC21CAE},
		{0x6D6AF961B72728AE, &CLEAR_VEHICLE_ROUTE_HISTORY},
		{0x956B409B984D9BF7, &DOES_VEHICLE_EXIST_WITH_DECORATOR},
		{0x41062318F23ED854, &SET_VEHICLE_EXCLUSIVE_DRIVER},
		{0xB5C51B5502E85E83, &_SET_VEHICLE_EXCLUSIVE_DRIVER_2},
		{0xB09D25E77C33EB3F, &_0xB09D25E77C33EB3F},
		{0x500873A45724C863, &_DISABLE_PLANE_PROPELLER},
		{0xB055A34527CB8FD7, &SET_VEHICLE_FORCE_AFTERBURNER},
		{0x1087BC8EC540DAEB, &_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS},
		{0xB68CFAF83A02768D, &_0xB68CFAF83A02768D},
		{0x0205F5365292D2EB, &_0x0205F5365292D2EB},
		{0xCF9159024555488C, &_0xCF9159024555488C},
		{0xF796359A959DF65D, &SET_DISTANT_CARS_ENABLED},
		{0x8E0A582209A62695, &_SET_VEHICLE_NEON_LIGHTS_COLOUR},
		{0xB93B2867F7B479D1, &_0xB93B2867F7B479D1},
		{0x7619EEE8C886757F, &_GET_VEHICLE_NEON_LIGHTS_COLOUR},
		{0x2AA720E4287BF269, &_SET_VEHICLE_NEON_LIGHT_ENABLED},
		{0x8C4B92553E4766A5, &_IS_VEHICLE_NEON_LIGHT_ENABLED},
		{0x35E0654F4BAD7971, &_0x35E0654F4BAD7971},
		{0x83F813570FF519DE, &_DISABLE_VEHICLE_NEON_LIGHTS},
		{0xB088E9A47AE6EDD5, &_0xB088E9A47AE6EDD5},
		{0xDBA3C090E3D74690, &_REQUEST_VEHICLE_DASHBOARD_SCALEFORM_MOVIE},
		{0xF271147EB7B40F12, &GET_VEHICLE_BODY_HEALTH},
		{0xB77D05AC8C78AADB, &SET_VEHICLE_BODY_HEALTH},
		{0xDF7E3EEB29642C38, &_GET_VEHICLE_SUSPENSION_BOUNDS},
		{0x53952FD2BAA19F17, &_GET_VEHICLE_SUSPENSION_HEIGHT},
		{0x84FD40F56075E816, &_SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER},
		{0x92922A607497B14D, &_GET_NUMBER_OF_VEHICLE_DOORS},
		{0x28B18377EB6E25F6, &_SET_HYDRAULIC_RAISED},
		{0xA7DCDF4DED40A8F4, &_0xA7DCDF4DED40A8F4},
		{0xB8EF61207C2393A9, &_GET_VEHICLE_BODY_HEALTH_2},
		{0xD4C4642CB7F50B5D, &_0xD4C4642CB7F50B5D},
		{0xC361AA040D6637A8, &_0xC361AA040D6637A8},
		{0x99C82F8A139F3E4E, &SET_VEHICLE_KERS_ALLOWED},
		{0x50634E348C8D44EF, &GET_VEHICLE_HAS_KERS},
		{0xE16142B94664DEFD, &_0xE16142B94664DEFD},
		{0x26D99D5A82FD18E8, &_0x26D99D5A82FD18E8},
		{0x84EA99C62CB3EF0C, &_SET_HYDRAULIC_STATE},
		{0x1201E8A3290A3B98, &_SET_CAMBERED_WHEELS_DISABLED},
		{0x8EA86DF356801C7D, &_SET_HYDRAULIC_WHEEL_STATE},
		{0xC24075310A8B9CD1, &_SET_HYDRAULIC_WHEEL_STATE_TRANSITION},
		{0x5BA68A0840D546AC, &_0x5BA68A0840D546AC},
		{0x4419966C9936071A, &_0x4419966C9936071A},
		{0x870B8B7A766615C8, &_0x870B8B7A766615C8},
		{0x8533CAFDE1F0F336, &_0x8533CAFDE1F0F336},
		{0x4E20D2A627011E8E, &_SET_VEHICLE_DAMAGE_MODIFIER},
		{0x45A561A9421AB6AD, &_SET_VEHICLE_UNK_DAMAGE_MULTIPLIER},
		{0xD4196117AF7BB974, &_0xD4196117AF7BB974},
		{0xBB2333BB87DDD87F, &_0xBB2333BB87DDD87F},
		{0x73561D4425A021A2, &_0x73561D4425A021A2},
		{0x5B91B229243351A8, &_0x5B91B229243351A8},
		{0x7BBE7FF626A591FE, &_0x7BBE7FF626A591FE},
		{0x65B080555EA48149, &_0x65B080555EA48149},
		{0x428AD3E26C8D9EB0, &_0x428AD3E26C8D9EB0},
		{0xE2F53F172B45EDE1, &_0xE2F53F172B45EDE1},
		{0xBA91D045575699AD, &_0xBA91D045575699AD},
		{0x80E3357FDEF45C21, &_0x80E3357FDEF45C21},
		{0xEFC13B1CE30D755D, &_SET_VEHICLE_RAMP_LAUNCH_MODIFIER},
		{0x645F4B6E8499F632, &_GET_IS_DOOR_VALID},
		{0xE00F2AB100B76E89, &_SET_VEHICLE_ROCKET_BOOST_REFILL_TIME},
		{0x36D782F68B309BDA, &_GET_HAS_ROCKET_BOOST},
		{0x3D34E80EED4AE3BE, &_IS_VEHICLE_ROCKET_BOOST_ACTIVE},
		{0x81E1552E35DC3839, &_SET_VEHICLE_ROCKET_BOOST_ACTIVE},
		{0xDCA174A42133F08C, &_GET_HAS_RETRACTABLE_WHEELS},
		{0x1DA0DA9CB3F0C8BF, &_GET_IS_WHEELS_LOWERED_STATE_ACTIVE},
		{0xF660602546D27BA8, &_RAISE_RETRACTABLE_WHEELS},
		{0x5335BE58C083E74E, &_LOWER_RETRACTABLE_WHEELS},
		{0x9078C0C5EF8C19E9, &_GET_CAN_VEHICLE_JUMP},
		{0xF06A16CA55D138D8, &_SET_USE_HIGHER_VEHICLE_JUMP_FORCE},
		{0xB2E0C0D6922D31F2, &_0xB2E0C0D6922D31F2},
		{0x44CD1F493DB2A0A6, &_SET_VEHICLE_WEAPON_CAPACITY},
		{0x8181CE2F25CB9BB7, &_GET_VEHICLE_WEAPON_CAPACITY},
		{0xBC9CFF381338CB4F, &_GET_VEHICLE_HAS_PARACHUTE},
		{0xA916396DF4154EE3, &_GET_VEHICLE_CAN_ACTIVATE_PARACHUTE},
		{0x0BFFB028B3DD0A97, &_SET_VEHICLE_PARACHUTE_ACTIVE},
		{0x3DE51E9C80B116CF, &_0x3DE51E9C80B116CF},
		{0x28D034A93FE31BF5, &_SET_VEHICLE_RECEIVES_RAMP_DAMAGE},
		{0x1BBAC99C0BC53656, &_SET_VEHICLE_RAMP_SIDEWAYS_LAUNCH_MOTION},
		{0x756AE6E962168A04, &_SET_VEHICLE_RAMP_UPWARDS_LAUNCH_MOTION},
		{0x9D30687C57BAA0BB, &_0x9D30687C57BAA0BB},
		{0x86B4B6212CB8B627, &_SET_VEHICLE_WEAPONS_DISABLED},
		{0x41290B40FA63E6DA, &_0x41290B40FA63E6DA},
		{0x4D610C6B56031351, &_SET_VEHICLE_PARACHUTE_MODEL},
		{0xA74AD2439468C883, &_SET_VEHICLE_PARACHUTE_TEXTURE_VARIATIION},
		{0x0419B167EE128F33, &_0x0419B167EE128F33},
		{0xF3B0E0AED097A3F5, &_0xF3B0E0AED097A3F5},
		{0xD3E51C0AB8C26EEE, &_0xD3E51C0AB8C26EEE},
		{0x9B8E1BF04B51F2E8, &_GET_ALL_VEHICLES},
		{0x72BECCF4B829522E, &_0x72BECCF4B829522E},
		{0x66E3AAFACE2D1EB8, &_0x66E3AAFACE2D1EB8},
		{0x1312DDD8385AEE4E, &_0x1312DDD8385AEE4E},
		{0xEDBC8405B3895CC9, &_0xEDBC8405B3895CC9},
		{0x26E13D440E7F6064, &_0x26E13D440E7F6064},
		{0x2FA2494B47FDD009, &_0x2FA2494B47FDD009},
		{0xFEB2DDED3509562E, &_SET_VEHICLE_ROCKET_BOOST_PERCENTAGE},
		{0x544996C0081ABDEB, &_0x544996C0081ABDEB},
		{0x78CEEE41F49F421F, &_0x78CEEE41F49F421F},
		{0xAF60E6A2936F982A, &_0xAF60E6A2936F982A},
		{0x430A7631A84C9BE7, &_0x430A7631A84C9BE7},
		{0x75627043C6AA90AD, &_0x75627043C6AA90AD},
		{0x8235F1BEAD557629, &_0x8235F1BEAD557629},
		{0x9640E30A7F395E4B, &_0x9640E30A7F395E4B},
		{0x0BBB9A7A8FFE931B, &_0x0BBB9A7A8FFE931B},
		{0x94A68DA412C4007D, &_0x94A68DA412C4007D},
		{0xF4B2ED59DEB5D774, &_SET_VEHICLE_BOMB_COUNT},
		{0xEA12BD130D7569A1, &_GET_VEHICLE_BOMB_COUNT},
		{0x9BDA23BF666F0855, &_SET_VEHICLE_COUNTERMEASURE_COUNT},
		{0xF846AA63DF56B804, &_GET_VEHICLE_COUNTERMEASURE_COUNT},
		{0x0A3F820A9A9A9AC5, &_0x0A3F820A9A9A9AC5},
		{0x51F30DB60626A20E, &_0x51F30DB60626A20E},
		{0x97841634EF7DF1D6, &_0x97841634EF7DF1D6},
		{0xD138FA15C9776837, &_SET_VEHICLE_HOVER_TRANSFORM_RATIO},
		{0x438B3D7CA026FE91, &_SET_VEHICLE_HOVER_TRANSFORM_PERCENTAGE},
		{0xF1211889DF15A763, &_SET_VEHICLE_HOVER_TRANSFORM_ENABLED},
		{0x2D55FE374D5FDB91, &_SET_VEHICLE_HOVER_TRANSFORM_ACTIVE},
		{0x3A9128352EAC9E85, &_0x3A9128352EAC9E85},
		{0x8DC9675797123522, &_0x8DC9675797123522},
		{0xB251E0B33E58B424, &_0xB251E0B33E58B424},
		{0xAEF12960FA943792, &_0xAEF12960FA943792},
		{0xAA653AE61924B0A0, &_0xAA653AE61924B0A0},
		{0xC60060EB0D8AC7B1, &_0xC60060EB0D8AC7B1},
		{0x70A252F60A3E036B, &_SET_SPECIALFLIGHT_WING_RATIO},
		{0xE615BB7A7752C76A, &_0xE615BB7A7752C76A},
		{0x887FA38787DE8C72, &_0x887FA38787DE8C72},
		{0x498218259FB7C72D, &_SET_UNK_FLOAT_0x104_FOR_SUBMARINE_VEHICLE_TASK},
		{0x41B9FB92EDED32A6, &_SET_UNK_BOOL_0x102_FOR_SUBMARINE_VEHICLE_TASK},
		{0x36DE109527A2C0C4, &_0x36DE109527A2C0C4},
		{0x82E0AC411E41A5B4, &_0x82E0AC411E41A5B4},
		{0x99A05839C46CE316, &_0x99A05839C46CE316},
		{0xA2459F72C14E2E8D, &_GET_IS_VEHICLE_SHUNT_BOOST_ACTIVE},
		{0xE8718FAF591FD224, &_0xE8718FAF591FD224},
		{0x04F2FA6E234162F7, &_GET_LAST_RAMMED_VEHICLE},
		{0x143921E45EC44D62, &_SET_DISABLE_VEHICLE_UNK},
		{0xC8E9B6B71B8E660D, &_SET_VEHICLE_NITRO_ENABLED},
		{0x2970EAA18FD5E42F, &_SET_VEHICLE_WHEELS_DEAL_DAMAGE},
		{0x211E95CE9903940C, &_SET_DISABLE_VEHICLE_UNK_2},
		{0x5BBCF35BF6E456F7, &_0x5BBCF35BF6E456F7},
		{0x71AFB258CCED3A27, &_GET_DOES_VEHICLE_HAVE_TOMBSTONE},
		{0xAE71FB656C600587, &_HIDE_VEHICLE_TOMBSTONE},
		{0x0506ED94363AD905, &_GET_IS_VEHICLE_EMP_DISABLED},
		{0x8F0D5BA1C2CC91D7, &_0x8F0D5BA1C2CC91D7},
		{0xF6829842C06AE524, &GET_WATER_HEIGHT},
		{0x8EE6B53CE13A9794, &GET_WATER_HEIGHT_NO_WAVES},
		{0xFFA5D878809819DB, &TEST_PROBE_AGAINST_WATER},
		{0x8974647ED222EA5F, &TEST_PROBE_AGAINST_ALL_WATER},
		{0x2B3451FA1E3142E2, &TEST_VERTICAL_PROBE_AGAINST_ALL_WATER},
		{0xC443FD757C3BA637, &MODIFY_WATER},
		{0xFDBF4CDBC07E1706, &_ADD_CURRENT_RISE},
		{0xB1252E3E59A82AAF, &_REMOVE_CURRENT_RISE},
		{0xB96B00E976BE977F, &SET_DEEP_OCEAN_SCALER},
		{0x2B2A2CC86778B619, &GET_DEEP_OCEAN_SCALER},
		{0x547237AA71AB44DE, &_0x547237AA71AB44DE},
		{0x5E5E99285AE812DB, &RESET_DEEP_OCEAN_SCALER},
		{0xC8B46D7727D864AA, &ENABLE_LASER_SIGHT_RENDERING},
		{0x0DB57B41EC1DB083, &GET_WEAPON_COMPONENT_TYPE_MODEL},
		{0xF46CDC33180FDA94, &GET_WEAPONTYPE_MODEL},
		{0x4215460B9B8B7FA0, &GET_WEAPONTYPE_SLOT},
		{0xC3287EE3050FB74C, &GET_WEAPONTYPE_GROUP},
		{0x6558AC7C17BFEF58, &_GET_WEAPON_COMPONENT_VARIANT_EXTRA_COMPONENT_COUNT},
		{0x4D1CB8DC40208A17, &_GET_WEAPON_COMPONENT_VARIANT_EXTRA_COMPONENT_MODEL},
		{0xADF692B254977C0C, &SET_CURRENT_PED_WEAPON},
		{0x3A87E44BB9A01D54, &GET_CURRENT_PED_WEAPON},
		{0x3B390A939AF0B5FC, &GET_CURRENT_PED_WEAPON_ENTITY_INDEX},
		{0x8483E98E8B888AE2, &GET_BEST_PED_WEAPON},
		{0x75C55983C2C39DAA, &SET_CURRENT_PED_VEHICLE_WEAPON},
		{0x1017582BCD3832DC, &GET_CURRENT_PED_VEHICLE_WEAPON},
		{0x50276EF8172F5F12, &_0x50276EF8172F5F12},
		{0x475768A975D5AD17, &IS_PED_ARMED},
		{0x937C71165CF334B3, &IS_WEAPON_VALID},
		{0x8DECB02F88F428BC, &HAS_PED_GOT_WEAPON},
		{0xB80CA294F2F26749, &IS_PED_WEAPON_READY_TO_SHOOT},
		{0xEFFED78E9011134D, &GET_PED_WEAPONTYPE_IN_SLOT},
		{0x015A522136D7F951, &GET_AMMO_IN_PED_WEAPON},
		{0x78F0424C34306220, &ADD_AMMO_TO_PED},
		{0x14E56BC5B5DB6A19, &SET_PED_AMMO},
		{0x3EDCB0505123623B, &SET_PED_INFINITE_AMMO},
		{0x183DADC6AA953186, &SET_PED_INFINITE_AMMO_CLIP},
		{0xBF0FD6E56C964FCB, &GIVE_WEAPON_TO_PED},
		{0xB282DC6EBD803C75, &GIVE_DELAYED_WEAPON_TO_PED},
		{0xF25DF915FA38C5F3, &REMOVE_ALL_PED_WEAPONS},
		{0x4899CB088EDF59B8, &REMOVE_WEAPON_FROM_PED},
		{0x6F6981D2253C208F, &HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE},
		{0x0725A4CCFDED9A70, &SET_PED_CURRENT_WEAPON_VISIBLE},
		{0x476AE72C1D19D1A8, &SET_PED_DROPS_WEAPONS_WHEN_DEAD},
		{0x2D343D2219CD027A, &HAS_PED_BEEN_DAMAGED_BY_WEAPON},
		{0x0E98F88A24C5F4B8, &CLEAR_PED_LAST_WEAPON_DAMAGE},
		{0x131D401334815E94, &HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON},
		{0xAC678E40BE7C74D2, &CLEAR_ENTITY_LAST_WEAPON_DAMAGE},
		{0x6B7513D9966FBEC0, &SET_PED_DROPS_WEAPON},
		{0x208A1888007FC0E6, &SET_PED_DROPS_INVENTORY_WEAPON},
		{0xA38DCFFCEA8962FA, &GET_MAX_AMMO_IN_CLIP},
		{0x2E1202248937775C, &GET_AMMO_IN_CLIP},
		{0xDCD2A934D65CB497, &SET_AMMO_IN_CLIP},
		{0xDC16122C7A20C933, &GET_MAX_AMMO},
		{0x585847C5E4E11709, &_GET_MAX_AMMO_2},
		{0x2472622CE1F2D45F, &_ADD_PED_AMMO},
		{0x5FD1E1F011E76D7E, &SET_PED_AMMO_BY_TYPE},
		{0x39D22031557946C1, &GET_PED_AMMO_BY_TYPE},
		{0xA4EFEF9440A5B0EF, &SET_PED_AMMO_TO_DROP},
		{0xE620FD3512A04F18, &_0xE620FD3512A04F18},
		{0x7FEAD38B326B9F74, &GET_PED_AMMO_TYPE_FROM_WEAPON},
		{0xF489B44DD5AF4BD9, &_GET_PED_AMMO_TYPE_FROM_WEAPON_2},
		{0x6C4D0409BA1A2BC2, &GET_PED_LAST_WEAPON_IMPACT_COORD},
		{0xD0D7B1E680ED4A1A, &SET_PED_GADGET},
		{0xF731332072F5156C, &GET_IS_PED_GADGET_EQUIPPED},
		{0x0A6DB4965674D243, &GET_SELECTED_PED_WEAPON},
		{0xFC4BD125DE7611E4, &EXPLODE_PROJECTILES},
		{0xFC52E0F37E446528, &REMOVE_ALL_PROJECTILES_OF_TYPE},
		{0x840F03E9041E2C9C, &GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON},
		{0x814C9D19DFD69679, &GET_MAX_RANGE_OF_CURRENT_PED_WEAPON},
		{0x717C8481234E3B88, &HAS_VEHICLE_GOT_PROJECTILE_ATTACHED},
		{0xD966D51AA5B28BB9, &GIVE_WEAPON_COMPONENT_TO_PED},
		{0x1E8BE90C74FB4C09, &REMOVE_WEAPON_COMPONENT_FROM_PED},
		{0xC593212475FAE340, &HAS_PED_GOT_WEAPON_COMPONENT},
		{0x0D78DE0572D3969E, &IS_PED_WEAPON_COMPONENT_ACTIVE},
		{0x8C0D57EA686FAD87, &_PED_SKIP_NEXT_RELOADING},
		{0x20AE33F3AC9C0033, &MAKE_PED_RELOAD},
		{0x5443438F033E29C3, &REQUEST_WEAPON_ASSET},
		{0x36E353271F0E90EE, &HAS_WEAPON_ASSET_LOADED},
		{0xAA08EF13F341C8FC, &REMOVE_WEAPON_ASSET},
		{0x9541D3CF0D398F36, &CREATE_WEAPON_OBJECT},
		{0x33E179436C0B31DB, &GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT},
		{0xF7D82B0D66777611, &REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT},
		{0x76A18844E743BF91, &HAS_WEAPON_GOT_WEAPON_COMPONENT},
		{0xB1FA61371AF7C4B7, &GIVE_WEAPON_OBJECT_TO_PED},
		{0x5CEE3DF569CECAB0, &DOES_WEAPON_TAKE_WEAPON_COMPONENT},
		{0xCAE1DC9A0E22A16D, &GET_WEAPON_OBJECT_FROM_PED},
		{0x68F8BE6AF5CDF8A6, &_GIVE_LOADOUT_TO_PED},
		{0x50969B9B89ED5738, &SET_PED_WEAPON_TINT_INDEX},
		{0x2B9EEDC07BD06B9F, &GET_PED_WEAPON_TINT_INDEX},
		{0xF827589017D4E4A9, &SET_WEAPON_OBJECT_TINT_INDEX},
		{0xCD183314F7CD2E57, &GET_WEAPON_OBJECT_TINT_INDEX},
		{0x5DCF6C5CAB2E9BF7, &GET_WEAPON_TINT_COUNT},
		{0x9FE5633880ECD8ED, &_SET_PED_WEAPON_LIVERY_COLOR},
		{0xF0A60040BE558F2D, &_GET_PED_WEAPON_LIVERY_COLOR},
		{0x5DA825A85D0EA6E6, &_SET_WEAPON_OBJECT_LIVERY_COLOR},
		{0xB3EA4FEABF41464B, &_GET_WEAPON_OBJECT_LIVERY_COLOR},
		{0xA2C9AC24B4061285, &_0xA2C9AC24B4061285},
		{0x977CA98939E82E4B, &_0x977CA98939E82E4B},
		{0xD92C739EE34C9EBA, &GET_WEAPON_HUD_STATS},
		{0xB3CAF387AE12E9F8, &GET_WEAPON_COMPONENT_HUD_STATS},
		{0x3133B907D8B32053, &GET_WEAPON_DAMAGE},
		{0x583BE370B1EC6EB4, &GET_WEAPON_CLIP_SIZE},
		{0x065D2AACAD8CF7A4, &_GET_WEAPON_TIME_BETWEEN_SHOTS},
		{0x8378627201D5497D, &SET_PED_CHANCE_OF_FIRING_BLANKS},
		{0xB4C8D77C80C0421E, &SET_PED_SHOOT_ORDNANCE_WEAPON},
		{0x48164DBB970AC3F0, &REQUEST_WEAPON_HIGH_DETAIL_MODEL},
		{0x4757F00BC6323CFE, &_SET_WEAPON_DAMAGE_MODIFIER},
		{0x65F0C5AE05943EC7, &IS_PED_CURRENT_WEAPON_SILENCED},
		{0x4B7620C47217126C, &IS_FLASH_LIGHT_ON},
		{0xCEA66DAD478CD39B, &SET_FLASH_LIGHT_FADE_DISTANCE},
		{0x1055AC3A667F09D9, &SET_WEAPON_ANIMATION_OVERRIDE},
		{0x3BE0BB12D25FB305, &GET_WEAPON_DAMAGE_TYPE},
		{0xE4DCEC7FD5B739A5, &_0xE4DCEC7FD5B739A5},
		{0xBC7BE5ABC0879F74, &CAN_USE_WEAPON_ON_PARACHUTE},
		{0x91EF34584710BE99, &_CREATE_AIR_DEFENSE_SPHERE},
		{0x9DA58CDBF6BDBC08, &_CREATE_AIR_DEFENSE_AREA},
		{0x0ABF535877897560, &_REMOVE_AIR_DEFENSE_ZONE},
		{0x1E45B34ADEBEE48E, &_REMOVE_ALL_AIR_DEFENSE_ZONES},
		{0xECDC202B25E5CF48, &_SET_PLAYER_AIR_DEFENSE_ZONE_FLAG},
		{0xDAB963831DBFD3F4, &_IS_AIR_DEFENSE_ZONE_INSIDE_SPHERE},
		{0x44F1012B69313374, &_FIRE_AIR_DEFENSE_WEAPON},
		{0xCD79A550999D7D4F, &_DOES_AIR_DEFENSE_ZONE_EXIST},
		{0xB4771B9AAF4E68E4, &_SET_CAN_PED_EQUIP_WEAPON},
		{0xEFF296097FF1E509, &_SET_CAN_PED_EQUIP_ALL_WEAPONS},
		{0x27040C25DE6CB2F4, &GET_ZONE_AT_COORDS},
		{0x98CD1D2934B76CC1, &GET_ZONE_FROM_NAME_ID},
		{0x4334BC40AA0CB4BB, &GET_ZONE_POPSCHEDULE},
		{0xCD90657D4C30E1CA, &char*},
		{0xBA5ECEEA120E5611, &SET_ZONE_ENABLED},
		{0x5F7B268D15BA0739, &GET_ZONE_SCUMMINESS},
		{0x5F7D596BAC2E7777, &OVERRIDE_POPSCHEDULE_VEHICLE_MODEL},
		{0x5C0DE367AA0D911C, &CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL},
		{0x7EE64D51E8498728, &GET_HASH_OF_MAP_AREA_AT_COORDS},
	};
}
