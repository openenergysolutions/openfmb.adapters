// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_CONFIGREADVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGREADVISITORBASE_H

#include "ITypedModelVisitor.h"

#include "DescriptorPath.h"
#include "adapter-util/util/YAMLUtil.h"

#include <stack>

namespace adapter {
namespace util {

    /**
 * Base class that can be used in plugins that need to read a configuration
 *
 * Automatically tracks the current configuration node
 *
 * @tparam T The OpenFMB profile type
 */
    template <class T>
    class ConfigReadVisitorBase : public ITypedModelVisitor<T> {

    protected:
        DescriptorPath path;

    private:
        std::stack<YAML::Node> current_node;

    public:
        bool start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) final
        {
            // Optional node for backward compatibility in OpenFMB model
            const auto node = this->get_optional_config_node(field_name);
            if (!node) {
                return false;
            }
            this->path.push(field_name, descriptor);
            this->current_node.push(node);
            return true;
        }

        void end_message_field() final
        {
            this->path.pop();
            this->current_node.pop();
        }

        int start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) final
        {
            // Optional node for backward compatibility in OpenFMB model
            const auto node = get_optional_config_node(field_name);
            if (!node) {
                return false;
            }
            if (!node.IsSequence()) {
                throw api::Exception("Node is not a sequence: ", field_name, " at line: ", node.Mark().line);
            }

            this->current_node.push(node);
            this->path.push(field_name, descriptor);
            return boost::numeric_cast<int>(node.size());
        }

        void start_iteration(int i) final
        {
            auto node = this->current_node.top()[i];
            if (!node) {
                throw api::Exception("no node at index: ", i);
            }
            this->current_node.push(node);
        }

        void end_iteration() final
        {
            this->current_node.pop();
        }

        void end_repeated_message_field() final
        {
            this->current_node.pop();
        }

    protected:
        explicit ConfigReadVisitorBase(const YAML::Node& root)
        {
            current_node.push(root);
        }

        YAML::Node get_config_node(const std::string& name)
        {
            return yaml::require(current_node.top(), name);
        }

    private:
        YAML::Node get_optional_config_node(const std::string& name)
        {
            return yaml::option(current_node.top(), name);
        }
    };
}
}

#endif
