
#include <fstream>
#include <iostream>
#include <vector>

#include <boost/algorithm/string.hpp>
#include <cppcodec/base64_default_rfc4648.hpp>

#include <adapter-api/util/Exception.h>

#include <adapter-api/ProfileRegistry.h>
#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

using namespace adapter;

template <class T>
struct ProfilePrinter {
    static void handle(const uint8_t* data, size_t length)
    {
        T message;
        if (!message.ParseFromArray(data, length)) {
            throw Exception("Error parsing message");
        }

        std::cout << message.DebugString() << std::endl;
    }
};

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cerr << "You must provide a capture filename" << std::endl;
        return -1;
    }

    std::ifstream file(argv[1]);

    auto line_number = 0;
    std::string line;
    std::vector<std::string> tokens;

    while (std::getline(file, line)) {
        boost::split(tokens, line, [](char c) {
            return c == ',';
        });

        if (tokens.size() != 3) {
            std::cerr << "Bad token count: " << tokens.size() << " on line: " << line_number << std::endl;
        }

        const auto profile_name = tokens[1];
        const auto payload = base64::decode(tokens[2]);

        ProfileRegistry::handle_by_name<ProfilePrinter>(profile_name, payload.data(), payload.size());

        tokens.clear();
        ++line_number;
    }
}
