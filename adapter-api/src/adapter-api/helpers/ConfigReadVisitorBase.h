
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

        void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) final;

        void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) final;

        // TODO: not sure what to do with these yet

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) final {}

    protected:

        virtual void add_message_init(const std::function<void (T&)>& init) = 0;

        ConfigReadVisitorBase(const YAML::Node& root)
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
    void ConfigReadVisitorBase<T>::handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter)
    {
        const auto node = this->get_config_node(field_name);
        // ReadingMessageInfo is just inherited from IdentifiedObject
        const auto ioNode = yaml::require(node, ::adapter::keys::identified_object);

        const auto init =
            [ getter,
              app_name = yaml::require_string(node, ::adapter::keys::application_name),
              name = yaml::require_string(ioNode, ::adapter::keys::name),
              description = yaml::require_string(ioNode, ::adapter::keys::description),
              generator = this->generator
            ](T & profile) -> void
        {
            getter(profile)->set_applicationname(app_name);
            getter(profile)->mutable_identifiedobject()->set_name(name);
            getter(profile)->mutable_identifiedobject()->set_description(description);
            getter(profile)->mutable_identifiedobject()->set_mrid(boost::uuids::to_string((*generator)()));
        };

        this->add_message_init(init);
    }

    template <class T>
    void ConfigReadVisitorBase<T>::handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter)
    {
        const auto node = this->get_config_node(field_name);

        // validate the UUID if not empty
        const auto uuid = yaml::require_string(node, ::adapter::keys::mRID);
        if(!uuid.empty())
        {
            // throws bad_lexical_cast if not a valid UUID
            boost::lexical_cast<boost::uuids::uuid>(uuid);
        }

        const auto init =
            [ getter,
              name = yaml::require_string(node, ::adapter::keys::name),
              mrid = uuid,
              description = yaml::require_string(node, ::adapter::keys::description)
            ](T & profile) -> void
        {
            getter(profile)->set_name(name);
            getter(profile)->set_mrid(mrid);
            getter(profile)->set_description(description);
        };

        this->add_message_init(init);
    }

}

#endif //OPENFMB_ADAPTER_CONFIGVISITORBASE_H
