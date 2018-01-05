#ifndef OPENFMB_ADAPTER_CONVERSIONHELPERS_H
#define OPENFMB_ADAPTER_CONVERSIONHELPERS_H

namespace adapter {

    namespace dds {

        inline void convert_primitive(bool in, unsigned char*& out)
        {
            // what is this?
        }

        inline void convert_primitive(const ::std::string& in, unsigned char*& out)
        {
            // allocate a new string?
        }


        inline void convert_primitive(const ::std::string& in, char*& out)
        {
            // allocate a new string?
        }

        inline void convert_primitive(::google::protobuf::uint32 in, openfmb::commonmodule::INT32U& out)
        {
            out = in;
        }

        inline void convert_primitive(::google::protobuf::int32 in, openfmb::commonmodule::INT32& out)
        {
            out = in;
        }

        inline void convert_primitive(::google::protobuf::int32 in, openfmb::commonmodule::INT32*& out)
        {
            out = new openfmb::commonmodule::INT32(in);
        }

        inline void convert_primitive(::google::protobuf::int64 in, openfmb::commonmodule::INT64& out)
        {
            out = in;
        }

        inline void convert_primitive(float in, openfmb::commonmodule::FLOAT32& out)
        {
            out = in;
        }

        inline void convert_primitive(float in, openfmb::commonmodule::FLOAT32*& out)
        {
            out = new openfmb::commonmodule::FLOAT32(in);
        }

        inline void convert_primitive(commonmodule::UnitMultiplierKind in, openfmb::commonmodule::UnitMultiplierKind*& out)
        {
            out = new openfmb::commonmodule::UnitMultiplierKind(static_cast<openfmb::commonmodule::UnitMultiplierKind>(in));
        }

        inline void convert_primitive(commonmodule::UnitSymbolKind in, openfmb::commonmodule::UnitSymbolKind*& out)
        {
            out = new openfmb::commonmodule::UnitSymbolKind(static_cast<openfmb::commonmodule::UnitSymbolKind>(in));
        }

        inline void convert_primitive(commonmodule::PhaseCodeKind in, openfmb::commonmodule::PhaseCodeKind*& out)
        {
            out = new openfmb::commonmodule::PhaseCodeKind(static_cast<openfmb::commonmodule::PhaseCodeKind>(in));
        }

        inline void convert_primitive(commonmodule::UnitSymbolKind in, openfmb::commonmodule::UnitSymbolKind& out)
        {
            out = static_cast<openfmb::commonmodule::UnitSymbolKind>(in);
        }

        inline void convert_primitive(commonmodule::CalcMethodKind in, openfmb::commonmodule::CalcMethodKind& out)
        {
            out = static_cast<openfmb::commonmodule::CalcMethodKind>(in);
        }
    }

}

#endif //OPENFMB_ADAPTER_CONVERSIONHELPERS_H
