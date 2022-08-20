#include "DMLipsFrame.h"

FDMLipsFrame::FDMLipsFrame() {
    this->LipPattern = ELipPattern::DEFAULT;
    this->Decibel = 0.00f;
    this->PrimaryFormant = 0;
    this->LipType = ELipSoundType::S;
}

