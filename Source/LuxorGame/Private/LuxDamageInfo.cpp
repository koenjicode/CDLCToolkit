#include "LuxDamageInfo.h"

FLuxDamageInfo::FLuxDamageInfo() {
    this->player_side = 0;
    this->damage_side = 0;
    this->Damage = 0.00f;
    this->total_damage = 0.00f;
    this->is_limited = false;
    this->is_critical = false;
}

