
#include "Plugin.h"
#include "ConfigStrings.h"

#include <adapter-api/util/YAMLUtil.h>

#include <boost/numeric/conversion/cast.hpp>
#include <boost/archive/iterators/base64_from_binary.hpp>
#include <boost/archive/iterators/transform_width.hpp>
#include <boost/archive/iterators/ostream_iterator.hpp>

#include <chrono>
#include <sstream>

using namespace std::chrono;
using namespace boost::archive::iterators;

namespace adapter
{
    namespace capture
    {
        using base64_text = base64_from_binary<transform_width<const uint8_t*, 6, 8>>;

        class SharedLog
        {

            std::mutex mutex;
            std::ofstream log_file;

        public:

            SharedLog(const std::string& filename);

            void write(const std::string& name, const ::google::protobuf::MessageLite& message);
        };

        template <class T>
        class Subscriber final : public ISubscriber<T>
        {
            const std::shared_ptr<SharedLog> log;

        public:
            Subscriber(std::shared_ptr<SharedLog> log) : log(log)
            {}

            void receive(const T& message) override
            {
                log->write(T::descriptor()->name(), message);
            }
        };


        Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            const auto log = std::make_shared<SharedLog>(yaml::require_string(node, keys::file));

            bus.subscribe(std::make_shared<Subscriber<resourcemodule::ResourceReadingProfile>>(log));
            bus.subscribe(std::make_shared<Subscriber<switchmodule::SwitchReadingProfile>>(log));
            bus.subscribe(std::make_shared<Subscriber<switchmodule::SwitchStatusProfile>>(log));
        }

        SharedLog::SharedLog(const std::string& filename)
            : log_file(filename, std::ios_base::app | std::ios_base::out)
        {

        }

        void SharedLog::write(const std::string& name, const ::google::protobuf::MessageLite& message)
        {
            const auto millisec = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();

            try
            {
                const auto size_int = message.ByteSize();
                const auto size = boost::numeric_cast<size_t>(size_int);
                const auto buffer = std::make_unique<uint8_t[]>(size);
                if(!message.SerializeToArray(buffer.get(), size_int))
                {
                    // TODO
                    return;
                }

                std::ostringstream oss;
                std::copy(
                    base64_text(buffer.get()),
                    base64_text(buffer.get() + size),
                    std::ostream_iterator<uint8_t>(oss)
                );

                // file writing isn't guaranteed to be thread-safe
                std::unique_lock<std::mutex> lock(this->mutex);
                log_file << millisec << "," << name  << "," << oss.str() << std::endl;
            }
            catch(const std::exception& ex)
            {
                // TODO
            }
        }
    }
}


