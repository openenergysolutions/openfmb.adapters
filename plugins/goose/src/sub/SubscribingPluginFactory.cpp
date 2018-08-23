#include "goose/SubscribingPluginFactory.h"

#include "ConfigStrings.h"
#include "adapter-api/ConfigStrings.h"
#include "adapter-api/config/generated/ModelVisitors.h"
#include "adapter-api/util/YAMLTemplate.h"
#include "generated/Type.h"
#include "sub/SubscribingConfigWriteVisitor.h"
#include "sub/SubscribingPlugin.h"

namespace adapter {
namespace goose {

    template <class T>
    struct SubWriterHandler {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;
            SubscribingConfigWriteVisitor visitor(out);
            visit<T>(visitor);
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

    std::unique_ptr<IPlugin> SubscribingPluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
    {
        return std::make_unique<SubscribingPlugin>(node, logger, bus);
    }

    void SubscribingPluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::goCb;
        yaml::write_default_template_config(out, "goCb-template.yaml");
    }

    void SubscribingPluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
    {
        if (profiles.size() != 1) {
            throw Exception("You must specify exactly one profile when generating goose-sub session configuration");
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
        out << YAML::Key << ::adapter::keys::profile << YAML::Value << profile;
        write_goose_structure(out);
        out << YAML::Key << keys::mapping;
        out << YAML::BeginMap;
        ProfileRegistry::handle_by_name<SubWriterHandler>(profile, out);
        out << YAML::EndMap;
        out << YAML::EndMap;
    }

    void SubscribingPluginFactory::write_goose_structure(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::goose_struct << YAML::Comment("GOOSE structure definition");
        out << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.net" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::structure) << YAML::Value << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsA" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsB" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsC" << YAML::EndMap;
        out << YAML::EndSeq << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::array) << YAML::Value << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsA" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsB" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsC" << YAML::EndMap;
        out << YAML::EndSeq << YAML::EndMap;
        out << YAML::EndSeq;
    }

} // namespace goose
} // namespace adapter
