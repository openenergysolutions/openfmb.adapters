

#include "Plugin.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/generated/TypedModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>

#include <opendnp3/LogLevels.h>
#include <opendnp3/outstation/SimpleCommandHandler.h>

#include "dnp3/ConfigStrings.h"

#include "PointTracker.h"
#include "SubscribingConfigReadVisitor.h"
#include "SubscriptionHandler.h"

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace adapter {
namespace dnp3 {
    namespace outstation {

        using delayed_sub_t = std::function<void(const api::message_bus_t& bus, const std::shared_ptr<asiodnp3::IOutstation>& outstation)>;
        using delayed_sub_vector_t = std::vector<delayed_sub_t>;

        template <class T>
        struct ProfileReader {
            template <bool condition>
            using return_t = typename std::enable_if<condition, bool>::type;

            template <class U = T>
            static return_t<util::profile_info<U>::is_control>
            handle(const YAML::Node& node, const api::Logger& logger, const api::message_bus_t& bus, PointTracker& tracker, delayed_sub_vector_t& subscriptions)
            {
                throw api::Exception("DNP3 outstation plugin doesn't support control profiles");
            }

            template <class U = T>
            static return_t<!util::profile_info<U>::is_control>
            handle(const YAML::Node& node, const api::Logger& logger, const api::message_bus_t& bus, PointTracker& tracker, delayed_sub_vector_t& subscriptions)
            {
                SubscribingConfigReadVisitor<U> visitor(util::yaml::require(node, util::keys::mapping), tracker);
                util::visit(visitor);
                subscriptions.push_back(
                    [handlers = visitor.get_handlers(), mrid = visitor.get_primary_mrid()](const api::message_bus_t& bus, const std::shared_ptr<asiodnp3::IOutstation>& outstation) {
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

            PointTracker tracker;

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
                        tracker,
                        subscriptions);
                });

            OutstationStackConfig config(tracker.get_sizes());

            const auto protocol_node = util::yaml::require(node, keys::protocol);

            config.link.RemoteAddr = util::yaml::require_integer<uint16_t>(protocol_node, keys::master_address);
            config.link.LocalAddr = util::yaml::require_integer<uint16_t>(protocol_node, keys::outstation_address);

            const auto outstation = channel->AddOutstation(
                util::yaml::require_string(node, util::keys::name),
                // TODO - use an actual command handler once we support commands
                std::make_shared<opendnp3::SimpleCommandHandler>(opendnp3::CommandStatus::NOT_SUPPORTED),
                std::make_shared<opendnp3::DefaultOutstationApplication>(),
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
                asiopal::ChannelRetry::Default(),
                util::yaml::require_string(channel_node, keys::listen_adapter),
                util::yaml::require_integer<uint16_t>(channel_node, keys::port),
                nullptr // no channel listener
            );
        }
    }
}
}
