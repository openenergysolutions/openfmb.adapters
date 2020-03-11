
#include "outstation/ControlConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "generated/CommandSourceType.h"
#include "generated/ProfileAction.h"
#include "generated/RegisterMapping.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/EnumUtil.h>

namespace adapter {
namespace modbus {
namespace outstation {

    ControlConfigWriteVisitor::ControlConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    void ControlConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        out << YAML::Key << CommandSourceType::label << YAML::Value << CommandSourceType::none;
        out << YAML::Comment(util::enumeration::get_value_set_from_list<CommandSourceType>({CommandSourceType::Value::none, CommandSourceType::Value::coil}));
        out << YAML::Key << ProfileAction::label << YAML::Value << ProfileAction::update << YAML::Comment(util::enumeration::get_value_set<ProfileAction>());
        out << YAML::Key << util::keys::index << YAML::Value << 0;
        out << YAML::Key << util::keys::negate << YAML::Value << false;
    }

    void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        write_mapped_numeric(out);
    }

    void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_mapped_numeric(out);
    }

    void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_mapped_numeric(out);
    }

    void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Key << CommandSourceType::label << YAML::Value << CommandSourceType::none;
        out << YAML::Comment(util::enumeration::get_value_set_from_list<CommandSourceType>({CommandSourceType::Value::none, CommandSourceType::Value::holding_register}));
        out << YAML::Key << ProfileAction::label << YAML::Value << ProfileAction::update << YAML::Comment(util::enumeration::get_value_set<ProfileAction>());
        out << YAML::Key << util::keys::index << YAML::Value << 0;
        
        out << YAML::Key << util::keys::mapping << YAML::Value;
        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i) {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << value->name();
            out << YAML::Key << util::keys::value << YAML::Value << value->number();
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }

    void ControlConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
    {
        //throw api::Exception("schedule parameter lists not supported for Modbus control profiles");
    }

    void ControlConfigWriteVisitor::write_mapped_numeric(YAML::Emitter& out)
    {
        out << YAML::Key << CommandSourceType::label << YAML::Value << CommandSourceType::none;
        out << YAML::Comment(util::enumeration::get_value_set_from_list<CommandSourceType>({CommandSourceType::Value::none, CommandSourceType::Value::holding_register}));
        out << YAML::Key << RegisterMapping::label << YAML::Value << RegisterMapping::sint16;
        out << YAML::Comment(util::enumeration::get_value_set_from_list<RegisterMapping>({RegisterMapping::Value::sint16, RegisterMapping::Value::uint16, RegisterMapping::Value::sint32, RegisterMapping::Value::uint32, RegisterMapping::Value::float32}));;
        out << YAML::Key << ProfileAction::label << YAML::Value << ProfileAction::update << YAML::Comment(util::enumeration::get_value_set<ProfileAction>());
        out << YAML::Key << util::keys::index << YAML::Value << 0;
        out << YAML::Key << util::keys::scale << YAML::Value << 1.0;
    }

}
}
}
