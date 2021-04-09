// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "sub/TimeQualityTemplatesConfigReader.h"

#include "ConfigStrings.h"
#include <adapter-util/util/YAMLUtil.h>
#include <adapter-util/config/YAMLGetters.h>

namespace adapter {
namespace goose {

TimeQualityTemplatesConfigReader::TimeQualityTemplatesConfigReader(const YAML::Node& node)
{
    util::yaml::foreach(node, [this](const YAML::Node& quality_node) {
        auto id = util::yaml::require_string(quality_node, keys::timequality_id);

        auto quality = std::make_shared<commonmodule::TimeQuality>();
        quality->set_clockfailure(util::yaml::require(quality_node, keys::timequality_clock_failure).as<bool>());
        quality->set_clocknotsynchronized(util::yaml::require(quality_node, keys::timequality_clock_not_synchronized).as<bool>());
        quality->set_leapsecondsknown(util::yaml::require(quality_node, keys::timequality_leap_seconds_known).as<bool>());
        quality->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(util::yaml::get::enum_value(quality_node, keys::timequality_time_accuracy, *commonmodule::TimeAccuracyKind_descriptor())));
        
        auto result = m_templates.insert({ id, quality });
        if(!result.second)
        {
            throw api::Exception{"Time quality template id \"" + id + "\" already used."};
        }
    });
}

const std::shared_ptr<commonmodule::TimeQuality> TimeQualityTemplatesConfigReader::get(const std::string& id) const
{
    auto result = m_templates.find(id);
    if(result == m_templates.end())
    {
        throw api::Exception{"Cannot find time quality template with id \"" + id + "\"."};
    }
    return result->second;
}

} // namespace goose
} // namespace adapter
