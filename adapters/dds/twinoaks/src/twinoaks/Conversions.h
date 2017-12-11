
#ifndef OPENFMB_ADAPTER_CONVERSIONS_H
#define OPENFMB_ADAPTER_CONVERSIONS_H


#include "adapter-api/proto/ResourceReadingProfile.pb.h"

#include "generated/OpenFMB.hh"

namespace openfmb
{

    void convert(const ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out);

    void convert(const ResourceReadingValue& in, resourcemodule::ResourceReadingValue& out);

    void convert(const ReadingMMXU& in, commonmodule::ReadingMMXU& out);

    void convert(const MV& in, commonmodule::MV& out);

    void convert(const CMV& in, commonmodule::CMV& out);

    void convert(const Vector& in, commonmodule::Vector& out);

    void convert(const DEL& in, commonmodule::DEL& out);

    void convert(const WYE& in, commonmodule::WYE& out);

    void convert(const AnalogueValue& in, commonmodule::AnalogueValue& out);

    void convert(const Unit& in, commonmodule::Unit& out);

    // --- allocates memory ---

    template <class T, class U>
    U* create(const T& value)
    {
        auto ret = new U();
        convert(value, *ret);
        return ret;
    };

    static inline commonmodule::ReadingMMXU* create(const ReadingMMXU& value)
    {
        return create<ReadingMMXU, commonmodule::ReadingMMXU>(value);
    }

    static inline commonmodule::CMV* create(const CMV& value)
    {
        return create<CMV, commonmodule::CMV>(value);
    }

    static inline commonmodule::AnalogueValue* create(const AnalogueValue& value)
    {
        return create<AnalogueValue, commonmodule::AnalogueValue>(value);
    }

    static inline commonmodule::Unit* create(const Unit& value)
    {
        return create<Unit, commonmodule::Unit>(value);
    }

    static inline commonmodule::MV* create(const MV& value)
    {
        return create<MV, commonmodule::MV>(value);
    }

    static inline commonmodule::WYE* create(const WYE& value)
    {
        return create<WYE, commonmodule::WYE>(value);
    }

    static inline commonmodule::DEL* create(const DEL& value)
    {
        return create<DEL, commonmodule::DEL>(value);
    }


}

#endif //OPENFMB_ADAPTER_CONVERSIONS_H
