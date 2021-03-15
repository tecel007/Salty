#pragma once
#include "gui/misc.h"

namespace fx::sync
{
	struct SyncParseState;

	struct NodeBase;

	using SyncTreeVisitor = std::function<bool(NodeBase&)>;

	struct NodeBase
	{
	public:
		virtual bool Parse(SyncParseState& state) = 0;

		virtual bool Visit(const SyncTreeVisitor& visitor) = 0;

		virtual bool IsAdditional() = 0;
	};

	struct CPlayerCameraNodeData
	{
		int camMode;
		float freeCamPosX;
		float freeCamPosY;
		float freeCamPosZ;

		float cameraX;
		float cameraZ;

		float camOffX;
		float camOffY;
		float camOffZ;
	};

	struct CPlayerWantedAndLOSNodeData
	{
		int wantedLevel;
		int isWanted;
		int isEvading;

		int timeInPursuit;
		int timeInPrevPursuit;

		inline CPlayerWantedAndLOSNodeData()
			: timeInPursuit(-1), timeInPrevPursuit(-1)
		{
		}
	};

	struct CPedGameStateNodeData
	{
		int curVehicle;
		int curVehicleSeat;

		int lastVehicle;
		int lastVehicleSeat;

		int lastVehiclePedWasIn;

		int curWeapon;

		inline CPedGameStateNodeData()
			: lastVehicle(-1), lastVehicleSeat(-1), lastVehiclePedWasIn(-1)
		{
		}
	};

	struct CVehicleAppearanceNodeData
	{
		int primaryColour;
		int secondaryColour;
		int pearlColour;
		int wheelColour;
		int interiorColour;
		int dashboardColour;

		bool isPrimaryColourRGB;
		bool isSecondaryColourRGB;

		int primaryRedColour;
		int primaryGreenColour;
		int primaryBlueColour;

		int secondaryRedColour;
		int secondaryGreenColour;
		int secondaryBlueColour;

		int dirtLevel;
		int extras;
		int liveryIndex;
		int roofLiveryIndex;

		int wheelChoice;
		int wheelType;

		bool hasCustomTires;

		int windowTintIndex;

		int tyreSmokeRedColour;
		int tyreSmokeGreenColour;
		int tyreSmokeBlueColour;

		char plate[9];

		int numberPlateTextIndex;

		inline CVehicleAppearanceNodeData()
		{
			memset(plate, 0, sizeof(plate));
		}
	};

	struct CVehicleHealthNodeData
	{
		int engineHealth;
		int petrolTankHealth;
		bool tyresFine;
		int tyreStatus[1 << 4];
		int bodyHealth;
	};

	struct CVehicleGameStateNodeData
	{
		uint16_t occupants[32];
		uint32_t playerOccupants;
		int radioStation;
		bool isEngineOn;
		bool isEngineStarting;
		bool handbrake;
		int defaultHeadlights;
		int headlightsColour;
		bool sirenOn;
		int lockStatus;
		int doorsOpen;
		int doorPositions[1 << 7];
		bool noLongerNeeded;
		bool lightsOn;
		bool highbeamsOn;
		bool hasBeenOwnedByPlayer;
		bool hasLock;
		int lockedPlayers;

		inline CVehicleGameStateNodeData()
		{
			memset(occupants, 0, sizeof(occupants));
		}
	};

	struct CEntityOrientationNodeData
	{

	};

	struct CPhysicalVelocityNodeData
	{
		float velX;
		float velY;
		float velZ;
	};

	struct CVehicleAngVelocityNodeData
	{
		float angVelX;
		float angVelY;
		float angVelZ;
	};

	struct CPedHealthNodeData
	{
		int maxHealth;
		int health;
		int armour;
		uint32_t causeOfDeath;
	};

	struct CPedOrientationNodeData
	{
		float currentHeading;
		float desiredHeading;
	};

	struct CDynamicEntityGameStateNodeData
	{
		std::map<int, int> decors;
	};

	struct CPlayerGameStateNodeData
	{
		int playerTeam;
		float airDragMultiplier;

		int maxHealth;
		int maxArmour;

		bool neverTarget;
		int spectatorId;

		bool randomPedsFlee;
		bool everybodyBackOff;

		float voiceProximityOverrideX;
		float voiceProximityOverrideY;
		float voiceProximityOverrideZ;

		bool isInvincible;
		bool isFriendlyFireAllowed;

		float weaponDefenseModifier;
		float weaponDefenseModifier2;

		float weaponDamageModifier;
		float meleeWeaponDamageModifier;

		bool isSuperJumpEnabled;
	};

	enum ePopType : uint8_t
	{
		POPTYPE_UNKNOWN = 0,
		POPTYPE_RANDOM_PERMANENT,
		POPTYPE_RANDOM_PARKED,
		POPTYPE_RANDOM_PATROL,
		POPTYPE_RANDOM_SCENARIO,
		POPTYPE_RANDOM_AMBIENT,
		POPTYPE_PERMANENT,
		POPTYPE_MISSION,
		POPTYPE_REPLAY,
		POPTYPE_CACHE,
		POPTYPE_TOOL
	};

	struct SyncTreeBase
	{
	public:
		virtual ~SyncTreeBase() = default;

		virtual void Parse(SyncParseState& state) = 0;

		virtual void Visit(const SyncTreeVisitor& visitor) = 0;

		// accessors
	public:
		virtual void GetPosition(float* posOut) = 0;

		virtual CPlayerCameraNodeData* GetPlayerCamera() = 0;

		virtual CPlayerWantedAndLOSNodeData* GetPlayerWantedAndLOS() = 0;

		virtual CPedGameStateNodeData* GetPedGameState() = 0;

		virtual CVehicleGameStateNodeData* GetVehicleGameState() = 0;

		virtual CVehicleAppearanceNodeData* GetVehicleAppearance() = 0;

		virtual CPlayerGameStateNodeData* GetPlayerGameState() = 0;

		virtual CPedHealthNodeData* GetPedHealth() = 0;

		virtual CVehicleHealthNodeData* GetVehicleHealth() = 0;

		virtual CPedOrientationNodeData* GetPedOrientation() = 0;

		virtual CEntityOrientationNodeData* GetEntityOrientation() = 0;

		virtual CVehicleAngVelocityNodeData* GetAngVelocity() = 0;

		virtual CPhysicalVelocityNodeData* GetVelocity() = 0;

		virtual void CalculatePosition() = 0;

		virtual bool GetPopulationType(ePopType* popType) = 0;

		virtual bool GetModelHash(uint32_t* modelHash) = 0;

		virtual bool GetScriptHash(uint32_t* scriptHash) = 0;
	};
}