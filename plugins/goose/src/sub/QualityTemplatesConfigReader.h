// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_SUB_QUALITYTEMPLATESCONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_QUALITYTEMPLATESCONFIGREADER_H

#include <commonmodule/commonmodule.pb.h>
#include <yaml-cpp/yaml.h>
#include <memory>
#include <unordered_map>

namespace adapter {
namespace goose {

class QualityTemplatesConfigReader
{
public:
    QualityTemplatesConfigReader(const YAML::Node& node);
    ~QualityTemplatesConfigReader() = default;

    const std::shared_ptr<commonmodule::Quality> get(const std::string& id) const;

private:
    std::unordered_map<std::string, std::shared_ptr<commonmodule::Quality>> m_templates;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_QUALITYTEMPLATESCONFIGREADER_H
