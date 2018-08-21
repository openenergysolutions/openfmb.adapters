#ifndef OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H

#include <memory>
#include <string>
#include <vector>
#include "adapter-api/IMessageBus.h"
#include "goose-cpp/control_block/IControlBlockPublisher.h"
#include "goose-cpp/messages/Dataset.h"
#include "generated/Type.h"
#include "sub/BuildingFunction.h"
#include "sub/SubscribingConfigReadVisitor.h"
#include "sub/SubscriptionHandler.h"
#include "yaml-cpp/yaml.h"

namespace adapter {
namespace goose {

template <typename T>
class GooseStructureConfigReader
{
public:
    GooseStructureConfigReader(const YAML::Node& root, const SubscribingConfigReadVisitor<T>& mappings)
    {
        auto builders = get_structure_builders(root, mappings);
        m_building_func = [builders](const T& msg, goose_cpp::Dataset& dataset) {
            for(auto& fn : builders) {
                fn(msg, dataset);
            }
        };
        m_mrid = mappings.get_mrid();
    };

    void subscribe(IMessageBus& bus, std::shared_ptr<goose_cpp::IControlBlockPublisher> cb_publisher, Logger logger)
    {
        bus.subscribe(std::make_shared<SubscriptionHandler<T>>(logger, m_mrid, cb_publisher, m_building_func));
    }

private:
    building_fn_t<T> build_structure(const YAML::Node& node, const SubscribingConfigReadVisitor<T>& mappings) const
    {
        auto builders = get_structure_builders(node, mappings);
        return [builders](const T& msg, goose_cpp::Dataset& dataset) {
            auto new_dataset = std::make_unique<goose_cpp::Dataset>();
            for(auto& fn : builders) {
                fn(msg, *new_dataset);
            }
            dataset.add_structure(std::move(new_dataset));
        };
    }

    building_fn_t<T> build_array(const YAML::Node& root, const SubscribingConfigReadVisitor<T>& mappings) const
    {
        auto builders = get_structure_builders(root, mappings);
        return [builders](const T& msg, goose_cpp::Dataset& dataset) {
            auto new_dataset = std::make_unique<goose_cpp::Dataset>();
            for(auto& fn : builders) {
                fn(msg, *new_dataset);
            }
            dataset.add_array(std::move(new_dataset));
        };
    }

    building_fn_t<T> build_boolean(const YAML::Node& node, const SubscribingConfigReadVisitor<T>& mappings) const
    {
        auto name = get_name(node, mappings);

        accessor_t<T, bool> accessor;
        if(!mappings.get_bool(name, accessor))
        {
            const auto mark = node.Mark();
            throw Exception{"Mapping \"", name, "\" is not a boolean value for GOOSE element defined at line ", mark.line + 1};
        }

        return [accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
            auto present = accessor->if_present(msg, [&](bool value){
                dataset.add_boolean(value);
            });

            if(!present)
            {
                throw Exception{"Value \"", name, "\" was not present in the message."};
            }
        };
    }

    building_fn_t<T> build_integer(const YAML::Node& node, const SubscribingConfigReadVisitor<T>& mappings) const
    {
        auto name = get_name(node, mappings);

        accessor_t<T, int32_t> accessor32;
        accessor_t<T, int64_t> accessor64;
        if(mappings.get_int32(name, accessor32))
        {
            return [accessor32, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor32->if_present(msg, [&](int32_t value){
                    dataset.add_integer(value);
                });

                if(!present)
                {
                    throw Exception{"Value \"" + name + "\" was not present in the message."};
                }
            };
        }
        else if(mappings.get_int64(name, accessor64))
        {
            return [accessor64, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor64->if_present(msg, [&](int64_t value){
                    dataset.add_integer(value);
                });

                if(!present)
                {
                    throw Exception{"Value \"" + name + "\" was not present in the message."};
                }
            };
        }
        else
        {
            const auto mark = node.Mark();
            throw Exception{"Mapping \"", name, "\" is not an integer value for GOOSE element defined at line ", mark.line + 1};
        }
    }

    building_fn_t<T> build_floating(const YAML::Node& node, const SubscribingConfigReadVisitor<T>& mappings) const
    {
        auto name = get_name(node, mappings);

        accessor_t<T, float> accessor;
        if(!mappings.get_float(name, accessor))
        {
            const auto mark = node.Mark();
            throw Exception{"Mapping \"", name, "\" is not a floating point value for GOOSE element defined at line ", mark.line + 1};
        }

        return [accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
            auto present = accessor->if_present(msg, [&](float value){
                dataset.add_floatingpoint(value);
            });

            if(!present)
            {
                throw Exception{"Value \"", name, "\" was not present in the message."};
            }
        };
    }

    std::string get_name(const YAML::Node& node, const SubscribingConfigReadVisitor<T>& mappings) const
    {
        auto name = node.as<std::string>();
        if(!mappings.has(name))
        {
            const auto mark = node.Mark();
            throw Exception{"No mapping named \"", name, "\" found for GOOSE element defined at line ", mark.line + 1};
        }
        return name;
    }

    std::vector<building_fn_t<T>> get_structure_builders(const YAML::Node& node, const SubscribingConfigReadVisitor<T>& mappings) const
    {
        std::vector<building_fn_t<T>> builders;

        const auto mark = node.Mark();
        if (!node.IsSequence())
        {
            throw Exception("Expected sequence at line: ", mark.line + 1);
        }

        for(auto it = node.begin(); it != node.end(); ++it)
        {
            if(!it->IsMap())
            {
                throw Exception("Expected map at line: ", mark.line + 1);
            }

            auto map = *it;
            if(map.size() != 1)
            {
                throw Exception("Expected exactly one element in map at line: ", mark.line + 1);
            }
            auto type = map.begin()->first.as<std::string>();
            auto value = map.begin()->second;

            switch(Type::from_string(type))
            {
                case Type::Value::structure:
                    builders.push_back(build_structure(value, mappings));
                    break;
                case Type::Value::array:
                    builders.push_back(build_array(value, mappings));
                    break;
                case Type::Value::boolean:
                    builders.push_back(build_boolean(value, mappings));
                    break;
                case Type::Value::integer:
                    builders.push_back(build_integer(value, mappings));
                    break;
                case Type::Value::floating:
                    builders.push_back(build_floating(value, mappings));
                    break;
                default:
                    throw Exception{"Unsupported GOOSE type at line ", mark.line + 1};
            }
        }

        return builders;
    }

    building_fn_t<T> m_building_func;
    std::string m_mrid;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H
