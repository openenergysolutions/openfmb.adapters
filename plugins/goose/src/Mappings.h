#ifndef OPENFMB_ADAPTER_GOOSE_MAPPINGS_H
#define OPENFMB_ADAPTER_GOOSE_MAPPINGS_H

#include <unordered_map>
#include "IPublishConfigBuilder.h"

namespace adapter
{
namespace goose
{

struct Mappings
{
    std::unordered_map<GoosePath, IPublishConfigBuilder::meas_handler_t<int64_t>> int64_handlers;
    std::unordered_map<GoosePath, IPublishConfigBuilder::meas_handler_t<float>> float_handlers;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_MAPPINGS_H
