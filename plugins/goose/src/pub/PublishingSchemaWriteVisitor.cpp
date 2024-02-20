// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "pub/PublishingSchemaWriteVisitor.h"

#include "ConfigStrings.h"
#include "adapter-api/Exception.h"
#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

using namespace adapter::schema;

namespace adapter {
namespace goose {

    PublishingSchemaWriteVisitor::PublishingSchemaWriteVisitor()
    {
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_uint32_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_uint64_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_float_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_double_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_string_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the property in the GOOSE mapping",
                "",
                StringFormat::None
            ),
            array_property(
                util::keys::mapping,
                Required::yes,
                "Mapping of the enum variants",
                Object({
                    enum_property(
                        util::keys::name,
                        get_enum_variants_from_proto(descriptor),
                        Required::yes,
                        "OpenFMB enum variant",
                        descriptor->value(0)->name()
                    ),
                    /*
                    string_property(
                        util::keys::value,
                        Required::yes,
                        "Bitstring value",
                        "0001",
                        StringFormat::BitString
                    ),
                    */
                    numeric_property<uint16_t>(
                            util::keys::value,
                            Required::yes,
                            "Numerical value",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                    )
                })
            )
        }));
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_commonmodule_quality_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_mapped_commonmodule_timestamp_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> PublishingSchemaWriteVisitor::get_name_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the property in the GOOSE mapping",
                "",
                StringFormat::None
            )
        }));
    }

} // namespace goose
} // namespace adapter
