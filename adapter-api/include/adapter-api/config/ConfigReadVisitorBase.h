
#ifndef OPENFMB_ADAPTER_CONFIGREADVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGREADVISITORBASE_H

#include "IModelVisitor.h"

#include "adapter-api/util/YAMLUtil.h"

#include <boost/numeric/conversion/cast.hpp>

#include <stack>

namespace adapter {

/**
     * Base class that can be used in plugins that need to read a configuration
     *
     * Automatically tracks the current configuration node
     *
     * @tparam T The OpenFMB profile type
     */
template <class T>
class ConfigReadVisitorBase : public IModelVisitor<T> {

public:
    void start_message_field(const std::string& field_name) final
    {
        this->current.push(
            yaml::require(this->current.top(), field_name));
    }

    void end_message_field() final
    {
        this->current.pop();
    }

    int start_repeated_message_field(const std::string& field_name) final
    {
        auto node = yaml::require(current.top(), field_name);
        if (!node.IsSequence()) {
            throw Exception("Node is not a sequence: ", field_name, " at line: ", node.Mark().line);
        }
        this->current.push(node);
        return boost::numeric_cast<int>(node.size());
    }

    void start_iteration(int i) final
    {
        auto node = this->current.top()[i];
        if (!node) {
            throw Exception("no node at index: ", i);
        }
        this->current.push(node);
    }

    void end_iteration() final
    {
        this->current.pop();
    }

    void end_repeated_message_field() final
    {
        this->current.pop();
    }

protected:
    explicit ConfigReadVisitorBase(const YAML::Node& root)
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

#endif
