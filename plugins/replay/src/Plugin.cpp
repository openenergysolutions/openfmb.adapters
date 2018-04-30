
#include "Plugin.h"
#include "ConfigStrings.h"

#include <adapter-api/util/YAMLUtil.h>

#include <boost/algorithm/string.hpp>
#include <boost/numeric/conversion/cast.hpp>
#include <cppcodec/base64_default_rfc4648.hpp>

#include <fstream>

using namespace std::chrono;


namespace adapter
{
    namespace replay
    {

        Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus) :
            logger(logger),
            file_path(yaml::require_string(node, keys::file)),
            resource_reading_publisher(bus.get_publisher<resourcemodule::ResourceReadingProfile>()),
            switch_reading_publisher(bus.get_publisher<switchmodule::SwitchReadingProfile>()),
            switch_status_publisher(bus.get_publisher<switchmodule::SwitchStatusProfile>())
        {

        }

        Plugin::~Plugin()
        {
            this->shutdown = true;
            if(this->thread)
            {
                this->thread->join();
            }
        }

        void Plugin::start()
        {
            if(this->thread)
            {
                logger.error("capture plugin already started");
            }
            else
            {
                // launch the background thread
                this->thread = std::make_unique<std::thread>([this]()
                {
                    this->run();
                });
            }
        }

        void Plugin::run()
        {
            while(!this->shutdown)
            {
                try
                {
                    this->logger.info("sleeping for 5 seconds before starting capture replay");
                    this->sleep_for(std::chrono::seconds(5));
                    this->replay_file();
                }
                catch(const std::exception& ex)
                {
                    this->logger.error("exception while replaying capture: ", ex.what());
                }
            }
        }

        void Plugin::replay_file()
        {
            // open the file
            std::ifstream file(this->file_path);

            if(!file.is_open())
            {
                this->logger.error("Unable to open replay file: {}", this->file_path);
                return;
            }

            // read the first line
            LineInfo info;
            if(!this->get_next_line(file, info))
            {
                return;
            }

            // go ahead and publish the first item
            info.publish();

            // record the time the first message was published
            auto last_time = info.duration;

            // continue reading until we hit the end of the file
            while(!this->shutdown && this->get_next_line(file, info))
            {
                const auto delay = (info.duration < last_time) ? std::chrono::seconds(5) : (info.duration - last_time);
                last_time = info.duration;
                if(this->sleep_for(delay))
                {
                    info.publish();
                }
            }
        }

        bool Plugin::sleep_for(const std::chrono::steady_clock::duration& duration)
        {

            const auto end = std::chrono::steady_clock::now() + duration;

            do
            {

                if(this->shutdown) return false;

                const auto now = std::chrono::steady_clock::now();

                if(now >= end) break;

                const auto remainder = end - now;

                const auto sleep_duration = remainder > std::chrono::seconds(1) ? std::chrono::seconds(1) : remainder;

                std::this_thread::sleep_for(sleep_duration);
            }
            while(true);

            return true;
        }

        template <class T>
        std::shared_ptr<T> parse_data_as(const std::vector<uint8_t>& data)
        {
            const auto profile = std::make_shared<T>();
            if(!profile->ParseFromArray(data.data(), boost::numeric_cast<int>(data.size())))
            {
                throw Exception("error parsing message of type: ", T::descriptor()->name());
            }
            return profile;
        }

        std::function<void ()> Plugin::get_publish_action(Profile profile, const std::vector<uint8_t>& data)
        {
            switch(profile)
            {

            case(Profile::resource_reading):
                return [profile = parse_data_as<resourcemodule::ResourceReadingProfile>(data), publisher = this->resource_reading_publisher]()
                {
                    publisher ->publish(*profile);
                };
            case(Profile::switch_reading):
                return [profile = parse_data_as<switchmodule::SwitchReadingProfile>(data), publisher = this->switch_reading_publisher]()
                {
                    publisher ->publish(*profile);
                };
            case(Profile::switch_status):
                return [profile = parse_data_as<switchmodule::SwitchStatusProfile>(data), publisher = this->switch_status_publisher]()
                {
                    publisher ->publish(*profile);
                };
            default:
                throw Exception("Unsupported profile: ", ProfileMeta::to_string(profile));
            }
        }

        bool Plugin::get_next_line(std::ifstream& file, LineInfo& next)
        {
            std::string line;
            if(!std::getline(file, line))
            {
                logger.info("Reached end of capture file");
                return false;
            }

            std::vector<std::string> tokens;
            boost::split(tokens, line, [](char c)
            {
                return c == ',';
            });

            if(tokens.size() != 3)
            {
                logger.error("Bad token count: {}", tokens.size());
                return false;
            }

            next.duration = std::chrono::milliseconds(std::stoull(tokens[0]));

            next.publish = this->get_publish_action(
                               ProfileMeta::from_string(tokens[1]),
                               base64::decode(tokens[2])
                           );

            return true;
        }

    }
}


