#include "pub/PubGooseStructureConfigReader.h"

#include "GooseStructureConfigVisitor.h"
#include "pub/GooseMessageVisitor.h"

namespace adapter {
namespace goose {

    void visit_goose_message(const Mappings& mappings, const goose_cpp::Dataset& dataset)
    {
        GooseMessageVisitor visitor{ mappings };
        dataset.visit(visitor);

        if (visitor.get_num_elements_visited() < mappings.get_num_fields()) {
            throw Exception{ "GOOSE message is missing some fields." };
        }
        if (visitor.get_num_elements_visited() > mappings.get_num_fields()) {
            throw Exception{ "GOOSE message has unexpected fields." };
        }
    }

    class PubGooseStructureConfigVisitor : public GooseStructureConfigVisitor {
    public:
        PubGooseStructureConfigVisitor(const PubGooseStructureConfigReader& config_reader, Mappings& mappings)
            : m_config_reader{ config_reader }
            , m_mappings{ mappings }
        {
        }

    protected:
        void on_ignore() final
        {
            m_mappings.add_ignored_field();
        }

        void on_structure(const YAML::Node& node) final
        {
            Mappings new_mappings{};
            PubGooseStructureConfigVisitor visitor{ m_config_reader, new_mappings };
            visitor.visit(node);

            m_mappings.add_struct_field([new_mappings](const goose_cpp::Dataset& dataset) {
                visit_goose_message(new_mappings, dataset);
            });
        }

        void on_array(const YAML::Node& node) final
        {
            Mappings new_mappings{};
            PubGooseStructureConfigVisitor visitor{ m_config_reader, new_mappings };
            visitor.visit(node);

            m_mappings.add_array_field([new_mappings](const goose_cpp::Dataset& dataset) {
                visit_goose_message(new_mappings, dataset);
            });
        }

        void on_bool(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_bool_handlers.find(name);
            if (it == m_config_reader.m_bool_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a boolean value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_bool_field(it->second);
        }

        void on_integer(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it32 = m_config_reader.m_int32_handlers.find(name);
            if (it32 != m_config_reader.m_int32_handlers.end()) {
                m_mappings.add_int_field([handler = it32->second](const int64_t& value) {
                    handler(static_cast<int32_t>(value));
                });
                return;
            }

            auto it64 = m_config_reader.m_int64_handlers.find(name);
            if (it64 != m_config_reader.m_int64_handlers.end()) {
                m_mappings.add_int_field(it64->second);
                return;
            }

            const auto mark = node.Mark();
            throw Exception{ "Mapping \"", name, "\" is not an integer value for GOOSE element defined at line ", mark.line + 1 };
        }

        void on_floating(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_float_handlers.find(name);
            if (it == m_config_reader.m_float_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a floating point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_float_field(it->second);
        }

        void on_visible_string(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_string_handlers.find(name);
            if (it == m_config_reader.m_string_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a string point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_visible_string_field(it->second);
        }

        void on_mms_string(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_string_handlers.find(name);
            if (it == m_config_reader.m_string_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a string point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_mms_string_field(it->second);
        }

        void on_bitstring(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_bitstring_handlers.find(name);
            if (it == m_config_reader.m_bitstring_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a bitstring point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_bitstring_field(it->second);
        }

        void on_generalized_time(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_timestamp_handlers.find(name);
            if (it == m_config_reader.m_timestamp_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a string point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_generalizedtime_field(it->second);
        }

        void on_binary_time(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_timestamp_handlers.find(name);
            if (it == m_config_reader.m_timestamp_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a string point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_binarytime_field(it->second);
        }

        void on_utc_time(const YAML::Node& node) final
        {
            auto name = get_name(node);
            auto it = m_config_reader.m_timestamp_handlers.find(name);
            if (it == m_config_reader.m_timestamp_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "Mapping \"", name, "\" is not a string point value for GOOSE element defined at line ", mark.line + 1 };
            }

            m_mappings.add_utctime_field(it->second);
        }

    private:
        std::string get_name(const YAML::Node& node) const
        {
            auto name = node.as<std::string>();

            auto it = m_config_reader.m_all_handlers.find(name);
            if (it == m_config_reader.m_all_handlers.end()) {
                const auto mark = node.Mark();
                throw Exception{ "No mapping named \"", name, "\" found for GOOSE element defined at line ", mark.line + 1 };
            }
            return name;
        }

        const PubGooseStructureConfigReader& m_config_reader;
        Mappings& m_mappings;
    };

    meas_fn_t<goose_cpp::Dataset> PubGooseStructureConfigReader::get_meas_handler(const YAML::Node& root)
    {
        auto start_actions = m_start_actions;
        auto end_actions = m_end_actions;

        Mappings mappings{};
        PubGooseStructureConfigVisitor visitor{ *this, mappings };
        visitor.visit(root);

        return [start_actions, end_actions, mappings](const goose_cpp::Dataset& dataset) {
            for (auto& action : start_actions) {
                action();
            }

            visit_goose_message(mappings, dataset);

            for (auto& action : end_actions) {
                action();
            }
        };
    }

    void PubGooseStructureConfigReader::add_start_action(const action_t& action)
    {
        m_start_actions.push_back(action);
    }

    void PubGooseStructureConfigReader::add_end_action(const action_t& action)
    {
        m_end_actions.push_back(action);
    }

    void PubGooseStructureConfigReader::add_bool_handler(const std::string& name, const meas_fn_t<bool>& handler)
    {
        m_all_handlers.insert(name);
        m_bool_handlers.insert({ name, handler });
    }

    void PubGooseStructureConfigReader::add_int32_handler(const std::string& name, const meas_fn_t<int32_t>& handler)
    {
        m_all_handlers.insert(name);
        m_int32_handlers.insert({ name, handler });
    }

    void PubGooseStructureConfigReader::add_int64_handler(const std::string& name, const meas_fn_t<int64_t>& handler)
    {
        m_all_handlers.insert(name);
        m_int64_handlers.insert({ name, handler });
    }

    void PubGooseStructureConfigReader::add_float_handler(const std::string& name, const meas_fn_t<float>& handler)
    {
        m_all_handlers.insert(name);
        m_float_handlers.insert({ name, handler });
    }

    void PubGooseStructureConfigReader::add_string_handler(const std::string& name, const meas_fn_t<std::string>& handler)
    {
        m_all_handlers.insert(name);
        m_string_handlers.insert({ name, handler });
    }

    void PubGooseStructureConfigReader::add_bitstring_handler(const std::string& name, const meas_fn_t<goose_cpp::BitString>& handler)
    {
        m_all_handlers.insert(name);
        m_bitstring_handlers.insert({ name, handler });
    }

    void PubGooseStructureConfigReader::add_timestamp_handler(const std::string& name, const meas_fn_t<std::chrono::system_clock::time_point>& handler)
    {
        m_all_handlers.insert(name);
        m_timestamp_handlers.insert({ name, handler });
    }

} // namespace goose
} // namespace adapter