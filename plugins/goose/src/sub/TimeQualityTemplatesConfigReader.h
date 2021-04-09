// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_SUB_TIMEQUALITYTEMPLATESCONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_TIMEQUALITYTEMPLATESCONFIGREADER_H

#include <commonmodule/commonmodule.pb.h>
#include <yaml-cpp/yaml.h>
#include <memory>
#include <unordered_map>

namespace adapter {
namespace goose {

class TimeQualityTemplatesConfigReader
{
public:
    TimeQualityTemplatesConfigReader(const YAML::Node& node);
    ~TimeQualityTemplatesConfigReader() = default;

    const std::shared_ptr<commonmodule::TimeQuality> get(const std::string& id) const;

private:
    std::unordered_map<std::string, std::shared_ptr<commonmodule::TimeQuality>> m_templates;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_TIMEQUALITYTEMPLATESCONFIGREADER_H
