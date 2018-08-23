#ifndef OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H

#include "BuildingFunction.h"
#include "GooseStructureConfigVisitor.h"
#include "adapter-api/IMessageBus.h"
#include "generated/Type.h"
#include "goose-cpp/control_block/IControlBlockPublisher.h"
#include "goose-cpp/messages/Dataset.h"
#include "sub/SubscribingConfigReadVisitor.h"
#include "sub/SubscriptionHandler.h"
#include "yaml-cpp/yaml.h"
#include <memory>
#include <string>
#include <vector>

namespace adapter {
namespace goose {

    template <typename T>
    class SubGooseStructureConfigVisitor : public GooseStructureConfigVisitor {
    public:
        SubGooseStructureConfigVisitor(const SubscribingConfigReadVisitor<T>& mappings, std::vector<building_fn_t<T>>& funcs)
            : m_mappings{ mappings }
            , m_funcs{ funcs }
        {
        }

        void on_ignore() final
        {
            throw Exception{ "Cannot ignore fields in goose-sub." };
        }

        void on_structure(const YAML::Node& node) final
        {
            std::vector<building_fn_t<T>> builders{};
            SubGooseStructureConfigVisitor visitor{ m_mappings, builders };
            visitor.visit(node);

            m_funcs.push_back([builders](const T& msg, goose_cpp::Dataset& dataset) {
                auto new_dataset = std::make_unique<goose_cpp::Dataset>();
                for (auto& fn : builders) {
                    fn(msg, *new_dataset);
                }
                dataset.add_structure(std::move(new_dataset));
            });
        }

        void on_array(const YAML::Node& node) final
        {
            std::vector<building_fn_t<T>> builders{};
            SubGooseStructureConfigVisitor visitor{ m_mappings, builders };
            visitor.visit(node);

            m_funcs.push_back([builders](const T& msg, goose_cpp::Dataset& dataset) {
                auto new_dataset = std::make_unique<goose_cpp::Dataset>();
                for (auto& fn : builders) {
                    fn(msg, *new_dataset);
                }
                dataset.add_array(std::move(new_dataset));
            });
        }

        void on_bool(const YAML::Node& node) final
        {
            auto name = get_name(node);

            accessor_t<T, bool> accessor;
            if (!m_mappings.get_bool(name, accessor)) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a boolean value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_funcs.push_back([accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor->if_present(msg, [&](bool value) {
                    dataset.add_boolean(value);
                });

                if (!present) {
                    throw Exception{ "Value \"", name, "\" was not present in the message." };
                }
            });
        }

        void on_integer(const YAML::Node& node) final
        {
            auto name = get_name(node);

            accessor_t<T, int32_t> accessor32;
            accessor_t<T, int64_t> accessor64;
            if (m_mappings.get_int32(name, accessor32)) {
                m_funcs.push_back([accessor32, name](const T& msg, goose_cpp::Dataset& dataset) {
                    auto present = accessor32->if_present(msg, [&](int32_t value) {
                        dataset.add_integer(value);
                    });

                    if (!present) {
                        throw Exception{ "Value \"" + name + "\" was not present in the message." };
                    }
                });
            } else if (m_mappings.get_int64(name, accessor64)) {
                m_funcs.push_back([accessor64, name](const T& msg, goose_cpp::Dataset& dataset) {
                    auto present = accessor64->if_present(msg, [&](int64_t value) {
                        dataset.add_integer(value);
                    });

                    if (!present) {
                        throw Exception{ "Value \"" + name + "\" was not present in the message." };
                    }
                });
            } else {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not an integer value for GOOSE element defined at line ", mark.line + 1 };
            }
        }

        void on_floating(const YAML::Node& node) final
        {
            auto name = get_name(node);

            accessor_t<T, float> accessor;
            if (!m_mappings.get_float(name, accessor)) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a floating point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_funcs.push_back([accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor->if_present(msg, [&](float value) {
                    dataset.add_floatingpoint(value);
                });

                if (!present) {
                    throw Exception{ "Value \"", name, "\" was not present in the message." };
                }
            });
        }

    private:
        std::string get_name(const YAML::Node& node) const
        {
            auto name = node.as<std::string>();

            if (!m_mappings.has(name)) {
                const auto mark = node.Mark();
                throw Exception{ "No mapping named \"", name, "\" found for GOOSE element defined at line ", mark.line + 1 };
            }

            return name;
        }

        const SubscribingConfigReadVisitor<T>& m_mappings;
        std::vector<building_fn_t<T>>& m_funcs;
    };

    template <typename T>
    class SubGooseStructureConfigReader {
    public:
        SubGooseStructureConfigReader(const YAML::Node& root, const SubscribingConfigReadVisitor<T>& mappings)
        {
            std::vector<building_fn_t<T>> builders{};
            SubGooseStructureConfigVisitor<T> visitor{ mappings, builders };
            visitor.visit(root);

            m_building_func = [builders](const T& msg, goose_cpp::Dataset& dataset) {
                for (auto& fn : builders) {
                    fn(msg, dataset);
                }
            };

            m_mrid = mappings.get_mrid();
        };

        void subscribe(IMessageBus& bus, std::shared_ptr<goose_cpp::IControlBlockPublisher> cb_publisher, Logger logger)
        {
            bus.subscribe(std::make_shared<SubscriptionHandler<T>>(logger, m_mrid, cb_publisher, m_building_func));
        }

        building_fn_t<T> m_building_func;
        std::string m_mrid;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H
