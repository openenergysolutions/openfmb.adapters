// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ClientSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "iccp/ConfigStrings.h"
#include "schema-util/Builder.h"

using namespace adapter::schema;

namespace adapter {
namespace iccp {

    ClientSchemaWriteVisitor::ClientSchemaWriteVisitor()
    {
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({ 
            string_property(
                keys::name,
                Required::yes,
                "Name of the data point in the ICCP mapping",
                "",
                StringFormat::None),
            numeric_property<int64_t>(
                util::keys::when_true,
                Required::yes,
                "Value to map to true",
                0,
                Bound<int64_t>::unused(),
                Bound<int64_t>::unused()
            ),
            numeric_property<int64_t>(
                util::keys::when_false,
                Required::yes,
                "Value to map to false",
                0,
                Bound<int64_t>::unused(),
                Bound<int64_t>::unused()
            )
        }));
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_float_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_double_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_string_schema()
    {
        return get_name_schema(false);
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({ string_property(
                                                                          keys::name,
                                                                          Required::yes,
                                                                          "Name of the property in the ICCP mapping",
                                                                          "",
                                                                          StringFormat::None),
                                                                      array_property(
                                                                          util::keys::mapping,
                                                                          Required::yes,
                                                                          "Mapping of the enum variants",
                                                                          Object({ enum_property(
                                                                                       util::keys::name,
                                                                                       get_enum_variants_from_proto(descriptor),
                                                                                       Required::yes,
                                                                                       "OpenFMB enum variant",
                                                                                       descriptor->value(0)->name()),
                                                                                   numeric_property<int64_t>(
                                                                                       util::keys::value,
                                                                                       Required::yes,
                                                                                       "Value to map",
                                                                                       0,
                                                                                       Bound<int64_t>::unused(),
                                                                                       Bound<int64_t>::unused())
                                                                              })) }));
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_commonmodule_quality_schema()
    {
        return get_name_schema(false);
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_mapped_commonmodule_timestamp_schema()
    {
        return get_name_schema(false);
    }

    std::shared_ptr<schema::Object> ClientSchemaWriteVisitor::get_name_schema(bool with_scale)
    {
        if (with_scale) {
            return std::make_shared<Object>(std::vector<property_ptr_t>({ 
                string_property(
                    keys::name,
                    Required::yes,
                    "Name of the data point in the ICCP mapping",
                    "",
                    StringFormat::None),
                numeric_property<float>(
                    util::keys::scale, 
                    Required::yes, 
                    "scaling to apply", 
                    1.0f, 
                    Bound<float>::unused(),
                    Bound<float>::unused()) 
                }
            ));
        }

        return std::make_shared<Object>(std::vector<property_ptr_t>({ string_property(
            keys::name,
            Required::yes,
            "Name of the data point in the ICCP mapping",
            "",
            StringFormat::None) }));
    }

} // namespace iccp
} // namespace adapter
