#ifndef OPENFMB_PLUGIN_TIMESCALEDB_BUS_LISTENER_H
#define OPENFMB_PLUGIN_TIMESCALEDB_BUS_LISTENER_H

#include "IArchiver.h"
#include "Message.h"
#include "adapter-api/ISubscriptionHandler.h"
#include "adapter-api/ProfileInfo.h"
#include "adapter-api/config/IMessageVisitor.h"
#include "adapter-api/config/generated/MessageVisitors.h"
#include <boost/numeric/conversion/cast.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <deque>
#include <memory>
#include <sstream>
#include <string>
#include <google/protobuf/util/json_util.h>

namespace adapter {
namespace timescaledb {

    class ProtoMessageVisitor : public IMessageVisitor {
    public:
        ProtoMessageVisitor(std::string base_name, Message& message)
            : base_name(std::move(base_name))
            , message(message)
        {
        }

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

        void handle(const std::string& field_name, bool value) override
        {
            this->add_value(field_name, std::to_string(value));
        }

        void handle(const std::string& field_name, int32_t value) override
        {
            this->add_value(field_name, std::to_string(value));
        }

        void handle(const std::string& field_name, uint32_t value) override
        {
            this->add_value(field_name, std::to_string(value));
        }

        void handle(const std::string& field_name, int64_t value) override
        {
            this->add_value(field_name, std::to_string(value));
        }

        void handle(const std::string& field_name, uint64_t value) override
        {
            this->add_value(field_name, std::to_string(value));
        }

        void handle(const std::string& field_name, float value) override
        {
            this->add_value(field_name, std::to_string(value));
        }

        void handle(const std::string& field_name, const std::string& value) override
        {
            this->add_value(field_name, value);
        }

        void handle(const std::string& field_name, int value, const google::protobuf::EnumDescriptor& descriptor) override
        {
            this->add_value(field_name, std::to_string(value));
        }

        void add_value(const std::string& field_name, const std::string& value)
        {
            message.items.emplace_back(get_current_tagname(field_name), value);
        }

    private:
        // ====== Helper functions =====
        std::string get_current_tagname(const std::string& id)
        {
            std::ostringstream oss;

            oss << this->base_name << ".";
            for (auto& tag : m_tagname_stack) {
                oss << tag << ".";
            }
            oss << id;

            return oss.str();
        }

        // ===== Private member variables =====
        const std::string base_name;
        std::deque<std::string> m_tagname_stack;
        Message& message;
    };

    template <typename Proto>
    class BusListener : public ISubscriptionHandler<Proto> {
    public:
        explicit BusListener(const Logger& logger, const std::shared_ptr<IArchiver>& archiver)
            : m_logger{ logger }
            , m_archiver{ archiver }
        {
        }

    private:
        void process(const Proto& proto) override
        {
            // Extract message UUID, timestamp and device UUID
            const auto& message_info = profile_info<Proto>::get_message_info(proto);
            const auto& conducting_equipment = profile_info<Proto>::get_conducting_equip(proto);

            boost::uuids::uuid message_uuid;
            try {
                boost::uuids::string_generator gen;
                message_uuid = gen(message_info.identifiedobject().mrid().value());
            } catch (std::runtime_error) {
                m_logger.warn("Message UUID is not valid: '{}'", message_info.identifiedobject().mrid().value());
                return;
            }

            boost::uuids::uuid device_uuid;
            try {
                boost::uuids::string_generator gen;
                device_uuid = gen(conducting_equipment.mrid());
            } catch (std::runtime_error) {
                m_logger.warn("Device UUID is not valid: '{}'", conducting_equipment.mrid());
                return;
            }

            const auto timestamp = message_info.messagetimestamp().seconds();

            auto message = std::make_unique<Message>(message_uuid, timestamp, device_uuid);
            ProtoMessageVisitor visitor(Proto::descriptor()->name(), *message);
            visit(proto, visitor);

            message->profile_name = Proto::descriptor()->name();

            if (m_archiver->store_raw_message_enabled()) {

                if (m_archiver->raw_message_format() == 0) { // Json format
                    google::protobuf::util::Status status = google::protobuf::util::MessageToJsonString(proto, &message->json_data);

                } else if (m_archiver->raw_message_format() == 1) { // Protobuf format
                    const auto size_int = proto.ByteSize();
                    const auto size = boost::numeric_cast<size_t>(size_int);

                    message->raw_data = std::make_unique<char[]>(size);
                    message->raw_data_size = size;

                    if (!proto.SerializeToArray(message->raw_data.get(), size_int)) {
                        m_logger.error("Failed to serialize protobuf message of type: {}", Proto::descriptor()->name());
                        return;
                    }
                }
            }

            // Save the message
            this->m_archiver->save(std::move(message));
        }

        Logger m_logger;
        const std::shared_ptr<IArchiver> m_archiver;
    };
}
}

#endif
