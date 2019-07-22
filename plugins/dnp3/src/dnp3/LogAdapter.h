
#ifndef OPENFMB_ADAPTER_LOGADAPTER_H
#define OPENFMB_ADAPTER_LOGADAPTER_H

#include <opendnp3/LogLevels.h>
#include <log4cpp/ILogHandler.h>

#include <adapter-api/Logger.h>

namespace adapter {
namespace dnp3 {

    class LogAdapter final : public log4cpp::ILogHandler {

        api::Logger logger;

    public:
        explicit LogAdapter(const api::Logger& logger)
            : logger(logger)
        {
        }

        virtual void log(log4cpp::ModuleId module, const char* id, log4cpp::LogLevel level, char const* location, char const* message)
        {
            if(level == opendnp3::flags::DBG) logger.debug("[{}] - {}", id, message);
            else if(level == opendnp3::flags::INFO) logger.info("[{}] - {}", id, message);
            else if(level == opendnp3::flags::WARN) logger.warn("[{}] - {}", id, message);
            else if(level == opendnp3::flags::ERR) logger.error("[{}] - {}", id, message);
            else if(level == opendnp3::flags::EVENT) logger.critical("[{}] - {}", id, message);
            else logger.info("[{}] - {}", id, message);
        }
    };
}
}

#endif
