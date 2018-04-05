
#ifndef OPENFMB_ADAPTER_DNP3_CONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONFIGREADVISITOR_H


#include "adapter-api/helpers/ConfigReadVisitorBase.h"
#include "adapter-api/ConfigStrings.h"

#include "IConfigurationBuilder.h"
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
        class ConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {
            const std::shared_ptr<T> profile;
            const std::shared_ptr<IConfigurationBuilder> builder;

        public:

            ConfigReadVisitor(const YAML::Node& root, const std::shared_ptr<T>& profile, const std::shared_ptr<IConfigurationBuilder>& builder) :
                ConfigReadVisitorBase<T>(root),
                profile(profile),
                builder(builder)
            {}


            void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
            {
                const auto node = this->get_config_node(field_name);

                this->configure_analogue(
                        yaml::require(node, ::adapter::keys::mag),
                        [getter](T& profile) { return getter(profile)->mutable_mag(); }
                );
            }

            void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
            {
                const YAML::Node vector_node = yaml::require(
                        this->get_config_node(field_name),
                        ::adapter::keys::cVal
                );

                // independently configure the angle and magnitude
                this->configure_analogue(
                        yaml::require(vector_node, ::adapter::keys::mag),
                        [getter](T& profile) { return getter(profile)->mutable_cval()->mutable_mag(); }
                );

                this->configure_analogue(
                        yaml::require(vector_node, ::adapter::keys::ang),
                        [getter](T& profile) { return getter(profile)->mutable_cval()->mutable_ang(); }
                );
            }

            void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
            {
                const auto node = this->get_config_node(field_name);
                const auto input_type = this->get_input_type(node);

                switch(input_type)
                {
                    case(InputType::disabled):
                        break;

                    case(InputType::analog):

                        this->builder->add_measurement_handler(
                                [getter, profile = this->profile](const opendnp3::Analog& meas)
                                {
                                     getter(*profile)->set_actval(static_cast<google::protobuf::int64>(meas.value));
                                },
                                get_index(node)
                        );

                        break;
                    case(InputType::counter):

                        this->builder->add_measurement_handler(
                                [getter, profile = this->profile](const opendnp3::Counter& meas)
                                {
                                    getter(*profile)->set_actval(meas.value);
                                },
                                get_index(node)
                        );

                        break;
                    default:
                        throw Exception("BCR cannot be configred for input type: ", InputTypeMeta::to_string(input_type));
                }
            }

            void handle(const std::string& field_name, getter_t<commonmodule::StatusDPS, T> getter) override
            {

            }

        private:

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

            void configure_analogue(const YAML::Node& node, getter_t<commonmodule::AnalogueValue, T> getter)
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
            void configure_analogue(const YAML::Node& node, getter_t<commonmodule::AnalogueValue, T> getter)
            {
                const auto handler = [scale = get_scale(node), getter, profile = this->profile](const U& meas)
                {
                    getter(*profile)->set_f(static_cast<float>(meas.value * scale));
                };

                this->builder->add_measurement_handler(handler, get_index(node));
            };

        protected:

            void add_message_init(const std::function<void(T&)>& init) override
            {
                auto action = [init, profile = this->profile]()
                {
                    init(*profile);
                };
                this->builder->add_start_action(action);
            }

        };

    }
}

#endif
