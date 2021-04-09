// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "sub/QualityTemplatesConfigReader.h"

#include "ConfigStrings.h"
#include <adapter-util/util/YAMLUtil.h>
#include <adapter-util/config/YAMLGetters.h>

namespace adapter {
namespace goose {

QualityTemplatesConfigReader::QualityTemplatesConfigReader(const YAML::Node& node)
{
    util::yaml::foreach(node, [this](const YAML::Node& quality_node) {
        auto id = util::yaml::require_string(quality_node, keys::quality_id);

        auto quality = std::make_shared<commonmodule::Quality>();
        quality->set_validity(static_cast<commonmodule::ValidityKind>(util::yaml::get::enum_value(quality_node, keys::quality_validity, *commonmodule::ValidityKind_descriptor())));

        auto details = quality->mutable_detailqual();
        details->set_overflow(util::yaml::require(quality_node, keys::quality_overflow).as<bool>());
        details->set_outofrange(util::yaml::require(quality_node, keys::quality_outofrange).as<bool>());
        details->set_badreference(util::yaml::require(quality_node, keys::quality_badreference).as<bool>());
        details->set_oscillatory(util::yaml::require(quality_node, keys::quality_oscillatory).as<bool>());
        details->set_failure(util::yaml::require(quality_node, keys::quality_failure).as<bool>());
        details->set_olddata(util::yaml::require(quality_node, keys::quality_olddata).as<bool>());
        details->set_inconsistent(util::yaml::require(quality_node, keys::quality_inconsistent).as<bool>());
        details->set_inaccurate(util::yaml::require(quality_node, keys::quality_inaccurate).as<bool>());

        quality->set_source(static_cast<commonmodule::SourceKind>(util::yaml::get::enum_value(quality_node, keys::quality_source, *commonmodule::SourceKind_descriptor())));
        quality->set_test(util::yaml::require(quality_node, keys::quality_test).as<bool>());
        quality->set_operatorblocked(util::yaml::require(quality_node, keys::quality_operatorblocked).as<bool>());
        
        auto result = m_templates.insert({ id, quality });
        if(!result.second)
        {
            throw api::Exception{"Quality template id \"" + id + "\" already used."};
        }
    });
}

const std::shared_ptr<commonmodule::Quality> QualityTemplatesConfigReader::get(const std::string& id) const
{
    auto result = m_templates.find(id);
    if(result == m_templates.end())
    {
        throw api::Exception{"Cannot find quality template with id \"" + id + "\"."};
    }
    return result->second;
}

} // namespace goose
} // namespace adapter
