// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "adapter-api/Exception.h"
#include "adapter-api/IPlugin.h"
#include "adapter-api/ProfileRegistry.h"

#include "adapter-util/Version.h"
#include "adapter-util/util/YAMLUtil.h"
#include "adapter-util/config/DefaultConfigWriter.h"

#include "schema-util/Builder.h"

#include "ArgumentParser.h"
#include "ConfigKeys.h"
#include "FileInfo.h"
#include "LoggerConfig.h"
#include "MessageBus.h"
#include "PluginRegistry.h"
#include "Shutdown.h"

#include <fstream>
#include <iostream>
#include <vector>

using namespace adapter;

std::vector<std::unique_ptr<api::IPlugin>> initialize(const std::string& yaml_path, PluginRegistry& registry, api::message_bus_t bus);

int run_application(const std::string& config_file_path);

int write_default_config(const std::string& config_file_path);

int write_config_schema(const std::string& schema_file_path, bool pretty_print);

int write_default_session_config(const std::string& config_file_path, const api::IPluginFactory& factory, const api::profile_vec_t& profiles);

int write_session_schema(const std::string& schema_file_path, const api::IPluginFactory& factory, bool pretty_print);

api::profile_vec_t get_profiles(const argagg::parser_results& args);

std::shared_ptr<const api::IPluginFactory> get_factory(const argagg::parser_results& args);

std::vector<schema::property_ptr_t> get_config_schema();

void print_plugins();

// global plugin registry
PluginRegistry registry;

int main(int argc, char** argv)
{
    adapter::ArgumentParser parser;

    try {
        const auto args = parser.parse(argc, argv);

        if (args[flags::version]) {
            std::cout << "git commmit date: " << util::version::git_commit_date() << std::endl;
            std::cout << "git commmit hash: " << util::version::git_commit_hash() << std::endl;
            return 0;
        }

        if (args[flags::help]) {
            parser.print_help();
            return 0;
        }

        if(args[flags::list]) {
            print_plugins();
            return 0;
        }

        if (args[flags::config_file]) {
            return run_application(args[flags::config_file].as<std::string>());
        }

        if (args[flags::generate_config]) {
            if (args[flags::plugin]) {
                // user wants a session configuration for a particular plugin / profile combination
                return write_default_session_config(
                    args[flags::generate_config],
                    *get_factory(args),
                    get_profiles(args));

            } else {
                // user is just asking for the main config file skeleton
                return write_default_config(args[flags::generate_config]);
            }
        }

        if (args[flags::generate_schema]) {
            if (args[flags::plugin]) {
                // user wants a session schema for a particular plugin / profile combination
                return write_session_schema(
                    args[flags::generate_schema],
                    *get_factory(args),
                    args[flags::pretty_print]);

            } else {
                // user is just asking for the main config schema
                return write_config_schema(args[flags::generate_schema], args[flags::pretty_print]);
            }
        }

        std::cerr << "You did not specify an option" << std::endl;
        parser.print_help();
        return -1;
    } catch (const std::exception& ex) {
        std::cerr << std::endl;
        std::cerr << "Exception occurred during initialization: " << ex.what() << std::endl;
        std::cerr << std::endl;
        parser.print_help();
        return -1;
    }
}

api::profile_vec_t get_profiles(const argagg::parser_results& args)
{
    api::profile_vec_t profiles;
    for (auto& profile : args[flags::profile].all) {
        profiles.push_back(profile.arg);
    }
    return std::move(profiles);
}

std::shared_ptr<const api::IPluginFactory> get_factory(const argagg::parser_results& args)
{
    if (args[flags::plugin].count() == 0) {
        throw api::Exception("No plugin specified for generation");
    }

    return registry.find(args[flags::plugin].as<std::string>());
}

void print_plugins()
{
    std::cout << "available plugins:" << std::endl << std::endl;

    // calculate the maximum length for padding
    size_t max_name_length = 0;
    registry.foreach_plugin(
            [&](api::IPluginFactory& factory) {
                if(factory.name().size() > max_name_length) {
                    max_name_length = factory.name().size();
                }
            }
    );

    registry.foreach_plugin(
            [&](api::IPluginFactory& factory) {
                const size_t num_spaces = max_name_length - factory.name().size();
                std::cout << factory.name();
                for(size_t i = 0; i < num_spaces; ++i) {
                    std::cout << " ";
                }
                std::cout << " - " << factory.description() << std::endl;
            }
    );
}

int run_application(const std::string& config_file_path)
{
    // plugins publish and subscribe to this common bus
    const auto bus = std::make_shared<MessageBus>();

    // load the logger & plugins from the yaml configuration
    const auto plugins = initialize(config_file_path, registry, bus);

    if (plugins.empty()) {
        std::cerr << "No enabled plugins founded" << std::endl;
        return -1;
    }

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();

    // start the adapters running/publishing to the bus
    for (auto& plugin : plugins) {
        plugin->start();
    }

    // wait for ctrl-c
    Shutdown::await(SIGINT);

    // stop delivering messages
    bus->shutdown();

    return 0;
}

int write_default_config(const std::string& config_file_path)
{
    YAML::Emitter out;

    // begin primary map
    out << YAML::BeginDoc;
    out << YAML::BeginMap;

    auto writer = adapter::util::yaml::DefaultConfigWriter{out};
    const auto schema = get_config_schema();
    for(const auto& prop : schema)
    {
        prop->visit(writer);
    }

    // end primary map
    out << YAML::EndMap;
    out << YAML::EndDoc;

    std::ofstream output_file(config_file_path);
    output_file << out.c_str();
    output_file << std::endl;

    return 0;
}

int write_config_schema(const std::string& schema_file_path, bool pretty_print)
{
    std::ofstream file(schema_file_path);
    write_schema(file, "https://www.github.com/openenergysolutions", get_config_schema(), pretty_print);

    return 0;
}

int write_default_session_config(const std::string& config_file_path, const api::IPluginFactory& factory, const api::profile_vec_t& profiles)
{
    using namespace adapter::schema;

    YAML::Emitter out;

    // begin primary map
    out << YAML::BeginDoc;
    out << YAML::BeginMap;

    auto writer = adapter::util::yaml::DefaultConfigWriter{out};

    // Write top config
    for(const auto& prop : factory.get_session_schema())
    {
        prop->visit(writer);
    }

    out << YAML::Key << "profiles";
    out << YAML::Value << YAML::BeginSeq;

    for(const auto& name : profiles) {
        out << YAML::BeginMap;

        enum_property("name", { name }, Required::yes, "profile name", name)->visit(writer);

        for(const auto& prop : factory.get_profile_schema(name)) {
            prop->visit(writer);
        }

        out << YAML::EndMap;
    }

    out << YAML::EndSeq;

    // end primary map
    out << YAML::EndMap;
    out << YAML::EndDoc;

    std::ofstream output_file(config_file_path);
    output_file << out.c_str();
    output_file << std::endl;

    return 0;
}

int write_session_schema(const std::string& schema_file_path, const api::IPluginFactory& factory, bool pretty_print)
{
    using namespace adapter::schema;

    // Get the session schema
    auto schema = factory.get_session_schema();
    auto mappings = Object({}, {});

    // Append all the profile mappings
    api::ProfileRegistry::foreach_descriptor([&mappings, &factory](const google::protobuf::Descriptor* desc) {
        mappings.one_of.variants.emplace_back(
            Variant({ConstantProperty("name", desc->name())}, std::make_shared<Object>(factory.get_profile_schema(desc->name())))
        );
    });

    schema.emplace_back(
        array_property(
            "profiles",
            Required::yes,
            "profile mapping",
            mappings
        )
    );

    // Print schema to file
    std::ofstream file(schema_file_path);
    write_schema(file, "https://www.github.com/openenergysolutions", schema, pretty_print);

    return 0;
}

std::vector<std::unique_ptr<api::IPlugin>> initialize(const std::string& yaml_path, PluginRegistry& registry, api::message_bus_t bus)
{
    const auto yaml_root = YAML::LoadFile(yaml_path);

    auto logger = logging::create_logger_from_yaml(yaml_root);

    const auto plugin_list = util::yaml::require(yaml_root, keys::plugins);

    std::vector<std::unique_ptr<api::IPlugin>> plugins;

    const auto try_to_load = [&](api::IPluginFactory& factory) -> void {
        const auto entry = plugin_list[factory.name()];
        if (!entry) {
            logger.info("No configuration specified for adapter: {}", factory.name());
            return;
        }

        const auto enabled = util::yaml::require(entry, keys::enabled).as<bool>();

        if (enabled) {
            logger.info("Initializing plugin: {}", factory.name());

            plugins.push_back(
                factory.create(entry, logger.clone(factory.name()), bus));
        }
    };

    registry.foreach_plugin(try_to_load);

    return std::move(plugins);
}

std::vector<schema::property_ptr_t> get_config_schema()
{
    using namespace adapter::schema;

    // Build the "plugins" properties
    std::vector<property_ptr_t> plugin_properties{};
    registry.foreach_plugin([&plugin_properties](api::IPluginFactory& factory) {
        auto plugin_schema = factory.get_plugin_schema();

        // Add the "enable property"
        plugin_schema.properties.push_back(bool_property(
            keys::enabled,
            Required::yes,
            "enable this plugin",
            false
        ));

        plugin_properties.push_back(object_property(factory.name(), Required::no, factory.description(), plugin_schema));
    });
    const auto plugins = object_property("plugins", Required::yes, "map of plugin configurations", schema::Object{plugin_properties});

    return {logging::get_logging_config_schema(), file::get_file_info_config_schema(), plugins};
}
