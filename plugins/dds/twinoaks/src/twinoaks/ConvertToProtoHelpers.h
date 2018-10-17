#ifndef OPENFMB_ADAPTER_CONVERTTOPROTOHELPERS_H
#define OPENFMB_ADAPTER_CONVERTTOPROTOHELPERS_H

#include "NamespaceAlias.h"

namespace adapter {

namespace dds {
    // -------- TODO ------------

    inline char* convert_string(char* str)
    {
        return str; // nop
    }

    inline bool convert_bool(bool value)
    {
        return value; // nop
    }

    // -------- numeric conversions ---------

    inline ::google::protobuf::uint32 convert_uint32(twinoaks::commonmodule::INT32U value)
    {
        return static_cast<::google::protobuf::uint32>(value);
    }

    inline ::google::protobuf::uint64 convert_uint64(twinoaks::commonmodule::INT64U value)
    {
        return static_cast<::google::protobuf::uint64>(value);
    }

    inline twinoaks::commonmodule::INT64 convert_int64(::google::protobuf::int64 value)
    {
        return static_cast<twinoaks::commonmodule::INT64>(value);
    }
}
}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
