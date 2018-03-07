
#include "adapter-api/util/Exception.h"
#include "adapter-api/IPlugin.h"
#include "adapter-api/util/YAMLUtil.h"

#include "PluginRegistry.h"
#include "ProtoBus.h"
#include "Shutdown.h"
#include "ConfigKeys.h"
#include "LoggerConfig.h"

#include <fstream>
#include <iostream>

using namespace std;
using namespace adapter;

vector<unique_ptr<IPlugin>> initialize(const std::string& yaml_path, PluginRegistry& registry, IMessageBus& bus);

int run_application(const std::string& config_file_path);

int write_config(const std::string& config_file_path);

void print_usage();

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        cerr << "At least one argument is required" << endl << endl;
        print_usage();
        return -1;
    }

    const std::string flag(argv[1]);

    if(flag == "-h")
    {
        print_usage();
        return 0;
    }
    else if(flag == "-c")
    {

        if(argc != 3)
        {
            cerr << "-c requires the config file to be specified" << endl << endl;
            print_usage();
            return -1;
        }

        return run_application(argv[2]);

    }
    else if(flag == "-g")
    {
        if(argc != 3)
        {
            cerr << "-g requires the output config file to be specified" << endl << endl;
            print_usage();
            return -1;
        }

        return write_config(argv[2]);
    }

    cerr << "unknown flag: " << flag << endl << endl;
    print_usage();
    return -1;
}

void print_usage()
{
    cout << "usage: " << endl;
    cout << "openfmb-adapter <flags>" << endl;
    cout << "    -c <file>  # Run the application with a particular configuration file" << endl;
    cout << "    -g <file>  # Generate a default configuration file" << endl;
    cout << "    -h         # Show this help menu" << endl;
}

int run_application(const std::string& config_file_path)
{
    PluginRegistry registry;

    // plugins publish and subscribe to this common bus
    const auto bus = make_shared<ProtoBus>();

    // load the logger & plugins from the yaml configuration
    const auto plugins = initialize(config_file_path, registry, *bus);

    if(plugins.empty())
    {
        std::cerr << "No enabled plugins founded" << std::endl;
        return -1;
    }

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();

    // start the adapters running/publishing to the bus
    for(auto& plugin : plugins)
    {
        plugin->start();
    }

    // wait for ctrl-c
    Shutdown::await(SIGINT);

    return 0;
}

int write_default_plugin_configs(YAML::Emitter& out)
{
    PluginRegistry registry;

    const auto write_config = [&](const IPluginFactory & factory) -> void
    {
        out << YAML::Newline << YAML::Comment(factory.description());
        out << factory.name();
        out << YAML::BeginMap;
        out << YAML::Key << keys::enabled << YAML::Value << false;
        factory.write_default_config(out);
        out << YAML::EndMap;
        out << YAML::Newline;
    };

    out << YAML::Newline << YAML::Newline << YAML::Comment("map of plugin configurations");
    out << YAML::Key << keys::plugins;

    out << YAML::BeginMap;
    registry.foreach_adapter(write_config);
    out << YAML::EndMap;
}

int write_config(const std::string& config_file_path)
{
    YAML::Emitter out;

    // begin primary map
    out << YAML::BeginDoc;
    out << YAML::BeginMap;

    out << YAML::Comment("common application settings");

    logging::write_default_logging_config(out);

    write_default_plugin_configs(out);

    // end primary map
    out << YAML::EndMap;
    out << YAML::EndDoc;

    std::ofstream output_file(config_file_path);
    output_file << out.c_str();
    output_file << endl;

    return 0;
}

std::vector<std::unique_ptr<IPlugin>> initialize(const std::string& yaml_path, PluginRegistry& registry, IMessageBus& bus)
{
    const auto yaml_root = YAML::LoadFile(yaml_path);

    auto logger = logging::create_logger_from_yaml(yaml_root);

    const auto plugin_list = yaml::require(yaml_root, keys::plugins);

    vector<unique_ptr<IPlugin>> plugins;

    const auto try_to_load = [&](IPluginFactory & factory) -> void
    {
        const auto entry = plugin_list[factory.name()];
        if(!entry)
        {
            logger.info("No configuration specified for adapter: {}", factory.name());
            return;
        }

        const auto enabled = yaml::require(entry, keys::enabled).as<bool>();


        if(enabled)
        {
            logger.info("Initializing plugin: {}", factory.name());

            plugins.push_back(
                factory.create(entry, logger.clone(factory.name()), bus)
            );
        }
    };

    registry.foreach_adapter(try_to_load);

    return move(plugins);
}



