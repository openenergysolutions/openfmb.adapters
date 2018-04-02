
#ifndef OPENFMB_ADAPTER_DNP3_CONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONFIGREADVISITOR_H

#include "ProfileMapping.h"

#include "adapter-api/helpers/ConfigReadVisitorBase.h"
#include "adapter-api/ConfigStrings.h"

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
        public:

            ConfigReadVisitor(const YAML::Node& root, ProfileMapping<T>& mapping) : ConfigReadVisitorBase<T>(root), mapping(mapping) {}

            void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
            {
                // MV only has a magnitude
                const auto node = yaml::require(this->get_config_node(field_name), ::adapter::keys::mag);
                this->configure_scalar_value(node, getter);
            }

            void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
            {
                this->configure_cmv(field_name, getter);
            }

            void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
            {
                const auto node = this->get_config_node(field_name);
                this->configure_scalar_value(node, getter);
            }


        private:

            void configure(const YAML::Node& node, uint16_t index, getter_t<commonmodule::MV, T> getter)
            {
                const auto setter = [scale = get_scale(node), getter](const opendnp3::Analog & meas, T & profile)
                {
                    getter(profile)->mutable_mag()->set_f(static_cast<float>(meas.value * scale));
                    // TODO - extend to set timestamp/quality
                };

                this->mapping.add(index, setter);
            }

            void configure(const YAML::Node& node, uint16_t index, getter_t<commonmodule::BCR, T> getter)
            {
                // need the scale regardless of mapping
                const auto scale = get_scale(node);
                // first determine if we're mapping the BCR out of an analog or a counter
                const auto mapped_from = yaml::require(node, keys::mapped_from).as<std::string>();

                if(mapped_from == keys::analog)
                {
                    this->configure_analog(node, index, scale, getter);
                }
                else if(mapped_from == keys::counter)
                {
                    this->configure_counter(node, index, scale, getter);
                }
                else
                {
                    throw Exception("Unknown DNP3 source type in BCR mapping: ", mapped_from);
                }
            }

            void configure_analog(const YAML::Node& node, uint16_t index, double scale, getter_t<commonmodule::BCR, T> getter)
            {
                const auto setter = [scale = get_scale(node), getter](const opendnp3::Analog & meas, T & profile)
                {
                    getter(profile)->set_actval(static_cast<google::protobuf::int64>(meas.value * scale));
                    // TODO - extend to set timestamp/quality
                };

                this->mapping.add(index, setter);
            }

            void configure_counter(const YAML::Node& node, uint16_t index, double scale, getter_t<commonmodule::BCR, T> getter)
            {

                const auto setter = [scale = get_scale(node), getter](const opendnp3::Counter & meas, T & profile)
                {
                    getter(profile)->set_actval(static_cast<google::protobuf::int64>(meas.value * scale));
                    // TODO - extend to set timestamp/quality
                };

                this->mapping.add(index, setter);
            }

            static double get_scale(const YAML::Node& node)
            {
                return yaml::require(node, keys::scale).as<double>();
            }

            template <class U>
            void configure_scalar_value(const YAML::Node& node, U getter)
            {
                const int32_t signed_index = yaml::require(node, keys::index).as<int32_t>();
                if(signed_index < 0)
                {
                    return;
                }
                // call the specific configuration method
                this->configure(node, boost::numeric_cast<uint16_t>(signed_index), getter);
            }

            void configure_cmv(const std::string& field_name, getter_t<commonmodule::CMV, T> getter)
            {
                const YAML::Node vector_node = yaml::require(
                                                   this->get_config_node(field_name),
                                                   "cVal"
                                               );

                // independently configure the angle and magnitude
                this->configure_cmv_mag(yaml::require(vector_node, ::adapter::keys::mag), getter);
                this->configure_cmv_ang(yaml::require(vector_node, ::adapter::keys::ang), getter);
            }

            void configure_cmv_ang(const YAML::Node& node, getter_t<commonmodule::CMV, T> getter)
            {
                const int32_t signed_index = yaml::require(node, keys::index).as<int32_t>();
                if(signed_index < 0)
                {
                    return;
                }

                const auto setter = [scale = get_scale(node), getter](const opendnp3::Analog & meas, T & profile)
                {
                    getter(profile)->mutable_cval()->mutable_ang()->set_f(static_cast<float>(meas.value * scale));
                    // TODO - extend to set timestamp/quality ?
                };

                this->mapping.add(boost::numeric_cast<uint16_t>(signed_index), setter);
            }

            void configure_cmv_mag(const YAML::Node& node, getter_t<commonmodule::CMV, T> getter)
            {
                const int32_t signed_index = yaml::require(node, keys::index).as<int32_t>();
                if(signed_index < 0)
                {
                    return;
                }

                const auto setter = [scale = get_scale(node), getter](const opendnp3::Analog & meas, T & profile)
                {
                    getter(profile)->mutable_cval()->mutable_mag()->set_f(static_cast<float>(meas.value * scale));
                    // TODO - extend to set timestamp/quality ?
                };

                this->mapping.add(boost::numeric_cast<uint16_t>(signed_index), setter);
            }

        protected:

            void add_message_init(const std::function<void(T&)>& init) override
            {
                mapping.add_before_publish_initializer(init);
            }

        private:


            ProfileMapping<T>& mapping;
        };

    }
}

#endif
