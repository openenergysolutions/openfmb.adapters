
#include "Plugin.h"
#include "ConfigStrings.h"

#include <adapter-util/util/YAMLUtil.h>

#include <boost/numeric/conversion/cast.hpp>
#include <cppcodec/base64_default_rfc4648.hpp>

#include <chrono>

using namespace std::chrono;

namespace adapter {
namespace capture {

    class SharedLog {

        std::mutex mutex;
        std::ofstream log_file;
        api::Logger logger;

    public:
        SharedLog(const std::string& filename, const api::Logger& logger)
            : log_file(filename, std::ios_base::app | std::ios_base::out)
            , logger(logger)
        {
        }

        bool write(const std::string& name, const ::google::protobuf::MessageLite& message);
    };

    template <class T>
    class SubscriptionHandler final : public api::ISubscriptionHandler<T> {
        const std::shared_ptr<SharedLog> log;

    public:
        explicit SubscriptionHandler(std::shared_ptr<SharedLog> log)
            : log(std::move(log))
        {
        }

    private:
        void process(const T& message) override
        {
            log->write(T::descriptor()->name(), message);
        }
    };

    template <class T>
    struct ProfileSubscriber {
        static void handle(std::shared_ptr<SharedLog> log, api::ISubscribeOne<T>& bus)
        {
            bus.subscribe(std::make_shared<SubscriptionHandler<T>>(std::move(log)));
        }
    };

    Plugin::Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
        : shared_log(std::make_shared<SharedLog>(util::yaml::require_string(node, keys::file), logger))
    {
        api::ProfileRegistry::handle_all<ProfileSubscriber>(this->shared_log, *bus);
    }

    Plugin::~Plugin()
    {
    }

    bool SharedLog::write(const std::string& name, const ::google::protobuf::MessageLite& message)
    {
        const auto millisec = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();

        try {
            const auto size_int = message.ByteSize();
            const auto size = boost::numeric_cast<size_t>(size_int);
            const auto buffer = std::make_unique<uint8_t[]>(size);
            if (!message.SerializeToArray(buffer.get(), size_int)) {
                logger.error("Failed to serialize protobuf message of type: {}", name);
                return false;
            }

            const auto encoded = base64::encode(buffer.get(), size);

            // file writing isn't guaranteed to be thread-safe
            std::unique_lock<std::mutex> lock(this->mutex);
            log_file << millisec << "," << name << "," << encoded << std::endl;
            return true;
        } catch (const std::exception& ex) {
            logger.error("Exception serializing message of type '{}': ", ex.what());
            return false;
        }
    }
}
}
