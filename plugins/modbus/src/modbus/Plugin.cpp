
#include "Plugin.h"

#include <adapter-api/ProfileRegistry.h>

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/YAMLGetters.h>
#include <adapter-util/config/generated/TypedModelVisitors.h>
#include <adapter-util/util/ProtoChangeFilter.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <adapter-util/util/YAMLUtil.h>

#include "modbus/channel/IChannel.h"
#include "modbus/channel/Ipv4Endpoint.h"
#include "modbus/logging/LoggerFactory.h"

#include "HeartbeatTransaction.h"
#include "PollHandler.h"
#include "PollTransaction.h"

#include "ConfigStrings.h"
#include "PublishConfigReadVisitor.h"
#include "SessionWrapper.h"
#include "SubscribeConfigReadVisitor.h"
#include "TransactionProcessor.h"

namespace adapter {
namespace modbus {

    template <class T>
    struct ProfileReader {
        template <bool condition>
        using return_t = typename std::enable_if<condition, bool>::type;

        /// use this implementation if profile type is a control
        template <class U = T>
        static return_t<util::profile_info<U>::type == util::ProfileType::Control> handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus, std::shared_ptr<ITransactionProcessor> processor, const AutoPollConfig& auto_poll_config)
        {
            util::CommandPriorityMap priority_map(util::yaml::require(node, util::keys::command_order));

            SubscribeConfigReadVisitor<T> visitor(
                util::yaml::require(node, util::keys::mapping),
                priority_map);
            util::visit(visitor);

            priority_map.assert_all_operations_referenced();

            visitor.subscribe(logger, *bus, std::move(processor));
            return true;
        }

        /// use this implementation if profile type is reading or status
        template <class U = T>
        static return_t<
            util::profile_info<U>::type == util::ProfileType::Reading ||
            util::profile_info<U>::type == util::ProfileType::Status>
        handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus, std::shared_ptr<ITransactionProcessor> processor, const AutoPollConfig& auto_poll_config)
        {
            const auto poll_handler = std::make_shared<PollHandler>();
            PublishConfigReadVisitor<T> visitor(util::yaml::require(node, util::keys::mapping), std::move(bus), std::move(poll_handler));
            util::visit(visitor);

            const auto transaction = std::make_shared<PollTransaction>(
                    logger,
                    auto_poll_config,
                    std::chrono::milliseconds(util::yaml::require_integer<uint32_t>(node, keys::poll_period_ms)),
                    poll_handler);
            processor->add(std::move(transaction));

            return true;
        }

        // use this implementation if profile is event
        template <class U = T>
        static return_t<util::profile_info<U>::type == util::ProfileType::Event>
        handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus, std::shared_ptr<ITransactionProcessor> processor, const AutoPollConfig& auto_poll_config)
        {
            const auto poll_handler = std::make_shared<PollHandler>();
            auto filter = std::make_shared<util::ProtoChangeFilter<T>>(bus);
            PublishConfigReadVisitor<T> visitor(util::yaml::require(node, util::keys::mapping), std::move(filter), std::move(poll_handler));
            util::visit(visitor);

            const auto transaction = std::make_shared<PollTransaction>(
                    logger,
                    auto_poll_config,
                    std::chrono::milliseconds(util::yaml::require_integer<uint32_t>(node, keys::poll_period_ms)),
                    poll_handler);
                    processor->add(std::move(transaction));

            return true;
        }
    };

    Plugin::Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
        : logger(logger)
    {
        // initialize the Modbus manager
        this->manager = ::modbus::IModbusManager::create(
            ::modbus::LoggerFactory::create_custom_logger(logger.get_impl()) // TODO - configure thread pool
        );

        util::yaml::load_template_configs(
            util::yaml::require(node, keys::sessions),
            this->logger,
            [&](const YAML::Node& config) {
                this->configure_session(config, bus);
            });
    }

    AutoPollConfig read_auto_poll_config(const YAML::Node& node)
    {
        const auto config_node = util::yaml::require(node, keys::auto_polling);
        return AutoPollConfig(
            util::yaml::require_integer<uint16_t>(config_node, keys::max_register_gaps));
    }

    void Plugin::configure_session(const YAML::Node& node, api::message_bus_t bus)
    {
        const auto name = util::yaml::require_string(node, util::keys::name);

        //const auto poll_handler = std::make_shared<PollHandler>();
        const auto tx_handler = std::make_shared<TransactionProcessor>(this->logger);
        const auto auto_poll_config = read_auto_poll_config(node);

        const CommandOptions options{
            util::yaml::require(node, keys::always_write_multiple_registers).as<bool>()
        };

        const auto add_heartbeat = [&](const YAML::Node& node) {
            tx_handler->add(
                std::make_shared<HeartbeatTransaction>(
                    this->logger,
                    util::yaml::get::index(node),
                    std::chrono::milliseconds(util::yaml::require_integer<uint32_t>(node, keys::period_ms)),
                    // ATM, we only support inverting masked bits
                    Operations::invert_mask(util::yaml::require_integer<uint16_t>(node, keys::mask))));
        };

        util::yaml::foreach (util::yaml::require(node, keys::heartbeats), add_heartbeat);

        const auto add_profile = [&](const YAML::Node& node) {
            api::ProfileRegistry::handle_by_name<ProfileReader>(
                util::yaml::require_string(node, util::keys::name),
                node,
                this->logger,
                bus,
                tx_handler,
                auto_poll_config);
        };

        util::yaml::foreach (util::yaml::require(node, util::keys::profiles), add_profile);

        //this->logger.info("Session {} has {} mapped values", name, poll_handler->num_mapped_values());

        /*if (poll_handler->num_mapped_values() > 0) {
            tx_handler->add(
                std::make_shared<PollTransaction>(
                    this->logger,
                    read_auto_poll_config(node),
                    std::chrono::milliseconds(util::yaml::require_integer<uint32_t>(node, keys::poll_period_ms)),
                    poll_handler));
        }*/

        const auto session = this->get_session(name, node, options);

        this->start_actions.emplace_back([tx_handler, session]() {
            tx_handler->start(session);
        });
    }

    std::shared_ptr<::modbus::ISession> Plugin::get_session(const std::string& name, const YAML::Node& node, const CommandOptions& options)
    {
        auto log_level = get_modbus_logging_level(LogLevel::from_string(util::yaml::require_string(node, keys::log_level)));
        auto channel = this->manager->create_tcp_channel(
            name,
            ::modbus::Ipv4Endpoint(
                util::yaml::require_string(node, keys::remote_ip),
                util::yaml::require_integer<uint16_t>(node, keys::port)),
            log_level);

        const auto session = channel->create_session(
            ::modbus::UnitIdentifier(
                util::yaml::require_integer<uint8_t>(node, keys::unit_identifier)),
            std::chrono::milliseconds(
                util::yaml::require_integer<int32_t>(node, keys::response_timeout_ms)));

        return options.always_write_multiple_registers ? std::make_shared<SessionWrapper>(session) : session;
    }

    ::modbus::LoggingLevel Plugin::get_modbus_logging_level(const LogLevel::Value level) const
    {
        switch (level) {
        case LogLevel::Value::Trace:
            return ::modbus::LoggingLevel::Trace;
        case LogLevel::Value::Debug:
            return ::modbus::LoggingLevel::Debug;
        case LogLevel::Value::Info:
            return ::modbus::LoggingLevel::Info;
        case LogLevel::Value::Warn:
            return ::modbus::LoggingLevel::Warn;
        case LogLevel::Value::Error:
            return ::modbus::LoggingLevel::Error;
        case LogLevel::Value::Critical:
            return ::modbus::LoggingLevel::Critical;
        }
    }

    void Plugin::start()
    {
        for (auto& action : start_actions) {
            action();
        }
    }
}
}
