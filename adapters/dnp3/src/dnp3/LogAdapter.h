
#ifndef OPENFMB_ADAPTER_LOGADAPTER_H
#define OPENFMB_ADAPTER_LOGADAPTER_H

#include <openpal/logging/ILogHandler.h>
#include <opendnp3/LogLevels.h>

#include "adapter-api/TypeDefinitions.h"


namespace openfmb
{

    class LogAdapter final : public openpal::ILogHandler
    {

        const logger_t logger;

    public:

        LogAdapter(const logger_t& logger) : logger(logger) {}

        virtual void Log( const openpal::LogEntry& entry ) override
        {
            switch(entry.filters.GetBitfield())
            {
            case(opendnp3::flags::DBG):
                logger->debug("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::INFO):
                logger->info("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::WARN):
                logger->warn("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::ERR):
                logger->error("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::EVENT):
                logger->critical("[{}] - {}", entry.loggerid, entry.message);
                break;
            default:
                logger->info("[{}] - {}", entry.loggerid, entry.message);
                break;
            }
        }

    };

}

#endif //OPENFMB_ADAPTER_LOGADAPTER_H
