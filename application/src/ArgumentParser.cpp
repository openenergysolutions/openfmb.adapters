
#include "ArgumentParser.h"

#include <iostream>

namespace adapter
{
    ArgumentParser::ArgumentParser() :
        parser {{
            { flags::help, {"-h", "--help" }, "show this help message", 0 },
            { flags::config_file, {"-c", "--config" }, "run with the specified config file", 1 },
            { flags::generate_config, {"-g", "--generate" }, "generate the specified config file", 1 }
        }}
    {}

    argagg::parser_results ArgumentParser::parse(int argc, char** argv)
    {
        return this->parser.parse(argc, argv);
    }

    void ArgumentParser::print_help()
    {
        std::cout << "Options" << std::endl << std::endl;
        std::cout << this->parser;
    }
}


