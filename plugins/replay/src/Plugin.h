
#ifndef OPENFMB_ADAPTER_REPLAY_PLUGIN_H
#define OPENFMB_ADAPTER_REPLAY_PLUGIN_H

#include <yaml-cpp/node/node.h>

#include <adapter-api/Logger.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/IMessageBus.h>
#include <adapter-api/Profile.h>

namespace adapter
{
    namespace replay
    {
        class Plugin final : public IPlugin
        {

            struct LineInfo
            {
                LineInfo() = default;

                LineInfo(std::function<void()> publish, std::chrono::steady_clock::duration duration) :
                    publish(std::move(publish)),
                    duration(duration)
                {}

                std::function<void ()> publish;
                std::chrono::steady_clock::duration duration;
            };

        public:

            Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

            ~Plugin() override;

            std::string name() const override
            {
                return "replay";
            }

            void start() override;

        private:

            void run();

            void replay_file();

            bool get_next_line(std::ifstream& file, LineInfo& next);

            bool sleep_for(const std::chrono::steady_clock::duration& duration);

            std::function<void ()> get_publish_action(Profile profile, const std::vector<uint8_t>& data);

            bool shutdown = false;

            std::unique_ptr<std::thread> thread;

            Logger logger;

            const std::string file_path;

            const publisher_t<resourcemodule::ResourceReadingProfile> resource_reading_publisher;
            const publisher_t<switchmodule::SwitchReadingProfile> switch_reading_publisher;
            const publisher_t<switchmodule::SwitchStatusProfile> switch_status_publisher;

        };
    }
}

#endif
