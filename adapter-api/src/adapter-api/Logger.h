
#ifndef OPENFMB_ADAPTER_LOGGER_H
#define OPENFMB_ADAPTER_LOGGER_H

#include "spdlog/spdlog.h"

namespace adapter
{

    /**
     * A facade over spdlog. Provides some isolation if we change loggers and adds some helper methods like clone().
     */
    class Logger
    {

    public:

        template<class SinkCollection>
        Logger(const std::string& name, const SinkCollection& sinks) : Logger(create(name, sinks)) {}

        /**
         * Create a new logger with the same set of sinks as this logger
         *
         * @param name the name of the new logger
         * @return a new logger
         */
        Logger clone(const std::string& name)
        {
            return Logger(
                       create(name, this->impl->sinks())
                   );
        }

        // ----- methods that just forward to spdlog ------

        template <typename Arg1, typename... Args> inline void trace(const char* fmt, const Arg1& arg1, const Args& ... args)
        {
            this->impl->trace(fmt, arg1, args...);
        }

        template <typename Arg1, typename... Args> inline void debug(const char* fmt, const Arg1& arg1, const Args& ... args)
        {
            this->impl->debug(fmt, arg1, args...);
        }

        template <typename Arg1, typename... Args> inline void info(const char* fmt, const Arg1& arg1, const Args& ... args)
        {
            this->impl->info(fmt, arg1, args...);
        }

        template <typename Arg1, typename... Args> inline void warn(const char* fmt, const Arg1& arg1, const Args& ... args)
        {
            this->impl->warn(fmt, arg1, args...);
        }

        template <typename Arg1, typename... Args> inline void error(const char* fmt, const Arg1& arg1, const Args& ... args)
        {
            this->impl->error(fmt, arg1, args...);
        }

        template <typename Arg1, typename... Args> inline void critical(const char* fmt, const Arg1& arg1, const Args& ... args)
        {
            this->impl->critical(fmt, arg1, args...);
        }

        template <typename T> inline void trace(const T& arg)
        {
            this->impl->trace(arg);
        }

        template <typename T> inline void debug(const T& arg)
        {
            this->impl->debug(arg);
        }

        template <typename T> inline void info(const T& arg)
        {
            this->impl->info(arg);
        }

        template <typename T> inline void warn(const T& arg)
        {
            this->impl->warn(arg);
        }

        template <typename T> inline void error(const T& arg)
        {
            this->impl->error(arg);
        }

        template <typename T> inline void critical(const T& arg)
        {
            this->impl->critical(arg);
        }


    private:

        Logger(std::shared_ptr<spdlog::logger> impl) : impl(impl)
        {}

        template<class SinkCollection>
        static std::shared_ptr<spdlog::logger> create(const std::string& name, const SinkCollection& sinks)
        {
            auto logger = std::make_shared<spdlog::logger>(name, sinks.begin(), sinks.end());
            logger->set_pattern("[%H:%M:%S %z] [%l] [%n] - %v");
            return logger;
        }


        const std::shared_ptr <spdlog::logger> impl;
    };


}

#endif //OPENFMB_ADAPTER_LOGGER_H
