#include "tp/d_a_alink.h"

#include <cstdint>

namespace libtp::tp::d_a_alink
{
uint32_t checkModeFlg(daAlink* linkActrPtr, uint32_t pflag) {
    return linkActrPtr->mModeFlg & pflag;
}

void onModeFlg(daAlink* linkActrPtr, uint32_t flag) {
    linkActrPtr->mModeFlg |= flag;
}

void offModeFlg(daAlink* linkActrPtr, uint32_t flag) {
    linkActrPtr->mModeFlg &= ~flag;
}

void setSingleAnimeBaseSpeed(daAlink* linkActrPtr, daAlink_ANM i_anmID, float speed, float morf) {
    setSingleAnime(linkActrPtr, i_anmID, speed, (float)0.0f, -1, morf);
}

int32_t setSingleAnimeParam(daAlink* linkActrPtr, daAlink_ANM i_anmID, daAlinkHIO_anm_c const* i_anmData) {
    return setSingleAnime(linkActrPtr, i_anmID, i_anmData->mSpeed, i_anmData->mStartFrame, i_anmData->mEndFrame, i_anmData->mInterpolation);
}
} // namespace libtp::tp::d_a_alink
