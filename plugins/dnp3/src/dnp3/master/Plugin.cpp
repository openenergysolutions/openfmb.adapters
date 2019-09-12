
#include "Plugin.h"

#include <opendnp3/master/DefaultMasterApplication.h>
#include <opendnp3/LogLevels.h>

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/TypedModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <adapter-util/util/YAMLUtil.h>

#include "dnp3/ConfigStrings.h"
#include "dnp3/master/CommandSequenceExecutor.h"
#include "dnp3/master/PollRepository.h"
#include "dnp3/master/PublishingConfigReadVisitor.h"
#include "dnp3/master/SubscribingConfigReadVisitor.h"

#include <stdexcept>

using namespace opendnp3;

namespace adapter {
namespace dnp3 {
    namespace master {

        template <class T>
        struct ProfileReader {
            template <bool condition>
            using return_t = typename std::enable_if<condition, bool>::type;

            template <class U = T>
            static return_t<util::profile_info<U>::is_control>
            handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus,
                   const PollRepository&, std::shared_ptr<ICommandSequenceExecutor> executor)
            {
                util::CommandPriorityMap priority_map(util::yaml::require(node, util::keys::command_order));
                SubscribingConfigReadVisitor<T> visitor(util::yaml::require(node, util::keys::mapping),
                                                        priority_map);
                util::visit(visitor);
                visitor.subscribe(logger, *bus, std::move(executor));
                return true;
            }

            template <class U = T>
            static return_t<!util::profile_info<U>::is_control>
            handle(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus,
                   const PollRepository& poll_repo, std::shared_ptr<ICommandSequenceExecutor>)
            {
                auto poll_name = util::yaml::require_string(node, keys::poll_name);
                auto builder = poll_repo.get(poll_name);

                PublishingConfigReadVisitor<T> visitor(util::yaml::require(node, util::keys::mapping),
                                                       std::move(bus), builder);
                util::visit(visitor);
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
                util::yaml::require(node, keys::masters),
                this->logger,
                [&](const YAML::Node& config) {
                    this->add_master(config, bus);
                });
        }

        void Plugin::add_master(const YAML::Node& node, api::message_bus_t bus)
        {
            const auto channel = this->create_channel(node);

            MasterStackConfig config;

            const auto protocol = util::yaml::require(node, keys::protocol);

            config.link.LocalAddr = util::yaml::require_integer<uint16_t>(protocol, keys::master_address);
            config.link.RemoteAddr = util::yaml::require_integer<uint16_t>(protocol, keys::outstation_address);

            // actively disable unsolicited mode, and don't re-enable it after integrity scan
            config.master.disableUnsolOnStartup = true;
            config.master.unsolClassMask = ClassField::None();

            const auto unsolicited_handler = std::make_shared<SOEHandler>();
            const auto executor = std::make_shared<CommandSequenceExecutor>(this->logger);

            auto master = channel->AddMaster(
                util::yaml::require(node, util::keys::name).as<std::string>(),
                unsolicited_handler,
                DefaultMasterApplication::Create(),
                config);

            PollRepository poll_repo(unsolicited_handler);
            poll_repo.load(util::yaml::require(node, keys::polls), *master);

            const auto profiles = util::yaml::require(node, util::keys::profiles);

            util::yaml::foreach (
                profiles,
                [&](const YAML::Node& node) {
                    api::ProfileRegistry::handle_by_name<ProfileReader>(
                        util::yaml::require_string(node, util::keys::name),
                        node,
                        logger,
                        bus,
                        poll_repo,
                        executor);
                });

            // start allowing the executor to dispatch controls
            executor->start(master);

            this->masters.push_back(master);
        }

        void Plugin::start()
        {
            for (const auto& master : this->masters) {
                master->Enable();
            }
        }

        Plugin::channel_t Plugin::create_channel(const YAML::Node& node)
        {
            const auto channel = util::yaml::require(node, keys::channel);

            return this->manager.AddTCPClient(
                util::yaml::require_string(node, util::keys::name),
                opendnp3::levels::NORMAL,
                ChannelRetry::Default(),
                { IPEndpoint{
                    util::yaml::require_string(channel, keys::outstation_ip),
                    util::yaml::require_integer<uint16_t>(channel, keys::port)
                } },
                util::yaml::require_string(channel, keys::adapter),
                nullptr // no channel listener
            );
        }
    }
}
}
