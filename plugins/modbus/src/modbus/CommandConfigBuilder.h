
#ifndef OPENFMB_ADAPTER_COMMANDCONFIGBUILDER_H
#define OPENFMB_ADAPTER_COMMANDCONFIGBUILDER_H

#include "ICommandConfigBuilder.h"

namespace adapter
{
    namespace modbus
    {
        template <class T>
        class CommandConfigBuilder : public ICommandConfigBuilder<T>
        {
            std::vector<command_builder_t<T>> builders;

        public:
            void add(const command_builder_t<T>& builder) override
            {
                this->builders.push_back(builder);
            }

            void process(const T& profile, ICommandSink& sink, Logger& logger) const
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
