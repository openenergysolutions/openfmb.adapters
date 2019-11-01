
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
        void handle_mapped_enum_single_register(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);

        void handle_mapped_enum_multiple_registers(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);
        
        template <class S>
        void map_numeric(const YAML::Node& node, const util::accessor_t<T, S>& accessor);

        template <class S>
        void map_register16(const YAML::Node& node, const S& setter);

        template <class S>
        void map_register32(const YAML::Node& node, const S& setter);
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

        // ATM, there are only two source types
        if (source_type == SourceType::Value::none) {
            return;
        }

        const auto mask = util::yaml::require_integer<uint16_t>(node, keys::mask);
        const auto invert = util::yaml::optionally<bool>(node[keys::invert], false);
        this->map_register16(
            node,
            [accessor, mask, invert](T& profile, const std::shared_ptr<Register16>& reg, api::Logger&) {
                auto value = (reg->to_uint16() & mask) != 0;
                if(invert)
                {
                    value = !value;
                }
                accessor->set(profile, value);
            });
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
        const auto source = util::yaml::require_enum<EnumMappingType>(node);

        switch (source) {
        case (EnumMappingType::Value::none):
            break;
        case (EnumMappingType::Value::holding_register):
            this->handle_mapped_enum_single_register(node, accessor, descriptor);
            break;
        case (EnumMappingType::Value::multiple_holding_register):
            this->handle_mapped_enum_multiple_registers(node, accessor, descriptor);
            break;
        default:
            throw api::Exception("Unsupported source type for mapped enum: ", EnumMappingType::to_string(source));
        }
    }

    // --- private helpers ---

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_enum_single_register(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        this->map_register16(
            node,
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
    void PublishConfigReadVisitor<T>::handle_mapped_enum_multiple_registers(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        MultipleRegisterEnumMapping mapping(node, descriptor);

        mapping.build(*this->builder, accessor, this->profile);
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_numeric(const YAML::Node& node, const util::accessor_t<T, S>& accessor)
    {
        const auto source_type = util::yaml::require_enum<SourceType>(node);

        if (source_type == SourceType::Value::none) {
            return;
        }

        const auto mapping = util::yaml::require_enum<RegisterMapping>(node);
        const auto scale = util::yaml::get::scale(node);

        switch (mapping) {
        case (RegisterMapping::Value::uint16):
            this->map_register16(node, [accessor, scale](T& profile, const std::shared_ptr<Register16>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_uint16() * scale));
            });
            break;
        case (RegisterMapping::Value::sint16):
            this->map_register16(node, [accessor, scale](T& profile, const std::shared_ptr<Register16>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_sint16() * scale));
            });
            break;
        case (RegisterMapping::Value::uint32):
            this->map_register32(node, [accessor, scale](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_uint32() * scale));
            });
            break;
        case (RegisterMapping::Value::sint32):
            this->map_register32(node, [accessor, scale](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_sint32() * scale));
            });
            break;
        case (RegisterMapping::Value::uint32_with_modulus):
            this->map_register32(node, [accessor, scale, modulus = get::modulus(node)](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_uint32(modulus) * scale));
            });
            break;
        case (RegisterMapping::Value::sint32_with_modulus):
            this->map_register32(node, [accessor, scale, modulus = get::modulus(node)](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_sint32(modulus) * scale));
            });
            break;
        case (RegisterMapping::Value::float32):
            this->map_register32(node, [accessor, scale](T& profile, const std::shared_ptr<Register32>& reg, api::Logger&) {
                accessor->set(profile, static_cast<S>(reg->to_float32() * scale));
            });
            break;
        default:
            throw api::Exception("Unhandled register mapping type: ", RegisterMapping::to_string(mapping));
        }
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_register16(const YAML::Node& node, const S& setter)
    {
        const auto index = util::yaml::get::index(node);

        const auto reg = std::make_shared<Register16>();

        this->builder->add_holding_register(index, reg);

        this->builder->add_begin_action([reg](api::Logger& logger) {
            reg->reset();
        });

        this->builder->add_end_action(
            [reg, setter, profile = this->profile](api::Logger& logger) {
                if (reg->is_set()) {
                    setter(*profile, reg, logger);
                }
            });
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_register32(const YAML::Node& node, const S& setter)
    {
        const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
        const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);

        const auto reg = std::make_shared<Register32>();

        this->builder->add_holding_register(lower_index, reg->get_lower());
        this->builder->add_holding_register(upper_index, reg->get_upper());

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
