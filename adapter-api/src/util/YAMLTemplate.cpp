
#include "adapter-api/util/YAMLTemplate.h"

#include "adapter-api/util/Exception.h"
#include "adapter-api/util/YAMLUtil.h"

#include "adapter-api//ConfigStrings.h"

#include <boost/algorithm/string.hpp>

#include <algorithm>
#include <vector>

namespace adapter {
namespace yaml {
    void parse_token(const std::string& token, IOverrideCallbacks& callbacks)
    {
        if (token.empty()) {
            throw Exception("token is empty");
        }

        if (token[token.length() - 1] == ']') {
            const auto open_bracket_pos = token.find_last_of('[');
            if (open_bracket_pos == std::string::npos) {
                throw Exception("token contains close bracket w/o open bracket: ", token);
            }

            if (open_bracket_pos > 0) {
                // if there's a prefix, process it first recursively
                parse_token(token.substr(0, open_bracket_pos), callbacks);
            }

            const auto index_text = token.substr(open_bracket_pos + 1, token.length() - 2);

            if (index_text.find('-') != std::string::npos) {
                throw Exception("index contains '-' character: ", index_text);
            }

            try {
                // now process the index
                const auto index = std::stoul(index_text);
                callbacks.on_sequence_index(index);
            } catch (const std::exception& ex) {
                throw Exception(ex.what());
            }

        } else {
            // it's just a map key
            callbacks.on_map_key(token);
        }
    }

    void parse(const std::string& path, IOverrideCallbacks& callbacks)
    {
        std::vector<std::string> tokens;
        boost::split(tokens, path, boost::is_any_of("."));

        // now, parse each token
        for (const auto& token : tokens) {
            parse_token(token, callbacks);
        }
    }

    class Callbacks : public IOverrideCallbacks {
        using node_getter_t = std::function<YAML::Node(const YAML::Node&)>;
        using getter_vector_iter = std::vector<node_getter_t>::iterator;

        std::vector<node_getter_t> getters;

    private:
        // recursively apply the getters to the input node
        YAML::Node find(const YAML::Node& node, getter_vector_iter begin, const getter_vector_iter& end)
        {
            if (begin == end)
                return node;
            const auto next = (*begin)(node);
            return find(next, ++begin, end);
        }

    public:
        YAML::Node find(const YAML::Node& node)
        {
            // normal solutions like std::accumulate don't work here b/c the assignment
            // operator for YAML::Node changes the original internal reference
            // instead, we use this recursive solution that avoids assignment
            return find(node, getters.begin(), getters.end());
        }

        /// --- implement IOverrideCallabacks

        void on_map_key(const std::string& key) override
        {
            this->getters.push_back(
                [key](const YAML::Node& node) {
                    if (!node.IsMap()) {
                        throw Exception("Node at line ", node.Mark().line, " is not a map. (key == ", key, ")");
                    }
                    return yaml::require(node, key);
                });
        }

        void on_sequence_index(size_t index) override
        {
            this->getters.push_back(
                [index](const YAML::Node& node) {
                    if (!node.IsSequence()) {
                        throw Exception("Node at line ", node.Mark().line, " is not a sequence. (index == ", index, ")");
                    }
                    return node[index];
                });
        }
    };

    YAML::Node find(const YAML::Node& node, const std::string& path)
    {
        Callbacks callbacks;
        parse(path, callbacks);
        return callbacks.find(node);
    }

    void assert_no_unspecified_template_values(const YAML::Node& node)
    {

        switch (node.Type()) {
        case (YAML::NodeType::Null):
            break;
        case (YAML::NodeType::Scalar):
            if (node.as<std::string>() == "?") {
                throw Exception("Unspecified template value, line: ", node.Mark().line);
            }
            break;
        // iterate over maps and sequences
        case (YAML::NodeType::Map):
            for (auto it = node.begin(); it != node.end(); ++it) {
                assert_no_unspecified_template_values(it->second);
            }
            break;
        case (YAML::NodeType::Sequence):
            for (size_t i = 0; i < node.size(); ++i) {
                assert_no_unspecified_template_values(node[i]);
            }
            break;
        default:
            throw Exception("Unhandled node type: ", node.Type());
        }
    }

    void apply_template_override(const YAML::Node& node, const std::string& spec)
    {
        std::vector<std::string> tokens;
        boost::split(tokens, spec, boost::is_any_of("="));

        if (tokens.size() != 2) {
            throw Exception("override spec doesn't contain a single equals(=) operator: ", spec);
        }

        find(node, tokens[0]) = tokens[1];
    }

    YAML::Node load_file(const std::string& path)
    {
        try {
            return YAML::LoadFile(path);
        } catch (const YAML::ParserException& ex) {
            throw Exception("Error parsing YAML: ", ex.what());
        } catch (...) {
            throw Exception("Unable to read configuration file: ", path);
        }
    }

    void load_template_configs(const YAML::Node& node, Logger& logger, const std::function<void(const YAML::Node&)>& callback)
    {
        const auto load_config = [&](const YAML::Node& item) {
            const auto path = yaml::require_string(item, ::adapter::keys::path);
            const auto overrides = yaml::require(item, ::adapter::keys::overrides);

            logger.info("loading configuration from file: {}", path);
            const auto configuration = load_file(path);

            const auto apply_override = [&](const YAML::Node& override) {
                auto value = override.as<std::string>();

                // clear whitespace before parsing
                value.erase(std::remove_if(value.begin(), value.end(), isspace), value.end());

                apply_template_override(configuration, value);
            };

            // apply each override to the configuration
            yaml::foreach (overrides, apply_override);

            // verify that there are no template "?" scalars left in the configuration
            assert_no_unspecified_template_values(configuration);

            // invoke the callback
            callback(configuration);
        };

        yaml::foreach (node, load_config);
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
