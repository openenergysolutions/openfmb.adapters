#ifndef OPENFMB_PLUGIN_TIMESCALEDB_MESSAGE_H
#define OPENFMB_PLUGIN_TIMESCALEDB_MESSAGE_H

#include <string>
#include <vector>
#include <boost/uuid/uuid.hpp>

namespace adapter
{
namespace timescaledb
{

struct MessageItem
{
    std::string tagname;
    std::string value;

    explicit MessageItem(const std::string& tagname, const std::string& value)
        : tagname{tagname}, value{value}
    {}
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
