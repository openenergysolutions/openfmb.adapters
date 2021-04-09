// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_DEFAULTVARIATIONS_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_DEFAULTVARIATIONS_H

#include <opendnp3/gen/EventAnalogVariation.h>
#include <opendnp3/gen/EventBinaryVariation.h>
#include <opendnp3/gen/EventCounterVariation.h>
#include <opendnp3/gen/StaticAnalogVariation.h>
#include <opendnp3/gen/StaticBinaryVariation.h>
#include <opendnp3/gen/StaticCounterVariation.h>

namespace adapter {
namespace dnp3 {
namespace outstation {

    struct DefaultVariations
    {
        opendnp3::StaticBinaryVariation binary_static;
        opendnp3::StaticAnalogVariation analog_static;
        opendnp3::StaticCounterVariation counter_static;

        opendnp3::EventBinaryVariation binary_event;
        opendnp3::EventAnalogVariation analog_event;
        opendnp3::EventCounterVariation counter_event;
    };
}
}
}

#endif
