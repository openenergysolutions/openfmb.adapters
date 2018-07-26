
#ifndef OPENFMB_ADAPTER_MODBUS_PUBLISHCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_PUBLISHCONFIGREADVISITOR_H

#include "ConfigStrings.h"
#include "IConfigurationBuilder.h"
#include "Register16.h"
#include "Register32.h"

#include "generated/RegisterMapping.h"
#include "generated/SourceType.h"

#include <adapter-api/config/PublishingConfigReadVisitorBase.h>
#include <adapter-api/config/YAMLGetters.h>

namespace adapter {
namespace modbus {

    namespace get
    {
        uint32_t modulus(const YAML::Node& node)
        {
            return yaml::require_integer<uint32_t>(node, keys::modulus);
        }
    }


    /*
    template <class U>
    using setter_t = std::function<void(U&)>;
     */

    template <class T>
    class PublishConfigReadVisitor final : public PublishingConfigReadVisitorBase<T> {
        const std::shared_ptr<T> profile = std::make_shared<T>();
        const publisher_t publisher;
        const std::shared_ptr<IConfigurationBuilder> builder;

    public:
        PublishConfigReadVisitor(const YAML::Node& root, publisher_t publisher, std::shared_ptr<IConfigurationBuilder> builder);

        ~PublishConfigReadVisitor();

    protected:
        void handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor) override;

        void handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) override;

        void handle_mapped_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) override;

        void handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor) override;

        void handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;

        void add_message_init_action(const std::function<void(T&)>& action) override;

        void add_message_complete_action(const std::function<void(T&)>& action) override;

    private:

        template <class S>
        void map_register16(const YAML::Node& node, const S& setter);

        template <class S>
        void map_register32(const YAML::Node& node, const S& setter);
    };

    template <class T>
    PublishConfigReadVisitor<T>::PublishConfigReadVisitor(const YAML::Node& root, publisher_t publisher, std::shared_ptr<IConfigurationBuilder> builder)
        : PublishingConfigReadVisitorBase<T>(root)
        , publisher(std::move(publisher))
        , builder(std::move(builder))
    {
        this->builder->add_begin_action([profile = this->profile](Logger&) {
            profile->Clear();
        });
    }

    template <class T>
    PublishConfigReadVisitor<T>::~PublishConfigReadVisitor()
    {
        this->builder->add_end_action(
            [profile = this->profile, publisher = this->publisher](Logger&) {
                publisher->publish(*profile);
            });
    }

    template <class T>
    void PublishConfigReadVisitor<T>::add_message_init_action(const std::function<void(T&)>& action)
    {
        this->builder->add_begin_action([action, profile = this->profile](Logger&) {
            action(*profile);
        });
    }

    template <class T>
    void PublishConfigReadVisitor<T>::add_message_complete_action(const std::function<void(T&)>& action)
    {
        this->builder->add_end_action([action, profile = this->profile](Logger&) {
            action(*profile);
        });
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor)
    {
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int>& accessor)
    {
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_int64(const YAML::Node& node, const accessor_t<T, long>& accessor)
    {
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor)
    {
        const auto source_type = yaml::require_enum<SourceType>(node);

        // ATM, there are only two source types
        if(source_type == SourceType::Value::none) return;

        const auto mapping = yaml::require_enum<RegisterMapping>(node);

        switch(mapping)
        {
            case (RegisterMapping::Value::uint16):
                this->map_register16(node, [accessor, scale = ::adapter::yaml::get::scale(node)](T & profile,
                                                                                   const std::shared_ptr<Register16>& reg, Logger&)
                {
                    accessor->set(profile, static_cast<float>(reg->to_uint16() * scale));
                });
                break;
            case (RegisterMapping::Value::sint16):
                this->map_register16(node, [accessor, scale = ::adapter::yaml::get::scale(node)](T & profile,
                                                                                   const std::shared_ptr<Register16>& reg, Logger&)
                {
                    accessor->set(profile, static_cast<float>(reg->to_sint16() * scale));
                });
                break;
            case (RegisterMapping::Value::uint32):
                this->map_register32(node, [accessor, scale = ::adapter::yaml::get::scale(node)](T & profile,
                                                                                   const std::shared_ptr<Register32>& reg, Logger&)
                {
                    accessor->set(profile, static_cast<float>(reg->to_uint32() * scale));
                });
                break;
            case (RegisterMapping::Value::sint32):
                this->map_register32(node, [accessor, scale = ::adapter::yaml::get::scale(node)](T & profile,
                                                                                   const std::shared_ptr<Register32>& reg, Logger&)
                {
                    accessor->set(profile, static_cast<float>(reg->to_sint32() * scale));
                });
                break;
            case (RegisterMapping::Value::uint32_with_modulus):
                this->map_register32(node, [accessor, scale = ::adapter::yaml::get::scale(node), modulus = get::modulus(node)]
                        (T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                {
                    accessor->set(profile, static_cast<float>(reg->to_uint32(modulus) * scale));
                });
                break;
            case (RegisterMapping::Value::sint32_with_modulus):
                this->map_register32(node, [accessor, scale = ::adapter::yaml::get::scale(node), modulus = get::modulus(node)]
                        (T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                {
                    accessor->set(profile, static_cast<float>(reg->to_sint32(modulus) * scale));
                });
                break;
            default:
                throw Exception("Unhandled register mapping type for float: ", RegisterMapping::to_string(mapping));
        }
    }

    template <class T>
    void PublishConfigReadVisitor<T>::handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
    }

    // --- private helpers ---

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_register16(const YAML::Node& node, const S& setter)
    {
        const auto index = ::adapter::yaml::get::index(node);

        const auto reg = std::make_shared<Register16>();

        this->builder->add_holding_register(index, reg);

        this->builder->add_begin_action([reg](Logger & logger)
                                        {
                                            reg->reset();
                                        });

        this->builder->add_end_action(
                [reg, setter, profile = this->profile](Logger & logger)
                {
                    if(reg->is_set())
                    {
                        setter(*profile, reg, logger);
                    }
                }
        );
    }

    template <class T>
    template <class S>
    void PublishConfigReadVisitor<T>::map_register32(const YAML::Node& node, const S& setter)
    {
        const auto lower_index = yaml::require_integer<uint16_t>(node, keys::lower_index);
        const auto upper_index =  yaml::require_integer<uint16_t>(node, keys::upper_index);

        const auto reg = std::make_shared<Register32>();

        this->builder->add_holding_register(lower_index, reg->get_lower());
        this->builder->add_holding_register(upper_index, reg->get_upper());

        this->builder->add_begin_action([reg](Logger&)
                                        {
                                            reg->reset();
                                        });

        this->builder->add_end_action(
                [reg, setter, profile = this->profile](Logger & logger)
                {
                    if(reg->is_set())
                    {
                        setter(*profile, reg, logger);
                    }
                }
        );
    }
}
}

#endif
