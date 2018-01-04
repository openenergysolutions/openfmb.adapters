
#include "Conversions.h"

namespace adapter
{

    void convert(const resourcemodule::ResourceReadingProfile& profile, openfmb::resourcemodule::ResourceReadingProfile& out)
    {
        out.clear();
        if(profile.has_resourcereading())
        {
            convert(profile.resourcereading(), out.resourceReading);
        }
    }

    void convert(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out)
    {
        out.clear();
        if(in.has_readingmmxu()) out.readingMMXU = create(in.readingmmxu());
    }

    void convert(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out)
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

    void convert(const commonmodule::MV& in, openfmb::commonmodule::MV& out)
    {
        out.clear();
        if(in.has_mag()) convert(in.mag(), out.mag);
        if(in.has_units()) out.units = create(in.units());
    }

    void convert(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out)
    {
        out.clear();
        if(in.has_net())  out.net = create(in.net());
        if(in.has_neut()) out.neut = create(in.neut());
        if(in.has_phsa()) out.phsA = create(in.phsa());
        if(in.has_phsb()) out.phsB = create(in.phsb());
        if(in.has_phsc()) out.phsC = create(in.phsc());
    }

    void convert(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out)
    {
        out.clear();
        if(in.has_units()) out.units = create(in.units());
        if(in.has_cval()) convert(in.cval(), out.cVal);
    }

    void convert(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out)
    {
        out.clear();
        if(in.has_mag()) convert(in.mag(), out.mag);
        if(in.has_ang()) out.ang = create(in.ang());
    }

    void convert(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out)
    {
        out.clear();
        if(in.has_phsab()) out.phsAB = create(in.phsab());
        if(in.has_phsbc()) out.phsBC = create(in.phsbc());
        if(in.has_phsca()) out.phsCA = create(in.phsca());
    }

    void convert(const commonmodule::AnalogValue& in, openfmb::commonmodule::AnalogueValue& out)
    {
        out.clear();
        out.f = new openfmb::commonmodule::FLOAT32(in.f());
        out.i = new openfmb::commonmodule::INT32(in.i());
    }

    void convert(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out)
    {
        out.clear();
        //out.SIUnit = static_cast<openfmb::commonmodule::UnitSymbolKind>(in.siunit());
        out.SIUnit = openfmb::commonmodule::UnitSymbolKind(in.siunit());
        out.multiplier = new openfmb::commonmodule::UnitMultiplierKind(static_cast<openfmb::commonmodule::UnitMultiplierKind>(in.multiplier()));
    }


}


