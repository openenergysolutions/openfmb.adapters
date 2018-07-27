
#ifndef OPENFMB_ADAPTER_LOGGERCONFIG_H
#define OPENFMB_ADAPTER_LOGGERCONFIG_H

#include <adapter-api/Logger.h>

#include <yaml-cpp/yaml.h>

namespace adapter {

namespace logging {

    Logger create_logger_from_yaml(const YAML::Node& root);

    void write_default_logging_config(YAML::Emitter& out);
}
}

#endif //OPENFMB_ADAPTER_LOGGERCONFIG_H
