
#ifndef OPENFMB_ADAPTER_CONFIGVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGVISITORBASE_H

#include "IProtoVisitor.h"

#include "adapter-api/util/YAMLUtil.h"

#include <yaml-cpp/yaml.h>
#include <deque>

namespace adapter {

    template <class T>
    class ConfigVisitorBase : public IProtoVisitor<T> {

    public:

        void start_message_field(const std::string &field_name) override final {
            this->path.push_back(field_name);
        }

        void end_message_field() override final {
            this->path.pop_back();
        }

    protected:

        ConfigVisitorBase(const YAML::Node& root) : root(root)
        {}

        YAML::Node get_config_node(const std::string& name)
        {
            this->path.push_back(name);
            auto node = get_config_node(this->root, this->path.begin(), this->path.end());
            this->path.pop_back();
            return node;
        }

    private:

        template <class Iter>
        static YAML::Node get_config_node(const YAML::Node& node, Iter begin, Iter end)
        {
            if(begin == end) return node;

            const auto next = yaml::require(node, *begin);
            return get_config_node(next, ++begin, end);
        }

        const YAML::Node root;
        std::deque<std::string> path;

    };

}

#endif //OPENFMB_ADAPTER_CONFIGVISITORBASE_H
