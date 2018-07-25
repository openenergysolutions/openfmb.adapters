
#include "ControlConfigWriteVisitor.h"

#include "adapter-api/ConfigStrings.h"

#include "ConfigStrings.h"
#include "Control.h"
#include "generated/SourceType.h"

namespace adapter {

namespace dnp3 {

    ControlConfigWriteVisitor::ControlConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
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
        out << YAML::Comment("int32 mapping not supported for controls");
    }

    void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        out << YAML::Comment("int64 mapping not supported for controls");
    }

    void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        out << YAML::Comment("float mapping not supported for controls");
    }

    void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Comment("enum mapping not supported for controls");
    }

    // --- various helpers ---

    void ControlConfigWriteVisitor::write_crob_keys(YAML::Emitter& out, uint16_t index, opendnp3::ControlCode code)
    {
        out << YAML::BeginMap;

        const Control control{
            index,
            opendnp3::ControlRelayOutputBlock(code, 1, 1000, 1000)
        };

        Control::write(control, out);

        out << YAML::EndMap;
    }
}
}
