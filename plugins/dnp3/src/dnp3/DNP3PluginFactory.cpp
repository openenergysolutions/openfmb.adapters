
#include "DNP3PluginFactory.h"

#include "DNP3Plugin.h"

#include "adapter-api/helpers/generated/MessageVisitors.h"
#include "ConfigKeys.h"

namespace adapter
{
    template <class T>
    class ConfigWriteVisitor final : public IProtoVisitor<T>
    {
        YAML::Emitter& out;

    public:
        ConfigWriteVisitor(YAML::Emitter& out) : out(out) {}

        void start_message_field(const std::string& field_name) override
        {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
        {
            out << YAML::Key << field_name << YAML::Comment("MV");
            out << YAML::BeginMap;
            this->write_analogue_config("mag");
            out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
        {
            out << YAML::Key << field_name << YAML::Comment("CMV");
            out << YAML::BeginMap << "cVal";
            out << YAML::BeginMap;
            this->write_analogue_config("ang");
            this->write_analogue_config("mag");
            out << YAML::EndMap;
            out << YAML::EndMap;

        }

        void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
        {
            out << YAML::Key << field_name << YAML::Comment("BCR");
            out << YAML::BeginMap;
            out << YAML::Key << keys::index << -1;
            out << YAML::Key << keys::scale << 1.0;
            out << YAML::Key << keys::mapped_from << YAML::Value << keys::counter << YAML::Comment("can be 'analog' or 'counter'");
            out << YAML::Key << commonmodule::UnitSymbolKind_descriptor()->name() << commonmodule::UnitSymbolKind_Name(commonmodule::UnitSymbolKind::UnitSymbolKind_none);
            out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) override
        {
            out << YAML::Key << field_name << YAML::Comment("ReadingMessageInfo - the mRID is set dynamically");
            out << YAML::BeginMap;
            out << YAML::Key << keys::identified_object;
            out << YAML::BeginMap;
            out << YAML::Value <<  keys::description << YAML::Value << "default";
            out << YAML::Value <<  keys::name << YAML::Value << "default";
            out << YAML::EndMap;
            out << YAML::Key << keys::application_name << YAML::Value << "default";
            out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) override
        {
            this->write_identified_object(field_name);
        }

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) override
        {
            // don't do anything until we understand how to set these fields
        }

        void handle(const std::string& field_name, getter_t<commonmodule::LogicalNode, T> getter) override
        {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
            this->write_identified_object(keys::identified_object);
            out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) override
        {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
            // TODO - what should be the default here?
            out << YAML::Key << keys::set_val << YAML::Value << commonmodule::CalcMethodKind_Name(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS);
            out << YAML::EndMap;
        }

        void end_message_field() override
        {
            out << YAML::EndMap;
        }

    private:

        void write_identified_object(const std::string& field_name)
        {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
            out << YAML::Value <<  keys::description << YAML::Value << "default";
            out << YAML::Value <<  keys::mRID << YAML::Value << keys::default_uuid << YAML::Comment("set me");
            out << YAML::Value <<  keys::name << YAML::Value << "default";
            out << YAML::EndMap;
        }

        void write_analogue_config(const std::string& name)
        {
            out << YAML::Key << name;
            out << YAML::BeginMap;
            out << YAML::Key << keys::index << -1;
            out << YAML::Key << keys::scale << 1.0;
            out << YAML::EndMap;

        }
    };

    void DNP3PluginFactory::write_default_config(YAML::Emitter& out) const
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

        out << YAML::Key << "profile";
        out << YAML::BeginMap;
        out << YAML::Key << "name" << resourcemodule::ResourceReadingProfile::descriptor()->name();
        {
            ConfigWriteVisitor<resourcemodule::ResourceReadingProfile> visitor(out);
            visit(visitor);
        }
        out << YAML::EndMap;

        out << YAML::EndMap;

        out << YAML::EndSeq;
    }

    std::unique_ptr<IPlugin> DNP3PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        return std::make_unique<DNP3Plugin>(
                   logger,
                   node,
                   bus
               );
    }

}
