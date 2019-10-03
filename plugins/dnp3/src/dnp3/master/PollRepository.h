
#ifndef OPENFMB_ADAPTER_DNP3_MASTER_POLLREPOSITORY_H
#define OPENFMB_ADAPTER_DNP3_MASTER_POLLREPOSITORY_H

#include "dnp3/master/SOEHandler.h"

#include <opendnp3/master/IMaster.h>
#include <yaml-cpp/yaml.h>

#include <memory>
#include <string>
#include <unordered_map>

namespace adapter {
namespace dnp3 {
namespace master {

class PollRepository
{
public:
    PollRepository(std::shared_ptr<SOEHandler> unsolicited_soe_handler);
    virtual ~PollRepository() = default;

    void load(const YAML::Node& node, opendnp3::IMaster& master);
    std::shared_ptr<SOEHandler> get(const std::string& name) const;

private:
    std::shared_ptr<SOEHandler> add_handler(const std::string& name);

    std::unordered_map<std::string, std::shared_ptr<SOEHandler>> m_handlers;
};

}
}
}

#endif
