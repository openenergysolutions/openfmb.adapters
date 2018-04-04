
#ifndef OPENFMB_ADAPTER_ARGUMENTPARSER_H
#define OPENFMB_ADAPTER_ARGUMENTPARSER_H

#include <argagg/argagg.hpp>

namespace adapter
{
    namespace flags
    {
        constexpr const char* help = "help";
        constexpr const char* config_file = "config_file";
        constexpr const char* generate_config = "generate_config";
    }

    class ArgumentParser
    {
    public:

        ArgumentParser();

        argagg::parser_results parse(int argc, char** argv);

        void print_help();

    private:

        argagg::parser parser;
    };


}

#endif
