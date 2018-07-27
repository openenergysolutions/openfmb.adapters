#ifndef OPENFMB_PLUGIN_TIMESCALEDB_PLUGIN_H
#define OPENFMB_PLUGIN_TIMESCALEDB_PLUGIN_H

#include "TimescaleDBArchiver.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/IPlugin.h"
#include "adapter-api/Logger.h"
#include "yaml-cpp/yaml.h"
#include <memory>

namespace adapter {
namespace timescaledb {

    class Plugin final : public IPlugin {
    public:
        Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);
        virtual ~Plugin();

        std::string name() const override;
        void start() override;

    private:
        Logger m_logger;
        std::shared_ptr<TimescaleDBArchiver> m_archiver;
    };
}
}

#endif
