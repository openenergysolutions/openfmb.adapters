
#ifndef OPENFMB_ADAPTER_CONFIGVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGVISITORBASE_H

#include "IProtoVisitor.h"

#include "adapter-api/util/YAMLUtil.h"
#include "adapter-api/ConfigStrings.h"

#include <stack>

#include <boost/numeric/conversion/cast.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>

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

        void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) final
        {
            this->handle_message_info(field_name, getter);
        }

        void handle(const std::string& field_name, getter_t <commonmodule::StatusMessageInfo, T> getter) final
        {
            this->handle_message_info(field_name, getter);
        }

        void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) final;

        // TODO: not sure what to do with these yet

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) final {}

    protected:

        template <class U>
        void handle_message_info(const std::string& field_name, getter_t <U, T> getter);


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

    template<class T>
    template <class U>
    void ConfigReadVisitorBase<T>::handle_message_info(const std::string& field_name, getter_t <U, T> getter)
    {
        const auto node = this->get_config_node(field_name);
        // MessageInfo classes are just inherited from IdentifiedObject
        const auto ioNode = yaml::require(node, ::adapter::keys::identified_object);

        const auto app_name = yaml::require_string(node, ::adapter::keys::application_name);
        const auto name = yaml::require_string(ioNode, ::adapter::keys::name);
        const auto description = yaml::require_string(ioNode, ::adapter::keys::description);

        // put a fresh UUID onto every message
        this->add_message_init_action(
            [getter, generator = this->generator](T & profile)
        {
            getter(profile)->mutable_identifiedobject()->set_mrid(boost::uuids::to_string((*generator)()));
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


        if(!app_name.empty())
        {
            this->add_message_init_action(
                [getter, app_name](T & profile)
            {
                getter(profile)->set_applicationname(app_name);
            }
            );
        }

        if(!name.empty())
        {
            this->add_message_init_action(
                [getter, name](T & profile)
            {
                getter(profile)->mutable_identifiedobject()->set_name(name);
            }
            );
        }

        if(!description.empty())
        {
            this->add_message_init_action(
                [getter, description](T & profile)
            {
                getter(profile)->mutable_identifiedobject()->set_description(description);
            }
            );
        }

    }

    template <class T>
    void ConfigReadVisitorBase<T>::handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter)
    {
        const auto node = this->get_config_node(field_name);

        // validate the UUID if not empty
        const auto uuid = yaml::require_string(node, ::adapter::keys::mRID);
        const auto name = yaml::require_string(node, ::adapter::keys::name);
        const auto description = yaml::require_string(node, ::adapter::keys::description);

        if(!uuid.empty())
        {

            try
            {
                // throws bad_lexical_cast if not a valid UUID
                boost::lexical_cast<boost::uuids::uuid>(uuid);
            }
            catch (...)
            {
                throw Exception("Not a valid UUID: ", uuid);
            }

            this->add_message_init_action(
                [getter, uuid](T & profile) -> void { getter(profile)->set_mrid(uuid); }
            );
        }

        if(!name.empty())
        {
            this->add_message_init_action(
                [getter, name](T & profile) -> void { getter(profile)->set_name(name); }
            );
        }

        if(!description.empty())
        {
            this->add_message_init_action(
                [getter, description](T & profile) -> void { getter(profile)->set_description(description); }
            );
        }
    }

}

#endif
