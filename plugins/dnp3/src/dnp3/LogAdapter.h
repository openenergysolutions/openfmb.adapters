
#ifndef OPENFMB_ADAPTER_LOGADAPTER_H
#define OPENFMB_ADAPTER_LOGADAPTER_H

#include <opendnp3/logging/LogLevels.h>
#include <opendnp3/logging/ILogHandler.h>

#include <adapter-api/Logger.h>

namespace adapter {
namespace dnp3 {

    class LogAdapter final : public opendnp3::ILogHandler {

        api::Logger logger;

    public:
        explicit LogAdapter(const api::Logger& logger)
            : logger(logger)
        {
        }

        virtual void log(opendnp3::ModuleId module, const char* id, opendnp3::LogLevel level, char const* location, char const* message)
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
