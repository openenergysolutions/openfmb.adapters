
#ifndef OPENFMB_ADAPTER_ICOMMANDCONFIGBUILDER_H
#define OPENFMB_ADAPTER_ICOMMANDCONFIGBUILDER_H

#include "ModifyRegisterOp.h"

#include <adapter-api/Logger.h>

namespace adapter {
namespace modbus {
    class ICommandSink {
    public:
        virtual void set_register(uint16_t index, int priority, uint16_t value) = 0;
        virtual void modify_register(uint16_t index, int priority, modify_reg_op_t operation) = 0;
    };

    /**
         * For a particular profile (T), process it and make callbacks to an ICommandSink
         */
    template <class T>
    using command_builder_t = std::function<void(const T&, ICommandSink& sink, Logger&)>;

    /**
         * For a particular profile (T), something that accepts and caches command builders
         */
    template <class T>
    class ICommandConfigBuilder {
    public:
        virtual ~ICommandConfigBuilder() = default;
        virtual void add(const command_builder_t<T>& builder) = 0;
    };

    /**
         * For a particular profile (T), something that can process a profile and can dispatch commands to a sink
         */
    template <class T>
    class ICommandConfiguration {
    public:
        virtual ~ICommandConfiguration() = default;
        virtual void process(const T& profile, ICommandSink& sink, Logger& logger) const = 0;
    };
}
}

#endif
