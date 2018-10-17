#ifndef OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_GOOSESTRUCTURECONFIGREADER_H

#include "BuildingFunction.h"
#include "GooseStructureConfigVisitor.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/util/Time.h"
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

        void on_visible_string(const YAML::Node& node) final
        {
            auto name = get_name(node);

            accessor_t<T, std::string> accessor;
            if (!m_mappings.get_string(name, accessor)) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a string value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_funcs.push_back([accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor->if_present(msg, [&](const std::string& value) {
                    dataset.add_visible_string(std::string{ value });
                });

                if (!present) {
                    throw Exception{ "Value \"", name, "\" was not present in the message." };
                }
            });
        }

        void on_mms_string(const YAML::Node& node) final
        {
            auto name = get_name(node);

            accessor_t<T, std::string> accessor;
            if (!m_mappings.get_string(name, accessor)) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a string value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_funcs.push_back([accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor->if_present(msg, [&](const std::string& value) {
                    dataset.add_mms_string(std::string{ value });
                });

                if (!present) {
                    throw Exception{ "Value \"", name, "\" was not present in the message." };
                }
            });
        }

        void on_bitstring(const YAML::Node& node) final
        {
            auto name = get_name(node);

            message_accessor_t<T, commonmodule::Quality> accessor_quality;
            std::pair<accessor_t<T, int>, std::unordered_map<int, goose_cpp::BitString>> accessor_enum;
            if (m_mappings.get_quality(name, accessor_quality)) {
                m_funcs.push_back([accessor = accessor_quality, name](const T& msg, goose_cpp::Dataset& dataset) {
                    auto present = accessor->if_present(msg, [&](const commonmodule::Quality& value) {
                        dataset.add_bitstring(quality_to_bitstring(value));
                    });

                    if (!present) {
                        throw Exception{ "Value \"", name, "\" was not present in the message." };
                    }
                });
            } else if (m_mappings.get_enum(name, accessor_enum)) {
                m_funcs.push_back([accessor = accessor_enum, name](const T& msg, goose_cpp::Dataset& dataset) {
                    auto present = accessor.first->if_present(msg, [&](int value) {
                        auto it = accessor.second.find(value);
                        if (it == accessor.second.end()) {
                            throw Exception{ "Enum value ", value, " was not mapped to a bitstring representation." };
                        }
                        dataset.add_bitstring(goose_cpp::BitString{ it->second });
                    });

                    if (!present) {
                        throw Exception{ "Value \"", name, "\" was not present in the message." };
                    }
                });
            } else {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a bitstring value for GOOSE element defined at line ", mark.line + 1 };
            }
        }

        void on_generalized_time(const YAML::Node& node) final
        {
            auto name = get_name(node);

            message_accessor_t<T, commonmodule::Timestamp> accessor;
            if (!m_mappings.get_timestamp(name, accessor)) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a timestamp value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_funcs.push_back([accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor->if_present(msg, [&](const commonmodule::Timestamp& value) {
                    dataset.add_generalizedtime(time::get(value));
                });

                if (!present) {
                    throw Exception{ "Value \"", name, "\" was not present in the message." };
                }
            });
        }

        void on_binary_time(const YAML::Node& node) final
        {
            auto name = get_name(node);

            message_accessor_t<T, commonmodule::Timestamp> accessor;
            if (!m_mappings.get_timestamp(name, accessor)) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a timestamp value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_funcs.push_back([accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor->if_present(msg, [&](const commonmodule::Timestamp& value) {
                    dataset.add_binarytime(time::get(value));
                });

                if (!present) {
                    throw Exception{ "Value \"", name, "\" was not present in the message." };
                }
            });
        }

        void on_utc_time(const YAML::Node& node) final
        {
            auto name = get_name(node);

            message_accessor_t<T, commonmodule::Timestamp> accessor;
            if (!m_mappings.get_timestamp(name, accessor)) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a timestamp value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_funcs.push_back([accessor, name](const T& msg, goose_cpp::Dataset& dataset) {
                auto present = accessor->if_present(msg, [&](const commonmodule::Timestamp& value) {
                    dataset.add_utctime(time::get(value));
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

        static goose_cpp::BitString quality_to_bitstring(const commonmodule::Quality& quality)
        {
            goose_cpp::BitString result{ 13 };
            result.set(0, quality.validity() == commonmodule::ValidityKind::ValidityKind_reserved || quality.validity() == commonmodule::ValidityKind::ValidityKind_questionable);
            result.set(1, quality.validity() == commonmodule::ValidityKind::ValidityKind_invalid || quality.validity() == commonmodule::ValidityKind::ValidityKind_questionable);
            result.set(2, quality.detailqual().overflow());
            result.set(3, quality.detailqual().outofrange());
            result.set(4, quality.detailqual().badreference());
            result.set(5, quality.detailqual().oscillatory());
            result.set(6, quality.detailqual().failure());
            result.set(7, quality.detailqual().olddata());
            result.set(8, quality.detailqual().inconsistent());
            result.set(9, quality.detailqual().inaccurate());
            result.set(10, quality.source() == commonmodule::SourceKind::SourceKind_substituted);
            result.set(11, quality.test());
            result.set(12, quality.operatorblocked());

            return result;
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
