#ifndef OPENFMB_ADAPTER_PROTOCHANGEFILTER_H
#define OPENFMB_ADAPTER_PROTOCHANGEFILTER_H

#include "adapter-util/ProfileInfo.h"

#include <adapter-api/IPublisher.h>
#include <google/protobuf/util/message_differencer.h>

#include <algorithm>
#include <memory>
#include <unordered_map>
#undef GetMessage

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
        return field->type() == google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE && field->message_type() == commonmodule::MessageInfo::descriptor();
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

    }

    // Reports that a field has been deleted from Message1.
    virtual void ReportDeleted(const google::protobuf::Message& message1,
                               const google::protobuf::Message& message2,
                               const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path) override
    {

    }

    // Reports that the value of a field has been modified.
    virtual void ReportModified(const google::protobuf::Message& message1,
                                const google::protobuf::Message& message2,
                                const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path) override
    {
        recursive_update(message2, m_message, field_path);
    }

    const T& get_message() const
    {
        return m_message;
    }

private:
    void recursive_update(const google::protobuf::Message& received_msg,
                          google::protobuf::Message& current_msg,
                          const std::vector<google::protobuf::util::MessageDifferencer::SpecificField>& field_path)
    {
        if(field_path.empty())
            return;

        auto reflection = current_msg.GetReflection();
        
        auto field_descriptor = field_path.front().field;
        switch(field_descriptor->cpp_type())
        {
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT32:
            {
                reflection->SetInt32(&current_msg, field_descriptor, reflection->GetInt32(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_INT64:
            {
                reflection->SetInt64(&current_msg, field_descriptor, reflection->GetInt64(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT32:
            {
                reflection->SetUInt32(&current_msg, field_descriptor, reflection->GetUInt32(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_UINT64:
            {
                reflection->SetUInt64(&current_msg, field_descriptor, reflection->GetUInt64(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_DOUBLE:
            {
                reflection->SetDouble(&current_msg, field_descriptor, reflection->GetDouble(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_FLOAT:
            {
                reflection->SetFloat(&current_msg, field_descriptor, reflection->GetFloat(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_BOOL:
            {
                reflection->SetBool(&current_msg, field_descriptor, reflection->GetBool(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_ENUM:
            {
                reflection->SetEnum(&current_msg, field_descriptor, reflection->GetEnum(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_STRING:
            {
                reflection->SetString(&current_msg, field_descriptor, reflection->GetString(received_msg, field_descriptor));
                break;
            }
            case google::protobuf::FieldDescriptor::CppType::CPPTYPE_MESSAGE:
            {
                std::vector<google::protobuf::util::MessageDifferencer::SpecificField> sub_field_path{};
                std::copy(++field_path.begin(), field_path.end(), std::back_inserter(sub_field_path));

                auto descriptor = current_msg.GetDescriptor();
                auto sub_msg = reflection->MutableMessage(&current_msg, field_descriptor);
                recursive_update(received_msg, *sub_msg, sub_field_path);
                break;
            }
        }
    }
    T m_message;
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
        auto mrid = profile_info<T>::get_conducting_equip(msg).mrid();
        auto cache_it = m_message_cache.find(mrid);
        if(cache_it == m_message_cache.end())
        {
            m_message_cache.insert({mrid, msg});
            m_publisher->publish(msg);
        }
        else
        {
            MessageInfoDiff<T> diff{};
            m_message_differencer.ReportDifferencesTo(&diff);
            
            if(!m_message_differencer.Compare(cache_it->second, msg))
            {
                cache_it->second = msg;
                auto diff_msg = diff.get_message();
                m_publisher->publish(diff_msg);
            }
        }
        /*else if(!m_message_differencer.Compare(cache_it->second, msg))
        {
            cache_it->second = msg;
            m_publisher->publish(msg);
        }*/
    }

private:
    api::publisher_one_t<T> m_publisher;
    std::unordered_map<std::string, T> m_message_cache;
    google::protobuf::util::MessageDifferencer m_message_differencer;
};

}
}

#endif
