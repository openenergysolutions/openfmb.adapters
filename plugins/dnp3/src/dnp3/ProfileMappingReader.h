
#ifndef OPENFMB_ADAPTER_PROFILEPMAPPINGREADER_H
#define OPENFMB_ADAPTER_PROFILEPMAPPINGREADER_H

#include "ProfileMapping.h"

#include "adapter-api/helpers/ConfigVisitorBase.h"

#include <deque>
#include <cstdint>
#include <memory>

#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>


namespace adapter
{
    namespace dnp3
    {

        template <class T>
        using visit_fun_t = void (*)(IProtoVisitor<T>&);

        template <class T>
        class ConfigReadVisitor final : public ConfigVisitorBase<T>
        {
        public:

            ConfigReadVisitor(const YAML::Node& root, ProfileMapping<T>& mapping) : ConfigVisitorBase<T>(root), mapping(mapping) {}

            void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
            {
                // MV only has a magnitude
                const auto node = yaml::require(this->get_config_node(field_name), keys::mag);
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

            void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) override
            {
                const auto node = this->get_config_node(field_name);
                const auto ioNode = yaml::require(node, keys::identified_object);

                this->mapping.add_one_time_initializer(
                    [ getter,
                      appName = yaml::require_string(node, keys::application_name),
                      name = yaml::require_string(ioNode, keys::name),
                      description = yaml::require_string(ioNode, keys::description)
                    ](T & profile) -> void
                {
                    getter(profile)->set_applicationname(appName);
                    getter(profile)->mutable_identifiedobject()->set_name(name);
                    getter(profile)->mutable_identifiedobject()->set_description(description);
                }
                );

                this->mapping.add_before_publish_initializer(
                    // we generate a new UUID for every message
                    [getter, generator = this->generator](T & profile) -> void
                {
                    const auto uuid = (*generator)();
                    getter(profile)->mutable_identifiedobject()->set_mrid(boost::uuids::to_string(uuid));
                }
                );

            }

            void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) override
            {
                const auto node = this->get_config_node(field_name);

                this->mapping.add_one_time_initializer(
                    [ getter,
                      name = yaml::require_string(node, keys::name),
                      mrid = yaml::require_string(node, keys::mRID),
                      description = yaml::require_string(node, keys::description)
                    ](T & profile) -> void
                {
                    getter(profile)->set_name(name);
                    getter(profile)->set_mrid(mrid);
                    getter(profile)->set_description(description);
                }
                );

            }

            void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) override
            {
                // TODO - nothing until we decide how to fill this in
            }

            void handle(const std::string &field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) override {

            }

            void handle(const std::string& field_name, getter_t<commonmodule::LogicalNode, T> getter) override
            {
                const auto node = yaml::require(this->get_config_node(field_name), keys::identified_object);

                this->mapping.add_one_time_initializer(
                    [ getter,
                      name = yaml::require_string(node, keys::name),
                      mrid = yaml::require_string(node, keys::mRID),
                      description = yaml::require_string(node, keys::description)
                    ](T & profile) -> void
                {
                    getter(profile)->mutable_identifiedobject()->set_name(name);
                    getter(profile)->mutable_identifiedobject()->set_mrid(mrid);
                    getter(profile)->mutable_identifiedobject()->set_description(description);
                }
                );
            }

            void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) override
            {
                const auto node = this->get_config_node(field_name);
                const auto value = yaml::parse_enum_value(yaml::require_string(node, keys::set_val), commonmodule::CalcMethodKind_descriptor(), commonmodule::CalcMethodKind_Parse);

                this->mapping.add_one_time_initializer(
                    [getter, value](T & profile) -> void
                {
                    getter(profile)->set_setval(value);
                }
                );
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
                if(signed_index > std::numeric_limits<uint16_t>::max())
                {
                    throw Exception("Index exceeds max ushort: ", signed_index);
                }
                // call the specific configuration method
                this->configure(node, static_cast<uint16_t>(signed_index), getter);
            }

            void configure_cmv(const std::string& field_name, getter_t<commonmodule::CMV, T> getter)
            {
                const YAML::Node vector_node = yaml::require(
                                                   this->get_config_node(field_name),
                                                   "cVal"
                                               );

                // independently configure the angle and magnitude
                this->configure_cmv_mag(yaml::require(vector_node, keys::mag), getter);
                this->configure_cmv_ang(yaml::require(vector_node, keys::ang), getter);
            }

            void configure_cmv_ang(const YAML::Node& node, getter_t<commonmodule::CMV, T> getter)
            {
                const int32_t signed_index = yaml::require(node, keys::index).as<int32_t>();
                if(signed_index < 0)
                {
                    return;
                }
                if(signed_index > std::numeric_limits<uint16_t>::max())
                {
                    throw Exception("Index exceeds max ushort (", signed_index, ")");
                }

                const auto setter = [scale = get_scale(node), getter](const opendnp3::Analog & meas, T & profile)
                {
                    getter(profile)->mutable_cval()->mutable_ang()->set_f(static_cast<float>(meas.value * scale));
                    // TODO - extend to set timestamp/quality ?
                };

                this->mapping.add(static_cast<uint16_t>(signed_index), setter);
            }

            void configure_cmv_mag(const YAML::Node& node, getter_t<commonmodule::CMV, T> getter)
            {
                const int32_t signed_index = yaml::require(node, keys::index).as<int32_t>();
                if(signed_index < 0)
                {
                    return;
                }
                if(signed_index > std::numeric_limits<uint16_t>::max())
                {
                    throw Exception("Index exceeds max ushort (", signed_index, ")");
                }

                const auto setter = [scale = get_scale(node), getter](const opendnp3::Analog & meas, T & profile)
                {
                    getter(profile)->mutable_cval()->mutable_mag()->set_f(static_cast<float>(meas.value * scale));
                    // TODO - extend to set timestamp/quality ?
                };

                this->mapping.add(static_cast<uint16_t>(signed_index), setter);
            }


            std::deque<std::string> path;

            ProfileMapping<T>& mapping;

            const std::shared_ptr<boost::uuids::random_generator> generator = std::make_shared<boost::uuids::random_generator>();
        };

        template <class T>
        std::unique_ptr<IProfileMapping<T>> read_mapping(const YAML::Node& node, visit_fun_t<T> visit)
        {
            std::unique_ptr<ProfileMapping<T>> mapping(std::make_unique<ProfileMapping<T>>());

            ConfigReadVisitor<T> reader(node, *mapping);

            visit(reader);

            return std::move(mapping);
        }

    }
}

#endif
