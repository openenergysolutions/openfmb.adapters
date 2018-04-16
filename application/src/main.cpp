
#include "adapter-api/util/Exception.h"
#include "adapter-api/IPlugin.h"
#include "adapter-api/util/YAMLUtil.h"
#include "adapter-api/Profile.h"

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

int write_default_config(const std::string& config_file_path);

int write_default_session_config(const std::string& config_file_path, const IPluginFactory& factory, const std::vector<Profile>& profiles);

std::vector<Profile> get_profiles(const argagg::parser_results& args);

std::shared_ptr<const adapter::IPluginFactory> get_factory(const argagg::parser_results& args);

// global plugin registry
PluginRegistry registry;

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
            if(args[flags::plugin])
            {
                // user wants a session configuration for a particular plugin / profile combination
                return write_default_session_config(
                           args[flags::generate_config],
                           *get_factory(args),
                           get_profiles(args)
                       );

            }
            else
            {
                // user is just asking for the main config file skeleton
                return write_default_config(args[flags::generate_config]);
            }
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

std::vector<Profile> get_profiles(const argagg::parser_results& args)
{
    std::vector<Profile> profiles;
    for(auto& profile : args[flags::profile].all)
    {
        profiles.push_back(ProfileMeta::from_string(profile));
    }
    return std::move(profiles);
}

std::shared_ptr<const adapter::IPluginFactory> get_factory(const argagg::parser_results& args)
{
    if(!args[flags::plugin])
    {
        throw Exception("No plugin specified for generation");
    }

    return registry.find(args[flags::plugin].as<std::string>());
}

int run_application(const std::string& config_file_path)
{
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

int write_default_plugin_config(const IPluginFactory& factory, YAML::Emitter& out)
{
    out << YAML::Newline << YAML::Comment(factory.description());
    out << factory.name();
    out << YAML::BeginMap;
    out << YAML::Key << keys::enabled << YAML::Value << false;
    factory.write_default_config(out);
    out << YAML::EndMap;
}

int write_default_config(const std::string& config_file_path)
{
    YAML::Emitter out;

    // begin primary map
    out << YAML::BeginDoc;
    out << YAML::BeginMap;

    out << YAML::Comment("common application settings");

    logging::write_default_logging_config(out);

    out << YAML::Newline << YAML::Newline << YAML::Comment("map of plugin configurations");
    out << YAML::Key << keys::plugins;
    out << YAML::BeginMap;
    registry.foreach_adapter(
        [&](IPluginFactory & factory)
    {
        write_default_plugin_config(factory, out);
        out << YAML::Newline;
    }
    );
    out << YAML::EndMap;

    // end primary map
    out << YAML::EndMap;
    out << YAML::EndDoc;

    std::ofstream output_file(config_file_path);
    output_file << out.c_str();
    output_file << std::endl;

    return 0;
}

int write_default_session_config(const std::string& config_file_path, const IPluginFactory& factory, const std::vector<Profile>& profiles)
{
    YAML::Emitter out;
    out << YAML::BeginDoc;
    factory.write_session_config(out, profiles);
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



