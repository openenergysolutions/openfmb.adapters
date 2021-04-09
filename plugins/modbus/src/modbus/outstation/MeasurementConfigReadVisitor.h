// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_MEASUREMENTCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_MEASUREMENTCONFIGREADVISITOR_H

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>

#include <ser4cpp/serialization/LittleEndian.h>

#include <modbus/server/db/InMemoryDatabase.h>

#include "DoubleWord.h"
#include "outstation/SubscriptionTypes.h"
#include "generated/RegisterMapping.h"
#include "generated/DestinationType.h"

#include <vector>

namespace adapter {
namespace modbus {
namespace outstation {

    template <class T>
    class MeasurementConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {
        using enum_update_handler_t = std::function<void(::modbus::IDatabase& db)>;
        using enum_update_handler_vec_t = std::vector<enum_update_handler_t>;

        ::modbus::InMemoryDatabase& db;
        update_handler_vec_t<T> handlers;

    public:
        explicit MeasurementConfigReadVisitor(const YAML::Node& node, ::modbus::InMemoryDatabase& db);

        update_handler_vec_t<T> get_handlers();

        void handle(const std::string& field_name,
                    const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, double>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                 google::protobuf::EnumDescriptor const* descriptor) override;
                                 
    private:
        void handle_mapped_boolean(const YAML::Node& node, const util::accessor_t<T, bool>& accessor);

        // Numeric handling helpers
        template <typename IntT>
        void handle_mapped_numeric(const YAML::Node& node, const util::accessor_t<T, IntT>& accessor);
        template <typename From, typename To>
        void handle_single_register_numeric(const YAML::Node& node, const util::accessor_t<T, From>& accessor);
        template <typename From, typename To>
        void handle_multiple_registers_numeric(const YAML::Node& node, const util::accessor_t<T, From>& accessor);
        static DoubleWord to_dword(float scaled_value);
        template <typename IntT>
        static DoubleWord to_dword(IntT scaled_value);
        
        // Enum handling helpers
        void handle_mapped_enum(const YAML::Node& node, enum_update_handler_vec_t& enum_handlers);
    };

    template <class T>
    MeasurementConfigReadVisitor<T>::MeasurementConfigReadVisitor(const YAML::Node& node, ::modbus::InMemoryDatabase& db)
        : util::SubscribingConfigReadVisitorBase<T>(node),
          db(db)
    {
    }

    template <class T>
    update_handler_vec_t<T> MeasurementConfigReadVisitor<T>::get_handlers()
    {
        return std::move(this->handlers);
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                              const util::accessor_t<T, bool>& accessor)
    {
        util::yaml::foreach(util::yaml::require(node, keys::actions), [&](const YAML::Node& node) {
            this->handle_mapped_boolean(node, accessor);
        });
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                              const util::accessor_t<T, int32_t>& accessor)
    {
        util::yaml::foreach(util::yaml::require(node, keys::actions), [&](const YAML::Node& node) {
            this->handle_mapped_numeric(node, accessor);
        });
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                              const util::accessor_t<T, int64_t>& accessor)
    {
        util::yaml::foreach(util::yaml::require(node, keys::actions), [&](const YAML::Node& node) {
            this->handle_mapped_numeric(node, accessor);
        });
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                              const util::accessor_t<T, float>& accessor)
    {
        util::yaml::foreach(util::yaml::require(node, keys::actions), [&](const YAML::Node& node) {
            this->handle_mapped_numeric(node, accessor);
        });
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                              const util::accessor_t<T, double>& accessor)
    {
        util::yaml::foreach(util::yaml::require(node, keys::actions), [&](const YAML::Node& node) {
            this->handle_mapped_numeric(node, accessor);
        });
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                              const util::accessor_t<T, int>& accessor,
                                                              google::protobuf::EnumDescriptor const* descriptor)
    {
        std::map<int, enum_update_handler_vec_t> map;

        util::yaml::foreach(util::yaml::require(node, util::keys::mapping), [&](const YAML::Node& node) {
            const auto name = util::yaml::require_string(node, util::keys::name);
            const auto value = descriptor->FindValueByName(name);
            if (!value)
                throw api::Exception(node.Mark(), "Unknown enum value: ", name);

            enum_update_handler_vec_t enum_handlers{};
            util::yaml::foreach(util::yaml::require(node, keys::actions), [&](const YAML::Node& node) {
                handle_mapped_enum(node, enum_handlers);
            });

            map.insert({value->number(), enum_handlers});
        });

        this->handlers.emplace_back([accessor, config = std::move(map)](::modbus::IDatabase& db, const T& profile) {
            accessor->if_present(
                profile,
                [&db, &config](int value) {
                    const auto entry = config.find(value);
                    if (entry != config.end()) {
                        for (const auto& action : entry->second)
                            action(db);
                    }
                }
            );
        });
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle(const std::string& field_name,
                                                 const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter)
    {
        throw api::Exception("Modbus outstation subscriptions cannot contain schedule parameter lists");
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_boolean(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
    {
        const auto dest_type = util::yaml::require_enum<DestinationType>(node);

        switch(dest_type)
        {
            case DestinationType::Value::none:
                break;
            case DestinationType::Value::coil:
            {
                const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);
                const auto negate = util::yaml::optionally(node[util::keys::negate], false);
                
                db.add_coil(::modbus::Address{index}, false);
                this->handlers.emplace_back([index, negate, accessor](::modbus::IDatabase& db, const T& profile) {
                    accessor->if_present(
                        profile,
                        [index, negate, &db](bool value) {
                            if(negate) value = !value;
                            db.set_coil(::modbus::Address{index}, value);
                        }
                    );
                });
                break;
            }
            case DestinationType::Value::discrete_input:
            {
                const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);
                const auto negate = util::yaml::optionally(node[util::keys::negate], false);
                
                db.add_discrete_input(::modbus::Address{index}, false);
                this->handlers.emplace_back([index, negate, accessor](::modbus::IDatabase& db, const T& profile) {
                    accessor->if_present(
                        profile,
                        [index, negate, &db](bool value) {
                            if(negate) value = !value;
                            db.set_discrete_input(::modbus::Address{index}, value);
                        }
                    );
                });
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for bool field: ", DestinationType::to_string(dest_type));
        }
    }

    template <class T>
    template <typename IntT>
    void MeasurementConfigReadVisitor<T>::handle_mapped_numeric(const YAML::Node& node,
                                                                const util::accessor_t<T, IntT>& accessor)
    {
        const auto register_mapping = util::yaml::require_enum<RegisterMapping>(node);

        switch(register_mapping)
        {
            // Single register
            case RegisterMapping::Value::sint16:
            {
                this->handle_single_register_numeric<IntT, int16_t>(node, accessor);
                break;
            }
            case RegisterMapping::Value::uint16:
            {
                this->handle_single_register_numeric<IntT, uint16_t>(node, accessor);
                break;
            }

            // Two registers
            case RegisterMapping::Value::sint32:
            {
                this->handle_multiple_registers_numeric<IntT, int32_t>(node, accessor);
                break;
            }
            case RegisterMapping::Value::uint32:
            {
                this->handle_multiple_registers_numeric<IntT, uint32_t>(node, accessor);
                break;
            }
            case RegisterMapping::Value::float32:
            {
                this->handle_multiple_registers_numeric<IntT, float>(node, accessor);
                break;
            }

            default:
                throw api::Exception(node.Mark(), "Unsupported register mapping for numeric field: ", RegisterMapping::to_string(register_mapping));
        }
    }

    template <class T>
    template <typename From, typename To>
    void MeasurementConfigReadVisitor<T>::handle_single_register_numeric(const YAML::Node& node, const util::accessor_t<T, From>& accessor)
    {
        const auto dest_type = util::yaml::require_enum<DestinationType>(node);

        switch(dest_type)
        {
            case DestinationType::Value::none:
                break;
            case DestinationType::Value::holding_register:
            {
                const auto index = util::yaml::get::index(node);
                const auto scale = util::yaml::get::scale(node);
                
                db.add_holding_register(::modbus::Address{index}, 0);
                this->handlers.emplace_back([index, scale, accessor](::modbus::IDatabase& db, const T& profile) {
                    accessor->if_present(
                        profile,
                        [index, scale, &db](From value) {
                            db.set_holding_register(::modbus::Address{index}, static_cast<To>(value * scale));
                        }
                    );
                });
                break;
            }
            case DestinationType::Value::input_register:
            {
                const auto index = util::yaml::get::index(node);
                const auto scale = util::yaml::get::scale(node);

                db.add_input_register(::modbus::Address{index}, 0);
                this->handlers.emplace_back([index, scale, accessor](::modbus::IDatabase& db, const T& profile) {
                    accessor->if_present(
                        profile,
                        [index, scale, &db](From value) {
                            db.set_input_register(::modbus::Address{index}, static_cast<To>(value * scale));
                        }
                    );
                });
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for numeric field: ", DestinationType::to_string(dest_type));
        }
    }

    template <class T>
    template <typename From, typename To>
    void MeasurementConfigReadVisitor<T>::handle_multiple_registers_numeric(const YAML::Node& node, const util::accessor_t<T, From>& accessor)
    {
        const auto dest_type = util::yaml::require_enum<DestinationType>(node);

        switch(dest_type)
        {
            case DestinationType::Value::none:
                break;
            case DestinationType::Value::holding_register:
            {
                const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
                const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);
                const auto scale = util::yaml::get::scale(node);
                
                db.add_holding_register(::modbus::Address{lower_index}, 0);
                db.add_holding_register(::modbus::Address{upper_index}, 0);
                this->handlers.emplace_back([upper_index, lower_index, scale, accessor](::modbus::IDatabase& db, const T& profile) {
                    accessor->if_present(
                        profile,
                        [upper_index, lower_index, scale, &db](From value) {
                            const auto dword = to_dword(static_cast<To>(value * scale));
                            db.set_holding_register(::modbus::Address{lower_index}, dword.lower);
                            db.set_holding_register(::modbus::Address{upper_index}, dword.upper);
                        }
                    );
                });
                break;
            }
            case DestinationType::Value::input_register:
            {
                const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
                const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);
                const auto scale = util::yaml::get::scale(node);

                db.add_input_register(::modbus::Address{lower_index}, 0);
                db.add_input_register(::modbus::Address{upper_index}, 0);
                this->handlers.emplace_back([upper_index, lower_index, scale, accessor](::modbus::IDatabase& db, const T& profile) {
                    accessor->if_present(
                        profile,
                        [upper_index, lower_index, scale, &db](From value) {
                            const auto dword = to_dword(static_cast<To>(value * scale));
                            db.set_input_register(::modbus::Address{lower_index}, dword.lower);
                            db.set_input_register(::modbus::Address{upper_index}, dword.upper);
                        }
                    );
                });
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for numeric field: ", DestinationType::to_string(dest_type));
        }
    }

    template <class T>
    DoubleWord MeasurementConfigReadVisitor<T>::to_dword(float scaled_value)
    {
        return DoubleWord::get(ser4cpp::SingleFloat::to_uint32(scaled_value));
    }

    template <class T>
    template <typename IntT>
    DoubleWord MeasurementConfigReadVisitor<T>::to_dword(IntT scaled_value)
    {
        return DoubleWord::get(scaled_value);
    }

    template <class T>
    void MeasurementConfigReadVisitor<T>::handle_mapped_enum(const YAML::Node& node, enum_update_handler_vec_t& enum_handlers)
    {
        const auto dest_type = util::yaml::require_enum<DestinationType>(node);

        switch(dest_type)
        {
            case DestinationType::Value::none:
                break;
            case DestinationType::Value::coil:
            {
                const auto index = util::yaml::get::index(node);
                const auto value = util::yaml::require(node, util::keys::value).as<bool>();
                
                db.add_coil(::modbus::Address{index}, false);
                enum_handlers.emplace_back([index, value](::modbus::IDatabase& db) {
                    db.set_coil(::modbus::Address{index}, value);
                });

                break;
            }
            case DestinationType::Value::discrete_input:
            {
                const auto index = util::yaml::get::index(node);
                const auto value = util::yaml::require(node, util::keys::value).as<bool>();
                
                db.add_discrete_input(::modbus::Address{index}, false);
                enum_handlers.emplace_back([index, value](::modbus::IDatabase& db) {
                    db.set_discrete_input(::modbus::Address{index}, value);
                });

                break;
            }
            case DestinationType::Value::holding_register:
            {
                const auto index = util::yaml::get::index(node);
                const auto value = util::yaml::require_integer<uint16_t>(node, util::keys::value);
                
                db.add_holding_register(::modbus::Address{index}, 0);
                enum_handlers.emplace_back([index, value](::modbus::IDatabase& db) {
                    db.set_holding_register(::modbus::Address{index}, value);
                });

                break;
            }
            case DestinationType::Value::input_register:
            {
                const auto index = util::yaml::get::index(node);
                const auto value = util::yaml::require_integer<uint16_t>(node, util::keys::value);
                
                db.add_input_register(::modbus::Address{index}, 0);
                enum_handlers.emplace_back([index, value](::modbus::IDatabase& db) {
                    db.set_input_register(::modbus::Address{index}, value);
                });
                
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for enum field: ", DestinationType::to_string(dest_type));
        }
    }

}
}
}

#endif
