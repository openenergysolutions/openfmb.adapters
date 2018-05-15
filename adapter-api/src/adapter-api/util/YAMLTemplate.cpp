
#include "YAMLTemplate.h"

#include "Exception.h"
#include "YAMLUtil.h"

#include "../ConfigStrings.h"

#include <boost/algorithm/string.hpp>

#include <algorithm>
#include <vector>

#include <iostream>

namespace adapter
{
    namespace yaml
    {
        void parse_token(const std::string& token, IOverrideCallbacks& callbacks)
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
                    parse_token(token.substr(0, open_bracket_pos), callbacks);
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

        void parse(const std::string& path, IOverrideCallbacks& callbacks)
        {
            std::vector<std::string> tokens;
            boost::split(tokens, path, boost::is_any_of("."));

            // now, parse each token
            for(const auto& token : tokens)
            {
                parse_token(token, callbacks);
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
            parse(path, callbacks);
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
                    throw Exception("Unspecified template value, line: ", node.Mark().line);
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

        void apply_template_override(YAML::Node& node, const std::string& spec)
        {
            std::string copy(spec);
            std::remove_if(copy.begin(), copy.end(), [](char c)
            {
                return std::isspace(c);
            });


            std::vector<std::string> tokens;
            boost::split(tokens, copy, boost::is_any_of("="));

            if(tokens.size() != 2)
            {
                throw Exception("override spec doesn't contain a single equals(=) operator: ", spec);
            }

            // find the node using the path and set the value
            find(node, tokens[0]) = tokens[1];

        }

        YAML::Node load_file(const std::string& path)
        {
            try
            {
                return YAML::LoadFile(path);
            }
            catch(const YAML::ParserException& ex)
            {
                throw Exception("Error parsing YAML: ", ex.what());
            }
            catch(...)
            {
                throw Exception("Unable to read configuration file: ", path);
            }
        }

        void load_template_configs(const YAML::Node& node, Logger& logger, const std::function<void (const YAML::Node&)>& callback)
        {
            const auto load_config = [&](const YAML::Node & item)
            {
                const auto path = yaml::require_string(item, ::adapter::keys::path);
                const auto overrides = yaml::require(item, ::adapter::keys::overrides);

                logger.info("loading configuration from file: {}", path);
                auto configuration =  load_file(path);

                // apply each override to the configuration
                yaml::foreach(overrides, [&](const YAML::Node& override)
            {
                apply_template_override(configuration, configuration.as<std::string>());
                });

                // verify that there are no template "?" scalars left in the configuration
                assert_no_unspecified_template_values(configuration);

                // invoke the callback
                callback(configuration);
            };

            yaml::foreach(node, load_config);
        }

        void write_default_template_config(YAML::Emitter& out, const std::string& filename)
        {
            out << YAML::BeginSeq;

            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::path << YAML::Value << filename << YAML::Comment("possibly a template");
            out << YAML::Key << ::adapter::keys::overrides;
            out << YAML::BeginSeq;
            out << YAML::Value << "a.b.c = 4" << YAML::Comment("a sequence of override specifications to apply to the template");
            out << YAML::EndSeq;
            out << YAML::EndMap;


            out << YAML::EndSeq;
        }

    }
}



