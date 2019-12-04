
#ifndef OPENFMB_ADAPTER_MODBUS_PUBLISHCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_PUBLISHCONFIGREADVISITOR_H

#include "ConfigStrings.h"
#include "IConfigurationBuilder.h"
#include "MultipleRegisterEnumMapping.h"
#include "Register16.h"
#include "Register32.h"
#include "SingleRegisterEnumMapping.h"

#include "generated/EnumMappingType.h"
#include "generated/RegisterMapping.h"
#include "generated/SourceType.h"

#include <adapter-util/config/PublishingConfigReadVisitorBase.h>
#include <adapter-util/config/YAMLGetters.h>

namespace adapter {
namespace modbus {

    // keep these helpers outside the template
    namespace get {
        uint32_t modulus(const YAML::Node& node)
        {
            return util::yaml::require_integer<uint32_t>(node, keys::modulus);
        }
    }

    template <class T>
    class PublishConfigReadVisitor final : public util::PublishingConfigReadVisitorBase<T> {
        const std::shared_ptr<T> profile = std::make_shared<T>();
        const api::publisher_one_t<T> publisher;
        const std::shared_ptr<IConfigurationBuilder> builder;

    public:
        PublishConfigReadVisitor(const YAML::Node& root, api::publisher_one_t<T> publisher, std::shared_ptr<IConfigurationBuilder> builder);

        ~PublishConfigReadVisitor();

    protected:
        void handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

        void handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

        void handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

        void handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

        void handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;

        void add_message_init_action(const std::function<void(T&)>& action) override;

        void add_message_complete_action(const std::function<void(T&)>& action) override;

    private:
        void handle_mapped_enum_single_bit(const YAML::Node& node, SourceType::Value source_type, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);

        void handle_mapped_enum_single_register(const YAML::Node& node, SourceType::Value source_type, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);

        void handle_mapped_enum_multiple_registers(const YAML::Node& node, SourceType::Value source_type, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);

        template <class S>
        void map_numeric(const YAML::Node& node, const util::accessor_t<T, S>& accessor);

        template <class S>
        void map_bit(const YAML::Node& node, SourceType::Value source_type, const S& setter);

        template <class S>
        void map_register16(const YAML::Node& node, SourceType::Value source_type, const S& setter);

        template <class S>
        void map_register32(const YAML::Node& node, SourceType::Value source_type, const S& setter);
    };

    template <class T>
    PublishConfigReadVisitor<T>::PublishConfigReadVisitor(const YAML::Node& root, api::publisher_one_t<T> publisher, std::shared_ptr<IConfigurationBuilder> builder)
        : util::PublishingConfigReadVisitorBase<T>(root)
        , publisher(std::move(publisher))
        , builder(std::move(builder))
    {
        this->builder->add_begin_action([profile = this->profile](api::Logger&) {
            profile->Clear();
        });
    }

    template <class T>
    PublishConfigReadVisitor<T>::~PublishConfigReadVisitor()
    {
        this->builder->add_end_action(
            [profile = this->profile, publisher = this->publisher](api::Logger&) {
                publisher->publish(*profile);
            });
    }

    template <class T>
    void PublishConfigReadVisitor<T>::add_message_init_action(const std::function<void(T&)>& action)
    {
        this->builder->add_begin_action([action, profile = this->profile](api::Logger&) {
            action(*profile);
        });
    }

    template <class T>
    void PublishConfigReadVisitor<T>::add_message_complete_action(const std::function<void(T&)>& action)
    {
        this->builder->add_end_action([action, profile = this->profile](api::Logger&) {
            action(*profile);
        });
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
    {
        const auto source_type = util::yaml::require_enum<SourceType>(node);

        switch(source_type)
        {
            case SourceType::Value::none:
                return;
            case SourceType::Value::coil:
            case SourceType::Value::discrete_input:
            {
                const auto invert = util::yaml::optionally<bool>(node[keys::invert], false);
                this->map_bit(node, source_type, [accessor, invert](T& profile, const std::shared_ptr<Bit>& bit, api::Logger&) {
                    auto value = bit->get();
                    if(invert)
                    {
                        value = !value;
                    }
                    accessor->set(profile, value);
                });
                break;
            }
            case SourceType::Value::holding_register:
            case SourceType::Value::input_register:
            {
                const auto mask = util::yaml::require_integer<uint16_t>(node, keys::mask);
                const auto invert = util::yaml::optionally<bool>(node[keys::invert], false);
                this->map_register16(
                    node,
                    source_type,
                    [accessor, mask, invert](T& profile, const std::shared_ptr<Register16>& reg, api::Logger&) {
                        auto value = (reg->to_uint16() & mask) != 0;
                        if(invert)
                        {
                            value = !value;
                        }
                        accessor->set(profile, value);
                    }
                );
                break;
            }
            default:
                throw api::Exception("Unsupported source type for mapped bool: ", SourceType::to_string(source_type));
        }
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor)
    {
        map_numeric(node, accessor);
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor)
    {
        map_numeric(node, accessor);
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor)
    { 
        map_numeric(node, accessor);
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        const auto source_type = util::yaml::require_enum<SourceType>(node);
        const auto mapping_type = util::yaml::require_enum<EnumMappingType>(node);

        switch (mapping_type) {
        case EnumMappingType::Value::none:
            break;
        case EnumMappingType::Value::single_bit:
            this->handle_mapped_enum_single_bit(node, source_type, accessor, descriptor);
            break;
        case EnumMappingType::Value::single_register:
            this->handle_mapped_enum_single_register(node, source_type, accessor, descriptor);
            break;
        case EnumMappingType::Value::multiple_register:
            this->handle_mapped_enum_multiple_registers(node, source_type, accessor, descriptor);
            break;
        default:
            throw api::Exception("Unsupported enum mapping type: ", EnumMappingType::to_string(mapping_type));
        }
    }

    // --- private helpers ---

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_enum_single_bit(const YAML::Node& node, SourceType::Value source_type, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        const auto when_true_str = util::yaml::require_string(node, util::keys::when_true);
        const auto when_false_str = util::yaml::require_string(node, util::keys::when_false);

        const auto when_true = descriptor->FindValueByName(when_true_str);
        if(!when_true) throw api::Exception(node.Mark(), "Invalid enum value: ", when_true_str);
        const auto when_false = descriptor->FindValueByName(when_false_str);
        if(!when_false) throw api::Exception(node.Mark(), "Invalid enum value: ", when_false_str);

        this->map_bit(
            node,
            source_type,
            [accessor, when_true, when_false](T& profile, const std::shared_ptr<Bit>& bit, api::Logger& logger) {
                const auto value = bit->get();
                if(value) {
                    accessor->set(profile, when_true->number());
                } else {
                    accessor->set(profile, when_false->number());
                }
            }
        );
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_enum_single_register(const YAML::Node& node, SourceType::Value source_type, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        this->map_register16(
            node,
            source_type,
            [accessor, descriptor, mapping = std::make_shared<SingleRegisterEnumMapping>(node, descriptor)](T& profile, const std::shared_ptr<Register16>& reg, api::Logger& logger) {
                int value;
                if (mapping->get_mapping(reg->to_uint16(), value)) {
                    accessor->set(profile, value);
                } else {
                    logger.warn("No mapping to {} for value {}", descriptor->name(), value);
                }
            });
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_enum_multiple_registers(const YAML::Node& node, SourceType::Value source_type, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        MultipleRegisterEnumMapping mapping(node, descriptor);

        mapping.build(*this->builder, source_type, accessor, this->profile);
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_numeric(const YAML::Node& node, const util::accessor_t<T, S>& accessor)
    {
        const auto source_type = util::yaml::require_enum<SourceType>(node);

        const auto mapping = util::yaml::require_enum<RegisterMapping>(node);
        const auto scale = util::yaml::get::scale(node);

        switch (mapping) {
        case (RegisterMapping::Value::uint16):
            this->map_register16(node, source_type, [accessor, scale](T& profile, const std::shared_ptr<Register16>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_uint16() * scale));
            });
            break;
        case (RegisterMapping::Value::sint16):
            this->map_register16(node, source_type, [accessor, scale](T& profile, const std::shared_ptr<Register16>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_sint16() * scale));
            });
            break;
        case (RegisterMapping::Value::uint32):
            this->map_register32(node, source_type, [accessor, scale](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_uint32() * scale));
            });
            break;
        case (RegisterMapping::Value::sint32):
            this->map_register32(node, source_type, [accessor, scale](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_sint32() * scale));
            });
            break;
        case (RegisterMapping::Value::uint32_with_modulus):
            this->map_register32(node, source_type, [accessor, scale, modulus = get::modulus(node)](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_uint32(modulus) * scale));
            });
            break;
        case (RegisterMapping::Value::sint32_with_modulus):
            this->map_register32(node, source_type, [accessor, scale, modulus = get::modulus(node)](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_sint32(modulus) * scale));
            });
            break;
        case (RegisterMapping::Value::float32):
            this->map_register32(node, source_type, [accessor, scale](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_float32() * scale));
            });
            break;
        default:
            throw api::Exception(node.Mark(), "Unhandled register mapping type: ", RegisterMapping::to_string(mapping));
        }
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_bit(const YAML::Node& node, SourceType::Value source_type, const S& setter)
    {
        const auto index = util::yaml::get::index(node);

        const auto bit = std::make_shared<Bit>();

        switch(source_type)
        {
            case SourceType::Value::none:
                return;
            case SourceType::Value::coil:
            {
                this->builder->add_coil(index, bit);
                break;
            }
            case SourceType::Value::discrete_input:
            {
                this->builder->add_discrete_input(index, bit);
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported source type: ", SourceType::to_string(source_type));
        }

        this->builder->add_begin_action([bit](api::Logger& logger) {
            bit->reset();
        });

        this->builder->add_end_action([bit, setter, profile = this->profile](api::Logger& logger) {
            if (bit->is_set()) {
                setter(*profile, bit, logger);
            }
        });
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_register16(const YAML::Node& node, SourceType::Value source_type, const S& setter)
    {
        const auto index = util::yaml::get::index(node);

        const auto reg = std::make_shared<Register16>();

        switch(source_type)
        {
            case SourceType::Value::none:
                return;
            case SourceType::Value::holding_register:
            {
                this->builder->add_holding_register(index, reg);
                break;
            }
            case SourceType::Value::input_register:
            {
                this->builder->add_input_register(index, reg);
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported source type: ", SourceType::to_string(source_type));
        }

        this->builder->add_begin_action([reg](api::Logger& logger) {
            reg->reset();
        });

        this->builder->add_end_action([reg, setter, profile = this->profile](api::Logger& logger) {
            if (reg->is_set()) {
                setter(*profile, reg, logger);
            }
        });
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_register32(const YAML::Node& node, SourceType::Value source_type, const S& setter)
    {
        const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
        const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);

        const auto reg = std::make_shared<Register32>();

        switch(source_type)
        {
            case SourceType::Value::none:
                return;
            case SourceType::Value::holding_register:
            {
                this->builder->add_holding_register(lower_index, reg->get_lower());
                this->builder->add_holding_register(upper_index, reg->get_upper());
                break;
            }
            case SourceType::Value::input_register:
            {
                this->builder->add_input_register(lower_index, reg->get_lower());
                this->builder->add_input_register(upper_index, reg->get_upper());
                break;
            }
            default:
                throw api::Exception(node.Mark(), "Unsupported source type:", SourceType::to_string(source_type));
        }

        this->builder->add_begin_action([reg](api::Logger&) {
            reg->reset();
        });

        this->builder->add_end_action(
            [reg, setter, profile = this->profile](api::Logger& logger) {
                if (reg->is_set()) {
                    setter(*profile, reg, logger);
                }
            });
    }
}
}

#endif
