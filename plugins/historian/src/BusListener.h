#ifndef OPENFMB_PLUGIN_HISTORIAN_BUS_LISTENER_H
#define OPENFMB_PLUGIN_HISTORIAN_BUS_LISTENER_H

#include <deque>
#include <memory>
#include <string>
#include <boost/uuid/uuid_generators.hpp>
#include "adapter-api/ISubscriber.h"
#include "adapter-api/config/IProtoVisitor.h"
#include "adapter-api/config/generated/MessageVisitors.h"
#include "IArchiver.h"
#include "Message.h"

namespace adapter
{
namespace historian
{

template<typename Proto>
class ProtoMessageVisitor : private IProtoVisitor<Proto>
{
    using save_func_t = std::function<void(Proto&, Message&)>;

public:
    ProtoMessageVisitor()
    {
        visit(*this);
        m_tagname_stack.clear();
    }

    void save(Proto& proto, std::shared_ptr<IArchiver> archiver)
    {
        // Extract message UUID, timestamp and device UUID
        if(!m_message_info_getter || !m_conducting_equipment_getter)
        {
            return;
        }

        auto message_info = m_message_info_getter(proto);
        auto conducting_equipment = m_conducting_equipment_getter(proto);

        if(!message_info || !conducting_equipment)
        {
            return;
        }

        boost::uuids::uuid message_uuid;
        boost::uuids::uuid device_uuid;
        try
        {
            boost::uuids::string_generator gen;
            message_uuid = gen(message_info->identifiedobject().mrid());
            device_uuid = gen(conducting_equipment->mrid());
        }
        catch(std::runtime_error)
        {
            return;
        }

        auto timestamp = message_info->messagetimestamp().seconds();

        // Build message
        auto message = std::make_unique<Message>(message_uuid, timestamp, device_uuid);
        for(auto& save_func : m_save_funcs)
        {
            save_func(proto, *message);
        }
        archiver->save(std::move(message));
    }

private:
    // ===== IProtoVisitor =====
    void start_message_field(const std::string& field_name) override
    {
        m_tagname_stack.push_back(field_name);
    };

    void end_message_field() override
    {
        m_tagname_stack.pop_back();
    }

    virtual int start_repeated_message_field(const std::string& field_name) override
    {
        m_tagname_stack.push_back(field_name);
        return 0;
    }

    virtual void start_iteration(int i) override
    {
        m_tagname_stack.push_back(std::to_string(i));
    }

    virtual void end_iteration() override
    {
        m_tagname_stack.pop_back();
    }

    virtual void end_repeated_message_field() override
    {
        m_tagname_stack.pop_back();
    }

    // Common message info
    virtual void handle(const std::string& field_name, getter_t<commonmodule::MessageInfo, Proto> getter) override
    {
        m_message_info_getter = getter;
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipment, Proto> getter) override
    {
        m_conducting_equipment_getter = getter;
    }

    // Measurement types
    virtual void handle(const std::string& field_name, getter_t<commonmodule::MV, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);

        auto tagname = get_current_tagname("mag");
        m_save_funcs.push_back([=](Proto& proto, Message& message) {
            auto mv = getter(proto);
            if (mv)
            {
                auto mag = mv->mag().f();
                message.items.emplace_back(tagname, mag);
            }
        });

        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::CMV, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);

        {
            auto tagname = get_current_tagname("ang");
            m_save_funcs.push_back([=](Proto& proto, Message& message) {
                auto cmv = getter(proto);
                if (cmv)
                {
                    auto ang = cmv->cval().ang().f();
                    message.items.emplace_back(tagname, ang);
                }
            });
        }

        {
            auto tagname = get_current_tagname("mag");
            m_save_funcs.push_back([=](Proto& proto, Message& message) {
                auto cmv = getter(proto);
                if (cmv)
                {
                    auto mag = cmv->cval().mag().f();
                    message.items.emplace_back(tagname, mag);
                }
            });
        }

        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::BCR, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);

        auto tagname = get_current_tagname("actVal");
        m_save_funcs.push_back([=](Proto& proto, Message& message) {
            auto bcr = getter(proto);
            if (bcr)
            {
                auto val = bcr->actval();
                message.items.emplace_back(tagname, static_cast<int>(val));
            }
        });

        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::StatusDPS, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);


        auto tagname = get_current_tagname("stVal");
        m_save_funcs.push_back([=](Proto& proto, Message& message) {
            auto statusDps = getter(proto);
            if (statusDps)
            {
                auto val = static_cast<unsigned int>(statusDps->stval());
                message.items.emplace_back(tagname, val);
            }
        });

        m_tagname_stack.pop_back();
    }


    // Not used
    void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, Proto> getter) override {};
    void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, Proto> getter) override {};
    void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, Proto> getter) override {};
    void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, Proto> getter) override {};

    // ====== Helper functions =====
    std::string get_current_tagname(const std::string& id)
    {
        std::string tagname;
        for (auto& tag : m_tagname_stack)
        {
            tagname.append(tag);
            tagname.append(".");
        }
        tagname.append(id);

        return tagname;
    }

    // Private member variables
    std::deque<std::string> m_tagname_stack;
    getter_t<commonmodule::MessageInfo, Proto> m_message_info_getter;
    getter_t<commonmodule::ConductingEquipment, Proto> m_conducting_equipment_getter;
    std::vector<save_func_t> m_save_funcs;
};

template<typename Proto>
class BusListener : public ISubscriber<Proto>
{
public:
    BusListener(std::shared_ptr<IArchiver> archiver)
        : m_archiver{archiver}
    {

    }

    void receive(const Proto& message) override
    {
        m_message_visitor.save(const_cast<Proto&>(message), m_archiver);
    }

private:
    std::shared_ptr<IArchiver> m_archiver;
    ProtoMessageVisitor<Proto> m_message_visitor;
};

}
}

#endif
