
#ifndef OPENFMB_ADAPTER_CONFIGVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGVISITORBASE_H

#include "IProtoVisitor.h"

#include "adapter-api/util/YAMLUtil.h"
#include "adapter-api/ConfigStrings.h"

#include <boost/numeric/conversion/cast.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>

#include <stack>

namespace adapter
{

    template <class T>
    class ConfigReadVisitorBase : public IProtoVisitor<T>
    {

    public:

        void start_message_field(const std::string& field_name) final
        {
            this->current.push(
                yaml::require(this->current.top(), field_name)
            );
        }

        void end_message_field() final
        {
            this->current.pop();
        }

        virtual int start_repeated_message_field(const std::string& field_name) final
        {
            auto node = yaml::require(current.top(), field_name);
            if(!node.IsSequence())
            {
                throw Exception("node is not a sequence: ", field_name);
            }
            this->current.push(node);
            return boost::numeric_cast<int>(node.size());
        }

        virtual void start_iteration(int i) final
        {
            auto node = this->current.top()[i];
            if(!node)
            {
                throw Exception("no node at index: ", i);
            }
            this->current.push(node);
        }

        virtual void end_iteration() final
        {
            this->current.pop();
        }

        virtual void end_repeated_message_field() final
        {
            this->current.pop();
        }

        // ---- final handlers for OpenFMB identity related things ----

        void handle(const std::string& field_name, getter_t<commonmodule::MessageInfo, T> getter) final;

        void handle(const std::string& field_name, getter_t <commonmodule::ConductingEquipment, T> getter) final;

        void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) final;

        // TODO: not sure what to do with these yet

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) final {}

    protected:

        template <class U>
        void configure_static_mrid(const YAML::Node& node, getter_t <U, T> getter);

        void configure_required_static_mrid(const YAML::Node& node, getter_t <commonmodule::ConductingEquipment, T> getter);

        template <class U>
        void configure_static_name(const YAML::Node& node, getter_t <U, T> getter);

        template <class U>
        void configure_static_description(const YAML::Node& node, getter_t <U, T> getter);


        virtual void add_message_init_action(const std::function<void (T&)>& init) = 0;

        virtual void add_message_complete_action(const std::function<void (T&)>& init) = 0;

        explicit ConfigReadVisitorBase(const YAML::Node& root)
        {
            current.push(root);
        }

        YAML::Node get_config_node(const std::string& name)
        {
            return yaml::require(current.top(), name);
        }

    private:


        std::stack<YAML::Node> current;

        const std::shared_ptr<boost::uuids::random_generator> generator = std::make_shared<boost::uuids::random_generator>();

    };

    template <class T>
    template <class U>
    void ConfigReadVisitorBase<T>::configure_static_mrid(const YAML::Node& node, getter_t<U, T> getter)
    {
        const auto uuid_node = yaml::require(node, ::adapter::keys::mRID);
        const auto uuid = uuid_node.as<std::string>();

        if(!uuid.empty())
        {
            try
            {
                // throws bad_lexical_cast if not a valid UUID
                boost::lexical_cast<boost::uuids::uuid>(uuid);
            }
            catch (...)
            {
                throw Exception("Not a valid UUID: ", uuid, ", line: ", uuid_node.Mark().line);
            }

            this->add_message_init_action(
                [getter, uuid](T & profile) -> void { getter(profile)->mutable_mrid()->set_value(uuid); }
            );
        }
    }

    template <class T>
    void ConfigReadVisitorBase<T>::configure_required_static_mrid(const YAML::Node& node, getter_t<commonmodule::ConductingEquipment, T> getter)
    {
        const auto uuid_node = yaml::require(node, ::adapter::keys::mRID);
        const auto uuid = uuid_node.as<std::string>();

        if(!uuid.empty())
        {
            try
            {
                // throws bad_lexical_cast if not a valid UUID
                boost::lexical_cast<boost::uuids::uuid>(uuid);
            }
            catch (...)
            {
                throw Exception("Not a valid UUID: ", uuid, ", line: ", uuid_node.Mark().line);
            }

            this->add_message_init_action(
                    [getter, uuid](T & profile) -> void { getter(profile)->set_mrid(uuid); }
            );
        }
    }

    template<class T>
    template<class U>
    void ConfigReadVisitorBase<T>::configure_static_name(const YAML::Node& node, getter_t <U, T> getter)
    {
        const auto name = yaml::require_string(node, ::adapter::keys::name);

        if(!name.empty())
        {
            if(!name.empty())
            {
                this->add_message_init_action(
                    [getter, name](T & profile)
                {
                    getter(profile)->mutable_name()->set_value(name);
                }
                );
            }
        }
    }

    template<class T>
    template<class U>
    void ConfigReadVisitorBase<T>::configure_static_description(const YAML::Node& node, getter_t <U, T> getter)
    {
        const auto description = yaml::require_string(node, ::adapter::keys::description);

        if(!description.empty())
        {
            this->add_message_init_action(
                [getter, description](T & profile)
            {
                getter(profile)->mutable_description()->set_value(description);
            }
            );
        }
    }

    template<class T>
    void ConfigReadVisitorBase<T>::handle(const std::string& field_name, getter_t <commonmodule::MessageInfo, T> getter)
    {
        const auto node = this->get_config_node(field_name);

        // MessageInfo classes are just inherited from IdentifiedObject
        // but the difference is that the mRID is new for every message
        {
            const auto io_node = yaml::require(node, ::adapter::keys::identified_object);
            const auto io_getter = [getter](T & profile) -> commonmodule::IdentifiedObject* { return getter(profile)->mutable_identifiedobject(); };
            this->configure_static_name<commonmodule::IdentifiedObject>(io_node, io_getter);
            this->configure_static_description<commonmodule::IdentifiedObject>(io_node, io_getter);
        }


        // put a fresh UUID onto every message
        this->add_message_init_action(
            [getter, generator = this->generator](T & profile)
        {
            getter(profile)->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string((*generator)()));
        }
        );

        this->add_message_complete_action(
            [getter](T & profile)
        {
            const auto now = std::chrono::system_clock::now().time_since_epoch();
            const auto seconds = std::chrono::duration_cast<std::chrono::seconds>(now).count();
            const auto millisec = std::chrono::duration_cast<std::chrono::milliseconds>(now).count() % 1000;

            const auto timestamp = getter(profile)->mutable_messagetimestamp();

            timestamp->set_seconds(seconds);
            // fractional seconds are scaled as a percentage of a second to the full range of a uint32_t
            timestamp->set_fraction(
                static_cast<uint32_t>((millisec / 1000.0)*std::numeric_limits<uint32_t>::max())
            );
        }
        );

    }

    template<class T>
    void ConfigReadVisitorBase<T>::handle(const std::string& field_name, getter_t <commonmodule::ConductingEquipment, T> getter)
    {
        const auto node = this->get_config_node(field_name);

        this->configure_required_static_mrid(node, getter);


        const auto named_object_node = yaml::require(node, keys::named_object);
        const auto named_object_getter = [getter](T & profile)
        {
            return getter(profile)->mutable_namedobject();
        };

        this->configure_static_name<commonmodule::NamedObject>(named_object_node, named_object_getter);
        this->configure_static_description<commonmodule::NamedObject>(named_object_node, named_object_getter);
    }

    template <class T>
    void ConfigReadVisitorBase<T>::handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter)
    {
        const auto node = this->get_config_node(field_name);

        this->configure_static_mrid(node, getter);
        this->configure_static_name<commonmodule::IdentifiedObject>(node, getter);
        this->configure_static_description<commonmodule::IdentifiedObject>(node, getter);
    }

}

#endif
