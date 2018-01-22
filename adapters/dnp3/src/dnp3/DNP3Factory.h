
#ifndef OPENFMB_ADAPTER_DNP3FACTORY_H
#define OPENFMB_ADAPTER_DNP3FACTORY_H

#include "adapter-api/IAdapterFactory.h"

namespace adapter
{

    class DNP3Factory final : public IAdapterFactory
    {

    public:

        DNP3Factory() = default;

        virtual std::string name() const override
        {
            return "dnp3";
        }

        virtual std::string description() const override
        {
            return "maps openFMB to the DNP3 protocol";
        };

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

    };

}

#endif //OPENFMB_ADAPTER_DNP3FACTORY_H
