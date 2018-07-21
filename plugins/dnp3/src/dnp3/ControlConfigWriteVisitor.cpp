
#include "ControlConfigWriteVisitor.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

#include "ConfigStrings.h"
#include "ControlCodeMeta.h"
#include "generated/SourceType.h"

namespace adapter {

namespace dnp3 {

    ControlConfigWriteVisitor::ControlConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    // --- remapping methods from base class ---

    BoolFieldType::Value ControlConfigWriteVisitor::remap(BoolFieldType::Value type)
    {
        return type;
    }

    Int32FieldType::Value ControlConfigWriteVisitor::remap(Int32FieldType::Value type)
    {
        return type;
    }

    EnumFieldType::Value ControlConfigWriteVisitor::remap(EnumFieldType::Value type)
    {
        return type;
    }

    StringFieldType::Value ControlConfigWriteVisitor::remap(StringFieldType::Value type)
    {
        switch (type) {
        // these types aren't useful in a control profile
        case (StringFieldType::Value::optional_string):
        case (StringFieldType::Value::optional_const_uuid):
            return StringFieldType::Value::ignored_string;
        default:
            return type;
        }
    }

    // --- map write function from base class ---

    void ControlConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        out << YAML::Key << keys::when_true_execute;
        out << YAML::BeginSeq;
        write_crob_keys(out, 0, opendnp3::ControlCode::LATCH_ON);
        out << YAML::EndSeq;

        out << YAML::Key << keys::when_false_execute;
        out << YAML::BeginSeq;
        write_crob_keys(out, 0, opendnp3::ControlCode::LATCH_OFF);
        out << YAML::EndSeq;
    }

    void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        //out << YAML::Key << "some" << YAML::Value << "int32";
        throw NotImplemented(LOCATION);
    }

    void ControlConfigWriteVisitor::write_mapped_uint32_keys(YAML::Emitter& out)
    {
        throw NotImplemented(LOCATION);
    }

    void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        out << YAML::Key << "some" << YAML::Value << "int64";
    }

    void ControlConfigWriteVisitor::write_mapped_uint64_keys(YAML::Emitter& out)
    {
        throw NotImplemented(LOCATION);
    }

    void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        out << YAML::Key << "some" << YAML::Value << "float";
    }

    void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        throw NotImplemented(LOCATION);
    }

    // --- various helpers ---

    void ControlConfigWriteVisitor::write_crob_keys(YAML::Emitter& out, uint16_t index, opendnp3::ControlCode code)
    {
        out << YAML::BeginMap;

        out << YAML::Key << keys::index << YAML::Value << index;
        out << YAML::Key << keys::g12v1;

        out << YAML::BeginMap;
        out << YAML::Key << keys::control_code << YAML::Value << ControlCodeMeta::to_string(code);
        out << YAML::Key << keys::count << YAML::Value << 1;
        out << YAML::Key << keys::on_time_ms << YAML::Value << 1000;
        out << YAML::Key << keys::off_time_ms << YAML::Value << 1000;
        out << YAML::EndMap;

        out << YAML::EndMap;
    }
}
}
