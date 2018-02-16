
#ifndef OPENFMB_ADAPTER_IADAPTER_H
#define OPENFMB_ADAPTER_IADAPTER_H

#include <string>

namespace adapter
{
    class IAdapter
    {
    public:
        virtual ~IAdapter() = default;

        // supplies the same name as the factory
        virtual std::string name() const = 0;

        // start the execution of the adapter
        virtual void start() = 0;
    };

}

#endif
