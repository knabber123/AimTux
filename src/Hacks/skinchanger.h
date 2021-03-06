#pragma once

#include "../SDK/SDK.h"
#include "../interfaces.h"
#include "../settings.h"
#include "../modsupport.h"

extern GetClientStateFn GetClientState;

extern std::unordered_map<std::string, std::string> killIcons;

namespace SkinChanger
{
	extern bool forceFullUpdate;

	void FrameStageNotifyWeapons(ClientFrameStage_t stage);
	void FrameStageNotifyGloves(ClientFrameStage_t stage);
	void FireEventClientSide(IGameEvent* event);
	void SetViewModelSequence(const CRecvProxyData *pDataConst, void *pStruct, void *pOut);
	void HookCBaseViewModel();
	void UnhookCBaseViewModel();
};

extern RecvVarProxyFn fnSequenceProxyFn;