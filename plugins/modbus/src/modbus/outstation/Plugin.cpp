// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "outstation/Plugin.h"

#include <adapter-api/ProfileRegistry.h>

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/YAMLGetters.h>
#include <adapter-util/config/generated/TypedModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <adapter-util/util/YAMLUtil.h>

#include "modbus/Ipv4Endpoint.h"
#include "modbus/client/IClientChannel.h"
#include "modbus/logging/LoggerFactory.h"

#include "ConfigStrings.h"
#include "LoggingLevelConversion.h"
#include "outstation/ControlConfigReadVisitor.h"
#include "outstation/MeasurementConfigReadVisitor.h"
#include "outstation/ModbusDatabase.h"
#include "outstation/SubscriptionHandler.h"

#include <thread>

namespace adapter {
namespace modbus {
namespace outstation {

    template <class T>
    struct ProfileReader {
        template <bool condition>
        using return_t = typename std::enable_if<condition, bool>::type;

        template <class U = T>
        static return_t<util::profile_info<U>::type == util::ProfileType::Control> handle(
            const YAML::Node& node,
            const api::Logger& logger,
            api::message_bus_t bus,
            std::shared_ptr<ModbusDatabase> db)
        {
            ControlConfigReadVisitor<T> visitor{util::yaml::require(node, util::keys::mapping), *db};
            util::visit(visitor);

            return true;
        }

        template <class U = T>
        static return_t<util::profile_info<U>::type != util::ProfileType::Control> handle(
            const YAML::Node& node,
            const api::Logger& logger,
             api::subscriber_one_t<T> bus,
             std::shared_ptr<ModbusDatabase> db)
        {
            MeasurementConfigReadVisitor<T> visitor{util::yaml::require(node, util::keys::mapping), *db};
            util::visit(visitor);

            bus->subscribe(std::make_shared<SubscriptionHandler<T>>(visitor.get_primary_mrid(), db, visitor.get_handlers()));

            return true;
        }
    };

    Plugin::Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
        : logger(logger)
    {
        // initialize the Modbus manager
        this->manager = ::modbus::IModbusManager::create(
            ::modbus::LoggerFactory::create_custom_logger(logger.get_impl()),
            util::yaml::optionally(node[keys::thread_pool_size], std::thread::hardware_concurrency())
        );

        util::yaml::load_template_configs(
            util::yaml::require(node, keys::sessions),
            this->logger,
            [&](const YAML::Node& config) {
                this->add_outstation(config, bus);
            });
    }

    void Plugin::add_outstation(const YAML::Node& node, api::message_bus_t bus)
    {
        auto channel = this->create_channel(node);
        const auto unit_id = ::modbus::UnitIdentifier{util::yaml::require_integer<uint8_t>(node, keys::unit_identifier)};
        auto db = std::make_shared<ModbusDatabase>(bus);

        util::yaml::foreach(util::yaml::require(node, util::keys::profiles), [&](const YAML::Node& node) {
            api::ProfileRegistry::handle_by_name<ProfileReader>(
                util::yaml::require_string(node, util::keys::name),
                node,
                this->logger,
                bus,
                db);
        });

        channel->add_session(unit_id, db);

        this->channels.push_back(channel);
    }

    std::shared_ptr<::modbus::IServerChannel> Plugin::create_channel(const YAML::Node& node)
    {
        return this->manager->create_server_tcp_channel(
            util::yaml::require_string(node, util::keys::name),
            ::modbus::Ipv4Endpoint{
                util::yaml::require_string(node, keys::adapter),
                util::yaml::require_integer<uint16_t>(node, keys::port)
            },
            util::yaml::require_integer<unsigned int>(node, keys::max_num_connections),
            get_modbus_logging_level(LogLevel::from_string(util::yaml::require_string(node, keys::log_level)))
        );
    }

    void Plugin::start()
    {
        for(auto& channel : this->channels)
        {
            channel->start();
        }
    }

    Plugin::~Plugin()
    {
        for(auto& channel : this->channels)
        {
            channel->shutdown();
        }
    }

}
}
}
