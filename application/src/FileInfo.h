// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_FILEINFO_H
#define OPENFMB_ADAPTER_FILEINFO_H

#include <adapter-api/Logger.h>
#include <schema-util/IProperty.h>

#include <yaml-cpp/yaml.h>

namespace adapter {

namespace file {

    void write_default_file_info_config(YAML::Emitter& out);

    schema::property_ptr_t get_file_info_config_schema();
}
}

#endif //OPENFMB_ADAPTER_FILEINFO_H