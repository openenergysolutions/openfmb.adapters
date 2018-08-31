#ifndef OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H
#define OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H

#include "NamespaceAlias.h"

#include <type_traits>

namespace adapter
{

    namespace dds
    {
        static_assert(std::is_same<::twinoaks::commonmodule::INT64, ::google::protobuf::int64>::value, "type mismatch");
        static_assert(std::is_same<::twinoaks::commonmodule::INT64U, ::google::protobuf::uint64>::value, "type mismatch");

        static_assert(std::is_same<::twinoaks::commonmodule::INT32, ::google::protobuf::int32>::value, "type mismatch");
        static_assert(std::is_same<::twinoaks::commonmodule::INT32U, ::google::protobuf::uint32>::value, "type mismatch");

        static_assert(std::is_same<::twinoaks::commonmodule::FLOAT32, float>::value, "type mismatch");

        template <class Out, class In>
        inline Out* allocate_enum(In value)
        {
            return new Out(static_cast<Out>(value));
        };

        // --- bool ---

        inline unsigned char convert(bool value)
        {
            return static_cast<unsigned char>(value);
        }

        inline unsigned char* allocate(bool value)
        {
            return new unsigned char(static_cast<unsigned char>(value));
        }

        // -------- string conversions ---------

        inline char* allocate(const ::std::string& in)
        {
            auto dest = new char[in.size() + 1];
            strcpy(dest, in.c_str());
            return dest;
        }

        inline char* convert(const ::std::string& in)
        {
            return allocate(in);
        }

        // -------- numeric conversions ---------

        inline twinoaks::commonmodule::INT32* allocate(::google::protobuf::int32 value)
        {
            return new twinoaks::commonmodule::INT32(value);
        }

        inline twinoaks::commonmodule::FLOAT32* allocate(float value)
        {
            return new twinoaks::commonmodule::FLOAT32(value);
        }

        inline twinoaks::commonmodule::INT32U convert(::google::protobuf::uint32 value)
        {
            return value;
        }

        inline twinoaks::commonmodule::INT64U convert(::google::protobuf::uint64 value)
        {
            return value;
        }

        inline twinoaks::commonmodule::INT64 convert(::google::protobuf::int64 value)
        {
            return value;
        }
    }

}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
