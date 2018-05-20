#ifndef OPENFMB_PLUGIN_HISTORIAN_BUS_LISTENER_H
#define OPENFMB_PLUGIN_HISTORIAN_BUS_LISTENER_H

#include <deque>
#include <memory>
#include <string>
#include "adapter-api/ISubscriber.h"
#include "adapter-api/config/IProtoVisitor.h"
#include "adapter-api/config/generated/MessageVisitors.h"
#include "IArchiver.h"

namespace adapter
{
namespace historian
{

template<typename Proto>
class ProtoMessageVisitor : public IProtoVisitor<Proto>
{
public:
    ProtoMessageVisitor(Logger logger, std::shared_ptr<IArchiver> archiver, const Proto& proto)
        : m_logger{logger},
          m_archiver{archiver},
          m_proto{proto}
    {

    }

protected:
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
        m_message_info = std::make_unique<commonmodule::MessageInfo>(*getter(m_proto));
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipment, Proto> getter) override
    {
        m_conducting_equipment = std::make_unique<commonmodule::ConductingEquipment>(*getter(m_proto));
    }

    // Measurement types
    virtual void handle(const std::string& field_name, getter_t<commonmodule::MV, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);
        auto mv = getter(m_proto);
        if (mv)
        {
            auto mag = mv->mag().f();
            this->save("mag", mag);
        }
        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::CMV, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);
        auto cmv = getter(m_proto);
        if (cmv)
        {
            auto ang = cmv->cval().ang().f();
            this->save("ang", ang);
            auto mag = cmv->cval().mag().f();
            this->save("mag", mag);
        }
        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::BCR, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);
        auto bcr = getter(m_proto);
        if (bcr)
        {
            auto val = bcr->actval();
            this->save("actVal", val);
        }
        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, getter_t<commonmodule::StatusDPS, Proto> getter) override
    {
        m_tagname_stack.push_back(field_name);
        auto statusDps = getter(m_proto);
        if (statusDps)
        {
            auto val = static_cast<unsigned int>(statusDps->stval());
            this->save("stVal", val);
        }
        m_tagname_stack.pop_back();
    }


    // Not used
    void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, Proto> getter) override {};
    void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, Proto> getter) override {};
    void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, Proto> getter) override {};
    void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, Proto> getter) override {};

private:
    template<typename T>
    void save(const std::string& id, T value)
    {
        // Extract basic information
        if (!m_message_info || !m_conducting_equipment)
        {
            return;
        }

        auto message_uuid = m_message_info->identifiedobject().mrid();
        auto seconds = m_message_info->messagetimestamp().seconds();
        auto device_uuid = m_conducting_equipment->mrid();

        if (message_uuid.empty())
        {
            return;
        }
        if (device_uuid.empty())
        {
            return;
        }

        // Build tagname
        std::string tagname;
        for (auto& tag : m_tagname_stack)
        {
            tagname.append(tag);
            tagname.append(".");
        }
        tagname.append(id);

        // Save the value in the archiver
        m_logger.info("Saving '{}' value for '{}': {}", tagname, device_uuid, value);
        m_archiver->save(message_uuid, seconds, device_uuid, tagname, value);
    }

    Logger m_logger;
    std::shared_ptr<IArchiver> m_archiver;
    Proto m_proto;

    std::deque<std::string> m_tagname_stack;
    std::unique_ptr<commonmodule::MessageInfo> m_message_info;
    std::unique_ptr<commonmodule::ConductingEquipment> m_conducting_equipment;
};

template<typename Proto>
class BusListener : public ISubscriber<Proto>
{
public:
    BusListener(const Logger& logger, std::shared_ptr<IArchiver> archiver)
        : m_logger{logger},
          m_archiver{archiver}
    {

    }

    void receive(const Proto& message) override
    {
        ProtoMessageVisitor<Proto> message_visitor(m_logger, m_archiver, message);
        visit(message_visitor);

        /*auto message_uuid = message.readingmessageinfo().messageinfo().identifiedobject().mrid();
        auto seconds = message.readingmessageinfo().messageinfo().messagetimestamp().seconds();
        auto device_uuid = message.meter().conductingequipment().mrid();

        m_archiver->save(message_uuid, seconds, device_uuid);*/
    }

private:
    Logger m_logger;
    std::shared_ptr<IArchiver> m_archiver;
};

}
}

#endif
