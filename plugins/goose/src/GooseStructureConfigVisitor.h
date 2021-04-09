// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_GOOSESTRUCTURECONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_GOOSESTRUCTURECONFIGREADER_H

#include "schema-util/Types.h"
#include "yaml-cpp/yaml.h"
#include <string>

namespace adapter {
namespace goose {

    class GooseStructureConfigVisitor {
    public:
        void visit(const YAML::Node& node);
        static schema::Object get_schema();

    protected:
        virtual void on_ignore() = 0;
        virtual void on_structure(const YAML::Node& node) = 0;
        virtual void on_array(const YAML::Node& node) = 0;
        virtual void on_bool(const YAML::Node& node) = 0;
        virtual void on_integer(const YAML::Node& node) = 0;
        virtual void on_floating(const YAML::Node& node) = 0;
        virtual void on_visible_string(const YAML::Node& node) = 0;
        virtual void on_mms_string(const YAML::Node& node) = 0;
        virtual void on_bitstring(const YAML::Node& node) = 0;
        virtual void on_generalized_time(const YAML::Node& node) = 0;
        virtual void on_binary_time(const YAML::Node& node) = 0;
        virtual void on_utc_time(const YAML::Node& node) = 0;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_GOOSESTRUCTURECONFIGREADER_H
