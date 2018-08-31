#ifndef OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H
#define OPENFMB_ADAPTER_CONVERTFROMPROTOHELPERS_H

#include "NamespaceAlias.h"

namespace adapter
{

    namespace dds
    {
        static_assert(sizeof(::twinoaks::commonmodule::INT64U) == sizeof(::google::protobuf::uint64), "size mismatch");
        static_assert(sizeof(::twinoaks::commonmodule::INT64) == sizeof(::google::protobuf::int64), "size mismatch");


        template <class Out, class T>
        Out* allocate_from_proto(const T& value)
        {
            auto ret = new Out();
            // must be a convert_from_proto(..) function in scope that takes these types
            convert_from_proto(value, *ret);
            return ret;
        };

        template <class Out, class In>
        Out* allocate_enum(const In& value)
        {
            return new Out(static_cast<Out>(value));
        };

        template <class Out, class In>
        void convert_repeated_field(const ::google::protobuf::RepeatedPtrField<In>& input, DDS::sequence<Out>& output)
        {
            output.clear();
            for(auto& elem : input)
            {
                Out value;
                convert_from_proto(elem, value);
                output.push_back(value);
            }
        };

        // --- bool ---

        inline unsigned char convert_bool(bool value)
        {
            return static_cast<unsigned char>(value);
        }

        inline unsigned char* create_bool(bool value)
        {
            // this is coming up in ACDCTerminal.connected
            // what should this conversion be?
            return nullptr;
        }

        inline unsigned char* create_bytes(const std::string& value)
        {
            // this is for timestamp quality
            return nullptr;
        }

        // -------- string conversions ---------

        inline char* allocate_string(const ::std::string& in)
        {
            auto dest = new char[in.size() + 1];
            strcpy(dest, in.c_str());
            return dest;
        }

        inline char* convert_string(const ::std::string& in)
        {
            return allocate_string(in); // no difference for mandatory / optional for strings
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

        inline twinoaks::commonmodule::INT32* create_int32(::google::protobuf::int32 value)
        {
            return new twinoaks::commonmodule::INT32(static_cast<twinoaks::commonmodule::INT32>(value));
        }

        inline twinoaks::commonmodule::FLOAT32* create_float(float value)
        {
            return new twinoaks::commonmodule::FLOAT32(value);
        }

        // -------- enum conversions ---------


        inline twinoaks::commonmodule::UnitMultiplierKind* create_enum(::commonmodule::UnitMultiplierKind value)
        {
            return allocate_enum<twinoaks::commonmodule::UnitMultiplierKind>(value);
        }

        inline twinoaks::commonmodule::UnitSymbolKind* create_enum(::commonmodule::UnitSymbolKind value)
        {
            return allocate_enum<twinoaks::commonmodule::UnitSymbolKind>(value);
        }

        inline twinoaks::commonmodule::PhaseCodeKind* create_enum(::commonmodule::PhaseCodeKind value)
        {
            return allocate_enum<twinoaks::commonmodule::PhaseCodeKind>(value);
        }

        inline twinoaks::commonmodule::UnitSymbolKind convert_enum(::commonmodule::UnitSymbolKind value)
        {
            return static_cast<twinoaks::commonmodule::UnitSymbolKind>(value);
        }

        inline twinoaks::commonmodule::CalcMethodKind convert_enum(::commonmodule::CalcMethodKind value)
        {
            return static_cast<twinoaks::commonmodule::CalcMethodKind>(value);
        }

        inline twinoaks::commonmodule::TimeAccuracyKind convert_enum(::commonmodule::TimeAccuracyKind value)
        {
            return static_cast<twinoaks::commonmodule::TimeAccuracyKind>(value);
        }

        inline twinoaks::commonmodule::PFSignKind convert_enum(::commonmodule::PFSignKind value)
        {
            return static_cast<twinoaks::commonmodule::PFSignKind>(value);
        }

    }

}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
