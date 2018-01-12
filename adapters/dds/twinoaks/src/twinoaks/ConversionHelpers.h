#ifndef OPENFMB_ADAPTER_CONVERSIONHELPERS_H
#define OPENFMB_ADAPTER_CONVERSIONHELPERS_H

namespace adapter
{

    namespace dds
    {

        /*
        Uncomment these if they ever get fixed
        */
        //static_assert(sizeof(::openfmb::commonmodule::INT64U) == sizeof(::google::protobuf::uint64_t), "size mismatch");
        //static_assert(sizeof(::openfmb::commonmodule::INT64) == sizeof(::google::protobuf::int64_t), "size mismatch");


        template <class Out, class T>
        Out* create_message(const T& value)
        {
            auto ret = new Out();
            // must be a convert_message(..) function in scope that takes these types
            convert_message(value, *ret);
            return ret;
        };

        template <class Out, class In>
        Out* allocate_enum(const In& value)
        {
            return new Out(static_cast<Out>(value));
        };

        template <class Out, class In>
        void convert_message(const ::google::protobuf::RepeatedPtrField<In>& input, DDS::sequence<Out>& output)
        {
            output.clear();
            for(auto& elem : input)
            {
                Out value;
                convert_message(elem, value);
                output.push_back(value);
            }
        };


        // -------- TODO ------------

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

        inline char* create_string(const ::std::string& in)
        {
            return nullptr; // TODO
        }

        inline char* convert_string(const ::std::string& in)
        {
            return create_string(in); // no difference for mandatory / optional for strings
        }

        // -------- numeric conversions ---------

        inline openfmb::commonmodule::INT32U convert_uint32(::google::protobuf::uint32 value)
        {
            return static_cast<openfmb::commonmodule::INT32U>(value);
        }

        inline openfmb::commonmodule::INT64U convert_uint64(::google::protobuf::uint64 value)
        {
            return static_cast<openfmb::commonmodule::INT64U>(value);
        }

        inline openfmb::commonmodule::INT64 convert_int64(::google::protobuf::int64 value)
        {
            return static_cast<openfmb::commonmodule::INT64>(value);
        }

        inline openfmb::commonmodule::INT32* create_int32(::google::protobuf::int32 value)
        {
            return new openfmb::commonmodule::INT32(static_cast<openfmb::commonmodule::INT32>(value));
        }

        inline openfmb::commonmodule::FLOAT32* create_float(float value)
        {
            return new openfmb::commonmodule::FLOAT32(value);
        }

        // -------- enum conversions ---------


        inline openfmb::commonmodule::UnitMultiplierKind* create_enum(::commonmodule::UnitMultiplierKind value)
        {
            return allocate_enum<openfmb::commonmodule::UnitMultiplierKind>(value);
        }

        inline openfmb::commonmodule::UnitSymbolKind* create_enum(::commonmodule::UnitSymbolKind value)
        {
            return allocate_enum<openfmb::commonmodule::UnitSymbolKind>(value);
        }

        inline openfmb::commonmodule::PhaseCodeKind* create_enum(::commonmodule::PhaseCodeKind value)
        {
            return allocate_enum<openfmb::commonmodule::PhaseCodeKind>(value);
        }

        inline openfmb::commonmodule::UnitSymbolKind convert_enum(::commonmodule::UnitSymbolKind value)
        {
            return static_cast<openfmb::commonmodule::UnitSymbolKind>(value);
        }

        inline openfmb::commonmodule::CalcMethodKind convert_enum(::commonmodule::CalcMethodKind value)
        {
            return static_cast<openfmb::commonmodule::CalcMethodKind>(value);
        }

    }

}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
