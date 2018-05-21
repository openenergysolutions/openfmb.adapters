#ifndef OPENFMB_PLUGIN_HISTORIAN_MESSAGE_H
#define OPENFMB_PLUGIN_HISTORIAN_MESSAGE_H

#include <string>
#include <vector>
#include <boost/uuid/uuid.hpp>

namespace adapter
{
namespace historian
{

struct MessageItem
{
    enum class Type
    {
        UnsignedInteger,
        SignedInteger,
        FloatingPoint
    };
    union ValueUnion
    {
        unsigned int unsigned_int;
        int signed_int;
        float floating_point;
    };

    std::string tagname;
    Type type;
    ValueUnion value;

    MessageItem(const std::string& tagname, unsigned int value) : tagname{tagname}, type{Type::UnsignedInteger}
    {
        this->value.unsigned_int = value;
    }

    MessageItem(const std::string& tagname, int value) : tagname{tagname}, type{Type::SignedInteger}
    {
        this->value.signed_int = value;
    }

    MessageItem(const std::string& tagname, float value) : tagname{tagname}, type{Type::FloatingPoint}
    {
        this->value.floating_point = value;
    }
};

struct Message
{
    Message(boost::uuids::uuid message_uuid, uint64_t timestamp, boost::uuids::uuid device_uuid)
        : message_uuid{message_uuid},
          timestamp{timestamp},
          device_uuid{device_uuid}
    {}

    boost::uuids::uuid message_uuid;
    uint64_t timestamp;
    boost::uuids::uuid device_uuid;
    std::vector<MessageItem> items;
};

}
}

#endif
