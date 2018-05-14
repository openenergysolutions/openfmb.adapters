
#include "YAMLOverride.h"

#include "Exception.h"

#include <boost/algorithm/string.hpp>

#include <algorithm>
#include <vector>


namespace adapter
{
    namespace yaml
    {
        void process_token(const std::string& token, IOverrideCallbacks& callbacks)
        {
            if(token.empty())
            {
                throw Exception("token is empty");
            }

            if(token[token.length() - 1] == ']')
            {
                const auto open_bracket_pos = token.find_last_of('[');
                if(open_bracket_pos == std::string::npos)
                {
                    throw Exception("token contains close bracket w/o open bracket: ", token);
                }

                if(open_bracket_pos > 0)
                {
                    // if there's a prefix, process it first recursively
                    process_token(token.substr(0, open_bracket_pos), callbacks);
                }

                const auto index_text = token.substr(open_bracket_pos + 1, token.length() - 2);

                if(index_text.find('-') != std::string::npos) {
                    throw Exception("index contains '-' character: ", index_text);
                }

                try {
                    // now process the index
                    const auto index = std::stoul(index_text);
                    callbacks.on_sequence_index(index);
                }
                catch(const std::exception& ex) {
                    throw Exception(ex.what());
                }

            }
            else
            {
                // it's just a map key
                callbacks.on_map_key(token);
            }

        }

        void process(const std::string& override_spec, IOverrideCallbacks& callbacks)
        {
            std::string copy(override_spec);
            std::remove_if(copy.begin(), copy.end(), [](char c)
            {
                return c == ' ';
            });

            std::vector<std::string> tokens;
            boost::split(tokens, copy, boost::is_any_of("."));

            // now, process each token
            for(const auto& token : tokens)
            {
                process_token(token, callbacks);
            }
        }
    }
}



