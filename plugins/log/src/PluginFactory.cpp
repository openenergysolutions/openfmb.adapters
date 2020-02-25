
#include "log/PluginFactory.h"

#include "ConfigKeys.h"
#include "PluginBase.h"

#include <adapter-api/Exception.h>
#include <adapter-util/config/generated/Profile.h>
#include <adapter-util/ConfigStrings.h>
#include <schema-util/Builder.h>

namespace adapter {
namespace log {

    schema::Object PluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::bool_property(
                keys::log_debug_string,
                schema::Required::yes,
                "log the entire protobuf debug string for every profile",
                true
            ),
            schema::array_property(
                keys::filters,
                schema::Required::yes,
                "filters to apply before printing the values",
                schema::Object({
                    schema::enum_property<util::Profile>(
                        schema::Required::yes,
                        "OpenFMB profile to filter",
                        util::Profile::Value::MeterReadingProfile
                    ),
                    schema::string_property(
                        util::keys::name,
                        schema::Required::yes,
                        "conducting equipment name",
                        "",
                        schema::StringFormat::None
                    ),
                    schema::string_property(
                        util::keys::path,
                        schema::Required::yes,
                        "file to which values will be appended",
                        "values.txt",
                        schema::StringFormat::None
                    ),
                    schema::bool_property(
                        keys::print_alias,
                        schema::Required::yes,
                        "print the alias associated with the value",
                        true
                    ),
                    schema::bool_property(
                        keys::log_all_values,
                        schema::Required::yes,
                        "print all the values of this conducting equipment to stdout",
                        false
                    ),
                    schema::array_property(
                        keys::values,
                        schema::Required::yes,
                        "list of values to extract from the profile",
                        schema::Object({
                            schema::string_property(
                                keys::tag,
                                schema::Required::yes,
                                "path of the value in the profile",
                                "meterReading.readingMMXU.W.net.cVal.mag.f.value",
                                schema::StringFormat::None
                            ),
                            schema::string_property(
                                keys::alias,
                                schema::Required::yes,
                                "alias that will optionally be printed with the value",
                                "W",
                                schema::StringFormat::None
                            ),
                            schema::numeric_property<int64_t>(
                                keys::digits,
                                schema::Required::yes,
                                "number of digits to keep",
                                0,
                                schema::Bound<int64_t>::from(0),
                                schema::Bound<int64_t>::unused()
                            )
                        })
                    )
                })
            )
       });
    }

    void write_tag_item(YAML::Emitter& out, const char* tag, const char* alias, int digits)
    {
        out << YAML::BeginMap;
        out << YAML::Key << keys::tag << YAML::Value << tag;
        out << YAML::Key << keys::alias << YAML::Value << alias;
        out << YAML::Key << keys::digits << YAML::Value << digits;
        out << YAML::EndMap;
    }

    void write_default_tag_list(YAML::Emitter& out)
    {
        out << YAML::BeginSeq;

        write_tag_item(out, "meterReading.readingMMXU.W.net.cVal.mag.f.value", "W", 0);
        write_tag_item(out, "meterReading.readingMMXU.PPV.phsAB.cVal.mag.f.value", "Vab", 1);
        write_tag_item(out, "meterReading.readingMMXU.PPV.phsBC.cVal.mag.f.value", "Vbc", 1);
        write_tag_item(out, "meterReading.readingMMXU.PPV.phsCA.cVal.mag.f.value", "Vca", 1);
        write_tag_item(out, "meterReading.readingMMXU.Hz.mag.f.value", "Hz", 3);

        out << YAML::EndSeq;
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::log_debug_string << YAML::Value << true << YAML::Comment("log the entire protobuf debug string for every profile");

        out << YAML::Key << keys::filters;
        out << YAML::BeginSeq;

        out << YAML::BeginMap;
        out << YAML::Key << util::keys::profile << YAML::Value << metermodule::MeterReadingProfile::descriptor()->name();
        out << YAML::Key << util::keys::name << YAML::Value << "" << YAML::Comment("conducting equipment name");
        out << YAML::Key << util::keys::path << YAML::Value << "values.txt" << YAML::Comment("file to which values will be appended");
        out << YAML::Key << keys::print_alias << YAML::Value << true;
        out << YAML::Key << keys::log_all_values << YAML::Value << false;
        out << YAML::Key << keys::values;
        write_default_tag_list(out);
        out << YAML::EndMap;

        out << YAML::EndSeq;
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        throw api::Exception("Log adapter does not support writing session configuration");
    }
}
}
