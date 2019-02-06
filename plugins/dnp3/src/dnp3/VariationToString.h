#ifndef OPENFMB_ADAPTER_DNP3_VARIATIONTOSTRING_H
#define OPENFMB_ADAPTER_DNP3_VARIATIONTOSTRING_H

#include <opendnp3/gen/ControlCode.h>

#include <opendnp3/gen/StaticAnalogVariation.h>
#include <opendnp3/gen/StaticBinaryVariation.h>
#include <opendnp3/gen/StaticCounterVariation.h>

#include <opendnp3/gen/EventAnalogVariation.h>
#include <opendnp3/gen/EventBinaryVariation.h>
#include <opendnp3/gen/EventCounterVariation.h>

#include <string>

namespace adapter {
namespace dnp3 {

    /**
     * These classes provide helper methods for converting default variation types to and from configuration strings
     */

    struct StaticBinaryInputMeta {
        constexpr static const char* const g1v1 = "Group1Var1";
        constexpr static const char* const g1v2 = "Group1Var2";

        static std::string to_string(opendnp3::StaticBinaryVariation variation);

        static opendnp3::StaticBinaryVariation from_string(const std::string& value);
    };

    struct StaticAnalogInputMeta {
        constexpr static const char* const g30v1 = "Group30Var1";
        constexpr static const char* const g30v2 = "Group30Var2";
        constexpr static const char* const g30v3 = "Group30Var3";
        constexpr static const char* const g30v4 = "Group30Var4";
        constexpr static const char* const g30v5 = "Group30Var5";
        constexpr static const char* const g30v6 = "Group30Var6";

        static std::string to_string(opendnp3::StaticAnalogVariation variation);

        static opendnp3::StaticAnalogVariation from_string(const std::string& value);
    };

    struct StaticCounterMeta {
        constexpr static const char* const g20v1 = "Group20Var1";
        constexpr static const char* const g20v2 = "Group20Var2";
        constexpr static const char* const g20v5 = "Group20Var5";
        constexpr static const char* const g20v6 = "Group20Var6";

        static std::string to_string(opendnp3::StaticCounterVariation variation);

        static opendnp3::StaticCounterVariation from_string(const std::string& value);
    };

    struct EventBinaryInputMeta {
        constexpr static const char* const g2v1 = "Group2Var1";
        constexpr static const char* const g2v2 = "Group2Var2";
        constexpr static const char* const g2v3 = "Group2Var3";

        static std::string to_string(opendnp3::EventBinaryVariation variation);

        static opendnp3::EventBinaryVariation from_string(const std::string& value);
    };

    struct EventAnalogInputMeta {
        constexpr static const char* const g32v1 = "Group32Var1";
        constexpr static const char* const g32v2 = "Group32Var2";
        constexpr static const char* const g32v3 = "Group32Var3";
        constexpr static const char* const g32v4 = "Group32Var4";
        constexpr static const char* const g32v5 = "Group32Var5";
        constexpr static const char* const g32v6 = "Group32Var6";
        constexpr static const char* const g32v7 = "Group32Var7";
        constexpr static const char* const g32v8 = "Group32Var8";

        static std::string to_string(opendnp3::EventAnalogVariation variation);

        static opendnp3::EventAnalogVariation from_string(const std::string& value);
    };

    struct EventCounterMeta {
        constexpr static const char* const g22v1 = "Group22Var1";
        constexpr static const char* const g22v2 = "Group22Var2";
        constexpr static const char* const g22v5 = "Group22Var5";
        constexpr static const char* const g22v6 = "Group22Var6";

        static std::string to_string(opendnp3::EventCounterVariation variation);

        static opendnp3::EventCounterVariation from_string(const std::string& value);
    };
}
}

#endif
