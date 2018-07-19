
#include "ConfigWriteVisitor.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

#include "ConfigStrings.h"
#include "ControlCodeMeta.h"
#include "generated/SourceType.h"

namespace adapter {

namespace dnp3 {

    ConfigWriteVisitor::ConfigWriteVisitor(bool is_control, YAML::Emitter& out)
        : ConfigWriteVisitorBase(is_control, out)
    {
    }

    // --- implement pure virtual methods from base class ---

    void ConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        if (this->is_control) {
            out << YAML::Key << keys::when_true_execute;
            out << YAML::BeginSeq;
            write_crob_keys(out, 0, opendnp3::ControlCode::LATCH_ON);
            out << YAML::EndSeq;

            out << YAML::Key << keys::when_false_execute;
            out << YAML::BeginSeq;
            write_crob_keys(out, 0, opendnp3::ControlCode::LATCH_OFF);
            out << YAML::EndSeq;
        } else {
            // TODO - support mapping booleans in measurement direction?
            //throw Exception("measurement mappings not supported for type bool");
            out << YAML::Key << "some" << YAML::Value << "bool";
        }
    }

    void ConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        out << YAML::Key << "some" << YAML::Value << "int32";
    }

    void ConfigWriteVisitor::write_mapped_uint32_keys(YAML::Emitter& out)
    {
        throw NotImplemented(LOCATION);
    }

    void ConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        out << YAML::Key << "some" << YAML::Value << "int64";
    }

    void ConfigWriteVisitor::write_mapped_uint64_keys(YAML::Emitter& out)
    {
        throw NotImplemented(LOCATION);
    }

    void ConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        out << YAML::Key << "some" << YAML::Value << "float";
    }

    void ConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        if (this->is_control) {
            // TODO - support control mappings for enums
            throw NotImplemented(LOCATION);
        } else {
            out << YAML::Key << keys::source_type << SourceType::none << YAML::Comment(enumeration::get_value_set_as_string<SourceType>());
            out << YAML::Key << keys::index << YAML::Value << 0;
            out << YAML::Key << keys::when_true << YAML::Value << descriptor->value(0)->name();
            out << YAML::Key << keys::when_false << YAML::Value << descriptor->value(1)->name();
        }
    }

    // --- various helpers ---

    void ConfigWriteVisitor::write_crob_keys(YAML::Emitter& out, uint16_t index, opendnp3::ControlCode code)
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
