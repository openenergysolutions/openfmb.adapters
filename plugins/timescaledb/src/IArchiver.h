#ifndef OPENFMB_PLUGIN_TIMESCALEDB_IARCHIVER_H
#define OPENFMB_PLUGIN_TIMESCALEDB_IARCHIVER_H

#include "Message.h"
#include <memory>

namespace adapter {
namespace timescaledb {

    class IArchiver {
    public:
        virtual ~IArchiver() = default;

        virtual void save(std::unique_ptr<Message> message) = 0;
        virtual bool store_raw_message_enabled() = 0;
        virtual int raw_message_format() = 0;
    };
}
}

#endif
