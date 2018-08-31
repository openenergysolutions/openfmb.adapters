#ifndef OPENFMB_ADAPTER_CONVERTTOPROTOHELPERS_H
#define OPENFMB_ADAPTER_CONVERTTOPROTOHELPERS_H

#include "NamespaceAlias.h"

namespace adapter
{

    namespace dds
    {

        template <class Out, class In>
        void convert_repeated_field(const DDS::sequence<In>& input, ::google::protobuf::RepeatedPtrField<Out>& output)
        {
            output.Clear();
            for(decltype(input.length()) i = 0; i < input.length(); ++i)
            {
                convert_to_proto(input.at(i), *output.Add());
            }
        };


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

        inline ::google::protobuf::int32 convert_int32(twinoaks::commonmodule::INT32 value)
        {
            return static_cast<::google::protobuf::int32>(value);
        }

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

        inline twinoaks::commonmodule::FLOAT32 convert_float(float value)
        {
            return static_cast<twinoaks::commonmodule::FLOAT32>(value);
        }


        // -------- enum conversions ---------

        inline ::commonmodule::UnitSymbolKind convert_enum(twinoaks::commonmodule::UnitSymbolKind value)
        {
            return static_cast<::commonmodule::UnitSymbolKind>(value);
        }

        inline ::commonmodule::CalcMethodKind convert_enum(twinoaks::commonmodule::CalcMethodKind value)
        {
            return static_cast<::commonmodule::CalcMethodKind>(value);
        }

        inline ::commonmodule::PhaseCodeKind convert_enum(twinoaks::commonmodule::PhaseCodeKind value)
        {
            return static_cast<::commonmodule::PhaseCodeKind>(value);
        }

        inline ::commonmodule::UnitMultiplierKind convert_enum(twinoaks::commonmodule::UnitMultiplierKind value)
        {
            return static_cast<::commonmodule::UnitMultiplierKind>(value);
        }

        inline ::commonmodule::TimeAccuracyKind convert_enum(twinoaks::commonmodule::TimeAccuracyKind value)
        {
            return static_cast<::commonmodule::TimeAccuracyKind>(value);
        }

        inline ::commonmodule::PFSignKind convert_enum(twinoaks::commonmodule::PFSignKind value)
        {
            return static_cast<::commonmodule::PFSignKind>(value);
        }

    }
}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
