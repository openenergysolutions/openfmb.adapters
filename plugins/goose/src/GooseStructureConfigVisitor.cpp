#include "GooseStructureConfigVisitor.h"

#include "adapter-api/Exception.h"
#include "generated/Type.h"

namespace adapter {
namespace goose {

    void GooseStructureConfigVisitor::visit(const YAML::Node& node)
    {
        const auto mark = node.Mark();
        if (!node.IsSequence()) {
            throw api::Exception("Expected sequence at line: ", mark.line + 1);
        }

        for (auto it = node.begin(); it != node.end(); ++it) {
            if (!it->IsMap()) {
                throw api::Exception("Expected map at line: ", mark.line + 1);
            }

            auto map = *it;
            auto type_str = map.begin()->first.as<std::string>();
            auto type = Type::from_string(type_str);
            if (type == Type::Value::ignored) {
                on_ignore();
            } else {
                if (map.size() != 1) {
                    throw api::Exception("Expected exactly one element in map at line: ", mark.line + 1);
                }
                auto value = map.begin()->second;

                switch (type) {
                case Type::Value::structure:
                    on_structure(value);
                    break;
                case Type::Value::array:
                    on_array(value);
                    break;
                case Type::Value::boolean:
                    on_bool(value);
                    break;
                case Type::Value::integer:
                    on_integer(value);
                    break;
                case Type::Value::floating:
                    on_floating(value);
                    break;
                case Type::Value::visible_string:
                    on_visible_string(value);
                    break;
                case Type::Value::mms_string:
                    on_mms_string(value);
                    break;
                case Type::Value::bitstring:
                    on_bitstring(value);
                    break;
                case Type::Value::generalized_time:
                    on_generalized_time(value);
                    break;
                case Type::Value::binary_time:
                    on_binary_time(value);
                    break;
                case Type::Value::utc_time:
                    on_utc_time(value);
                    break;
                default:
                    throw api::Exception{ "Unsupported GOOSE type at line ", mark.line + 1 };
                }
            }
        }
    }

} // namespace goose
} // namespace adapter
