#ifndef OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPROFILEREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPROFILEREADER_H

#include "sub/SubscribingConfigReadVisitor.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/Logger.h"
#include "adapter-api/config/generated/TypedModelVisitors.h"
#include "goose-cpp/control_block/IControlBlockPublisher.h"
#include "yaml-cpp/yaml.h"
#include <memory>

namespace adapter {
namespace goose {

    template <typename T>
    class SubscribingProfileReader {
    public:
        static void handle(const YAML::Node& node, Logger logger, message_bus_t bus, std::shared_ptr<goose_cpp::IControlBlockPublisher> cb_publisher)
        {
            SubscribingConfigReadVisitor<T> visitor(node, logger);
            visit(visitor);
            visitor.subscribe(*bus, cb_publisher);
        }
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPROFILEREADER_H
