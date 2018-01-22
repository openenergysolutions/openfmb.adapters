
#ifndef OPENFMB_ADAPTER_IADAPTER_H
#define OPENFMB_ADAPTER_IADAPTER_H

namespace adapter
{
    class IAdapter
    {
    public:
        virtual ~IAdapter() = default;

        // start the execution of the adapter
        virtual void start() = 0;
    };

}

#endif
