
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

Logger get_logger(const YAML::Node& root);

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

    auto logger = get_logger(yaml_root);

    const auto adapter_list = yaml::require(yaml_root, "adapters");

    vector<unique_ptr<IAdapter>> adapters;

    // loop over the adapters initializing them
    for(YAML::const_iterator it = adapter_list.begin(); it != adapter_list.end(); ++it)
    {
        const auto id = yaml::require(*it, "id").as<string>();
        const auto enabled = yaml::require(*it, "enabled").as<bool>();


        if(enabled)
        {
            logger.info("Initializing adapter: {}", id);

            const auto log_name = yaml::require(*it, "log-name").as<string>();

            const auto factory = registry.find(id);

            if(!factory) throw Exception("No adapter factory with id: ", id);

            adapters.push_back(
                factory->create(*it, logger.clone(log_name), subscribers)
            );
        }
        else
        {
            logger.info("Skipping configuration for disabled adapter: {}", id);
        }
    }

    return move(adapters);
}

Logger get_logger(const YAML::Node& root)
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

    return Logger(primary_log_name, sinks);
}

