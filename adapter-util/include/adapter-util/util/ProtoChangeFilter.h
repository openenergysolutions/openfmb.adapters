#ifndef OPENFMB_ADAPTER_PROTOCHANGEFILTER_H
#define OPENFMB_ADAPTER_PROTOCHANGEFILTER_H

#include "adapter-util/ProfileInfo.h"

#include <adapter-api/IPublisher.h>
#include <google/protobuf/util/message_differencer.h>

#include <algorithm>
#include <memory>
#include <unordered_map>

#ifdef GetMessage
#undef GetMessage // On Windows, there's a #define of GetMessage and it's a pain.
#endif

namespace adapter {
namespace util {

class MessageInfoIgnorer final : public google::protobuf::util::MessageDifferencer::IgnoreCriteria
{
public:
    bool IsIgnored(const google::protobuf::Message& message1,
                   const google::protobuf::Message& message2,
                   const google::protobuf::FieldDescriptor* field,
                   const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& parent_fields) override 
    {
        return field->type() == google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE && (
            field->message_type() == commonmodule::MessageInfo::descriptor() || // Ignore the message info (because it always change)
            field->message_type() == commonmodule::ConductingEquipment::descriptor() // Ignore the conducting equipment (because it will always be the same)
            // Also, ignoring it helps copying it later
        );
    }
};

template <typename T>
class MessageInfoDiff final : public google::protobuf::util::MessageDifferencer::Reporter
{
public:
    virtual void ReportAdded(const google::protobuf::Message& message1,
                             const google::protobuf::Message& message2,
                             const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path) override
    {
        recursive_update(message2, m_message, field_path, true, false, false);
    }

    // Reports that a field has been deleted from Message1.
    virtual void ReportDeleted(const google::protobuf::Message& message1,
                               const google::protobuf::Message& message2,
                               const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path) override
    {
        recursive_update(message2, m_message, field_path, false, false, true);
    }

    // Reports that the value of a field has been modified.
    virtual void ReportModified(const google::protobuf::Message& message1,
                                const google::protobuf::Message& message2,
                                const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path) override
    {
        recursive_update(message2, m_message, field_path, false, false, false);
    }

    // Reports that the value of a field has been ignored during comparison.
    virtual void ReportIgnored(const google::protobuf::Message& message1,
                               const google::protobuf::Message& message2,
                               const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path) override
    {
        recursive_update(message2, m_message, field_path, true, true, false);
    }

    const T& get_message() const
    {
        return m_message;
    }

    bool is_changed() const
    {
        return m_is_changed;
    }

private:
    void recursive_update(const google::protobuf::Message& received_msg,
                          google::protobuf::Message& current_msg,
                          const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path,
                          bool add_end_message, bool is_ignored, bool is_deleted)
    {
        auto reflection = current_msg.GetReflection();
        
        auto field_descriptor = field_path.front().field;
        switch(field_descriptor->cpp_type())
        {
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT32:
            {
                reflection->SetInt32(&current_msg, field_descriptor, reflection->GetInt32(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT64:
            {
                reflection->SetInt64(&current_msg, field_descriptor, reflection->GetInt64(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT32:
            {
                reflection->SetUInt32(&current_msg, field_descriptor, reflection->GetUInt32(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT64:
            {
                reflection->SetUInt64(&current_msg, field_descriptor, reflection->GetUInt64(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_DOUBLE:
            {
                reflection->SetDouble(&current_msg, field_descriptor, reflection->GetDouble(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_FLOAT:
            {
                reflection->SetFloat(&current_msg, field_descriptor, reflection->GetFloat(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_BOOL:
            {
                reflection->SetBool(&current_msg, field_descriptor, reflection->GetBool(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_ENUM:
            {
                reflection->SetEnum(&current_msg, field_descriptor, reflection->GetEnum(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_STRING:
            {
                reflection->SetString(&current_msg, field_descriptor, reflection->GetString(received_msg, field_descriptor));
                if (!is_ignored) m_is_changed = true;
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_MESSAGE:
            {
                if(field_path.size() == 1 && add_end_message && !is_deleted)
                {
                    // Copy the whole message because it was added, not modified
                    if (field_descriptor->is_repeated()) {
                        auto index = field_path.front().index;
                        auto size = reflection->FieldSize(current_msg, field_descriptor);

                        for (int i = size; i < index + 1; ++i) {
                            reflection->AddMessage(&current_msg, field_descriptor);
                        }
                        auto sub_current_msg = reflection->MutableRepeatedMessage(&current_msg, field_descriptor, index);
                        const auto& sub_received_msg = reflection->GetRepeatedMessage(received_msg, field_descriptor, index);
                        sub_current_msg->CopyFrom(sub_received_msg);
                        if (!is_ignored) m_is_changed = true;
                    }
                    else {
                        auto sub_current_msg = reflection->MutableMessage(&current_msg, field_descriptor);
                        const auto& sub_received_msg = reflection->GetMessage(received_msg, field_descriptor);
                        sub_current_msg->CopyFrom(sub_received_msg);
                        if (!is_ignored) m_is_changed = true;
                    }
                }
                else if(field_path.size() > 1)
                {
                    // Continue the recursion
                    std::vector<google::protobuf::util::MessageDifferencer::SpecificField> sub_field_path{};
                    std::copy(++field_path.begin(), field_path.end(), std::back_inserter(sub_field_path));
                    if (field_descriptor->is_repeated()) {
                        auto index = field_path.front().index;
                        auto size = reflection->FieldSize(current_msg, field_descriptor);

                        for (int i = size; i < index + 1; ++i) {                            
                            reflection->AddMessage(&current_msg, field_descriptor);
                        }

                        auto sub_msg = reflection->MutableRepeatedMessage(&current_msg, field_descriptor, index);
                        recursive_update(received_msg, *sub_msg, sub_field_path, add_end_message, is_ignored, is_deleted);
                    }
                    else {
                        auto sub_msg = reflection->MutableMessage(&current_msg, field_descriptor);
                        recursive_update(received_msg, *sub_msg, sub_field_path, add_end_message, is_ignored, is_deleted);
                    }
                }
                break;
            }
        }
    }
    T m_message;
    bool m_is_changed = false;
};

template <typename T>
class ProtoChangeFilter : public api::IPublishOne<T>
{
public:
    ProtoChangeFilter(api::publisher_one_t<T> publisher)
        : m_publisher{publisher}
    {
        m_message_differencer.AddIgnoreCriteria(new MessageInfoIgnorer());
    }

    void publish(const T& msg) override
    {
        MessageInfoDiff<T> diff{};
        m_message_differencer.ReportDifferencesTo(&diff);

        auto mrid = profile_info<T>::get_conducting_equip(msg).mrid();
        auto cache_it = m_message_cache.find(mrid);
        if(cache_it == m_message_cache.end())
        {
            m_message_differencer.Compare(T{}, msg);

            if(diff.is_changed())
            {
                m_message_cache.insert({mrid, msg});
                m_publisher->publish(msg);
            }
        }
        else
        {
            m_message_differencer.Compare(cache_it->second, msg);

            if(diff.is_changed())
            {
                cache_it->second = msg;
                auto diff_msg = diff.get_message();
                m_publisher->publish(diff_msg);
            }
        }
    }

private:
    api::publisher_one_t<T> m_publisher;
    std::unordered_map<std::string, T> m_message_cache;
    google::protobuf::util::MessageDifferencer m_message_differencer;
};

}
}

#endif
