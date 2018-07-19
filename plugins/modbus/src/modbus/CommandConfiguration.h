
#ifndef OPENFMB_ADAPTER_COMMANDCONFIGURATION_H
#define OPENFMB_ADAPTER_COMMANDCONFIGURATION_H

#include "ICommandConfigBuilder.h"

#include  <vector>

namespace adapter
{
    namespace modbus
    {
        template <class T>
        class CommandConfiguration final : public ICommandConfiguration<T>, public ICommandConfigBuilder<T>
        {
            std::vector<command_builder_t<T>> builders;

        public:
            void add(const command_builder_t<T>& builder) override
            {
                this->builders.push_back(builder);
            }

            void process(const T& profile, ICommandSink& sink, Logger& logger) const override
            {
                for(const auto& builder : this->builders)
                {
                    builder(profile, sink, logger);
                }
            }
        };
    }
}

#endif
