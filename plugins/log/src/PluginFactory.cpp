
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

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

}
}
