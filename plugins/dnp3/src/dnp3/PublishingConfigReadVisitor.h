
#ifndef OPENFMB_ADAPTER_DNP3_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_PUBLISHINGCONFIGREADVISITOR_H


#include "adapter-api/config/PublishingConfigReadVisitorBase.h"
#include "adapter-api/ConfigStrings.h"

#include "IPublishConfigBuilder.h"
#include "InputType.h"

#include <deque>
#include <cstdint>
#include <memory>

#include <boost/numeric/conversion/cast.hpp>


namespace adapter
{
    namespace dnp3
    {
        template <class T>
        class PublishingConfigReadVisitor final : public PublishingConfigReadVisitorBase<T>
        {
            const std::shared_ptr<T> profile = std::make_shared<T>();
            const publisher_t publisher;
            const std::shared_ptr<IPublishConfigBuilder> builder;


            struct DbPosKindMapping
            {
                commonmodule::DbPosKind high;
                commonmodule::DbPosKind low;
            };

        public:

            PublishingConfigReadVisitor(const YAML::Node& root, publisher_t publisher, std::shared_ptr<IPublishConfigBuilder> builder) :
                PublishingConfigReadVisitorBase<T>(root),
                publisher(std::move(publisher)),
                builder(std::move(builder))
            {
                this->builder->add_start_action(
                    [profile = this->profile]()
                {
                    profile->Clear();
                }
                );
            }

            ~PublishingConfigReadVisitor()
            {
                this->builder->add_end_action(
                    [profile = this->profile, publisher = this->publisher]()
                {
                    publisher->publish(*profile);
                }
                );
            }

            void handle(const std::string& field_name, Accessor<commonmodule::MV, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);

                this->configure_analogue(
                    yaml::require(node, ::adapter::keys::mag),
                    [accessor](T & profile)
                {
                    return accessor.create(profile)->mutable_mag();
                }
                );
            }

            void handle(const std::string& field_name, Accessor<commonmodule::CMV, T> accessor) override
            {
                const YAML::Node vector_node = yaml::require(
                                                   this->get_config_node(field_name),
                                                   ::adapter::keys::cVal
                                               );

                // independently configure the angle and magnitude
                this->configure_analogue(
                    yaml::require(vector_node, ::adapter::keys::mag),
                    [accessor](T & profile)
                {
                    return accessor.create(profile)->mutable_cval()->mutable_mag();
                }
                );

                this->configure_analogue(
                    yaml::require(vector_node, ::adapter::keys::ang),
                    [accessor](T & profile)
                {
                    return accessor.create(profile)->mutable_cval()->mutable_ang();
                }
                );
            }

            void handle(const std::string& field_name, Accessor<commonmodule::BCR, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);
                const auto input_type = this->get_input_type(node);

                switch(input_type)
                {
                case(InputType::disabled):
                    break;

                case(InputType::analog):

                    this->builder->add_measurement_handler(
                        [accessor, profile = this->profile, scale = this->get_scale(node)](const opendnp3::Analog & meas)
                    {
                        accessor.create(*profile)->set_actval(static_cast<google::protobuf::int64>(meas.value * scale));
                    },
                    get_index(node)
                    );

                    break;
                case(InputType::counter):

                    this->builder->add_measurement_handler(
                        [accessor, profile = this->profile, scale = this->get_scale(node)](const opendnp3::Counter & meas)
                    {
                        accessor.create(*profile)->set_actval(static_cast<google::protobuf::int64>(meas.value * scale));
                    },
                    get_index(node)
                    );

                    break;
                default:
                    throw Exception("BCR cannot be configured for input type: ", InputTypeMeta::to_string(input_type));
                }
            }

            void handle(const std::string& field_name, Accessor<commonmodule::StatusDPS, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);
                const auto input_type = this->get_input_type(node);

                switch(input_type)
                {
                case(InputType::disabled):
                    break;

                case(InputType::binary):

                    this->builder->add_measurement_handler(
                        [accessor, profile = this->profile, mapping = get_db_pos_kind_mapping(node)](const opendnp3::Binary & meas)
                    {
                        accessor.create(*profile)->set_stval(meas.value ? mapping.high : mapping.low);
                    },
                    get_index(node)
                    );

                    break;

                default:
                    throw Exception("StatusDPS cannot be configured for input type: ", InputTypeMeta::to_string(input_type));
                }
            }

            void handle(const std::string& field_name, Accessor<commonmodule::CheckConditions, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor<commonmodule::ScheduleCSG, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor<switchmodule::SwitchCSG, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor<commonmodule::StatusSPS, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor<commonmodule::ControlDPC, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor<google::protobuf::FloatValue, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, PrimitiveAccessor<commonmodule::StateKind, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

        private:

            static commonmodule::DbPosKind get_db_pos_kind(const YAML::Node& node, const std::string& key)
            {
                const auto raw_value = yaml::require_string(node, key);

                const auto descriptor = commonmodule::DbPosKind_descriptor()->FindValueByName(raw_value);

                if(!descriptor)
                {
                    throw Exception("Unknown value (", raw_value, ") for ", commonmodule::DbPosKind_descriptor()->full_name());
                }

                return static_cast<commonmodule::DbPosKind>(descriptor->number());
            }

            static DbPosKindMapping get_db_pos_kind_mapping(const YAML::Node& node)
            {
                return DbPosKindMapping
                {
                    .high = get_db_pos_kind(node, keys::high),
                    .low = get_db_pos_kind(node, keys::low)
                };
            }

            static InputType get_input_type(const YAML::Node& node)
            {
                return InputTypeMeta::from_string(yaml::require_string(node, keys::input_type));
            }

            static uint16_t get_index(const YAML::Node& node)
            {
                return boost::numeric_cast<uint16_t>(yaml::require(node, keys::index).as<int32_t>());
            }

            static double get_scale(const YAML::Node& node)
            {
                return yaml::require(node, keys::scale).as<double>();
            }

            void configure_analogue(const YAML::Node& node, mutable_getter_t<commonmodule::AnalogueValue, T> getter)
            {
                const auto input_type = get_input_type(node);
                switch(input_type)
                {
                case(InputType::disabled):
                    break;
                case(InputType::analog):
                    this->configure_analogue<opendnp3::Analog>(node, getter);
                    break;
                default:
                    throw Exception("CMV cannot be configred for input type: ", InputTypeMeta::to_string(input_type));
                }
            }

            template <class U>
            void configure_analogue(const YAML::Node& node, mutable_getter_t<commonmodule::AnalogueValue, T> getter)
            {
                const auto handler = [scale = get_scale(node), getter, profile = this->profile](const U & meas)
                {
                    getter(*profile)->mutable_f()->set_value(static_cast<float>(meas.value * scale));
                };

                this->builder->add_measurement_handler(handler, get_index(node));
            };

        protected:

            void add_message_init_action(const std::function<void(T&)>& action) override
            {
                this->builder->add_start_action([action, profile = this->profile]()
                {
                    action(*profile);
                });
            }

            void add_message_complete_action(const std::function<void(T&)>& action) override
            {
                this->builder->add_end_action([action, profile = this->profile]()
                {
                    action(*profile);
                });
            }

        };

    }
}

#endif
