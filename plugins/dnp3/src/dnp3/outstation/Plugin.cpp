// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "Plugin.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/generated/TypedModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>

#include <opendnp3/logging/LogLevels.h>
#include <opendnp3/outstation/DatabaseConfig.h>
#include <opendnp3/outstation/DefaultOutstationApplication.h>

#include "dnp3/ConfigStrings.h"

#include "CommandHandler.h"
#include "ControlConfigReadVisitor.h"
#include "MeasurementConfigReadVisitor.h"
#include "SubscriptionHandler.h"

using namespace opendnp3;

namespace adapter {
namespace dnp3 {
    namespace outstation {

        using delayed_sub_t = std::function<void(const api::message_bus_t& bus, const std::shared_ptr<IOutstation>& outstation)>;
        using delayed_sub_vector_t = std::vector<delayed_sub_t>;

        template <class T>
        struct ProfileReader {
            template <bool condition>
            using return_t = typename std::enable_if<condition, bool>::type;

            template <class U = T>
            static return_t<util::profile_info<U>::type == util::ProfileType::Control>
            handle(const YAML::Node& node, const api::Logger& logger, const api::subscriber_one_t<T>& bus, const DefaultVariations& default_var, DatabaseConfig& db_config, ICommandConfig& config, delayed_sub_vector_t& subscriptions)
            {
                ControlConfigReadVisitor<U> visitor(util::yaml::require(node, util::keys::mapping), config);
                util::visit(visitor);
                return true;
            }

            template <class U = T>
            static return_t<util::profile_info<U>::type != util::ProfileType::Control>
            handle(const YAML::Node& node, const api::Logger& logger, const api::subscriber_one_t<T>& bus, const DefaultVariations& default_var, DatabaseConfig& db_config, ICommandConfig& config, delayed_sub_vector_t& subscriptions)
            {
                MeasurementConfigReadVisitor<U> visitor(util::yaml::require(node, util::keys::mapping), default_var, db_config);
                util::visit(visitor);
                subscriptions.push_back(
                    [handlers = visitor.get_handlers(), mrid = visitor.get_primary_mrid()](const api::subscriber_one_t<T>& bus, const std::shared_ptr<IOutstation>& outstation) {
                        bus->subscribe(std::make_shared<SubscriptionHandler<T>>(mrid, outstation, handlers));
                    });
                return true;
            }
        };

        Plugin::Plugin(
            const api::Logger& logger,
            const YAML::Node& node,
            api::message_bus_t bus)
            : PluginBase(logger, node)
        {
            util::yaml::load_template_configs(
                util::yaml::require(node, keys::outstations),
                this->logger,
                [&](const YAML::Node& config) {
                    this->add_outstation(config, bus);
                });
        }

        void Plugin::start()
        {
            for (const auto& outstation : this->outstations) {
                outstation->Enable();
            }
        }

        void Plugin::add_outstation(const YAML::Node& node, api::message_bus_t bus)
        {
            const auto channel = this->create_channel(node);

            delayed_sub_vector_t subscriptions;

            const auto protocol_node = util::yaml::require(node, keys::protocol);
            DefaultVariations default_var = read_default_variations(protocol_node);
            DatabaseConfig db_config;

            const auto command_handler = std::make_shared<CommandHandler>(bus, this->logger);

            // TODO - configure other outstation parameters

            // configure all the profiles for this outstation
            util::yaml::foreach (
                util::yaml::require(node, util::keys::profiles),
                [&](const YAML::Node& node) {
                    api::ProfileRegistry::handle_by_name<ProfileReader>(
                        util::yaml::require_string(node, util::keys::name),
                        node,
                        logger,
                        bus,
                        default_var,
                        db_config,
                        *command_handler,
                        subscriptions);
                });

            OutstationStackConfig config(db_config);

            config.link.RemoteAddr = util::yaml::require_integer<uint16_t>(protocol_node, keys::master_address);
            config.link.LocalAddr = util::yaml::require_integer<uint16_t>(protocol_node, keys::outstation_address);

            const auto outstation = channel->AddOutstation(
                util::yaml::require_string(node, util::keys::name),
                command_handler,
                std::make_shared<DefaultOutstationApplication>(),
                config
            );

            // TODO - configuration default static/event variations in the database

            // bind all of the subscriptions now that we have an outstation
            // that can load measurements
            for (const auto& subscribe : subscriptions) {
                subscribe(bus, outstation);
            }

            this->outstations.push_back(outstation);
        }

        Plugin::channel_t Plugin::create_channel(const YAML::Node& node)
        {
            const auto channel_node = util::yaml::require(node, keys::channel);

            return this->manager.AddTCPServer(
                util::yaml::require_string(node, util::keys::name),
                opendnp3::levels::NORMAL,
                ServerAcceptMode::CloseExisting,
                IPEndpoint{
                    util::yaml::require_string(channel_node, keys::listen_adapter),
                    util::yaml::require_integer<uint16_t>(channel_node, keys::port)
                },
                nullptr // no channel listener
            );
        }

        DefaultVariations Plugin::read_default_variations(const YAML::Node& node) const
        {
            const auto static_var_node = util::yaml::require(node, keys::default_static_variations);
            const auto binary_static = opendnp3::StaticBinaryVariationSpec::from_string(util::yaml::require_string(static_var_node, keys::binary_input));
            const auto analog_static = opendnp3::StaticAnalogVariationSpec::from_string(util::yaml::require_string(static_var_node, keys::analog_input));
            const auto counter_static = opendnp3::StaticCounterVariationSpec::from_string(util::yaml::require_string(static_var_node, keys::counter));

            const auto event_var_node = util::yaml::require(node, keys::default_event_variations);
            const auto binary_event = opendnp3::EventBinaryVariationSpec::from_string(util::yaml::require_string(event_var_node, keys::binary_input));
            const auto analog_event = opendnp3::EventAnalogVariationSpec::from_string(util::yaml::require_string(event_var_node, keys::analog_input));
            const auto counter_event = opendnp3::EventCounterVariationSpec::from_string(util::yaml::require_string(event_var_node, keys::counter));

            return DefaultVariations
            {
                binary_static, analog_static, counter_static,
                binary_event, analog_event, counter_event
            };
        }
    }
}
}
