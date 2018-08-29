#ifndef OPENFMB_ADAPTER_PUB_PUBGOOSESTRUCTURECONFIGREADER_H
#define OPENFMB_ADAPTER_PUB_PUBGOOSESTRUCTURECONFIGREADER_H

#include "BuildingFunction.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/Logger.h"
#include "goose-cpp/messages/Dataset.h"
#include "pub/IPublishConfigBuilder.h"
#include "pub/Mappings.h"
#include "yaml-cpp/yaml.h"
#include <memory>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace adapter {
namespace goose {

    class PubGooseStructureConfigVisitor;

    class PubGooseStructureConfigReader : public IPublishConfigBuilder {
        friend class PubGooseStructureConfigVisitor;

    public:
        meas_fn_t<goose_cpp::Dataset> get_meas_handler(const YAML::Node& root);

    protected:
        void add_start_action(const action_t& action) final;
        void add_end_action(const action_t& action) final;
        void add_bool_handler(const std::string& name, const meas_fn_t<bool>& handler) final;
        void add_int32_handler(const std::string& name, const meas_fn_t<int32_t>& handler) final;
        void add_int64_handler(const std::string& name, const meas_fn_t<int64_t>& handler) final;
        void add_float_handler(const std::string& name, const meas_fn_t<float>& handler) final;
        void add_string_handler(const std::string& name, const meas_fn_t<std::string>& handler) final;
        void add_timestamp_handler(const std::string& name, const meas_fn_t<std::chrono::system_clock::time_point>& handler) final;

        std::vector<action_t> m_start_actions;
        std::vector<action_t> m_end_actions;
        std::unordered_set<std::string> m_all_handlers;
        std::unordered_map<std::string, meas_fn_t<bool>> m_bool_handlers;
        std::unordered_map<std::string, meas_fn_t<int32_t>> m_int32_handlers;
        std::unordered_map<std::string, meas_fn_t<int64_t>> m_int64_handlers;
        std::unordered_map<std::string, meas_fn_t<float>> m_float_handlers;
        std::unordered_map<std::string, meas_fn_t<std::string>> m_string_handlers;
        std::unordered_map<std::string, meas_fn_t<std::chrono::system_clock::time_point>> m_timestamp_handlers;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_PUB_PUBGOOSESTRUCTURECONFIGREADER_H
