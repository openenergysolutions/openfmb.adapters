#ifndef OPENFMB_ADAPTER_GOOSE_MAPPINGS_H
#define OPENFMB_ADAPTER_GOOSE_MAPPINGS_H

#include "IPublishConfigBuilder.h"
#include <unordered_map>

namespace adapter {
namespace goose {

    struct Mappings {
        std::unordered_map<GoosePath, IPublishConfigBuilder::meas_handler_t<bool>> bool_handlers;
        std::unordered_map<GoosePath, IPublishConfigBuilder::meas_handler_t<int32_t>> int32_handlers;
        std::unordered_map<GoosePath, IPublishConfigBuilder::meas_handler_t<int64_t>> int64_handlers;
        std::unordered_map<GoosePath, IPublishConfigBuilder::meas_handler_t<float>> float_handlers;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_MAPPINGS_H
