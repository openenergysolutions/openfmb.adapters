#ifndef OPENFMB_PLUGIN_TIMESCALEDB_BUS_LISTENER_H
#define OPENFMB_PLUGIN_TIMESCALEDB_BUS_LISTENER_H

#include <deque>
#include <memory>
#include <string>
#include <sstream>
#include <boost/uuid/uuid_generators.hpp>
#include "adapter-api/ISubscriber.h"
#include "adapter-api/config/IMessageVisitor.h"
#include "adapter-api/config/MessageInformation.h"
#include "adapter-api/config/generated/MessageVisitors.h"
#include "IArchiver.h"
#include "Message.h"

namespace adapter
{
namespace timescaledb
{

template<typename Proto>
class ProtoMessageVisitor : private IMessageVisitor
{
public:
    ProtoMessageVisitor(Logger& logger)
        : m_logger{logger}
    {

    }

    void save(const Proto& proto, std::shared_ptr<IArchiver> archiver)
    {
        // Extract message UUID, timestamp and device UUID
        auto message_info = get_message_info(proto);
        auto conducting_equipment = get_conducting_equip(proto);

        boost::uuids::uuid message_uuid;
        try
        {
            boost::uuids::string_generator gen;
            message_uuid = gen(message_info.identifiedobject().mrid().value());
        }
        catch(std::runtime_error)
        {
            m_logger.warn("Message UUID is not valid: '{}'", message_info.identifiedobject().mrid().value());
            return;
        }

        boost::uuids::uuid device_uuid;
        try
        {
            boost::uuids::string_generator gen;
            device_uuid = gen(conducting_equipment.mrid());
        }
        catch(std::runtime_error)
        {
            m_logger.warn("Device UUID is not valid: '{}'", conducting_equipment.mrid());
            return;
        }

        auto timestamp = message_info.messagetimestamp().seconds();

        // Build message
        m_tagname_stack.clear();
        m_current_message = std::make_unique<Message>(message_uuid, timestamp, device_uuid);
        visit(proto, *this);

        // Save the message
        archiver->save(std::move(m_current_message));
    }

private:
    // ===== IMessageVisitor =====
    void start_message_field(const std::string& field_name) override
    {
        m_tagname_stack.push_back(field_name);
    };

    void end_message_field() override
    {
        m_tagname_stack.pop_back();
    }

    void start_iteration(int i) override
    {
        m_tagname_stack.push_back(std::to_string(i));
    }

    void end_iteration() override
    {
        m_tagname_stack.pop_back();
    }

    // Measurement types
    virtual void handle(const std::string& field_name, const commonmodule::MV& value) override
    {
        m_tagname_stack.push_back(field_name);

        if(value.mag().has_f())
        {
            m_current_message->items.emplace_back(
                    MessageItem(
                            get_current_tagname("mag"),
                            std::to_string(value.mag().f().value())
                    )
            );
        }

        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, const commonmodule::CMV& value) override
    {
        m_tagname_stack.push_back(field_name);

        if(value.cval().ang().has_f())
        {
            m_current_message->items.emplace_back(
                    MessageItem(
                        get_current_tagname("ang"),
                        std::to_string(value.cval().ang().f().value())
                    )
            );
        }

        if(value.cval().mag().has_f())
        {
            m_current_message->items.emplace_back(
                    MessageItem(
                            get_current_tagname("mag"),
                            std::to_string(value.cval().mag().f().value())
                    )
            );
        }

        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, const commonmodule::BCR& value) override
    {
        m_tagname_stack.push_back(field_name);

        m_current_message->items.emplace_back(
                MessageItem(
                        get_current_tagname("actVal"),
                        std::to_string(value.actval())
                )
        );

        m_tagname_stack.pop_back();
    }

    virtual void handle(const std::string& field_name, const commonmodule::StatusDPS& value) override
    {
        m_tagname_stack.push_back(field_name);

        auto tagname = get_current_tagname("stVal");
        auto val = static_cast<unsigned int>(value.stval());
        m_current_message->items.emplace_back(tagname, std::to_string(val));

        m_tagname_stack.pop_back();
    }

    // ====== Helper functions =====
    std::string get_current_tagname(const std::string& id)
    {
        std::ostringstream oss;

        oss << Proto::descriptor()->name() << ".";
        for (auto& tag : m_tagname_stack)
        {
            oss << tag << ".";
        }
        oss << id;

        return oss.str();
    }

    // ===== Private member variables =====
    Logger& m_logger;
    std::deque<std::string> m_tagname_stack;
    std::unique_ptr<Message> m_current_message;
};

template<typename Proto>
class BusListener : public ISubscriber<Proto>
{
public:
    explicit BusListener(const Logger& logger, const std::shared_ptr<IArchiver>& archiver)
        : m_logger{logger},
          m_archiver{archiver}
    {

    }

private:

    void process(const Proto& message) override
    {
        ProtoMessageVisitor<Proto> m_message_visitor{m_logger};
        m_message_visitor.save(message, m_archiver);
    }

    Logger m_logger;
    const std::shared_ptr<IArchiver> m_archiver;
};

}
}

#endif
