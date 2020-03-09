
#include "dnp3/master/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>

#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <schema-util/Builder.h>

#include "ControlConfigWriteVisitor.h"
#include "ControlSchemaWriteVisitor.h"
#include "MeasurementConfigWriteVisitor.h"
#include "MeasurementSchemaWriteVisitor.h"

#include "../ConfigStrings.h"
#include "Plugin.h"

#include <iostream>

namespace adapter {
namespace dnp3 {
namespace master {

    template <typename T>
    struct SchemaWriter {
        static void handle(schema::OneOf& oneof)
        {
            using namespace adapter::schema;

            auto variant = Variant(
                {ConstantProperty{util::keys::name, T::descriptor()->name()}},
                {}
            );

            auto& props = variant.obj->properties;

            if (util::profile_info<T>::type == util::ProfileType::Control) {
                props.emplace_back(util::CommandPriorityMap::get_schema());
                props.emplace_back(
                    numeric_property<int64_t>(
                        util::keys::tolerance,
                        Required::yes,
                        "tolerance of the first point in a schedule (in milliseconds)",
                        5000,
                        Bound<int64_t>::from(0),
                        Bound<int64_t>::unused()
                    )
                );

                auto visitor = ControlSchemaWriteVisitor{};
                util::visit<T>(visitor);
                props.emplace_back(
                    object_property(
                        util::keys::mapping,
                        Required::yes,
                        "profile mapping",
                        visitor.get_schema()
                    )
                );
            }
            else {
                props.emplace_back(
                    string_property(
                        keys::poll_name,
                        Required::yes,
                        "name of the poll that retrieves the values for this profile",
                        "integrity_poll",
                        StringFormat::None
                    )
                );

                auto visitor = MeasurementSchemaWriteVisitor{};
                util::visit<T>(visitor);
                props.emplace_back(
                    object_property(
                        util::keys::mapping,
                        Required::yes,
                        "profile mapping",
                        visitor.get_schema()
                    )
                );
            }

            oneof.variants.push_back(variant);
        }
    };

    template <class T>
    struct WriterHandler {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;

            if (util::profile_info<T>::type == util::ProfileType::Control) {
                util::CommandPriorityMap::write_default_list(out);
                out << YAML::Key << util::keys::tolerance << YAML::Value << 5000;
            }
            else {
                out << YAML::Key << keys::poll_name << YAML::Value << "integrity_poll";
            }

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
            out << YAML::EndMap;
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
                keys::masters,
                schema::Required::yes,
                "DNP3 masters",
                util::yaml::get_template_schema("dnp3-master-template.yaml")
            )
        });
    }

    std::vector<schema::property_ptr_t> PluginFactory::get_session_schema() const
    {
        using namespace adapter::schema;

        auto one_of = OneOf{};
        api::ProfileRegistry::handle_all<SchemaWriter>(one_of);

        return {
            string_property(
                util::keys::name,
                Required::yes,
                "name pre-pended to each log message",
                "device1",
                StringFormat::None
            ),
            object_property(
                keys::channel,
                Required::yes,
                "DNP3 channel configuration",
                Object({
                    string_property(
                        keys::adapter,
                        Required::yes,
                        "network adapter to use",
                        "0.0.0.0",
                        StringFormat::IPv4
                    ),
                    string_property(
                        keys::outstation_ip,
                        Required::yes,
                        "outstation IP address",
                        "127.0.0.1",
                        StringFormat::IPv4
                    ),
                    numeric_property<uint16_t>(
                        keys::port,
                        Required::yes,
                        "TCP port",
                        20000,
                        Bound<uint16_t>::from(1),
                        Bound<uint16_t>::from(65535)
                    )
                })
            ),
            object_property(
                keys::protocol,
                Required::yes,
                "DNP3 specific configuration",
                Object({
                    numeric_property<uint16_t>(
                        keys::master_address,
                        Required::yes,
                        "DNP3 master link-layer address",
                        1,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<uint16_t>(
                        keys::outstation_address,
                        Required::yes,
                        "DNP3 outstation link-layer address",
                        1,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    bool_property(
                        keys::unsolicited_class_1,
                        Required::yes,
                        "enable class 1 unsolicited responses",
                        false
                    ),
                    bool_property(
                        keys::unsolicited_class_2,
                        Required::yes,
                        "enable class 2 unsolicited responses",
                        false
                    ),
                    bool_property(
                        keys::unsolicited_class_3,
                        Required::yes,
                        "enable class 3 unsolicited responses",
                        false
                    )
                })
            ),
            array_property(
                keys::polls,
                Required::yes,
                "periodic polls to execute",
                Object({
                    string_property(
                        util::keys::name,
                        Required::yes,
                        "name associated with that poll",
                        "integrity_poll",
                        StringFormat::None
                    ),
                    numeric_property<uint16_t>(
                        keys::poll_interval,
                        Required::yes,
                        "poll interval (in milliseconds)",
                        5000,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::unused()
                    )
                },
                OneOf({
                    Variant(
                        {ConstantProperty(keys::poll_type, keys::poll_type_integrity)},
                        {}
                    ),
                    Variant(
                        {ConstantProperty(keys::poll_type, keys::poll_type_event)},
                        {
                            bool_property(
                                keys::poll_class1,
                                Required::yes,
                                "ask for class 1 events",
                                true
                            ),
                            bool_property(
                                keys::poll_class2,
                                Required::yes,
                                "ask for class 2 events",
                                true
                            ),
                            bool_property(
                                keys::poll_class3,
                                Required::yes,
                                "ask for class 3 events",
                                true
                            )
                        }
                    )
                }))
            ),
            array_property(
                util::keys::profiles,
                Required::yes,
                "profiles to map",
                Object({}, one_of)
            )
        };
    }

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
        out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
        out << YAML::Key << keys::masters;
        util::yaml::write_default_template_config(out, "dnp3-master-template.yaml");
    }

    std::unique_ptr<api::IPlugin>
    PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(
            logger,
            node,
            std::move(bus));
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        if (profiles.empty()) {
            throw api::Exception(
                "You must specify at least one profile when generating DNP3 master session configuration");
        }

        out << YAML::BeginMap;
        out << YAML::Key << util::keys::name << YAML::Value << "device1";
        out << YAML::Comment("This name is pre-pended to each log message");

        out << YAML::Key << keys::channel;
        out << YAML::BeginMap;
        out << YAML::Key << keys::adapter << YAML::Value << "0.0.0.0" << YAML::Comment("Override to use a specific adapter");
        out << YAML::Key << keys::outstation_ip << YAML::Value << "127.0.0.1";
        out << YAML::Key << keys::port << YAML::Value << 20000;
        out << YAML::EndMap;

        out << YAML::Key << keys::protocol;
        out << YAML::BeginMap;
        out << YAML::Key << keys::master_address << YAML::Value << 1;
        out << YAML::Key << keys::outstation_address << YAML::Value << 10;
        out << YAML::Key << keys::unsolicited_class_1 << YAML::Value << false;
        out << YAML::Key << keys::unsolicited_class_2 << YAML::Value << false;
        out << YAML::Key << keys::unsolicited_class_3 << YAML::Value << false;
        out << YAML::EndMap;

        out << YAML::Key << keys::polls;
        out << YAML::BeginSeq;
        out << YAML::BeginMap;
        out << YAML::Key << util::keys::name << YAML::Value << "integrity_poll";
        out << YAML::Key << keys::poll_type << YAML::Value << keys::poll_type_integrity;
        out << YAML::Key << keys::poll_interval << YAML::Value << "5000";
        out << YAML::EndMap;
        out << YAML::BeginMap;
        out << YAML::Key << util::keys::name << YAML::Value << "event_poll";
        out << YAML::Key << keys::poll_type << YAML::Value << keys::poll_type_event;
        out << YAML::Key << keys::poll_interval << YAML::Value << "2000";
        out << YAML::Key << keys::poll_class1 << YAML::Value << true;
        out << YAML::Key << keys::poll_class2 << YAML::Value << true;
        out << YAML::Key << keys::poll_class3 << YAML::Value << true;
        out << YAML::EndMap;
        out << YAML::EndSeq;

        out << YAML::Key << util::keys::profiles;
        out << YAML::BeginSeq;
        write_profile_configs(out, profiles);
        out << YAML::EndSeq;

        out << YAML::EndMap;
    }

}
}
}
