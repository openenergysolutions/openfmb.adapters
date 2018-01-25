
#include "DNP3Factory.h"

#include "DNP3Adapter.h"

#include "ConfigKeys.h"

namespace adapter
{
    template <class T>
    void write_profile_mapping(YAML::Emitter& out)
    {
        T map;

        out << YAML::Key << T::profile_t::descriptor()->name();
        out << YAML::Newline << YAML::Comment("AnalogueValue leaf nodes in the profile");

        out << YAML::BeginMap;
        for (auto& mapping : map.get_analogs())
        {
            out << YAML::Key << mapping.first;
            out << YAML::Flow;
            out << YAML::Newline;
            out << YAML::BeginMap;
            out << YAML::Key << keys::index << -1;
            out << YAML::Key << keys::scale << 1.0;
            out << YAML::EndMap;
        }

        out << YAML::Newline << YAML::Comment("BCR leaf nodes in the profile");

        for (auto& mapping : map.get_bcrs())
        {
            out << YAML::Key << mapping.first;
            out << YAML::Flow;
            out << YAML::Newline;
            out << YAML::BeginMap;
            out << YAML::Key << keys::index << -1;
            out << YAML::Key << keys::scale << 1.0;
            out << YAML::Key << commonmodule::UnitSymbolKind_descriptor()->name() << commonmodule::UnitSymbolKind_Name(commonmodule::UnitSymbolKind::UnitSymbolKind_none);
            out << YAML::EndMap;
        }
        out << YAML::EndMap;
    }

    void DNP3Factory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
        out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
        out << YAML::Key << keys::masters;
        out << YAML::BeginSeq;

        out << YAML::BeginMap;
        out << YAML::Key << keys::name << YAML::Value << "device1";
        out << YAML::Comment("This name is pre-pended to each log message");

        out << YAML::Key << keys::channel;
        out << YAML::BeginMap;
        out << YAML::Key << keys::adapter << YAML::Value << "0.0.0.0";
        out << YAML::Comment("Override to use a specific adapter");
        out << YAML::Key << keys::outstation_ip << YAML::Value << "127.0.0.1";
        out << YAML::Key << keys::port << YAML::Value << 20000;
        out << YAML::EndMap;

        out << YAML::Key << "protocol";
        out << YAML::BeginMap;
        out << YAML::Key << keys::master_address << YAML::Value << 1;
        out << YAML::Key << keys::outstation_address << YAML::Value << 10;
        out << YAML::Key << keys::integrity_poll_ms << YAML::Value << 5000;
        out << YAML::EndMap;

        write_profile_mapping<ResourceReadingProfileMap>(out);

        out << YAML::EndMap;

        out << YAML::EndSeq;
    }

    std::unique_ptr<IAdapter> DNP3Factory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        return std::make_unique<DNP3Adapter>(
                   logger,
                   node,
                   bus
               );
    }

}
