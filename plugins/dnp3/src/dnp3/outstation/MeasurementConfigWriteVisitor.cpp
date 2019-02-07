
#include "MeasurementConfigWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"

#include "dnp3/ConfigStrings.h"
#include "dnp3/ControlCodeMeta.h"
#include "dnp3/generated/DestinationType.h"

namespace adapter {

namespace dnp3 {

    namespace outstation {

        void
        write_scaled_keys(YAML::Emitter& out, const std::initializer_list<DestinationType::Value>& supported_sources)
        {
            out << YAML::Key << DestinationType::label << YAML::Value << DestinationType::none
                << YAML::Comment(util::enumeration::get_value_set_from_list<DestinationType>(supported_sources));
            out << YAML::Key << util::keys::index << YAML::Value << 0;
            out << YAML::Key << util::keys::scale << YAML::Value << 1.0;
        }

        MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
            : ConfigWriteVisitorBase(out)
        {
        }

        // --- map write function from base class ---

        void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
        {
            out << YAML::Key << DestinationType::label << YAML::Value << DestinationType::none
                << YAML::Comment(util::enumeration::get_value_set_from_list<DestinationType>({ DestinationType::Value::none, DestinationType::Value::binary }));
            out << YAML::Key << util::keys::index << YAML::Value << 0;
        }

        void MeasurementConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
        {
            out << YAML::Comment("int32 mapping not supported in DNP3 outstation measurement profiles");
        }

        void MeasurementConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
        {
            write_scaled_keys(
                out,
                { DestinationType::Value::none, DestinationType::Value::analog, DestinationType::Value::counter });
        }

        void MeasurementConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
        {
            write_scaled_keys(
                out,
                { DestinationType::Value::none, DestinationType::Value::analog });
        }

        void MeasurementConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out,
                                                                   google::protobuf::EnumDescriptor const* descriptor)
        {
            // TODO - will almost certainly need to map enums to analogs
            out << YAML::Key << DestinationType::label << YAML::Value << DestinationType::none << YAML::Comment(util::enumeration::get_value_set_from_list<DestinationType>({ DestinationType::Value::none, DestinationType::Value::binary }));
            out << YAML::Key << util::keys::index << YAML::Value << 0;
            out << YAML::Key << util::keys::when_true << YAML::Value << descriptor->value(0)->name();
            out << YAML::Key << util::keys::when_false << YAML::Value << descriptor->value(1)->name();
        }

        void MeasurementConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
        {
            throw api::Exception("Schedule parameter lists not supported for DNP3 outstation measurement profiles");
        }
    }
}
}