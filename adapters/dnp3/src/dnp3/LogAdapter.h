
#ifndef OPENFMB_ADAPTER_LOGADAPTER_H
#define OPENFMB_ADAPTER_LOGADAPTER_H

#include <openpal/logging/ILogHandler.h>
#include <opendnp3/LogLevels.h>

#include "adapter-api/Logger.h"


namespace adapter
{

    class LogAdapter final : public openpal::ILogHandler
    {

        Logger logger;

    public:

        explicit LogAdapter(const Logger& logger) : logger(logger) {}

        virtual void Log( const openpal::LogEntry& entry ) override
        {
            std::cout << entry.message << std::endl;
            switch(entry.filters.GetBitfield())
            {
            case(opendnp3::flags::DBG):
                logger.debug("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::INFO):
                logger.info("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::WARN):
                logger.warn("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::ERR):
                logger.error("[{}] - {}", entry.loggerid, entry.message);
                break;
            case(opendnp3::flags::EVENT):
                logger.critical("[{}] - {}", entry.loggerid, entry.message);
                break;
            default:
                logger.info("[{}] - {}", entry.loggerid, entry.message);
                break;
            }
        }

    };

}

#endif //OPENFMB_ADAPTER_LOGADAPTER_H
