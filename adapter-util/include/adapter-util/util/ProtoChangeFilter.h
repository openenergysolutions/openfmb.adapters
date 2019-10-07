#ifndef OPENFMB_ADAPTER_PROTOCHANGEFILTER_H
#define OPENFMB_ADAPTER_PROTOCHANGEFILTER_H

#include "adapter-util/ProfileInfo.h"

#include <adapter-api/IPublisher.h>
#include <google/protobuf/util/message_differencer.h>

#include <memory>
#include <unordered_map>

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
        else if(!m_message_differencer.Compare(cache_it->second, msg))
        {
            cache_it->second = msg;
            m_publisher->publish(msg);
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
