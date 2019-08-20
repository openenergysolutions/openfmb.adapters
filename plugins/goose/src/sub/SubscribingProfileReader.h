#ifndef OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPROFILEREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPROFILEREADER_H

#include "ConfigStrings.h"
#include "adapter-util/config/generated/TypedModelVisitors.h"
#include "goose-cpp/control_block/IControlBlockPublisher.h"
#include "sub/QualityTemplatesConfigReader.h"
#include "sub/TimeQualityTemplatesConfigReader.h"
#include "sub/SubGooseStructureConfigReader.h"
#include "sub/SubscribingConfigReadVisitor.h"
#include "yaml-cpp/yaml.h"
#include <adapter-api/IMessageBus.h>
#include <adapter-api/Logger.h>
#include <memory>

namespace adapter {
namespace goose {

    template <typename T>
    class SubscribingProfileReader {
    public:
        static void handle(const YAML::Node& node, api::Logger logger, api::message_bus_t bus, std::shared_ptr<goose_cpp::IControlBlockPublisher> cb_publisher)
        {
            QualityTemplatesConfigReader quality_templates{util::yaml::require(node, keys::quality_templates)};
            TimeQualityTemplatesConfigReader time_quality_templates{util::yaml::require(node, keys::timequality_templates)};

            SubscribingConfigReadVisitor<T> visitor(util::yaml::require(node, keys::mapping), logger, quality_templates, time_quality_templates);
            util::visit(visitor);

            SubGooseStructureConfigReader<T> goose_reader{ util::yaml::require(node, keys::goose_struct), visitor };
            goose_reader.subscribe(*bus, cb_publisher, logger);
        }
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPROFILEREADER_H
