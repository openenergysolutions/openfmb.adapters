#ifndef OPENFMB_ADAPTER_SUB_BUILDINGFUNCTION_H
#define OPENFMB_ADAPTER_SUB_BUILDINGFUNCTION_H

#include "goose-cpp/messages/Dataset.h"
#include <functional>

namespace adapter {
namespace goose {

template <typename T>
using building_fn_t = std::function<void(const T&, goose_cpp::Dataset&)>;

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_SUB_BUILDINGFUNCTION_H
