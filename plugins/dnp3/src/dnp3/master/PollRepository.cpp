#include "dnp3/master/PollRepository.h"

#include "dnp3/ConfigStrings.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/YAMLUtil.h>

namespace adapter {
namespace dnp3 {
namespace master {

PollRepository::PollRepository(std::shared_ptr<SOEHandler> unsolicited_soe_handler)
{
    m_handlers.insert({keys::unsolicited_poll_name, unsolicited_soe_handler});
}

void PollRepository::load(const YAML::Node& node, opendnp3::IMaster& master)
{
    util::yaml::foreach(node, [this, &master](const YAML::Node& poll_node) {
        const auto name = util::yaml::require_string(poll_node, util::keys::name);
        const auto interval_ms = util::yaml::require_integer<int>(poll_node, keys::poll_interval);
        const auto type = util::yaml::require_string(poll_node, keys::poll_type);
        if(type == keys::poll_type_integrity)
        {
            auto handler = add_handler(name);
            master.AddClassScan(opendnp3::ClassField::AllClasses(), opendnp3::TimeDuration::Milliseconds(interval_ms), handler);
        }
        else if(type == keys::poll_type_event)
        {
            auto class_field = opendnp3::ClassField::None();
            if(util::yaml::require(poll_node, keys::poll_class1).as<bool>()) class_field.Set(opendnp3::PointClass::Class1);
            if(util::yaml::require(poll_node, keys::poll_class2).as<bool>()) class_field.Set(opendnp3::PointClass::Class2);
            if(util::yaml::require(poll_node, keys::poll_class3).as<bool>()) class_field.Set(opendnp3::PointClass::Class3);

            auto handler = add_handler(name);
            master.AddClassScan(class_field, opendnp3::TimeDuration::Milliseconds(interval_ms), handler);
        }
        else
        {
            throw api::Exception("Invalid poll type. Expected ", keys::poll_type_integrity, " or ", keys::poll_type_event, ", got ", type, " (line: ", poll_node.Mark().line, ")");
        }
    });
}

std::shared_ptr<SOEHandler> PollRepository::get(const std::string& name) const
{
    auto it = m_handlers.find(name);
    if(it == m_handlers.end())
    {
        throw api::Exception("Poll does not exist. ID: ", name);
    }
    return it->second;
}

std::shared_ptr<SOEHandler> PollRepository::add_handler(const std::string& name)
{
    auto handler = std::make_shared<SOEHandler>();
    auto result = m_handlers.insert({name, handler});
    if(!result.second)
    {
        throw api::Exception("Duplicate poll name: ", name);
    }

    return handler;
}

}
}
}
