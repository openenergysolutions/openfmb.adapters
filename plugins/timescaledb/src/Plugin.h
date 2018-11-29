#ifndef OPENFMB_PLUGIN_TIMESCALEDB_PLUGIN_H
#define OPENFMB_PLUGIN_TIMESCALEDB_PLUGIN_H

#include "TimescaleDBArchiver.h"
#include "yaml-cpp/yaml.h"
#include <adapter-api/IMessageBus.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>
#include <memory>

namespace adapter {
namespace timescaledb {

    class Plugin final : public api::IPlugin {
    public:
        Plugin(const YAML::Node& node, const api::Logger& logger, api::IMessageBus& bus);
        virtual ~Plugin();

        std::string name() const override;
        void start() override;

    private:
        api::Logger m_logger;
        std::shared_ptr<TimescaleDBArchiver> m_archiver;
    };
}
}

#endif
