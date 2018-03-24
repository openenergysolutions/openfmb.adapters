#ifndef OPENFMB_ADAPTER_ICACHEDANALOGUE_H
#define OPENFMB_ADAPTER_ICACHEDANALOGUE_H

namespace adapter
{

    class ICachedAnalogue
    {

    public:

        virtual ~ICachedAnalogue() = default;

        virtual void reset() = 0;

        virtual bool is_set() const = 0;

        virtual float to_float(float scale) const = 0;

    };

}

#endif //OPENFMB_ADAPTER_ICACHEDANALOGUE_H
