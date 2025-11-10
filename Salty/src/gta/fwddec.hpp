#pragma once

namespace rage
{
	template <typename T>
	class atArray;

	class datBitBuffer;
	class sysMemAllocator;

	class scriptIdBase;
	class scriptId;
	class scriptHandler;
	class scriptHandlerNetComponent;
	class scriptHandlerObject;
	class scriptHandlerMgr;

	class scrProgram;
	class scrProgramTable;

	class scrThreadContext;
	class scrThread;
	class tlsContext;

	class netLoggingInterface;
	class netLogStub;

	class netGameEvent;

	class netSyncTree;
	
	class netObject;

	class scrNativeCallContext;
	class scrNativeRegistration;
	class scrNativeRegistrationTable;

	class CObject;
	class CPlayerInfo;
}

class GtaThread;

class CGameScriptId;
class CGameScriptHandler;
class CGameScriptHandlerNetwork;
class CGameScriptHandlerMgr;