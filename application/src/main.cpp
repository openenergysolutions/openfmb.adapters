
#include "adapter-api/util/Exception.h"
#include "adapter-api/IAdapter.h"
#include "adapter-api/util/YAMLUtil.h"

#include "AdapterRegistry.h"
#include "ProtoBus.h"
#include "Shutdown.h"

#include <fstream>
#include <iostream>

using namespace std;
using namespace openfmb;

vector<unique_ptr<IAdapter>> init_adapters(const std::string& yaml_path, AdapterRegistry& registry, IProtoSubscribers& subscribers);

openfmb::logger_t get_logger(const YAML::Node& root);
openfmb::logger_t clone(const openfmb::logger_t& other, const std::string& name);
openfmb::logger_t configure(const openfmb::logger_t& other);

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        cerr << "usage: " << endl;
        cerr << "openfmb-adapter <config file>" << endl;
        return -1;
    }

    // registry of all adapter types
    AdapterRegistry registry;

    // adapters publish and subscribe to this common bus
    const auto bus = make_shared<ProtoBus>();

    // load the adapters from the yaml configuration
    const auto adapters = init_adapters(argv[1], registry, *bus);

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();

    // start the adapters running/publishing to the bus
    for(auto& adapter : adapters)
    {
        adapter->start(bus);
    }

    // wait for ctrl-c
    Shutdown::await(SIGINT);

    std::cout << "begin shutdown" << std::endl;

    return 0;
}

vector<unique_ptr<IAdapter>> init_adapters(const std::string& yaml_path, AdapterRegistry& registry, IProtoSubscribers& subscribers)
{
    const auto yaml_root = YAML::LoadFile(yaml_path);

    const auto logger = get_logger(yaml_root);

    const auto adapter_list = yaml::require(yaml_root, "adapters");

    vector<unique_ptr<IAdapter>> adapters;

    // loop over the adapters initializing them
    for(YAML::const_iterator it = adapter_list.begin(); it != adapter_list.end(); ++it)
    {
        const auto id = yaml::require(*it, "id").as<string>();
        const auto enabled = yaml::require(*it, "enabled").as<bool>();


        if(enabled)
        {
            logger->info("Initializing adapter: {}", id);

            const auto log_name = yaml::require(*it, "log-name").as<string>();

            adapters.push_back(
                registry.find(id).create(*it, clone(logger, log_name), subscribers)
            );
        }
        else
        {
            logger->info("Skipping configuration for disabled adapter: {}", id);
        }
    }

    return move(adapters);
}

openfmb::logger_t get_logger(const YAML::Node& root)
{
    const auto logging = yaml::require(root, "logging");
    const auto primary_log_name = yaml::require(logging, "name").as<string>();


    std::vector<spdlog::sink_ptr> sinks;

    if(yaml::with_default(logging["console"], false))
    {
        sinks.push_back(std::make_shared<spdlog::sinks::stdout_sink_mt>());
    }

    const auto rotating = logging["rotating"];

    if(rotating)
    {
        sinks.push_back(
            std::make_shared<spdlog::sinks::rotating_file_sink_mt>(
                yaml::require(rotating, "path").as<string>(),
                yaml::require(rotating, "max-size").as<size_t>(),
                yaml::require(rotating, "max-files").as<size_t>()
            )
        );
    }

    return configure(std::make_shared<spdlog::logger>(primary_log_name, sinks.begin(), sinks.end()));
}

openfmb::logger_t clone(const openfmb::logger_t& other, const std::string& name)
{
    return configure(std::make_shared<spdlog::logger>(name, other->sinks().begin(), other->sinks().end()));
}

openfmb::logger_t configure(const openfmb::logger_t& logger)
{
    //logger->set_pattern("[%H:%M:%S %z] [%l] [%n] - %v");
    return logger;
}