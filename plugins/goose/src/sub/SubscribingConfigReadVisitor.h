#ifndef OPENFMB_ADAPTER_SUB_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_SUB_SUBSCRIBINGCONFIGREADVISITOR_H

#include "GoosePath.h"
#include "sub/BuildingFunction.h"
#include "sub/SubscriptionHandler.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/config/SubscribingConfigReadVisitorBase.h"
#include "adapter-api/util/Exception.h"
#include "goose-cpp/control_block/IControlBlockPublisher.h"
#include "goose-cpp/messages/Dataset.h"
#include "yaml-cpp/yaml.h"
#include <map>
#include <memory>

#include <vector>

namespace adapter {
namespace goose {

template <typename T>
class DatasetBuilder
{
public:
    void add(building_fn_t<T> building_fn)
    {
        m_building_funcs.push_back(building_fn);
    }

    std::shared_ptr<DatasetBuilder> add_dataset()
    {
        auto dataset = std::make_shared<DatasetBuilder>();
        m_building_funcs.push_back([dataset](const T& msg, goose_cpp::Dataset& root) {
            (*dataset)(msg, root);
        });
        return dataset;
    }

    void operator()(const T& msg, goose_cpp::Dataset& root)
    {
        auto dataset = std::make_unique<goose_cpp::Dataset>();
        for(auto& fn : m_building_funcs)
        {
            fn(msg, *dataset);
        }
        root.add_structure(std::move(dataset));
    }

private:
    std::vector<building_fn_t<T>> m_building_funcs;
};

template <typename T>
class SubscribingConfigReadVisitor final : public SubscribingConfigReadVisitorBase<T> {
public:
    SubscribingConfigReadVisitor(const YAML::Node& root, Logger logger)
        : SubscribingConfigReadVisitorBase<T>(root)
          , m_logger{logger}
    {}

    void subscribe(IMessageBus& bus, std::shared_ptr<goose_cpp::IControlBlockPublisher> cb_publisher)
    {
        bus.subscribe(std::make_shared<SubscriptionHandler<T>>(m_logger, get_primary_mrid(), cb_publisher, create_builder()));
    }

    building_fn_t<T> create_builder()
    {
        std::vector<std::shared_ptr<DatasetBuilder<T>>> builder_stack{};
        builder_stack.push_back(std::make_shared<DatasetBuilder<T>>());

        GoosePath current_path{};
        auto it = m_building_funcs.begin();
        while(it != m_building_funcs.end())
        {
            if(current_path.get_level() < it->first.get_level())
            {
                // Create a new builder to hold the structure
                current_path.push();
                auto new_builder = builder_stack.back()->add_dataset();
                builder_stack.push_back(new_builder);
            }
            else if(current_path.get_level() > it->first.get_level())
            {
                // We are too deep in the hierarchy, go up
                current_path.pop();
                builder_stack.pop_back();
            }
            else
            {
                // Validate the current value
                if(current_path != it->first)
                {
                    // Check if it's the next value on the same level
                    current_path.pop();
                    current_path.inc();
                    current_path.push();
                    if(current_path == it->first)
                    {
                        current_path.pop();
                        builder_stack.pop_back();
                        continue;
                    }
                    else
                    {
                        throw Exception{"Invalid GOOSE structure."};
                    }
                }

                // Add the value to the dataset
                builder_stack.back()->add(it->second);

                // Proceed with the next value
                current_path.inc();
                ++it;
            }
        }

        return [root_builder = builder_stack.front()](const T& msg, goose_cpp::Dataset& root) {
            (*root_builder)(msg, root);
        };
    }

protected:
    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, bool>& accessor) final
    {
        add_building_fn(get_path(node), [=](const T& msg, goose_cpp::Dataset& dataset) {
            auto present = accessor->if_present(msg, [&](bool value){
                dataset.add_boolean(value);
            });

            if(!present)
            {
                throw Exception{ "A value is not present in the message." };
            }
        });
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) final
    {
        add_building_fn(get_path(node), [=](const T& msg, goose_cpp::Dataset& dataset) {
            auto present = accessor->if_present(msg, [&](int32_t value){
                dataset.add_integer(value);
            });

            if(!present)
            {
                throw Exception{ "A value is not present in the message." };
            }
        });
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) final
    {
        add_building_fn(get_path(node), [=](const T& msg, goose_cpp::Dataset& dataset) {
           auto present = accessor->if_present(msg, [&](int64_t value){
               dataset.add_integer(value);
           });

           if(!present)
           {
               throw Exception{ "A value is not present in the message." };
           }
        });
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, float>& accessor) final
    {
        add_building_fn(get_path(node), [=](const T& msg, goose_cpp::Dataset& dataset) {
            auto present = accessor->if_present(msg, [&](float value) {
                dataset.add_floatingpoint(value);
            });

            if (!present)
            {
                throw Exception{ "A value is not present in the message." };
            }
        });
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) final
    {
        throw Exception{"Mapped enums are not supported by goose-sub."};
    }

private:
    GoosePath get_path(const YAML::Node& node) const
    {
        auto path_str = yaml::require_string(node, keys::path);
        return GoosePath::from_string(path_str);
    }

    void add_building_fn(const GoosePath& path, building_fn_t<T> building_fn)
    {
        auto it = m_building_funcs.find(path);
        if (it != m_building_funcs.end()) {
            throw Exception{"Duplicate GOOSE path found."};
        };

        m_building_funcs.insert({path, building_fn});
    }

    Logger m_logger;
    std::map<GoosePath, building_fn_t<T>> m_building_funcs;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_SUB_SUBSCRIBINGCONFIGREADVISITOR_H
