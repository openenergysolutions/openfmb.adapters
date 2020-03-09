
#include "ArgumentParser.h"

#include <iostream>

namespace adapter {
ArgumentParser::ArgumentParser()
    : parser{ { { flags::help, { "-h", "--help" }, "show this help message", 0 },
                { flags::list, { "-l", "--list" }, "list available plugins", 0 },
                { flags::version, { "-v", "--version" }, "display version information", 0 },
                { flags::config_file, { "-c", "--config" }, "run with the specified config file", 1 },
                { flags::generate_config, { "-g", "--generate" }, "generate the specified config file", 1 },
                { flags::generate_schema, { "-s", "--schema" }, "generate a JSON schema", 1},
                { flags::plugin, { "-p", "--plugin" }, "the plugin for which to generate configuration", 1 },
                { flags::profile, { "-f", "--profile" }, "profile to generate", 1 },
                { flags::pretty_print, { "--pretty-print" }, "pretty-print the generated JSON", 0 } } }
{
}

argagg::parser_results ArgumentParser::parse(int argc, char** argv)
{
    return this->parser.parse(argc, argv);
}

void ArgumentParser::print_help()
{
    std::cout << "Options" << std::endl
              << std::endl;
    std::cout << this->parser;
}
}
