#include "LuxBattleFrameInputSync.h"

ALuxBattleFrameInputSync::ALuxBattleFrameInputSync() {
    this->RTTInterval = 60;
    this->InputLagMin = 2;
    this->InputLagMax = 15;
    this->InputLagOffset = 2;
    this->SyncTimeOut = 120;
    this->InputSizeSend = 4;
    this->InputSizeReply = 16;
    this->UserPlayerFlags = 0;
    this->RemotePlayerFlags = 0;
    this->bOnline = false;
    this->bOnlineSync = false;
    this->RTT = 0.00f;
    this->InputLag = 2;
    this->SendTime = 0;
    this->SyncTime = 0;
    this->SyncCheckTime = -1;
    this->SyncPauseWaitTime = 0;
    this->StreamTime = 0;
    this->OnlineState = ELuxBattleOnlineState::Unknown;
}

