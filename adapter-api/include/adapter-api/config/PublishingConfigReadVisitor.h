
#ifndef OPENFMB_ADAPTER_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_PUBLISHINGCONFIGREADVISITOR_H

#include "ConfigReadVisitorBase.h"

#include "adapter-api/util/Time.h"
#include "adapter-api/ConfigStrings.h"

#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>

namespace adapter
{

    /**
     * Base class that can be used in plugins that need to read a configuration and publish a profile
     *
     * Automatically handles message mRID, timestamp, etc
     *
     * @tparam T
     */
    template <class T>
    class PublishingConfigReadVisitor : public ConfigReadVisitorBase<T>
    {

    public:

        // ---- final handlers for OpenFMB identity related things ----

        void handle(const std::string& field_name, Accessor<commonmodule::MessageInfo, T> accessor) final;

        void handle(const std::string& field_name, Accessor<commonmodule::ConductingEquipment, T> accessor) final;

        void handle(const std::string& field_name, Accessor<commonmodule::IdentifiedObject, T> accessor) final;

    protected:

        explicit PublishingConfigReadVisitor(const YAML::Node& root) : ConfigReadVisitorBase<T>(root)
        {}

        // --- helper methods for configuring static information ---

        template <class S>
        void configure_static_mrid(const YAML::Node& node, const S& setter);

        template <class R>
        void configure_static_name(const YAML::Node& node, mutable_getter_t<R, T> getter);

        template <class R>
        void configure_static_description(const YAML::Node& node, mutable_getter_t<R, T> getter);

        // --- inherited classes implement these methods ---

        /**
         * Add an action that should be performed on the profile prior to applying any values
         *
         * @param init functor to be applied to the profile
         */
        virtual void add_message_init_action(const std::function<void (T&)>& init) = 0;

        /**
         * Add an action that should be performed on the profile prior to publishing the profile
         *
         * @param init functor to be applied to the profile
         */
        virtual void add_message_complete_action(const std::function<void (T&)>& init) = 0;

    private:

        const std::shared_ptr<boost::uuids::random_generator> generator = std::make_shared<boost::uuids::random_generator>();

    };

    template<class T>
    void PublishingConfigReadVisitor<T>::handle(const std::string& field_name, Accessor<commonmodule::MessageInfo, T> accessor)
    {
        const auto node = this->get_config_node(field_name);

        // MessageInfo classes are just inherited from IdentifiedObject
        // but the difference is that the mRID is new for every message
        {
            const auto io_node = yaml::require(node, ::adapter::keys::identified_object);
            const auto io_getter = [accessor](T & profile) -> commonmodule::IdentifiedObject* { return accessor.create(profile)->mutable_identifiedobject(); };
            this->configure_static_name<commonmodule::IdentifiedObject>(io_node, io_getter);
            this->configure_static_description<commonmodule::IdentifiedObject>(io_node, io_getter);
        }

        // put a fresh UUID onto every message
        this->add_message_init_action(
                [accessor, generator = this->generator](T & profile)
                {
                    accessor.create(profile)->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string((*generator)()));
                }
        );

        this->add_message_complete_action(
                [accessor](T & profile)
                {
                    time::set(std::chrono::system_clock::now(), *accessor.create(profile)->mutable_messagetimestamp());
                }
        );
    }

    template<class T>
    void PublishingConfigReadVisitor<T>::handle(const std::string& field_name, Accessor<commonmodule::ConductingEquipment, T> accessor)
    {
        const auto node = this->get_config_node(field_name);

        this->configure_static_mrid(node, [accessor](T & profile, const std::string & uuid)
        {
            accessor.create(profile)->set_mrid(uuid);
        });


        const auto named_object_node = yaml::require(node, keys::named_object);
        const auto named_object_getter = [accessor](T & profile)
        {
            return accessor.create(profile)->mutable_namedobject();
        };

        this->configure_static_name<commonmodule::NamedObject>(named_object_node, named_object_getter);
        this->configure_static_description<commonmodule::NamedObject>(named_object_node, named_object_getter);
    }

    template <class T>
    void PublishingConfigReadVisitor<T>::handle(const std::string& field_name, Accessor<commonmodule::IdentifiedObject, T> accessor)
    {
        const auto node = this->get_config_node(field_name);

        this->configure_static_mrid(node, [accessor](T & profile, const std::string & uuid)
        {
            accessor.create(profile)->mutable_mrid()->set_value(uuid);
        });

        this->configure_static_name<commonmodule::IdentifiedObject>(node, accessor.to_mutable_getter());
        this->configure_static_description<commonmodule::IdentifiedObject>(node, accessor.to_mutable_getter());
    }

    template <class T>
    template <class S>
    void PublishingConfigReadVisitor<T>::configure_static_mrid(const YAML::Node& node, const S& setter)
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
                [setter, uuid](T & profile) -> void { setter(profile, uuid); }
            );
        }
    }

    template<class T>
    template<class R>
    void PublishingConfigReadVisitor<T>::configure_static_name(const YAML::Node& node, mutable_getter_t<R, T> getter)
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
    void PublishingConfigReadVisitor<T>::configure_static_description(const YAML::Node& node, mutable_getter_t<U, T> getter)
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

}

#endif
