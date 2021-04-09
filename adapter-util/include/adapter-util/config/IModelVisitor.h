// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_IMODELVISITOR_H
#define OPENFMB_ADAPTER_IMODELVISITOR_H

#include "IMessageFieldHandler.h"

#include "IAccessor.h"
#include "proto-api/commonmodule/commonmodule.pb.h"

#include "FieldTypes.h"

namespace adapter {
namespace util {

    class IModelVisitor : public IMessageFieldHandler {

    public:
        // --- handlers for the various primitive types ---

        virtual void handle(const std::string& field_name, BoolFieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, Int32FieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, Int64FieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, FloatFieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, DoubleFieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, StringFieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor, EnumFieldType::Value type) = 0;

        // --- handlers for a small number of terminal messages ---
        virtual void handle(const std::string& field_name, QualityFieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, TimestampFieldType::Value type) = 0;
        virtual void handle(const std::string& field_name, ControlTimestampFieldType::Value type) = 0;

        // --- handlers for specialized repeated fields ---
        virtual void handle_repeated_schedule_parameter(const std::string& field_name) = 0;
    };
}
}

#endif
