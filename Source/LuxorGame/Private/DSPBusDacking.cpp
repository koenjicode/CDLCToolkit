#include "DSPBusDacking.h"

FDSPBusDacking::FDSPBusDacking() {
    this->fade_in_frame = 0;
    this->fade_out_frame = 0;
    this->valid_frame = 0;
    this->send_value = 0.00f;
    this->source_bus_id = ELuxDSPBusSetting::Master;
    this->target_bus_id = ELuxDSPBusSetting::Master;
    this->elapsed_frame = 0;
}

