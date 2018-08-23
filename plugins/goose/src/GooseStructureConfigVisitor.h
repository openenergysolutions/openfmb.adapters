#ifndef OPENFMB_ADAPTER_GOOSE_GOOSESTRUCTURECONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_GOOSESTRUCTURECONFIGREADER_H

#include "yaml-cpp/yaml.h"
#include <string>

namespace adapter {
namespace goose {

    class GooseStructureConfigVisitor {
    public:
        void visit(const YAML::Node& node);

    protected:
        virtual void on_ignore() = 0;
        virtual void on_structure(const YAML::Node& node) = 0;
        virtual void on_array(const YAML::Node& node) = 0;
        virtual void on_bool(const YAML::Node& node) = 0;
        virtual void on_integer(const YAML::Node& node) = 0;
        virtual void on_floating(const YAML::Node& node) = 0;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_GOOSESTRUCTURECONFIGREADER_H
