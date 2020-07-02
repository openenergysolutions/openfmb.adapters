#include "dnp3/master/PollRepository.h"

#include "dnp3/ConfigStrings.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/YAMLUtil.h>

#include "ConfigReaders.h"

namespace adapter {
namespace dnp3 {
namespace master {

PollRepository::PollRepository(std::shared_ptr<SOEHandler> unsolicited_soe_handler)
{
    m_handlers.insert({keys::unsolicited, unsolicited_soe_handler});
}

void PollRepository::load(const YAML::Node& node, opendnp3::IMaster& master)
{
    util::yaml::foreach(node, [this, &master](const YAML::Node& poll_node) {
        const auto name = util::yaml::require_string(poll_node, util::keys::name);
        const auto interval_ms = util::yaml::require_integer<int>(poll_node, keys::poll_interval);        
        const auto class_field = read_class_field(util::yaml::require(poll_node, keys::classes));
        master.AddClassScan(class_field, opendnp3::TimeDuration::Milliseconds(interval_ms), add_handler(name));
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
