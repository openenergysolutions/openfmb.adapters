#ifndef OPENFMB_PLUGIN_TIMESCALEDB_MESSAGE_H
#define OPENFMB_PLUGIN_TIMESCALEDB_MESSAGE_H

#include <boost/uuid/uuid.hpp>
#include <string>
#include <vector>
#include <memory>

namespace adapter {
namespace timescaledb {

    struct MessageItem {
        std::string tagname;
        std::string value;

        explicit MessageItem(const std::string& tagname, const std::string& value)
            : tagname{ tagname }
            , value{ value }
        {
        }
    };

    struct Message {
        Message(boost::uuids::uuid message_uuid, uint64_t timestamp, boost::uuids::uuid device_uuid)
            : message_uuid{ message_uuid }
            , timestamp{ timestamp }
            , device_uuid{ device_uuid }
        {
        }

        boost::uuids::uuid message_uuid;
        uint64_t timestamp;
        boost::uuids::uuid device_uuid;
        std::vector<MessageItem> items;

        // Raw message
        std::string profile_name;
        std::unique_ptr<char[]> raw_data;
        size_t raw_data_size;
    };
}
}

#endif
