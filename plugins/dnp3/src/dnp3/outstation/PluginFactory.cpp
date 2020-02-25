
#include "dnp3/outstation/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>

#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <schema-util/Builder.h>

#include "../ConfigStrings.h"

#include "ControlConfigWriteVisitor.h"
#include "DefaultVariations.h"
#include "MeasurementConfigWriteVisitor.h"
#include "Plugin.h"

#include <iostream>

using namespace opendnp3;

namespace adapter {
namespace dnp3 {
    namespace outstation {

        template <class T>
        struct WriterHandler {
            static void handle(YAML::Emitter& out)
            {
                std::cout << "Generating: " << T::descriptor()->name() << std::endl;

                out << YAML::Key << util::keys::mapping << YAML::Comment("profile model starts here");
                out << YAML::BeginMap;

                if (util::profile_info<T>::type == util::ProfileType::Control) {
                    ControlConfigWriteVisitor visitor(out);
                    util::visit<T>(visitor);
                } else {
                    MeasurementConfigWriteVisitor visitor(out);
                    util::visit<T>(visitor);
                }

                out << YAML::EndMap;
            }
        };

        void write_profile_configs(YAML::Emitter& out, const api::profile_vec_t& profiles)
        {
            for (const auto& profile : profiles) {

                out << YAML::BeginMap;
                out << YAML::Key << util::keys::name << YAML::Value << profile;

                api::ProfileRegistry::handle_by_name<WriterHandler>(profile, out);
            }
        }

        schema::Object PluginFactory::get_plugin_schema() const
        {
            return schema::Object({
                schema::numeric_property<int64_t>(
                    keys::thread_pool_size,
                    schema::Required::yes,
                    "number of threads in the pool (defaults to std::thread::hardware_concurrency() if <= 0",
                    1,
                    schema::Bound<int64_t>::from(0),
                    schema::Bound<int64_t>::unused()
                ),
                schema::array_property(
                    keys::outstations,
                    schema::Required::yes,
                    "DNP3 outstations",
                    util::yaml::get_template_schema("dnp3-outstation-template.yaml")
                )
            });
        }

        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
            out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
            out << YAML::Key << keys::outstations;
            util::yaml::write_default_template_config(out, "dnp3-outstation-template.yaml");
        }

        std::unique_ptr<api::IPlugin>
        PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
        {
            return std::make_unique<Plugin>(logger, node, bus);
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
        {
            // use this to get some of the defaults for opendnp3
            const opendnp3::OutstationParams config{};

            if (profiles.empty()) {
                throw api::Exception(
                    "You must specify at least one profile when generating DNP3 outstation session configuration");
            }

            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << "device1";
            out << YAML::Comment("This name is pre-pended to each log message");

            out << YAML::Key << keys::channel;
            out << YAML::BeginMap;
            out << YAML::Key << keys::listen_adapter << YAML::Value << "127.0.0.1";
            out << YAML::Key << keys::port << YAML::Value << 20000;
            out << YAML::EndMap;

            out << YAML::Key << keys::protocol;

            out << YAML::BeginMap;
            out << YAML::Key << keys::master_address << YAML::Value << 1;
            out << YAML::Key << keys::outstation_address << YAML::Value << 10;
            out << YAML::Key << keys::enable_unsolicited << YAML::Value << config.allowUnsolicited;
            out << YAML::Key << keys::confirm_timeout_ms << YAML::Value << std::chrono::duration_cast<std::chrono::milliseconds>(config.unsolConfirmTimeout.value).count();

            out << YAML::Key << keys::default_static_variations;
            out << YAML::BeginMap;
            out << YAML::Key << keys::binary_input << YAML::Value << StaticBinaryVariationSpec::to_string(StaticBinaryVariation::Group1Var2);
            out << YAML::Key << keys::analog_input << YAML::Value << StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var1);
            out << YAML::Key << keys::counter << YAML::Value << StaticCounterVariationSpec::to_string(StaticCounterVariation::Group20Var1);
            out << YAML::EndMap;

            out << YAML::Key << keys::default_event_variations;
            out << YAML::BeginMap;
            out << YAML::Key << keys::binary_input << YAML::Value << EventBinaryVariationSpec::to_string(EventBinaryVariation::Group2Var2);
            out << YAML::Key << keys::analog_input << YAML::Value << EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var1);
            out << YAML::Key << keys::counter << YAML::Value << EventCounterVariationSpec::to_string(EventCounterVariation::Group22Var1);
            out << YAML::EndMap;

            out << YAML::EndMap;

            out << YAML::Key << util::keys::profiles;
            out << YAML::BeginSeq;
            write_profile_configs(out, profiles);
            out << YAML::EndSeq;

            out << YAML::EndMap;
        }
    }
}
}