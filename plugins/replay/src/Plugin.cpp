
#include "Plugin.h"
#include "ConfigStrings.h"

#include <adapter-api/util/YAMLUtil.h>

#include <boost/algorithm/string.hpp>
#include <cppcodec/base64_default_rfc4648.hpp>

#include <fstream>

using namespace std::chrono;

namespace adapter
{
    namespace replay
    {
        Plugin::Plugin(const YAML::Node& node, const Logger& logger, message_bus_t bus) :
            logger(logger),
            file_path(yaml::require_string(node, keys::file)),
            publisher(std::move(bus))
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
            info.publish(*this->publisher);

            // record the time the first message was published
            auto last_time = info.duration;

            // continue reading until we hit the end of the file
            while(!this->shutdown && this->get_next_line(file, info))
            {
                const auto delay = (info.duration < last_time) ? std::chrono::seconds(5) : (info.duration - last_time);
                last_time = info.duration;
                if(this->sleep_for(delay))
                {
                    info.publish(*this->publisher);
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

            next.publish = this->factory.get(
                    tokens[1],                   // profile name
                    base64::decode(tokens[2])    // decoded data
            );

            return true;
        }

    }
}


