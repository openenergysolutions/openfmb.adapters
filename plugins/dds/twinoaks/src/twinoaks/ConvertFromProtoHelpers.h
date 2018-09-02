#ifndef OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H
#define OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H

#include "NamespaceAlias.h"

#include <type_traits>

#include <OpenFMB-3.0.0.hh>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/wrappers.pb.h>


namespace adapter
{

    namespace dds
    {
        static_assert(std::is_same<::twinoaks::commonmodule::INT64, ::google::protobuf::int64>::value, "type mismatch");
        static_assert(std::is_same<::twinoaks::commonmodule::INT64U, ::google::protobuf::uint64>::value, "type mismatch");

        static_assert(std::is_same<::twinoaks::commonmodule::INT32, ::google::protobuf::int32>::value, "type mismatch");
        static_assert(std::is_same<::twinoaks::commonmodule::INT32U, ::google::protobuf::uint32>::value, "type mismatch");

        static_assert(std::is_same<::twinoaks::commonmodule::FLOAT32, float>::value, "type mismatch");

        // -------- string conversions ---------

        inline char* allocate_cstring(const ::std::string& in) {
            auto dest = new char[in.size() + 1];
            strcpy(dest, in.c_str());
            return dest;
        }

        // -------- proto wrapper to native pointer factories  ---------

        inline unsigned char* allocate_from_wrapper_type(const google::protobuf::BoolValue& wrapper)
        {
            return new unsigned char (wrapper.value());
        }

        inline int* allocate_from_wrapper_type(const google::protobuf::Int32Value& wrapper)
        {
            return new int (wrapper.value());
        }

        inline float* allocate_from_wrapper_type(const google::protobuf::FloatValue& wrapper)
        {
            return new float (wrapper.value());
        }

    }

}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
