// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "MeasurementSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "dnp3/ConfigStrings.h"
#include "dnp3/generated/DestinationType.h"

using namespace adapter::schema;

namespace adapter {
namespace dnp3 {
namespace outstation {

    MeasurementSchemaWriteVisitor::MeasurementSchemaWriteVisitor()
        : SchemaWriteVisitorBase()
    {
    }

    // --- map write function from base class ---

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::binary)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the binary input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                bool_property(
                    util::keys::negate,
                    Required::no,
                    "Negate the boolean value before updating the DNP3 point",
                    false
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            }),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::counter)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the counter",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            }),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::counter)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the counter",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_float_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_double_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<double>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<double>::unused(),
                    Bound<double>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {        
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::binary)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the binary input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "Mapping from the enum to the boolean value", 
                    Object({ 
                        enum_property(
                            util::keys::name, 
                            get_enum_variants_from_proto(descriptor), 
                            Required::yes, 
                            "OpenFMB enum variant", 
                            descriptor->value(0)->name()), 
                        bool_property(
                            util::keys::value, 
                            Required::yes, 
                            "Value to write", 
                            false
                        )                         
                    })
                )
            }),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "Mapping from the enum to the analog value", 
                    Object({ 
                        enum_property(
                            util::keys::name, 
                            get_enum_variants_from_proto(descriptor), 
                            Required::yes, 
                            "OpenFMB enum variant", 
                            descriptor->value(0)->name()), 
                        numeric_property<float>(
                            util::keys::value, 
                            Required::yes, 
                            "Value to write", 
                            0.0f, 
                            Bound<float>::unused(), 
                            Bound<float>::unused()) 
                    })
                )
            })
        }));
    }

}
}
}
