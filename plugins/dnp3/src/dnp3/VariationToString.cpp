
#include "VariationToString.h"
#include <adapter-api/Exception.h>

using namespace opendnp3;

namespace adapter {
namespace dnp3 {

    std::string StaticBinaryInputMeta::to_string(StaticBinaryVariation variation)
    {
        switch (variation) {
        case (StaticBinaryVariation::Group1Var1):
            return g1v1;
        default:
            return g1v2;
        }
    }

    StaticBinaryVariation StaticBinaryInputMeta::from_string(const std::string& value)
    {
        if (value == g1v1) {
            return StaticBinaryVariation::Group1Var1;
        } else if (value == g1v2) {
            return StaticBinaryVariation::Group1Var2;
        } else {
            throw api::Exception("Unknown static binary input variation: ", value);
        }
    }

    std::string StaticAnalogInputMeta::to_string(StaticAnalogVariation variation)
    {
        switch (variation) {
        case (StaticAnalogVariation::Group30Var1):
            return g30v1;
        case (StaticAnalogVariation::Group30Var2):
            return g30v2;
        case (StaticAnalogVariation::Group30Var3):
            return g30v3;
        case (StaticAnalogVariation::Group30Var4):
            return g30v4;
        case (StaticAnalogVariation::Group30Var5):
            return g30v5;
        default:
            return g30v6;
        }
    }

    opendnp3::StaticAnalogVariation StaticAnalogInputMeta::from_string(const std::string& value)
    {
        if (value == g30v1) {
            return StaticAnalogVariation::Group30Var1;
        } else if (value == g30v2) {
            return StaticAnalogVariation::Group30Var2;
        } else if (value == g30v3) {
            return StaticAnalogVariation::Group30Var3;
        } else if (value == g30v4) {
            return StaticAnalogVariation::Group30Var4;
        } else if (value == g30v5) {
            return StaticAnalogVariation::Group30Var5;
        } else if (value == g30v6) {
            return StaticAnalogVariation::Group30Var6;
        } else {
            throw api::Exception("Unknown static analog input variation: ", value);
        }
    }

    std::string StaticCounterMeta::to_string(StaticCounterVariation variation)
    {
        switch (variation) {
        case (StaticCounterVariation::Group20Var1):
            return g20v1;
        case (StaticCounterVariation::Group20Var2):
            return g20v2;
        case (StaticCounterVariation::Group20Var5):
            return g20v5;
        default:
            return g20v6;
        }
    }

    StaticCounterVariation StaticCounterMeta::from_string(const std::string& value)
    {
        if (value == g20v1) {
            return StaticCounterVariation::Group20Var1;
        } else if (value == g20v2) {
            return StaticCounterVariation::Group20Var2;
        } else if (value == g20v5) {
            return StaticCounterVariation::Group20Var5;
        } else if (value == g20v6) {
            return StaticCounterVariation::Group20Var6;
        } else {
            throw api::Exception("Unknown static counter variation: ", value);
        }
    }

    std::string EventBinaryInputMeta::to_string(EventBinaryVariation variation)
    {
        switch (variation) {
        case (EventBinaryVariation::Group2Var1):
            return g2v1;
        case (EventBinaryVariation::Group2Var2):
            return g2v2;
        default:
            return g2v3;
        }
    }

    EventBinaryVariation EventBinaryInputMeta::from_string(const std::string& value)
    {
        if (value == g2v1) {
            return EventBinaryVariation::Group2Var1;
        } else if (value == g2v2) {
            return EventBinaryVariation::Group2Var2;
        } else if (value == g2v3) {
            return EventBinaryVariation::Group2Var3;
        } else {
            throw api::Exception("Unknown event binary input variation: ", value);
        }
    }

    std::string EventAnalogInputMeta::to_string(EventAnalogVariation variation)
    {
        switch (variation) {
        case (EventAnalogVariation::Group32Var1):
            return g32v1;
        case (EventAnalogVariation::Group32Var2):
            return g32v2;
        case (EventAnalogVariation::Group32Var3):
            return g32v3;
        case (EventAnalogVariation::Group32Var4):
            return g32v4;
        case (EventAnalogVariation::Group32Var5):
            return g32v5;
        case (EventAnalogVariation::Group32Var6):
            return g32v6;
        case (EventAnalogVariation::Group32Var7):
            return g32v7;
        default:
            return g32v8;
        }
    }

    opendnp3::EventAnalogVariation EventAnalogInputMeta::from_string(const std::string& value)
    {
        if (value == g32v1) {
            return EventAnalogVariation::Group32Var1;
        } else if (value == g32v2) {
            return EventAnalogVariation::Group32Var2;
        } else if (value == g32v3) {
            return EventAnalogVariation::Group32Var3;
        } else if (value == g32v4) {
            return EventAnalogVariation::Group32Var4;
        } else if (value == g32v5) {
            return EventAnalogVariation::Group32Var5;
        } else if (value == g32v6) {
            return EventAnalogVariation::Group32Var6;
        } else if (value == g32v7) {
            return EventAnalogVariation::Group32Var7;
        } else if (value == g32v8) {
            return EventAnalogVariation::Group32Var8;
        } else {
            throw api::Exception("Unknown event analog input variation: ", value);
        }
    }

    std::string EventCounterMeta::to_string(EventCounterVariation variation)
    {
        switch (variation) {
        case (EventCounterVariation::Group22Var1):
            return g22v1;
        case (EventCounterVariation::Group22Var2):
            return g22v2;
        case (EventCounterVariation::Group22Var5):
            return g22v5;
        default:
            return g22v6;
        }
    }

    EventCounterVariation EventCounterMeta::from_string(const std::string& value)
    {
        if (value == g22v1) {
            return EventCounterVariation::Group22Var1;
        } else if (value == g22v2) {
            return EventCounterVariation::Group22Var2;
        } else if (value == g22v5) {
            return EventCounterVariation::Group22Var5;
        } else if (value == g22v6) {
            return EventCounterVariation::Group22Var6;
        } else {
            throw api::Exception("Unknown event counter variation: ", value);
        }
    }
}
}
