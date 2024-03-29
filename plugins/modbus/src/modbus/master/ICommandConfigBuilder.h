// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICOMMANDCONFIGBUILDER_H
#define OPENFMB_ADAPTER_ICOMMANDCONFIGBUILDER_H

#include "ModifyRegisterOp.h"

#include <adapter-api/Logger.h>

#include <vector>

namespace adapter {
namespace modbus {
namespace master {

    class ICommandSink {
    public:
        virtual void write_single_coil(uint16_t index, size_t priority, bool value) = 0;
        virtual void flip_single_coil(uint16_t index, size_t priority) = 0;

        virtual void write_single_register(uint16_t index, size_t priority, uint16_t value) = 0;
        virtual void write_multiple_registers(uint16_t start_index, size_t priority, std::vector<uint16_t> values) = 0;
        virtual void modify_single_register(uint16_t index, size_t priority, modify_reg_op_t operation) = 0;
    };

    /**
         * For a particular profile (T), process it and make callbacks to an ICommandSink
         */
    template <class T>
    using command_builder_t = std::function<void(const T&, ICommandSink& sink, api::Logger&)>;

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
        virtual void process(const T& profile, ICommandSink& sink, api::Logger& logger) const = 0;
    };

}
}
}

#endif
