// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "FileInfo.h"

#include <adapter-util/util/YAMLUtil.h>

#include "schema-util/Builder.h"

namespace adapter {

namespace file {

     namespace keys {
        static const char* const file = "file";
        static const char* const id = "id";
        static const char* const edition = "edition";
        static const char* const version = "version";
        static const char* const plugin = "plugin";
    }

    void write_default_file_info_config(YAML::Emitter& out)
    {
        out << YAML::Key << keys::file;

        out << YAML::BeginMap;
        /**/ out << YAML::Key << adapter::file::keys::id << YAML::Value << "openfmb-adapter-main";
        /**/ out << YAML::Key << adapter::file::keys::edition << YAML::Value << "2.1";
        /**/ out << YAML::Key << adapter::file::keys::version << YAML::Value << "2.1.0.0";
        /**/ out << YAML::Key << adapter::file::keys::plugin << YAML::Value << "";
        out << YAML::EndMap;
    }

    schema::property_ptr_t get_file_info_config_schema()
    {
        return schema::object_property(
            keys::file, schema::Required::yes, "root config file information",
            schema::Object({
                schema::enum_property(
                    adapter::file::keys::id,
                    { "openfmb-adapter-main" },
                    schema::Required::yes,
                    "file id type",
                    "openfmb-adapter-main"
                ),
                schema::string_property(adapter::file::keys::edition, schema::Required::yes, "openfmb edition", "2.1", schema::StringFormat::None),
                schema::string_property(adapter::file::keys::version, schema::Required::yes, "version of openfmb adapter", "openfmb-adapter-main", schema::StringFormat::None),
                schema::string_property(adapter::file::keys::plugin, schema::Required::no, "plugin type", "", schema::StringFormat::None),
            })
        );
    }
}
}