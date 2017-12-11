
#include "Conversions.h"

namespace openfmb
{

    void convert(const ResourceReadingProfile& profile, resourcemodule::ResourceReadingProfile& out)
    {
        out.clear();
        if(profile.has_resourcereadingvalue())
        {
            resourcemodule::ResourceReadingValue in;
            convert(profile.resourcereadingvalue(), in);
            out.resourceReadingValue.push_back(in);
        }
    }

    void convert(const ResourceReadingValue& in, resourcemodule::ResourceReadingValue& out)
    {
        out.clear();
        if(in.has_readingmmxu()) out.readingMMXU = create(in.readingmmxu());
    }

    void convert(const ReadingMMXU& in, commonmodule::ReadingMMXU& out)
    {
        out.clear();

        if(in.has_hz())     out.Hz = create(in.hz());
        if(in.has_a())      out.A = create(in.a());
        if(in.has_phv())    out.PhV = create(in.phv());
        if(in.has_ppv())    out.PPV = create(in.ppv());
        if(in.has_va())     out.VA = create(in.va());
        if(in.has_var())    out.VAr = create(in.var());


        // TODO - proto has V (volts?) but DDS has W (watts?)

    }

    void convert(const MV& in, commonmodule::MV& out)
    {
        out.clear();
        if(in.has_mag()) convert(in.mag(), out.mag);
        if(in.has_unit()) out.units = create(in.unit());
    }

    void convert(const WYE& in, commonmodule::WYE& out)
    {
        out.clear();
        if(in.has_net())  out.net = create(in.net());
        if(in.has_neut()) out.neut = create(in.neut());
        if(in.has_phsa()) out.phsA = create(in.phsa());
        if(in.has_phsb()) out.phsB = create(in.phsb());
        if(in.has_phsc()) out.phsC = create(in.phsc());
    }

    void convert(const CMV& in, commonmodule::CMV& out)
    {
        out.clear();
        if(in.has_unit()) out.units = create(in.unit());
        if(in.has_cval()) convert(in.cval(), out.cVal);
    }

    void convert(const Vector& in, commonmodule::Vector& out)
    {
        out.clear();
        if(in.has_mag()) convert(in.mag(), out.mag);
        if(in.has_ang()) out.ang = create(in.ang());
    }

    void convert(const DEL& in, commonmodule::DEL& out)
    {
        out.clear();
        if(in.has_phsab()) out.phsAB = create(in.phsab());
        if(in.has_phsbc()) out.phsBC = create(in.phsbc());
        if(in.has_phsca()) out.phsCA = create(in.phsca());
    }

    void convert(const AnalogueValue& in, commonmodule::AnalogueValue& out)
    {
        out.clear();
        out.f = new commonmodule::FLOAT32(in.f());
        out.i = new commonmodule::INT32(in.i());
    }

    void convert(const Unit& in, commonmodule::Unit& out)
    {
        out.clear();
        out.SIUnit = static_cast<commonmodule::UnitSymbolKind>(in.siunit());
        out.multiplier = new commonmodule::UnitMultiplierKind(
            static_cast<commonmodule::UnitMultiplierKind>(in.multiplier())
        );
    }


}


