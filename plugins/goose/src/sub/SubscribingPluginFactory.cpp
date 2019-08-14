#include "goose/SubscribingPluginFactory.h"

#include "ConfigStrings.h"
#include "adapter-util/ConfigStrings.h"
#include "adapter-util/config/generated/ModelVisitors.h"
#include "adapter-util/util/EnumUtil.h"
#include "adapter-util/util/YAMLTemplate.h"
#include "generated/Type.h"
#include "sub/SubscribingConfigWriteVisitor.h"
#include "sub/SubscribingPlugin.h"

#include <iostream>

namespace adapter {
namespace goose {

    template <class T>
    struct SubWriterHandler {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;
            SubscribingConfigWriteVisitor visitor(out);
            util::visit<T>(visitor);
        }
    };

    std::string SubscribingPluginFactory::name() const
    {
        return "goose-sub";
    }

    std::string SubscribingPluginFactory::description() const
    {
        return "maps OpenFMB messages to the GOOSE protocol";
    }

    std::unique_ptr<api::IPlugin> SubscribingPluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<SubscribingPlugin>(node, logger, bus);
    }

    void SubscribingPluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::goCb;
        util::yaml::write_default_template_config(out, "goCb-template.yaml");
    }

    void SubscribingPluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        if (profiles.size() != 1) {
            throw api::Exception("You must specify exactly one profile when generating goose-sub session configuration");
        }
        auto profile = profiles[0];

        out << YAML::BeginMap;

        out << YAML::Key << keys::networkAdapter << YAML::Value << "ens1" << YAML::Comment("Network adapter name");
        out << YAML::Key << keys::src_mac << YAML::Value << "08:42:70:00:00:00" << YAML::Comment("source MAC address");
        out << YAML::Key << keys::dest_mac << YAML::Value << "01:0c:cd:02:00:01" << YAML::Comment("destination MAC address");
        out << YAML::Key << keys::appId << YAML::Value << 1000 << YAML::Comment("APPID");
        out << YAML::Key << keys::goCbRef << YAML::Value << "REF615A_204LD0/LLN0$GO$OpenFMBheartbeat" << YAML::Comment("GOOSE Control Block Reference");
        out << YAML::Key << keys::datSet << YAML::Value << "REF615A_204LD0/LLN0$OpenFMBGDS" << YAML::Comment("datSet");
        out << YAML::Key << keys::goID << YAML::Value << "REF615A_204LD0/LLN0.OpenFMBheartbeat" << YAML::Comment("goID");
        out << YAML::Key << keys::confRev << YAML::Value << 100 << YAML::Comment("Configuration revision");
        out << YAML::Key << keys::ttl << YAML::Value << 1000 << YAML::Comment("Retransmission interval (in ms)");
        out << YAML::Key << util::keys::profile << YAML::Value << profile;
        write_goose_structure(out);
        write_quality_template(out);
        out << YAML::Key << keys::mapping;
        out << YAML::BeginMap;
        api::ProfileRegistry::handle_by_name<SubWriterHandler>(profile, out);
        out << YAML::EndMap;
        out << YAML::EndMap;
    }

    void SubscribingPluginFactory::write_quality_template(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::quality_templates << YAML::Comment("GOOSE structure definition");
        out << YAML::BeginSeq;
        out << YAML::BeginMap;
        out << YAML::Key << keys::quality_id << YAML::Value << "default-quality" << YAML::Comment("unique id");
        out << YAML::Key << keys::quality_validity << YAML::Value << commonmodule::ValidityKind_Name(commonmodule::ValidityKind::ValidityKind_good) << YAML::Comment(util::enumeration::get_enum_set(*commonmodule::ValidityKind_descriptor()));
        out << YAML::Key << keys::quality_overflow << YAML::Value << false;
        out << YAML::Key << keys::quality_outofrange << YAML::Value << false;
        out << YAML::Key << keys::quality_badreference << YAML::Value << false;
        out << YAML::Key << keys::quality_oscillatory << YAML::Value << false;
        out << YAML::Key << keys::quality_failure << YAML::Value << false;
        out << YAML::Key << keys::quality_olddata << YAML::Value << false;
        out << YAML::Key << keys::quality_inconsistent << YAML::Value << false;
        out << YAML::Key << keys::quality_inaccurate << YAML::Value << false;
        out << YAML::Key << keys::quality_source << YAML::Value << commonmodule::SourceKind_Name(commonmodule::SourceKind::SourceKind_process) << YAML::Comment(util::enumeration::get_enum_set(*commonmodule::SourceKind_descriptor()));
        out << YAML::Key << keys::quality_test << YAML::Value << false;
        out << YAML::Key << keys::quality_operatorblocked << YAML::Value << false;
        out << YAML::EndMap;
        out << YAML::EndSeq;
    }

    void SubscribingPluginFactory::write_goose_structure(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::goose_struct << YAML::Comment("GOOSE structure definition");
        out << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.net" << YAML::EndMap;
        out << YAML::BeginMap;
        out << YAML::Key << Type::to_string(Type::Value::structure) << YAML::Value;
        out << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsA" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsB" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsC" << YAML::EndMap;
        out << YAML::EndSeq;
        out << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::array) << YAML::Value;
        out << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsA" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsB" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsC" << YAML::EndMap;
        out << YAML::EndSeq;
        out << YAML::EndMap;
        out << YAML::EndSeq;
    }

} // namespace goose
} // namespace adapter
