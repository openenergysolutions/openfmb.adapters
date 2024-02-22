// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "Plugin.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/TypedModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <adapter-util/util/YAMLUtil.h>

#include "iccp/ConfigStrings.h"
#include "SubscribingConfigReadVisitor.h"
#include "PublishingConfigReadVisitor.h"
#include "PollHandler.h"
#include "PollTransaction.h"
#include "TransactionProcessor.h"

#include <stdexcept>


namespace adapter {
    namespace iccp {
        namespace client {

            template <class T>
            struct ProfileReader {
                template <bool condition>
                using return_t = typename std::enable_if<condition, bool>::type;

                template <class U = T>
                static return_t<util::profile_info<U>::type == util::ProfileType::Control>
                handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus, std::shared_ptr<exe4cpp::IExecutor> executor, std::shared_ptr<ITransactionProcessor> processor, client_t client)
                {
                    const auto tolerance = std::chrono::milliseconds(util::yaml::require(node, util::keys::tolerance).as<uint64_t>());

                    util::CommandPriorityMap priority_map(util::yaml::require(node, util::keys::command_order));

                    SubscribingConfigReadVisitor<T> visitor(util::yaml::require(node, util::keys::mapping), priority_map);
                    util::visit(visitor);                    
                    visitor.subscribe(logger, *bus, tolerance, executor, std::move(processor));
                    return true;
                }

                template <class U = T>
                static return_t<
                    util::profile_info<U>::type == util::ProfileType::Reading ||
                    util::profile_info<U>::type == util::ProfileType::Status ||
                    util::profile_info<U>::type == util::ProfileType::Capability>
                handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus, std::shared_ptr<exe4cpp::IExecutor> executor, std::shared_ptr<ITransactionProcessor> processor, client_t client)
                {
                    const auto poll_handler = std::make_shared<PollHandler>();
                    PublishingConfigReadVisitor<T> visitor(util::yaml::require(node, util::keys::mapping), std::move(bus), poll_handler);
                    util::visit(visitor);

                    const auto transaction = std::make_shared<PollTransaction>(
                        logger,
                        std::chrono::seconds(util::yaml::require_integer<uint32_t>(node, keys::poll_period_second)),
                        poll_handler);

                    processor->add(std::move(transaction));

                    return true;
                }

                template <class U = T>
                static return_t<util::profile_info<U>::type == util::ProfileType::Event>
                handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus, std::shared_ptr<exe4cpp::IExecutor> executor, std::shared_ptr<ITransactionProcessor> processor, client_t client)
                {
                    // TODO:
                    return true;
                }
            };

            Plugin::Plugin(
                    const api::Logger& logger,
                    const YAML::Node& node,
                    api::message_bus_t bus)
                    : PluginBase(logger, node),
                      executor(exe4cpp::BasicExecutor::create(std::make_shared<asio::io_context>()))
            {
                util::yaml::load_template_configs(
                        util::yaml::require(node, keys::clients),
                        this->logger,
                        [&](const YAML::Node& config) {
                            this->config_client(config, bus);
                        });
            }

            Plugin::~Plugin()
            {
                if(thread_pool)
                {
                    executor->get_context()->stop();
                    thread_pool.reset();
                }
            }

            void Plugin::start()
            {
                throw api::Exception("ICCP Client adapter is not yet implemented.");
            }

            void Plugin::config_client(const YAML::Node& node, api::message_bus_t bus)
            {
                const auto profiles = util::yaml::require(node, util::keys::profiles);

                client_t client = std::make_shared<IccpClient>(node, this->logger);

                const auto tx_handler = std::make_shared<TransactionProcessor>(this->logger);

                util::yaml::foreach(
                    profiles,
                    [&](const YAML::Node& node) {
                        api::ProfileRegistry::handle_by_name<ProfileReader>(
                            util::yaml::require_string(node, util::keys::name),
                            node,
                            this->logger,
                            bus,
                            this->executor,
                            tx_handler,
                            client);
                    });

                this->start_actions.emplace_back([tx_handler, client]() {
                    tx_handler->start(client);
                });
            }
        }
    }
}
