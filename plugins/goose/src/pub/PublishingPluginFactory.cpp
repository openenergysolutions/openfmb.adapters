#include "goose/PublishingPluginFactory.h"

#include "ConfigStrings.h"
#include "generated/Type.h"
#include "pub/PublishingConfigWriteVisitor.h"
#include "pub/PublishingPlugin.h"
#include "adapter-api/ConfigStrings.h"
#include "adapter-api/config/generated/ModelVisitors.h"
#include "adapter-api/util/YAMLTemplate.h"

namespace adapter {
namespace goose {

    template <class T>
    struct WriterHandler {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;
            PublishingConfigWriteVisitor visitor(out);
            visit<T>(visitor);
        }
    };

    std::string PublishingPluginFactory::name() const
    {
        return "goose-pub";
    }

    std::string PublishingPluginFactory::description() const
    {
        return "maps GOOSE protocol messages to OpenFMB";
    }

    std::unique_ptr<IPlugin> PublishingPluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
    {
        return std::make_unique<PublishingPlugin>(node, logger, bus);
    }

    void PublishingPluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::goCb;
        yaml::write_default_template_config(out, "goCb-template.yaml");
    }

    void PublishingPluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
    {
        if (profiles.empty()) {
            throw Exception("You must specify at least one profile when generating GOOSE session configuration");
        }

        out << YAML::BeginMap;

        out << YAML::Key << keys::networkAdapter << YAML::Value << "ens1" << YAML::Comment("Network adapter name");
        out << YAML::Key << keys::appId << YAML::Value << 1000 << YAML::Comment("APPID");
        out << YAML::Key << keys::goCbRef << YAML::Value << "REF615A_204LD0/LLN0$GO$OpenFMBheartbeat" << YAML::Comment("GOOSE Control Block Reference");
        write_goose_structure(out);

        out << YAML::Key << keys::profiles;
        out << YAML::BeginSeq;
        write_profile_configs(out, profiles);
        out << YAML::EndSeq;

        out << YAML::EndMap;
    }

    void PublishingPluginFactory::write_goose_structure(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::goose_struct << YAML::Comment("GOOSE structure definition");
        out << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::structure) << YAML::Value << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsA" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsB" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::floating) << YAML::Value << "PhV.phsC" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::ignored) << YAML::Value << "PhV.net" << YAML::EndMap;
        out << YAML::EndSeq << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::array) << YAML::Value << YAML::BeginSeq;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsA" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsB" << YAML::EndMap;
        out << YAML::BeginMap << YAML::Key << Type::to_string(Type::Value::integer) << YAML::Value << "W.phsC" << YAML::EndMap;
        out << YAML::EndSeq << YAML::EndMap;
        out << YAML::EndSeq;
    }

    void PublishingPluginFactory::write_profile_configs(YAML::Emitter& out, const profile_vec_t& profiles) const
    {
        for (const auto& profile : profiles) {
            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << profile;

            out << YAML::Key << keys::mapping << YAML::Comment("profile model starts here");
            out << YAML::BeginMap;
            ProfileRegistry::handle_by_name<WriterHandler>(profile, out);
            out << YAML::EndMap;

            out << YAML::EndMap;
        }
    }

} // namespace goose
} // namespace adapter
