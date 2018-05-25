
#ifndef OPENFMB_ADAPTER_IPLUGIN_H
#define OPENFMB_ADAPTER_IPLUGIN_H

#include <string>

namespace adapter
{
    class IPlugin
    {
    public:
        virtual ~IPlugin() = default;

        // supplies the same name as the factory
        virtual std::string name() const = 0;

        // start the execution of the adapter
        virtual void start() = 0;
    };

}

#endif
