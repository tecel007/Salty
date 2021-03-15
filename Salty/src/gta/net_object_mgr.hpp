#pragma once

#include "node_list.hpp"
#include "gta/structs.hpp"

#pragma pack(push, 1)
namespace rage
{
	class netSyncTree
	{
	public:
		uint32_t data[12]; //0x0000
		class netSyncTreeNode* m_sync_tree_node; //0x0030
	}; //Size: 0x0038

	const int SYNC_TREE_DATA = 258;

	class netSyncTreeNode
	{
	public:
		uint32_t data[SYNC_TREE_DATA];

		inline uint32_t model(uint16_t object_type)
		{
			uint32_t a = model_vehicle();

			switch (object_type)
			{
				case rage::DOOR: a = model_door(); break;
				case rage::OBJECT: a = model_object(); break;
				case rage::PED: a = model_ped(); break;
				case rage::PICKUP: a = model_pickup(); break;
				case rage::PLAYER: a = model_player(); break;
			}
			return a;
		}
		inline float* pos(uint16_t object_type)
		{
			float* a = pos_vehicle();

			switch (object_type)
			{
				case rage::DOOR: a = pos_door(); break;
				case rage::OBJECT: a = pos_object(); break;
				case rage::PED: a = pos_ped(); break;
				case rage::PICKUP: a = pos_pickup(); break;
				case rage::PLAYER: a = pos_player(); break;
			}
			return a;
		}

		inline uint32_t model_door() { return data[48]; };
		inline uint32_t model_object() { return data[84]; };
		inline uint32_t model_ped() { return data[49]; };
		inline uint32_t model_pickup() { return data[72]; };
		inline uint32_t model_player() { return data[48]; };
		inline uint32_t model_vehicle()	{ return data[50]; };

		inline float* pos_door() { return (float*)data + 52; };
		inline float* pos_object() { return (float*) data + 204; };
		inline float* pos_ped() { return (float*) data + 224; };
		inline float* pos_pickup() { return (float*) data + 200; };
		inline float* pos_player() { return (float*) data + 196; };
		inline float* pos_vehicle() { return (float*) data + 124; };

		inline uint32_t pickup() { return data[70]; };
		inline uint32_t weapon_component() { return data[74]; };
	};

	class CNetworkSyncDataULBase
	{
	public:
		virtual ~CNetworkSyncDataULBase() = default;

		// dummy functions to satisfy compiler
		inline virtual void m_8() { }

		inline virtual void m_10() { }

		inline virtual void m_18() { }

		inline virtual void m_20() { }

		inline virtual void m_28() { }

		inline virtual void m_30() { }

		inline virtual void m_38() { }

		inline virtual void m_40() { }

		inline virtual void m_48() { }

		inline virtual void m_50() { }

		inline virtual void SetCloningFrequency(int player, int frequency) { }

	public:
		uint8_t pad_10h[49];
		int8_t ownerId;
		int8_t nextOwnerId;
		uint8_t isRemote;
		uint8_t wantsToDelete : 1; // netobj+76
		uint8_t unk1 : 1;
		uint8_t shouldNotBeDeleted : 1;
		uint8_t pad_4Dh[3];
		uint8_t pad_50h[32];
		uint32_t creationAckedPlayers; // netobj+112
		uint32_t m64;
		uint32_t m68;
		uint32_t m6C;
	};

	class netObject
	{
	public:
		uint16_t object_type; //0x0008
		uint16_t object_id; //0x000A
		uint32_t unk;

		CNetworkSyncDataULBase syncData;

		virtual ~netObject() = 0;

		virtual void m_8() = 0;
		virtual void m_10() = 0;
		virtual void m_18() = 0;
		virtual void* m_20() = 0;
		virtual void m_28() = 0;
		virtual netSyncTree* GetSyncTree() = 0;
		virtual void m_38() = 0;
		virtual void m_40() = 0;
		virtual void m_48() = 0;
		virtual void m_50() = 0;
		virtual void m_58() = 0;
		virtual void m_60() = 0;
		virtual void m_68() = 0;
		virtual void m_70() = 0;
		virtual void m_78() = 0;
		virtual rage::CObject* GetGameObject() = 0;
		virtual void m_88() = 0;
		virtual void m_90() = 0;
		virtual void m_98() = 0;
		virtual int GetObjectFlags() = 0;
		virtual void m_A8() = 0;
		virtual void m_B0() = 0;
		virtual void m_B8() = 0;
		virtual void m_C0() = 0;
		virtual void m_C8() = 0;
		virtual int GetSyncFrequency() = 0;
		virtual void m_D8() = 0;
		virtual void m_E0() = 0;
		virtual void m_E8() = 0;
		virtual void m_F0() = 0;
		virtual void m_F8() = 0;
		virtual void Update() = 0;
		virtual bool m_108_1604() = 0; // added in 1604
		virtual void m_108() = 0;
		virtual void m_110() = 0;
		virtual void m_118() = 0;
		virtual void m_120() = 0;
		virtual void m_128() = 0;
		virtual void m_130() = 0;
		virtual void m_138() = 0;
		virtual void m_140() = 0;
		virtual void m_148() = 0;
		virtual void m_150() = 0;
		virtual bool m_158(void* player, int type, int* outReason) = 0;
		virtual void m_160() = 0;
		virtual bool m_168(int* outReason) = 0;
		virtual void m_170() = 0;
		virtual void m_178() = 0;
		virtual void m_180() = 0;
		virtual void m_188() = 0;
		virtual void m_190() = 0;
		virtual void m_198() = 0;
		virtual void m_1A0() = 0;
		virtual void m_1A8() = 0;
		virtual void m_1B0() = 0;
		virtual void m_1B8() = 0;
		virtual void m_1C0() = 0;
		virtual void m_1C8() = 0;
		virtual void m_1D0() = 0;
		virtual void m_1D8() = 0;
		virtual void m_1E0() = 0;
		virtual void m_1E8() = 0;
		virtual void m_1F0() = 0;
		virtual void m_1F8() = 0;
		virtual void m_200() = 0;
		virtual void m_208() = 0;
		virtual void m_210() = 0;
		virtual void m_218() = 0;
		virtual void m_220() = 0;
		virtual void m_228() = 0;
		virtual void m_230() = 0;
		virtual void m_238() = 0;
		virtual void m_240() = 0;
		virtual void m_248() = 0;
		virtual void m_250() = 0;
		virtual void m_258() = 0;
		virtual void m_260() = 0;
		virtual void m_268() = 0;
		virtual void m_270() = 0;
		virtual void m_278() = 0;
		virtual void m_280() = 0;
		virtual void m_288() = 0;
		virtual void m_290() = 0;
		virtual void m_298() = 0;
		virtual void m_2A0() = 0;
		virtual void m_2A8() = 0;
		virtual void m_2B0() = 0;
		virtual void m_2B8() = 0;
		virtual void m_2C0() = 0;
		virtual void m_2C8() = 0;
		virtual void m_2D0() = 0;
		virtual void m_2D8() = 0;
		virtual void m_2E0() = 0;
		virtual void m_2E8() = 0;
		virtual void m_2F0() = 0;
		virtual void m_2F8() = 0;
		virtual void m_300() = 0;
		virtual void m_308() = 0;
		virtual void m_310() = 0;
		virtual void m_318() = 0;
		virtual void m_320() = 0;
		virtual void UpdatePendingVisibilityChanges() = 0;
	};
	class CNetGamePlayer;

	class netObjectMgrBase
	{
	public:
		class atDNetObjectNode : public atDNode<netObject*>
		{
		};

	public:
		virtual ~netObjectMgrBase() = default;

		virtual void Initialize() = 0;
		virtual void Shutdown() = 0;
		virtual void Update(bool) = 0;

		virtual void AddEntity(void*, void*) = 0;
		virtual void UnregisterNetworkObject_(void *unk, bool force) = 0;
		virtual void UnregisterNetworkObject(netObject *object, int reason, bool force1, bool force2) = 0;

		virtual void ChangeOwner(netObject *object, CNetGamePlayer *player, int migrationType) = 0;

		virtual void HandleJoiningPlayer(CNetGamePlayer *player) = 0;
		virtual void HandleLeavingPlayer(CNetGamePlayer *player) = 0;

		virtual void _0x50(CNetGamePlayer *player) = 0;
		virtual void _0x58() = 0;

		virtual void RegisterNetworkObject(netObject *object) = 0;

		virtual void PackCloneCreate(netObject *object, CNetGamePlayer *player, datBitBuffer *buffer) = 0;
		virtual bool PackCloneRemove(netObject *object, CNetGamePlayer *player, bool) = 0;

		virtual void _0x78(netObject *object, void*) = 0;
		virtual void _0x80() = 0;
		virtual void _0x88() = 0;
		virtual const char *_0x90(int) = 0;

		virtual bool HandleCloneCreate(CNetGamePlayer *source, CNetGamePlayer *target, eNetObjType object_type, uint16_t object_id, eNetObjectFlags object_flags, void*, uint32_t timestamp) = 0;
		virtual void HandleCloneCreateAck(CNetGamePlayer *source, CNetGamePlayer *target, uint16_t object_flags, eAckCode ack_code) = 0;

		virtual int HandleCloneSync(CNetGamePlayer *source, CNetGamePlayer *target, eNetObjType object_type, uint16_t object_id, void*, uint16_t, uint32_t timestamp) = 0;
		virtual void HandleCloneSyncAck(CNetGamePlayer *source, CNetGamePlayer *target, void *, uint16_t objectId, eAckCode ack_code) = 0;

		virtual void HandleCloneRemove(CNetGamePlayer *source, CNetGamePlayer *target, uint16_t object_id, int) = 0;
		virtual void HandleCloneRemoveAck(CNetGamePlayer *source, CNetGamePlayer *target, uint16_t object_id, eAckCode ack_code) = 0;

		virtual void _0xC8() = 0;
	public:
		atDList<atDNetObjectNode> m_objects_owned_by_player[32];
	};

	class CNetworkObjectMgr : public rage::netObjectMgrBase
	{
	};
}

#pragma pack(pop)
