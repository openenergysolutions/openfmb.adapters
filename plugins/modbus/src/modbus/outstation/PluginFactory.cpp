#include "modbus/outstation/PluginFactory.h"

#include <iostream>

namespace adapter {
namespace modbus {
namespace outstation {

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        /*
        out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
        out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");

        out << YAML::Key << keys::sessions << YAML::Comment("list of session configuration files");
        util::yaml::write_default_template_config(out, "modbus-master-config.yaml");
        */
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return nullptr;
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        out << YAML::BeginMap;

        out << YAML::EndMap;
    }

}
}
}
