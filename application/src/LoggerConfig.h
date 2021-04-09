// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_LOGGERCONFIG_H
#define OPENFMB_ADAPTER_LOGGERCONFIG_H

#include <adapter-api/Logger.h>
#include <schema-util/IProperty.h>

#include <yaml-cpp/yaml.h>

namespace adapter {

namespace logging {

    api::Logger create_logger_from_yaml(const YAML::Node& root);

    void write_default_logging_config(YAML::Emitter& out);

    schema::property_ptr_t get_logging_config_schema();
}
}

#endif //OPENFMB_ADAPTER_LOGGERCONFIG_H
