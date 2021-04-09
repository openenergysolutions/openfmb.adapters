// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPROFILEREADER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPROFILEREADER_H

#include "adapter-util/config/generated/TypedModelVisitors.h"
#include "pub/IPublishConfigBuilder.h"
#include "pub/PubGooseStructureConfigReader.h"
#include "pub/PublishingConfigReadVisitor.h"
#include "yaml-cpp/yaml.h"
#include <adapter-api/IMessageBus.h>

namespace adapter {
namespace goose {

    template <typename T>
    class PublishingProfileReader {
    public:
        static void handle(const YAML::Node& node, api::message_bus_t bus, PubGooseStructureConfigReader& builder)
        {
            PublishingConfigReadVisitor<T> visitor(node, std::move(bus), builder);
            visit(visitor);
        }
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPROFILEREADER_H
