
#ifndef OPENFMB_ADAPTER_CONVERSIONS_H
#define OPENFMB_ADAPTER_CONVERSIONS_H


#include <resourcemodule/resourcemodule.pb.h>

#include "adapter-api/proto/resourcemodule/resourcemodule.pb.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

namespace adapter
{

    void convert(const resourcemodule::ResourceReadingProfile& in, openfmb::resourcemodule::ResourceReadingProfile& out);

    void convert(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out);

    void convert(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out);

    void convert(const commonmodule::MV& in, openfmb::commonmodule::MV& out);

    void convert(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out);

    void convert(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out);

    void convert(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out);

    void convert(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out);

    void convert(const commonmodule::AnalogueValue& in, openfmb::commonmodule::AnalogueValue& out);

    void convert(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out);

    // --- allocates memory ---

    template <class T, class U>
    U* create(const T& value)
    {
        auto ret = new U();
        convert(value, *ret);
        return ret;
    };

    static inline openfmb::commonmodule::ReadingMMXU* create(const commonmodule::ReadingMMXU& value)
    {
        return create<commonmodule::ReadingMMXU, openfmb::commonmodule::ReadingMMXU>(value);
    }

    static inline openfmb::commonmodule::CMV* create(const commonmodule::CMV& value)
    {
        return create<commonmodule::CMV, openfmb::commonmodule::CMV>(value);
    }

    static inline openfmb::commonmodule::AnalogueValue* create(const commonmodule::AnalogueValue& value)
    {
        return create<commonmodule::AnalogueValue, openfmb::commonmodule::AnalogueValue>(value);
    }

    static inline openfmb::commonmodule::Unit* create(const commonmodule::Unit& value)
    {
        return create<commonmodule::Unit, openfmb::commonmodule::Unit>(value);
    }

    static inline openfmb::commonmodule::MV* create(const commonmodule::MV& value)
    {
        return create<commonmodule::MV, openfmb::commonmodule::MV>(value);
    }

    static inline openfmb::commonmodule::WYE* create(const commonmodule::WYE& value)
    {
        return create<commonmodule::WYE, openfmb::commonmodule::WYE>(value);
    }

    static inline openfmb::commonmodule::DEL* create(const commonmodule::DEL& value)
    {
        return create<commonmodule::DEL, openfmb::commonmodule::DEL>(value);
    }


}

#endif //OPENFMB_ADAPTER_CONVERSIONS_H
