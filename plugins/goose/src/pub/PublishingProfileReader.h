#ifndef OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPROFILEREADER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPROFILEREADER_H

#include "pub/IPublishConfigBuilder.h"
#include "pub/PubGooseStructureConfigReader.h"
#include "pub/PublishingConfigReadVisitor.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/config/generated/TypedModelVisitors.h"
#include "yaml-cpp/yaml.h"

namespace adapter {
namespace goose {

    template <typename T>
    class PublishingProfileReader {
    public:
        static void handle(const YAML::Node& node, message_bus_t bus, PubGooseStructureConfigReader& builder)
        {
            PublishingConfigReadVisitor<T> visitor(node, std::move(bus), builder);
            visit(visitor);
        }
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPROFILEREADER_H
