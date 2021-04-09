// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/PublishingConfigReadVisitorBase.h>

#include "generated/CommandSourceType.h"
#include "generated/ProfileAction.h"
#include "generated/RegisterMapping.h"

#include "ConfigStrings.h"
#include "Register16.h"
#include "Register32.h"
#include "outstation/ControlProfileBuilder.h"
#include "outstation/ModbusDatabase.h"

#include <unordered_map>

namespace adapter {
namespace modbus {
namespace outstation {

    template <class T>
    class ControlConfigReadVisitor final : public util::PublishingConfigReadVisitorBase<T>
    {
    private:
        ModbusDatabase& db;
        std::shared_ptr<ControlProfileBuilder<T>> builder;

    public:
        ControlConfigReadVisitor(const YAML::Node& node, ModbusDatabase& db)
            : util::PublishingConfigReadVisitorBase<T>(node),
              db(db),
              builder(std::make_shared<ControlProfileBuilder<T>>())
        {}

    protected:
        void handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override
        {
            const auto command_type = util::yaml::require_enum<CommandSourceType>(node);

            switch (command_type) {
            case CommandSourceType::Value::none:
                break;
            case CommandSourceType::Value::coil:
            {
                const auto action = util::yaml::require_enum<ProfileAction>(node);
                const auto index = util::yaml::get::index(node);
                const auto negate = util::yaml::optionally(node[util::keys::negate], false);

                db.add_coil_handler(index, [action, index, negate, builder = this->builder, accessor](api::IPublishOne<T>& publisher, ::modbus::IDatabase& db) {
                    bool value = false;
                    db.get_coil(::modbus::Address{index}, value);

                    if(negate)
                        value = !value;

                    if (action == ProfileAction::Value::clear_and_update)
                        builder->init();

                    builder->set(accessor, value);

                    if (action == ProfileAction::Value::update_and_publish)
                        builder->publish(publisher);
                });

                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported command source type for boolean field: ", CommandSourceType::to_string(command_type));
            }
        }

        void handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override
        {
            handle_mapped_numeric(node, accessor);
        }

        void handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override
        {
            handle_mapped_numeric(node, accessor);
        }

        void handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override
        {
            handle_mapped_numeric(node, accessor);
        }

        void handle_mapped_double(const YAML::Node& node, const util::accessor_t<T, double>& accessor) override
        {
            handle_mapped_numeric(node, accessor);
        }

        void handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                google::protobuf::EnumDescriptor const* descriptor) override
        {
            const auto command_type = util::yaml::require_enum<CommandSourceType>(node);

            switch (command_type) {
            case CommandSourceType::Value::none:
                break;
            case CommandSourceType::Value::holding_register:
            {
                const auto action = util::yaml::require_enum<ProfileAction>(node);
                const auto index = util::yaml::get::index(node);

                // Build the mappings
                std::unordered_map<int, int> mapping;
                util::yaml::foreach (
                    util::yaml::require(node, util::keys::mapping),
                    [&mapping, descriptor](const YAML::Node& elem) {
                        const auto name = util::yaml::require_string(elem, util::keys::name);
                        const auto value = util::yaml::require_integer<int>(elem, util::keys::value);

                        const auto enum_value = descriptor->FindValueByName(name);
                        if (!enum_value) {
                            throw api::Exception(elem, "Undefined value: ", value, " for enum: ", descriptor->name());
                        }

                        mapping[value] = enum_value->number();
                    });

                db.add_register_handler(index, [action, index, mapping, builder = this->builder, accessor](api::IPublishOne<T>& publisher, ::modbus::IDatabase& db) {
                    uint16_t value = 0;
                    db.get_holding_register(::modbus::Address{index}, value);

                    const auto it = mapping.find(value);
                    if(it == mapping.end())
                        // Mapping not found
                        return;

                    if (action == ProfileAction::Value::clear_and_update)
                        builder->init();

                    builder->set(accessor, it->second);

                    if (action == ProfileAction::Value::update_and_publish)
                        builder->publish(publisher);
                });
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported command type for enum: ", CommandSourceType::to_string(command_type));
            }
        }

        void add_message_init_action(const std::function<void(T&)>& action) override
        {
            this->builder->add_init_action(action);
        }

        void add_message_complete_action(const std::function<void(T&)>& action) override
        {
            this->builder->add_complete_action(action);
        }

        template <typename IntT>
        void handle_mapped_numeric(const YAML::Node& node, const util::accessor_t<T, IntT>& accessor)
        {
            const auto command_type = util::yaml::require_enum<CommandSourceType>(node);

            switch (command_type) {
            case CommandSourceType::Value::none:
                break;
            case CommandSourceType::Value::holding_register:
            {
                const auto mapping = util::yaml::require_enum<RegisterMapping>(node);
                
                switch(mapping)
                {
                case RegisterMapping::Value::sint16:
                case RegisterMapping::Value::uint16:
                    handle_mapped_16bit_numeric(node, mapping, accessor);
                    break;
                case RegisterMapping::Value::sint32:
                case RegisterMapping::Value::uint32:
                case RegisterMapping::Value::float32:
                    handle_mapped_32bit_numeric(node, mapping, accessor);
                    break;
                default:
                    throw api::Exception(node.Mark(), "Unsupported register mapping for numeric field: ", RegisterMapping::to_string(mapping));
                }

                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported command source type for numeric field: ", CommandSourceType::to_string(command_type));
            }
        }

        template <typename IntT>
        void handle_mapped_16bit_numeric(const YAML::Node& node, RegisterMapping::Value mapping, const util::accessor_t<T, IntT>& accessor)
        {
            const auto action = util::yaml::require_enum<ProfileAction>(node);
            const auto index = util::yaml::get::index(node);
            const auto scale = util::yaml::get::scale(node);

            auto update_fn = [action, index, scale, mapping, builder = this->builder, accessor](api::IPublishOne<T>& publisher, ::modbus::IDatabase& db) {

                if (action == ProfileAction::Value::clear_and_update)
                    builder->init();

                // Build the value
                Register16 register16;
                uint16_t value = 0;
                db.get_holding_register(::modbus::Address{index}, value);
                register16.set(value);

                // Set the value
                switch(mapping)
                {
                case RegisterMapping::Value::sint16:
                    builder->set(accessor, static_cast<IntT>(register16.to_sint16() * scale));
                    break;
                case RegisterMapping::Value::uint16:
                    builder->set(accessor, static_cast<IntT>(register16.to_uint16() * scale));
                    break;
                default:
                    throw api::Exception("Unsupported 16-bit register mapping.");
                }

                if (action == ProfileAction::Value::update_and_publish)
                    builder->publish(publisher);
            };

            db.add_register_handler(index, update_fn);
        }

        template <typename IntT>
        void handle_mapped_32bit_numeric(const YAML::Node& node, RegisterMapping::Value mapping, const util::accessor_t<T, IntT>& accessor)
        {
            const auto action = util::yaml::require_enum<ProfileAction>(node);
            const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
            const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);
            const auto scale = util::yaml::get::scale(node);

            auto update_fn = [action, lower_index, upper_index, scale, mapping, builder = this->builder, accessor](api::IPublishOne<T>& publisher, ::modbus::IDatabase& db) {

                if (action == ProfileAction::Value::clear_and_update)
                    builder->init();

                // Build the value
                Register32 value;
                uint16_t lower_value = 0;
                db.get_holding_register(::modbus::Address{lower_index}, lower_value);
                value.get_lower()->set(lower_value);
                uint16_t upper_value = 0;
                db.get_holding_register(::modbus::Address{upper_index}, upper_value);
                value.get_upper()->set(upper_value);

                // Set the value
                switch(mapping)
                {
                case RegisterMapping::Value::sint32:
                    builder->set(accessor, static_cast<IntT>(value.to_sint32() * scale));
                    break;
                case RegisterMapping::Value::uint32:
                    builder->set(accessor, static_cast<IntT>(value.to_uint32() * scale));
                    break;
                case RegisterMapping::Value::float32:
                    builder->set(accessor, static_cast<IntT>(value.to_float32() * scale));
                    break;
                default:
                    throw api::Exception("Unsupported 32-bit register mapping.");
                }

                if (action == ProfileAction::Value::update_and_publish)
                    builder->publish(publisher);
            };

            db.add_register_handler(lower_index, update_fn);
            db.add_register_handler(upper_index, update_fn);
        }
    };

}
}
}

#endif
