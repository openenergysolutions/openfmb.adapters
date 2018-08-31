#ifndef OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H
#define OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H

#include "NamespaceAlias.h"

namespace adapter
{

    namespace dds
    {
        static_assert(sizeof(::twinoaks::commonmodule::INT64U) == sizeof(::google::protobuf::uint64), "size mismatch");
        static_assert(sizeof(::twinoaks::commonmodule::INT64) == sizeof(::google::protobuf::int64), "size mismatch");

        template <class Out, class In>
        inline Out* allocate_enum(In value)
        {
            return new Out(static_cast<Out>(value));
        };

        // --- bool ---

        inline unsigned char convert_bool(bool value)
        {
            return static_cast<unsigned char>(value);
        }

        // -------- string conversions ---------

        inline char* convert_string(const ::std::string& in)
        {
            auto dest = new char[in.size() + 1];
            strcpy(dest, in.c_str());
            return dest;
        }

        // -------- numeric conversions ---------

        inline twinoaks::commonmodule::INT32U convert_uint32(::google::protobuf::uint32 value)
        {
            return static_cast<twinoaks::commonmodule::INT32U>(value);
        }

        inline twinoaks::commonmodule::INT64U convert_uint64(::google::protobuf::uint64 value)
        {
            return static_cast<twinoaks::commonmodule::INT64U>(value);
        }

        inline twinoaks::commonmodule::INT64 convert_int64(::google::protobuf::int64 value)
        {
            return static_cast<twinoaks::commonmodule::INT64>(value);
        }
    }

}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
