#ifndef OPENFMB_ADAPTER_GOOSE_PUB_IPUBLISHCONFIGBUILDER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_IPUBLISHCONFIGBUILDER_H

#include "BuildingFunction.h"
#include <string>

namespace adapter {
namespace goose {

    class IPublishConfigBuilder {
    public:

        virtual ~IPublishConfigBuilder() = default;

        virtual void add_start_action(const action_t& action) = 0;
        virtual void add_end_action(const action_t& action) = 0;
        virtual void add_bool_handler(const std::string& name, const meas_fn_t<bool>& handler) = 0;
        virtual void add_int32_handler(const std::string& name, const meas_fn_t<int32_t>& handler) = 0;
        virtual void add_int64_handler(const std::string& name, const meas_fn_t<int64_t>& handler) = 0;
        virtual void add_float_handler(const std::string& name, const meas_fn_t<float>& handler) = 0;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_IPUBLISHCONFIGBUILDER_H
