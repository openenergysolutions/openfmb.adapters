
#ifndef OPENFMB_ADAPTER_CONFIGVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGVISITORBASE_H

#include "IProtoVisitor.h"

#include "adapter-api/util/YAMLUtil.h"

#include <yaml-cpp/yaml.h>
#include <stack>
#include <boost/numeric/conversion/cast.hpp>

namespace adapter {

    template <class T>
    class ConfigReadVisitorBase : public IProtoVisitor<T> {

    public:

        void start_message_field(const std::string &field_name) final {
            this->current.push(
                    yaml::require(this->current.top(), field_name)
            );
        }

        void end_message_field() final {
            this->current.pop();
        }

        virtual int start_repeated_message_field(const std::string& field_name) final {
            auto node = yaml::require(current.top(), field_name);
            if(!node.IsSequence()) {
                throw Exception("node is not a sequence: ", field_name);
            }
            this->current.push(node);
            return boost::numeric_cast<int>(node.size());
        }

        virtual void start_iteration(int i) final {
            auto node = this->current.top()[i];
            if(!node) {
                throw Exception("no node at index: ", i);
            }
            this->current.push(node);
        }

        virtual void end_iteration() final {
            this->current.pop();
        }

        virtual void end_repeated_message_field() final {
            this->current.pop();
        }

    protected:

        ConfigReadVisitorBase(const YAML::Node& root)
        {
            current.push(root);
        }

        YAML::Node get_config_node(const std::string& name)
        {
            return yaml::require(current.top(), name);
        }

    private:


        std::stack<YAML::Node> current;

    };

}

#endif //OPENFMB_ADAPTER_CONFIGVISITORBASE_H
