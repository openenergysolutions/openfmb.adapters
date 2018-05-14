
#include "YAMLTemplate.h"

#include "Exception.h"
#include "YAMLUtil.h"

#include <boost/algorithm/string.hpp>

#include <algorithm>
#include <vector>

#include <iostream>

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

                if(index_text.find('-') != std::string::npos)
                {
                    throw Exception("index contains '-' character: ", index_text);
                }

                try
                {
                    // now process the index
                    const auto index = std::stoul(index_text);
                    callbacks.on_sequence_index(index);
                }
                catch(const std::exception& ex)
                {
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

        class Callbacks : public IOverrideCallbacks
        {

        public:

            YAML::Node current;

            explicit Callbacks(const YAML::Node& current) : current(current) {}

            void on_map_key(const std::string& key) override
            {
                if(!current.IsMap())
                {
                    throw Exception("Node at line ", current.Mark().line, " is not a map. (key == ", key, ")");
                }
                this->current = yaml::require(current, key);
            }

            void on_sequence_index(size_t index) override
            {
                if(!current.IsSequence())
                {
                    throw Exception("Node at line ", current.Mark().line, " is not a sequence. (index == ", index, ")");
                }
                this->current = this->current[index];
            }
        };

        YAML::Node find(const YAML::Node& node, const std::string& path)
        {
            Callbacks callbacks(node);
            process(path, callbacks);
            return callbacks.current;
        }

        void assert_no_unspecified_template_values(const YAML::Node& node)
        {

            switch(node.Type())
            {
            case(YAML::NodeType::Null):
                break;
            case(YAML::NodeType::Scalar):
                if(node.as<std::string>() == "?")
                {
                    throw Exception("Unspecified template value on line ", node.Mark().line);
                }
                break;
            // iterate over maps and sequences
            case(YAML::NodeType::Map):
                for (auto it = node.begin(); it != node.end(); ++it)
                {
                    assert_no_unspecified_template_values(it->second);
                }
                break;
            case(YAML::NodeType::Sequence):
                for (size_t i = 0; i < node.size(); ++i)
                {
                    assert_no_unspecified_template_values(node[i]);
                }
                break;
            default:
                throw Exception("Unhandled node type: ", node.Type());
            }
        }
    }
}



