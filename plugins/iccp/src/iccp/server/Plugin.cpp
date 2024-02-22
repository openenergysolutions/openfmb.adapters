// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "Plugin.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/generated/TypedModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <adapter-util/util/YAMLUtil.h>

#include "iccp/ConfigStrings.h"
#include "SubscriptionHandler.h"
#include "IccpServer.h"
#include "ControlConfigReadVisitor.h"
#include "MeasurementConfigReadVisitor.h"
#include "ICommandConfig.h"

namespace adapter {
    namespace iccp {
        namespace server {

            using delayed_sub_t = std::function<void(const api::message_bus_t& bus, const std::shared_ptr<IccpServer>& server)>;
            using delayed_sub_vector_t = std::vector<delayed_sub_t>;

            template <class T>
            struct ProfileReader {

                template <bool condition>
                using return_t = typename std::enable_if<condition, bool>::type;

                template <class U = T>
                static return_t<util::profile_info<U>::type == util::ProfileType::Control>
                handle(const YAML::Node& node, const api::Logger& logger, const api::subscriber_one_t<T>& bus, ICommandConfig& config, delayed_sub_vector_t& subscriptions)
                {
                    ControlConfigReadVisitor<U> visitor(util::yaml::require(node, util::keys::mapping), config);
                    util::visit(visitor);
                    return true;
                }

                template <class U = T>
                static return_t<util::profile_info<U>::type != util::ProfileType::Control>
                handle(const YAML::Node& node, const api::Logger& logger, const api::subscriber_one_t<T>& bus, ICommandConfig& config, delayed_sub_vector_t& subscriptions)
                {
                    MeasurementConfigReadVisitor<U> visitor(util::yaml::require(node, util::keys::mapping));
                    util::visit(visitor);
                    subscriptions.push_back(
                        [handlers = visitor.get_handlers(), mrid = visitor.get_primary_mrid()](const api::subscriber_one_t<T>& bus, const std::shared_ptr<IccpServer>& server) {
                            bus->subscribe(std::make_shared<SubscriptionHandler<T>>(mrid, server, handlers));
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
                        util::yaml::require(node, keys::servers),
                        this->logger,
                        [&](const YAML::Node& config) {
                            this->add_server(config, bus);
                        });
            }

            void Plugin::start()
            {
                throw api::Exception("ICCP Server adapter is not yet implemented.");
            }

            void Plugin::add_server(const YAML::Node& node, api::message_bus_t bus)
            {

            }
        }
    }
}
