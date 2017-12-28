
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
    // registry of all adapter types
    AdapterRegistry registry;

    // adapters publish and subscribe to this common bus
    const auto bus = make_shared<ProtoBus>();

    // load the adapters from the yaml configuration
    const auto adapters = init_adapters(config_file_path, registry, *bus);

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

void write_default_logger_config(YAML::Emitter& out)
{
    out << YAML::Key << "logging";

    out << YAML::BeginMap;
    /**/out << YAML::Key << "primary-logger-name" << YAML::Value << "application";
    /**/out << YAML::Key << "console" << YAML::Comment("print log messages to the console");
    /**/out << YAML::BeginMap;
    /**//**/out << YAML::Key << "enabled" << YAML::Value << true;
    /**/out << YAML::EndMap;
    /**/out << YAML::Key << "rotating-file" << YAML::Comment("print log messages to a rotating file");
    /**/out << YAML::BeginMap;
    /**//**/out << YAML::Key << "enabled" << YAML::Value << false;
    /**//**/out << YAML::Key << "path" << YAML::Value << "adapter.log";
    /**//**/out << YAML::Key << "max-size" << YAML::Value << 1048576 << YAML::Comment("maximum size of a single file in bytes");
    /**//**/out << YAML::Key << "max-files" << YAML::Value << 3;
    /**/out << YAML::EndMap;
    out << YAML::EndMap;
}

int write_adapters(YAML::Emitter& out)
{
    AdapterRegistry registry;

    auto write_config = [&](const std::string & name, const IAdapterFactory & factory) -> void
    {
        out << name;
        out << YAML::BeginMap;
        out << YAML::Key << "enabled" << YAML::Value << false;
        out << YAML::Key << "logger-name" << YAML::Value << name;
        factory.write_default_config(out);
        out << YAML::EndMap;
    };

    out << YAML::Key << "adapters";

    out << YAML::BeginMap;
    registry.foreach_adapter(write_config);
    out << YAML::EndMap;
}

int write_config(const std::string& config_file_path)
{
    YAML::Emitter out;

    // begin primary map
    out << YAML::BeginMap;

    write_default_logger_config(out);

    write_adapters(out);

    // end primary map
    out << YAML::EndMap;

    cout << out.c_str() << endl;

    std::ofstream output_file(config_file_path);
    output_file << out.c_str();
    output_file << endl;

    return 0;
}

vector<unique_ptr<IAdapter>> init_adapters(const std::string& yaml_path, AdapterRegistry& registry, IProtoSubscribers& subscribers)
{
    const auto yaml_root = YAML::LoadFile(yaml_path);

    auto logger = get_logger(yaml_root);

    const auto adapter_list = yaml::require(yaml_root, "adapters");

    vector<unique_ptr<IAdapter>> adapters;

    auto load = [&](const std::string & name, IAdapterFactory & factory)
    {
        const auto entry = yaml::require(adapter_list, name);
        const auto enabled = yaml::require(entry, "enabled").as<bool>();


        if(enabled)
        {
            logger.info("Initializing adapter: {}", name);

            const auto log_name = yaml::require(entry, "log-name").as<string>();

            adapters.push_back(
                factory.create(entry, logger.clone(log_name), subscribers)
            );
        }
        else
        {
            logger.info("Skipping configuration for disabled adapter: {}", name);
        }
    };

    registry.foreach_adapter(load);

    return move(adapters);
}

Logger get_logger(const YAML::Node& root)
{
    const auto logging = yaml::require(root, "logging");
    const auto primary_log_name = yaml::require(logging, "name").as<string>();


    std::vector<spdlog::sink_ptr> sinks;

    const auto console = yaml::require(logging, "console");

    if(yaml::require(console, "enabled").as<bool>())
    {
        sinks.push_back(std::make_shared<spdlog::sinks::stdout_sink_mt>());
    }

    const auto rotating = yaml::require(logging, "rotating-file");

    if(yaml::require(rotating, "enabled").as<bool>())
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

