#ifndef OPENFMB_ADAPTER_GOOSE_IPUBLISHCONFIGBUILDER_H
#define OPENFMB_ADAPTER_GOOSE_IPUBLISHCONFIGBUILDER_H

#include <functional>
#include "GoosePath.h"

namespace adapter
{
namespace goose
{

class IPublishConfigBuilder
{
public:
    template<typename T>
    using meas_handler_t = std::function<void(const T&)>;
    using action_t = std::function<void()>;

    virtual ~IPublishConfigBuilder() = default;

    virtual void add_start_action(const action_t& action) = 0;
    virtual void add_bool_handler(const meas_handler_t<bool>& handler, const GoosePath& path) = 0;
    virtual void add_int32_handler(const meas_handler_t<int32_t>& handler, const GoosePath& path) = 0;
    virtual void add_int64_handler(const meas_handler_t<int64_t>& handler, const GoosePath& path) = 0;
    virtual void add_float_handler(const meas_handler_t<float>& handler, const GoosePath& path) = 0;
    virtual void add_end_action(const action_t& action) = 0;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_IPUBLISHCONFIGBUILDER_H
