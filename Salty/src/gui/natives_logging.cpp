#include "common.hpp"
#include "natives_logging.hpp"
#include "logger.hpp"
#include "gui/misc.h"

namespace big::misc
{
	void APPLY_FORCE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
		Entity _entity = src->get_arg<Entity>(0);
		int _forceFlags = src->get_arg<int>(1);
		float _x = src->get_arg<float>(2);
		float _y = src->get_arg<float>(3);
		float _z = src->get_arg<float>(4);
		float _offX = src->get_arg<float>(5);
		float _offY = src->get_arg<float>(6);
		float _offZ = src->get_arg<float>(7);
		int _boneIndex = src->get_arg<int>(8);
		BOOL _isDirectionRel = src->get_arg<BOOL>(9);
		BOOL _ignoreUpVec = src->get_arg<BOOL>(10);
		BOOL _isForceRel = src->get_arg<BOOL>(11);
		BOOL _p12 = src->get_arg<BOOL>(12);
		BOOL _p13 = src->get_arg<BOOL>(13);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,APPLY_FORCE_TO_ENTITY,,,,%s,,,,,%d,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%d,%s,%s,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_entity,_forceFlags,_x,_y,_z,_offX,_offY,_offZ,_boneIndex,_isDirectionRel==0?"FALSE":"TRUE",_ignoreUpVec==0?"FALSE":"TRUE",_isForceRel==0?"FALSE":"TRUE",_p12==0?"FALSE":"TRUE",_p13==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ATTACH_ENTITY_TO_ENTITY(rage::scrNativeCallContext* src)
	{
		Entity _entity1 = src->get_arg<Entity>(0);
		Entity _entity2 = src->get_arg<Entity>(1);
		int _boneIndex = src->get_arg<int>(2);
		float _xPos = src->get_arg<float>(3);
		float _yPos = src->get_arg<float>(4);
		float _zPos = src->get_arg<float>(5);
		float _xRot = src->get_arg<float>(6);
		float _yRot = src->get_arg<float>(7);
		float _zRot = src->get_arg<float>(8);
		BOOL _p9 = src->get_arg<BOOL>(9);
		BOOL _useSoftPinning = src->get_arg<BOOL>(10);
		BOOL _collision = src->get_arg<BOOL>(11);
		BOOL _isPed = src->get_arg<BOOL>(12);
		int _vertexIndex = src->get_arg<int>(13);
		BOOL _fixedRot = src->get_arg<BOOL>(14);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ATTACH_ENTITY_TO_ENTITY,,,,%s,,,,,%d,%d,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%s,%s,%s,%s,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_entity1,_entity2,_boneIndex,_xPos,_yPos,_zPos,_xRot,_yRot,_zRot,_p9==0?"FALSE":"TRUE",_useSoftPinning==0?"FALSE":"TRUE",_collision==0?"FALSE":"TRUE",_isPed==0?"FALSE":"TRUE",_vertexIndex,_fixedRot==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void _ATTACH_ENTITY_BONE_TO_ENTITY_BONE(rage::scrNativeCallContext* src)
	{
		Any _p0 = src->get_arg<Any>(0);
		Any _p1 = src->get_arg<Any>(1);
		Any _p2 = src->get_arg<Any>(2);
		Any _p3 = src->get_arg<Any>(3);
		Any _p4 = src->get_arg<Any>(4);
		Any _p5 = src->get_arg<Any>(5);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,_ATTACH_ENTITY_BONE_TO_ENTITY_BONE,,,,%s,,,,,%d,%d,%d,%d,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_p0,_p1,_p2,_p3,_p4,_p5);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void _ATTACH_ENTITY_BONE_TO_ENTITY_BONE_PHYSICALLY(rage::scrNativeCallContext* src)
	{
		Any _p0 = src->get_arg<Any>(0);
		Any _p1 = src->get_arg<Any>(1);
		Any _p2 = src->get_arg<Any>(2);
		Any _p3 = src->get_arg<Any>(3);
		Any _p4 = src->get_arg<Any>(4);
		Any _p5 = src->get_arg<Any>(5);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,_ATTACH_ENTITY_BONE_TO_ENTITY_BONE_PHYSICALLY,,,,%s,,,,,%d,%d,%d,%d,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_p0,_p1,_p2,_p3,_p4,_p5);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(rage::scrNativeCallContext* src)
	{
		Entity _entity1 = src->get_arg<Entity>(0);
		Entity _entity2 = src->get_arg<Entity>(1);
		int _boneIndex1 = src->get_arg<int>(2);
		int _boneIndex2 = src->get_arg<int>(3);
		float _xPos1 = src->get_arg<float>(4);
		float _yPos1 = src->get_arg<float>(5);
		float _zPos1 = src->get_arg<float>(6);
		float _xPos2 = src->get_arg<float>(7);
		float _yPos2 = src->get_arg<float>(8);
		float _zPos2 = src->get_arg<float>(9);
		float _xRot = src->get_arg<float>(10);
		float _yRot = src->get_arg<float>(11);
		float _zRot = src->get_arg<float>(12);
		float _breakForce = src->get_arg<float>(13);
		BOOL _fixedRot = src->get_arg<BOOL>(14);
		BOOL _p15 = src->get_arg<BOOL>(15);
		BOOL _collision = src->get_arg<BOOL>(16);
		BOOL _p17 = src->get_arg<BOOL>(17);
		int _p18 = src->get_arg<int>(18);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ATTACH_ENTITY_TO_ENTITY_PHYSICALLY,,,,%s,,,,,%d,%d,%d,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%s,%s,%s,%s,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_entity1,_entity2,_boneIndex1,_boneIndex2,_xPos1,_yPos1,_zPos1,_xPos2,_yPos2,_zPos2,_xRot,_yRot,_zRot,_breakForce,_fixedRot==0?"FALSE":"TRUE",_p15==0?"FALSE":"TRUE",_collision==0?"FALSE":"TRUE",_p17==0?"FALSE":"TRUE",_p18);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void PROCESS_ENTITY_ATTACHMENTS(rage::scrNativeCallContext* src)
	{
		Entity _entity = src->get_arg<Entity>(0);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,PROCESS_ENTITY_ATTACHMENTS,,,,%s,,,,,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_entity);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_ENTITY_CAN_BE_DAMAGED(rage::scrNativeCallContext* src)
	{
		Entity _entity = src->get_arg<Entity>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_ENTITY_CAN_BE_DAMAGED,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_entity,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_ENTITY_HEALTH(rage::scrNativeCallContext* src)
	{
		Entity _entity = src->get_arg<Entity>(0);
		int _health = src->get_arg<int>(1);
		int _p2 = src->get_arg<int>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_ENTITY_HEALTH,,,,%s,,,,,%d,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_entity,_health,_p2);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ADD_EXPLOSION(rage::scrNativeCallContext* src)
	{
		float _x = src->get_arg<float>(0);
		float _y = src->get_arg<float>(1);
		float _z = src->get_arg<float>(2);
		int _explosionType = src->get_arg<int>(3);
		float _damageScale = src->get_arg<float>(4);
		BOOL _isAudible = src->get_arg<BOOL>(5);
		BOOL _isInvisible = src->get_arg<BOOL>(6);
		float _cameraShake = src->get_arg<float>(7);
		BOOL _noDamage = src->get_arg<BOOL>(8);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ADD_EXPLOSION,,,,%s,,,,,%.1f,%.1f,%.1f,%d,%.1f,%s,%s,%.1f,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_x,_y,_z,_explosionType,_damageScale,_isAudible==0?"FALSE":"TRUE",_isInvisible==0?"FALSE":"TRUE",_cameraShake,_noDamage==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ADD_OWNED_EXPLOSION(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		float _x = src->get_arg<float>(1);
		float _y = src->get_arg<float>(2);
		float _z = src->get_arg<float>(3);
		int _explosionType = src->get_arg<int>(4);
		float _damageScale = src->get_arg<float>(5);
		BOOL _isAudible = src->get_arg<BOOL>(6);
		BOOL _isInvisible = src->get_arg<BOOL>(7);
		float _cameraShake = src->get_arg<float>(8);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ADD_OWNED_EXPLOSION,,,,%s,,,,,%d,%.1f,%.1f,%.1f,%d,%.1f,%s,%s,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_x,_y,_z,_explosionType,_damageScale,_isAudible==0?"FALSE":"TRUE",_isInvisible==0?"FALSE":"TRUE",_cameraShake);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ADD_EXPLOSION_WITH_USER_VFX(rage::scrNativeCallContext* src)
	{
		float _x = src->get_arg<float>(0);
		float _y = src->get_arg<float>(1);
		float _z = src->get_arg<float>(2);
		int _explosionType = src->get_arg<int>(3);
		Hash _explosionFx = src->get_arg<Hash>(4);
		float _damageScale = src->get_arg<float>(5);
		BOOL _isAudible = src->get_arg<BOOL>(6);
		BOOL _isInvisible = src->get_arg<BOOL>(7);
		float _cameraShake = src->get_arg<float>(8);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ADD_EXPLOSION_WITH_USER_VFX,,,,%s,,,,,%.1f,%.1f,%.1f,%d,0x%X,%.1f,%s,%s,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_x,_y,_z,_explosionType,_explosionFx,_damageScale,_isAudible==0?"FALSE":"TRUE",_isInvisible==0?"FALSE":"TRUE",_cameraShake);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void START_PARTICLE_FX_NON_LOOPED_AT_COORD(rage::scrNativeCallContext* src)
	{
		const char* _effectName = src->get_arg<const char*>(0);
		float _xPos = src->get_arg<float>(1);
		float _yPos = src->get_arg<float>(2);
		float _zPos = src->get_arg<float>(3);
		float _xRot = src->get_arg<float>(4);
		float _yRot = src->get_arg<float>(5);
		float _zRot = src->get_arg<float>(6);
		float _scale = src->get_arg<float>(7);
		BOOL _xAxis = src->get_arg<BOOL>(8);
		BOOL _yAxis = src->get_arg<BOOL>(9);
		BOOL _zAxis = src->get_arg<BOOL>(10);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_PARTICLE_FX_NON_LOOPED_AT_COORD,,,,%s,,,,,%s,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_effectName,_xPos,_yPos,_zPos,_xRot,_yRot,_zRot,_scale,_xAxis==0?"FALSE":"TRUE",_yAxis==0?"FALSE":"TRUE",_zAxis==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<int>(1);
	}
	void START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(rage::scrNativeCallContext* src)
	{
		const char* _effectName = src->get_arg<const char*>(0);
		Ped _ped = src->get_arg<Ped>(1);
		float _offsetX = src->get_arg<float>(2);
		float _offsetY = src->get_arg<float>(3);
		float _offsetZ = src->get_arg<float>(4);
		float _rotX = src->get_arg<float>(5);
		float _rotY = src->get_arg<float>(6);
		float _rotZ = src->get_arg<float>(7);
		int _boneIndex = src->get_arg<int>(8);
		float _scale = src->get_arg<float>(9);
		BOOL _axisX = src->get_arg<BOOL>(10);
		BOOL _axisY = src->get_arg<BOOL>(11);
		BOOL _axisZ = src->get_arg<BOOL>(12);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE,,,,%s,,,,,%s,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%d,%.1f,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_effectName,_ped,_offsetX,_offsetY,_offsetZ,_rotX,_rotY,_rotZ,_boneIndex,_scale,_axisX==0?"FALSE":"TRUE",_axisY==0?"FALSE":"TRUE",_axisZ==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(1);
	}
	void START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(rage::scrNativeCallContext* src)
	{
		const char* _effectName = src->get_arg<const char*>(0);
		Entity _entity = src->get_arg<Entity>(1);
		float _offsetX = src->get_arg<float>(2);
		float _offsetY = src->get_arg<float>(3);
		float _offsetZ = src->get_arg<float>(4);
		float _rotX = src->get_arg<float>(5);
		float _rotY = src->get_arg<float>(6);
		float _rotZ = src->get_arg<float>(7);
		float _scale = src->get_arg<float>(8);
		BOOL _axisX = src->get_arg<BOOL>(9);
		BOOL _axisY = src->get_arg<BOOL>(10);
		BOOL _axisZ = src->get_arg<BOOL>(11);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_PARTICLE_FX_NON_LOOPED_ON_ENTITY,,,,%s,,,,,%s,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_effectName,_entity,_offsetX,_offsetY,_offsetZ,_rotX,_rotY,_rotZ,_scale,_axisX==0?"FALSE":"TRUE",_axisY==0?"FALSE":"TRUE",_axisZ==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(1);
	}
	void START_PARTICLE_FX_LOOPED_AT_COORD(rage::scrNativeCallContext* src)
	{
		const char* _effectName = src->get_arg<const char*>(0);
		float _x = src->get_arg<float>(1);
		float _y = src->get_arg<float>(2);
		float _z = src->get_arg<float>(3);
		float _xRot = src->get_arg<float>(4);
		float _yRot = src->get_arg<float>(5);
		float _zRot = src->get_arg<float>(6);
		float _scale = src->get_arg<float>(7);
		BOOL _xAxis = src->get_arg<BOOL>(8);
		BOOL _yAxis = src->get_arg<BOOL>(9);
		BOOL _zAxis = src->get_arg<BOOL>(10);
		BOOL _p11 = src->get_arg<BOOL>(11);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_PARTICLE_FX_LOOPED_AT_COORD,,,,%s,,,,,%s,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%s,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_effectName,_x,_y,_z,_xRot,_yRot,_zRot,_scale,_xAxis==0?"FALSE":"TRUE",_yAxis==0?"FALSE":"TRUE",_zAxis==0?"FALSE":"TRUE",_p11==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<int>(1);
	}
	void START_PARTICLE_FX_LOOPED_ON_PED_BONE(rage::scrNativeCallContext* src)
	{
		const char* _effectName = src->get_arg<const char*>(0);
		Ped _ped = src->get_arg<Ped>(1);
		float _xOffset = src->get_arg<float>(2);
		float _yOffset = src->get_arg<float>(3);
		float _zOffset = src->get_arg<float>(4);
		float _xRot = src->get_arg<float>(5);
		float _yRot = src->get_arg<float>(6);
		float _zRot = src->get_arg<float>(7);
		int _boneIndex = src->get_arg<int>(8);
		float _scale = src->get_arg<float>(9);
		BOOL _xAxis = src->get_arg<BOOL>(10);
		BOOL _yAxis = src->get_arg<BOOL>(11);
		BOOL _zAxis = src->get_arg<BOOL>(12);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_PARTICLE_FX_LOOPED_ON_PED_BONE,,,,%s,,,,,%s,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%d,%.1f,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_effectName,_ped,_xOffset,_yOffset,_zOffset,_xRot,_yRot,_zRot,_boneIndex,_scale,_xAxis==0?"FALSE":"TRUE",_yAxis==0?"FALSE":"TRUE",_zAxis==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<int>(1);
	}
	void START_PARTICLE_FX_LOOPED_ON_ENTITY(rage::scrNativeCallContext* src)
	{
		const char* _effectName = src->get_arg<const char*>(0);
		Entity _entity = src->get_arg<Entity>(1);
		float _xOffset = src->get_arg<float>(2);
		float _yOffset = src->get_arg<float>(3);
		float _zOffset = src->get_arg<float>(4);
		float _xRot = src->get_arg<float>(5);
		float _yRot = src->get_arg<float>(6);
		float _zRot = src->get_arg<float>(7);
		float _scale = src->get_arg<float>(8);
		BOOL _xAxis = src->get_arg<BOOL>(9);
		BOOL _yAxis = src->get_arg<BOOL>(10);
		BOOL _zAxis = src->get_arg<BOOL>(11);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_PARTICLE_FX_LOOPED_ON_ENTITY,,,,%s,,,,,%s,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_effectName,_entity,_xOffset,_yOffset,_zOffset,_xRot,_yRot,_zRot,_scale,_xAxis==0?"FALSE":"TRUE",_yAxis==0?"FALSE":"TRUE",_zAxis==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<int>(1);
	}
	void START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(rage::scrNativeCallContext* src)
	{
		const char* _effectName = src->get_arg<const char*>(0);
		Entity _entity = src->get_arg<Entity>(1);
		float _xOffset = src->get_arg<float>(2);
		float _yOffset = src->get_arg<float>(3);
		float _zOffset = src->get_arg<float>(4);
		float _xRot = src->get_arg<float>(5);
		float _yRot = src->get_arg<float>(6);
		float _zRot = src->get_arg<float>(7);
		int _boneIndex = src->get_arg<int>(8);
		float _scale = src->get_arg<float>(9);
		BOOL _xAxis = src->get_arg<BOOL>(10);
		BOOL _yAxis = src->get_arg<BOOL>(11);
		BOOL _zAxis = src->get_arg<BOOL>(12);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE,,,,%s,,,,,%s,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%d,%.1f,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_effectName,_entity,_xOffset,_yOffset,_zOffset,_xRot,_yRot,_zRot,_boneIndex,_scale,_xAxis==0?"FALSE":"TRUE",_yAxis==0?"FALSE":"TRUE",_zAxis==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<int>(1);
	}
	void SET_FAKE_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
		int _fakeWantedLevel = src->get_arg<int>(0);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_FAKE_WANTED_LEVEL,,,,%s,,,,,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_fakeWantedLevel);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_GRAVITY_LEVEL(rage::scrNativeCallContext* src)
	{
		int _level = src->get_arg<int>(0);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_GRAVITY_LEVEL,,,,%s,,,,,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_level);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void CREATE_INCIDENT(rage::scrNativeCallContext* src)
	{
		int _dispatchService = src->get_arg<int>(0);
		float _x = src->get_arg<float>(1);
		float _y = src->get_arg<float>(2);
		float _z = src->get_arg<float>(3);
		int _numUnits = src->get_arg<int>(4);
		float _radius = src->get_arg<float>(5);
		int* _outIncidentID = src->get_arg<int*>(6);
		Any _p7 = src->get_arg<Any>(7);
		Any _p8 = src->get_arg<Any>(8);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,CREATE_INCIDENT,,,,%s,,,,,%d,%.1f,%.1f,%.1f,%d,%.1f,0x%X,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_dispatchService,_x,_y,_z,_numUnits,_radius,(int32_t)(int64_t)_outIncidentID,_p7,_p8);
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(1);
	}
	void CREATE_INCIDENT_WITH_ENTITY(rage::scrNativeCallContext* src)
	{
		int _dispatchService = src->get_arg<int>(0);
		Ped _ped = src->get_arg<Ped>(1);
		int _numUnits = src->get_arg<int>(2);
		float _radius = src->get_arg<float>(3);
		int* _outIncidentID = src->get_arg<int*>(4);
		Any _p5 = src->get_arg<Any>(5);
		Any _p6 = src->get_arg<Any>(6);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,CREATE_INCIDENT_WITH_ENTITY,,,,%s,,,,,%d,%d,%d,%.1f,0x%X,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_dispatchService,_ped,_numUnits,_radius,(int32_t)(int64_t)_outIncidentID,_p5,_p6);
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(1);
	}
	void ATTACH_PORTABLE_PICKUP_TO_PED(rage::scrNativeCallContext* src)
	{
		Object _pickupObject = src->get_arg<Object>(0);
		Ped _ped = src->get_arg<Ped>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ATTACH_PORTABLE_PICKUP_TO_PED,,,,%s,,,,,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_pickupObject,_ped);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PED_DIES_IN_WATER(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_DIES_IN_WATER,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PED_DIES_IN_SINKING_VEHICLE(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_DIES_IN_SINKING_VEHICLE,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PED_CAN_BE_TARGETTED(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_CAN_BE_TARGETTED,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PED_MAX_TIME_UNDERWATER(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		float _value = src->get_arg<float>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_MAX_TIME_UNDERWATER,,,,%s,,,,,%d,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_value);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PED_TO_RAGDOLL(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		int _time1 = src->get_arg<int>(1);
		int _time2 = src->get_arg<int>(2);
		int _ragdollType = src->get_arg<int>(3);
		BOOL _p4 = src->get_arg<BOOL>(4);
		BOOL _p5 = src->get_arg<BOOL>(5);
		BOOL _p6 = src->get_arg<BOOL>(6);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_TO_RAGDOLL,,,,%s,,,,,%d,%d,%d,%d,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_time1,_time2,_ragdollType,_p4==0?"FALSE":"TRUE",_p5==0?"FALSE":"TRUE",_p6==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(1);
	}
	void SET_PED_TO_RAGDOLL_WITH_FALL(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		int _time = src->get_arg<int>(1);
		int _p2 = src->get_arg<int>(2);
		int _ragdollType = src->get_arg<int>(3);
		float _x = src->get_arg<float>(4);
		float _y = src->get_arg<float>(5);
		float _z = src->get_arg<float>(6);
		float _p7 = src->get_arg<float>(7);
		float _p8 = src->get_arg<float>(8);
		float _p9 = src->get_arg<float>(9);
		float _p10 = src->get_arg<float>(10);
		float _p11 = src->get_arg<float>(11);
		float _p12 = src->get_arg<float>(12);
		float _p13 = src->get_arg<float>(13);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_TO_RAGDOLL_WITH_FALL,,,,%s,,,,,%d,%d,%d,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_time,_p2,_ragdollType,_x,_y,_z,_p7,_p8,_p9,_p10,_p11,_p12,_p13);
		misc::log_green(LOG_NATIVE, __b, true);
		src->set_return_value<BOOL>(1);
	}
	void SET_PED_RAGDOLL_ON_COLLISION(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_RAGDOLL_ON_COLLISION,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PED_RAGDOLL_FORCE_FALL(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PED_RAGDOLL_FORCE_FALL,,,,%s,,,,,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ADD_PED_DECORATION_FROM_HASHES(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		Hash _collection = src->get_arg<Hash>(1);
		Hash _overlay = src->get_arg<Hash>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ADD_PED_DECORATION_FROM_HASHES,,,,%s,,,,,%d,0x%X,0x%X",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_collection,_overlay);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		Hash _collection = src->get_arg<Hash>(1);
		Hash _overlay = src->get_arg<Hash>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ADD_PED_DECORATION_FROM_HASHES_IN_CORONA,,,,%s,,,,,%d,0x%X,0x%X",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_collection,_overlay);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
		int _sceneID = src->get_arg<int>(0);
		Entity _entity = src->get_arg<Entity>(1);
		int _boneIndex = src->get_arg<int>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY,,,,%s,,,,,%d,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_sceneID,_entity,_boneIndex);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ATTACH_ENTITIES_TO_ROPE(rage::scrNativeCallContext* src)
	{
		int _ropeId = src->get_arg<int>(0);
		Entity _ent1 = src->get_arg<Entity>(1);
		Entity _ent2 = src->get_arg<Entity>(2);
		float _ent1_x = src->get_arg<float>(3);
		float _ent1_y = src->get_arg<float>(4);
		float _ent1_z = src->get_arg<float>(5);
		float _ent2_x = src->get_arg<float>(6);
		float _ent2_y = src->get_arg<float>(7);
		float _ent2_z = src->get_arg<float>(8);
		float _length = src->get_arg<float>(9);
		BOOL _p10 = src->get_arg<BOOL>(10);
		BOOL _p11 = src->get_arg<BOOL>(11);
		Any* _p12 = src->get_arg<Any*>(12);
		Any* _p13 = src->get_arg<Any*>(13);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ATTACH_ENTITIES_TO_ROPE,,,,%s,,,,,%d,%d,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%s,%s,0x%X,0x%X",SCRIPT::GET_THIS_SCRIPT_NAME(),_ropeId,_ent1,_ent2,_ent1_x,_ent1_y,_ent1_z,_ent2_x,_ent2_y,_ent2_z,_length,_p10==0?"FALSE":"TRUE",_p11==0?"FALSE":"TRUE",(int32_t)(int64_t)_p12,(int32_t)(int64_t)_p13);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void ATTACH_ROPE_TO_ENTITY(rage::scrNativeCallContext* src)
	{
		int _ropeId = src->get_arg<int>(0);
		Entity _entity = src->get_arg<Entity>(1);
		float _x = src->get_arg<float>(2);
		float _y = src->get_arg<float>(3);
		float _z = src->get_arg<float>(4);
		BOOL _p5 = src->get_arg<BOOL>(5);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,ATTACH_ROPE_TO_ENTITY,,,,%s,,,,,%d,%d,%.1f,%.1f,%.1f,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_ropeId,_entity,_x,_y,_z,_p5==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PLAYER_WANTED_LEVEL(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		int _wantedLevel = src->get_arg<int>(1);
		BOOL _disableNoMission = src->get_arg<BOOL>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PLAYER_WANTED_LEVEL,,,,%s,,,,,%d,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_wantedLevel,_disableNoMission==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PLAYER_WANTED_LEVEL_NO_DROP(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		int _wantedLevel = src->get_arg<int>(1);
		BOOL _p2 = src->get_arg<BOOL>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PLAYER_WANTED_LEVEL_NO_DROP,,,,%s,,,,,%d,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_wantedLevel,_p2==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PLAYER_WANTED_LEVEL_NOW(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		BOOL _p1 = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PLAYER_WANTED_LEVEL_NOW,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_p1==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void _SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void DISABLE_PLAYER_FIRING(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,DISABLE_PLAYER_FIRING,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		float _modifier = src->get_arg<float>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PLAYER_WEAPON_DAMAGE_MODIFIER,,,,%s,,,,,%d,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_modifier);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		float _modifier = src->get_arg<float>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PLAYER_WEAPON_DEFENSE_MODIFIER,,,,%s,,,,,%d,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_modifier);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		float _modifier = src->get_arg<float>(1);
		BOOL _p2 = src->get_arg<BOOL>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER,,,,%s,,,,,%d,%.1f,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_modifier,_p2==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(rage::scrNativeCallContext* src)
	{
		Player _player = src->get_arg<Player>(0);
		float _modifier = src->get_arg<float>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER,,,,%s,,,,,%d,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_player,_modifier);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void TASK_LEAVE_ANY_VEHICLE(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		int _p1 = src->get_arg<int>(1);
		int _p2 = src->get_arg<int>(2);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,TASK_LEAVE_ANY_VEHICLE,,,,%s,,,,,%d,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_p1,_p2);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void CLEAR_PED_SECONDARY_TASK(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,CLEAR_PED_SECONDARY_TASK,,,,%s,,,,,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_TYRE_BURST(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		int _index = src->get_arg<int>(1);
		BOOL _onRim = src->get_arg<BOOL>(2);
		float _p3 = src->get_arg<float>(3);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_TYRE_BURST,,,,%s,,,,,%d,%d,%s,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_index,_onRim==0?"FALSE":"TRUE",_p3);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_ALARM(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		BOOL _state = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_ALARM,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_state==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void START_VEHICLE_ALARM(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,START_VEHICLE_ALARM,,,,%s,,,,,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_CAN_BE_TARGETTED(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		BOOL _state = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_CAN_BE_TARGETTED,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_state==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		BOOL _state = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_state==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_DIRT_LEVEL(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		float _dirtLevel = src->get_arg<float>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_DIRT_LEVEL,,,,%s,,,,,%d,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_dirtLevel);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_ENGINE_ON(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		BOOL _value = src->get_arg<BOOL>(1);
		BOOL _instantly = src->get_arg<BOOL>(2);
		BOOL _noAutoTurnOn = src->get_arg<BOOL>(3);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_ENGINE_ON,,,,%s,,,,,%d,%s,%s,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_value==0?"FALSE":"TRUE",_instantly==0?"FALSE":"TRUE",_noAutoTurnOn==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_ENGINE_HEALTH(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		float _health = src->get_arg<float>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_ENGINE_HEALTH,,,,%s,,,,,%d,%.1f",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_health);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void SET_VEHICLE_ENGINE_CAN_DEGRADE(rage::scrNativeCallContext* src)
	{
		Vehicle _vehicle = src->get_arg<Vehicle>(0);
		BOOL _toggle = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,SET_VEHICLE_ENGINE_CAN_DEGRADE,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_vehicle,_toggle==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void _SET_VEHICLE_WEAPONS_DISABLED(rage::scrNativeCallContext* src)
	{
		Any _p0 = src->get_arg<Any>(0);
		Any _p1 = src->get_arg<Any>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,_SET_VEHICLE_WEAPONS_DISABLED,,,,%s,,,,,%d,%d",SCRIPT::GET_THIS_SCRIPT_NAME(),_p0,_p1);
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void REMOVE_ALL_PED_WEAPONS(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		BOOL _p1 = src->get_arg<BOOL>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,REMOVE_ALL_PED_WEAPONS,,,,%s,,,,,%d,%s",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_p1==0?"FALSE":"TRUE");
		misc::log_green(LOG_NATIVE, __b, true);
	}
	void REMOVE_WEAPON_FROM_PED(rage::scrNativeCallContext* src)
	{
		Ped _ped = src->get_arg<Ped>(0);
		Hash _weaponHash = src->get_arg<Hash>(1);
		char __b[256]="";sprintf(__b,",NATIVE,BLOCKED,REMOVE_WEAPON_FROM_PED,,,,%s,,,,,%d,0x%X",SCRIPT::GET_THIS_SCRIPT_NAME(),_ped,_weaponHash);
		misc::log_green(LOG_NATIVE, __b, true);
	}
}
