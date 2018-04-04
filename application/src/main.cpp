
#include "adapter-api/util/Exception.h"
#include "adapter-api/IPlugin.h"
#include "adapter-api/util/YAMLUtil.h"

#include "PluginRegistry.h"
#include "ProtoBus.h"
#include "Shutdown.h"
#include "ConfigKeys.h"
#include "LoggerConfig.h"
#include "ArgumentParser.h"

#include <fstream>
#include <iostream>

using namespace adapter;

std::vector<std::unique_ptr<IPlugin>> initialize(const std::string& yaml_path, PluginRegistry& registry, IMessageBus& bus);

int run_application(const std::string& config_file_path);

int write_config(const std::string& config_file_path);

int main(int argc, char** argv)
{
    adapter::ArgumentParser parser;

    try
    {
        const auto args = parser.parse(argc, argv);

        if(args[flags::help])
        {
            parser.print_help();
            return 0;
        }

        if(args[flags::config_file])
        {
            return run_application(args[flags::config_file].as<std::string>());
        }

        if(args[flags::generate_config])
        {
            return write_config(args[flags::generate_config]);
        }

        std::cerr << "You did not specify an option" << std::endl;
        parser.print_help();
        return -1;
    }
    catch(const std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;
        std::cerr << std::endl;
        parser.print_help();
        return -1;
    }
}

int run_application(const std::string& config_file_path)
{
    PluginRegistry registry;

    // plugins publish and subscribe to this common bus
    const auto bus = std::make_shared<ProtoBus>();

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
    output_file << std::endl;

    return 0;
}

std::vector<std::unique_ptr<IPlugin>> initialize(const std::string& yaml_path, PluginRegistry& registry, IMessageBus& bus)
{
    const auto yaml_root = YAML::LoadFile(yaml_path);

    auto logger = logging::create_logger_from_yaml(yaml_root);

    const auto plugin_list = yaml::require(yaml_root, keys::plugins);

    std::vector<std::unique_ptr<IPlugin>> plugins;

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

    return std::move(plugins);
}



