#include "goose/SubscribingPluginFactory.h"

#include "ConfigStrings.h"
#include "sub/SubscribingConfigWriteVisitor.h"
#include "sub/SubscribingPlugin.h"
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
        out << YAML::Key << keys::mapping << YAML::Comment("profile model starts here");
        out << YAML::BeginMap;
        ProfileRegistry::handle_by_name<WriterHandler>(profile, out);
        out << YAML::EndMap;
        out << YAML::EndMap;
    }

} // namespace goose
} // namespace adapter