
#include <iostream>
#include <fstream>
#include <vector>

#include <boost/algorithm/string.hpp>
#include <boost/archive/iterators/binary_from_base64.hpp>
#include <boost/archive/iterators/transform_width.hpp>

#include <adapter-api/IProfileWriter.h>

namespace bai = boost::archive::iterators;

class ProfilePrinter : public adapter::IProfileWriter
{

protected:

    void write_resource_reading(YAML::Emitter &out) override {

    }

    void write_switch_reading(YAML::Emitter &out) override {

    }

    void write_switch_status(YAML::Emitter &out) override {

    }
};

typedef bai::transform_width<bai::binary_from_base64<const char *>, 8, 6> decoder_t;

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        std::cerr << "You must provide a capture filename" << std::endl;
        return -1;
    }

    std::ifstream file(argv[1]);

    auto line_number = 0;
    std::string line;
    std::vector<std::string> tokens;

    while(std::getline(file, line))
    {
        boost::split(tokens, line, [](char c) { return c == ','; });

        if(tokens.size() != 3) {
            std::cerr << "Bad token count: " << tokens.size() << " on line: " << line_number << std::endl;
        }

        const auto base64 = tokens[2];

        std::cout << "base64: " << base64 << std::endl;

        std::stringstream os;
        std::copy(decoder_t(base64.data()), decoder_t(base64.data() + line.size()), std::ostream_iterator<char>(os));

        std::cout << "decoded: " << os.str() << std::endl;


        tokens.clear();
        ++line_number;
    }
}

