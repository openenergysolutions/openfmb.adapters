
#include "adapter-api/config/FieldInfo.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

#include <proto-api/commonmodule/commonmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>

#include <functional>
#include <map>
#include <vector>

namespace adapter {
namespace fields {

    using match_fun_t = std::function<bool(IDescriptorPath&)>;
    using message_filter_t = std::function<bool(const std::string& name, IDescriptorPath& path)>;

    bool is_message_ignored(const std::string& field_name, google::protobuf::Descriptor const* descriptor, IDescriptorPath& path)
    {
        const auto static always = [](const std::string& name, IDescriptorPath& path) -> bool { return true; };

        const static std::map<google::protobuf::Descriptor const*, message_filter_t> ignore_when = {
            { commonmodule::Quality::descriptor(), always },
            { commonmodule::Timestamp::descriptor(), always },
            { commonmodule::ControlTimestamp::descriptor(), always }
        };

        const auto elem = ignore_when.find(descriptor);

        // no entry, never ignored
        if (elem == ignore_when.end())
            return false;

        //  invoke the filter
        return elem->second(field_name, path);
    }

    StringFieldType::Value get_string_type(const std::string& field_name, IDescriptorPath& path)
    {
        using pair_t = std::pair<match_fun_t, StringFieldType::Value>;
        using match_map_t = std::map<std::string, std::vector<pair_t>>;

        // clang-format off
        const static match_map_t map = {
                {
                    keys::mRID,
                    {
                        {
                            [](IDescriptorPath &path) -> bool {
                                return path.has_parents({commonmodule::ConductingEquipment::descriptor()});
                            },
                            StringFieldType::Value::primary_uuid
                        }
                    }
                },
                {
                    keys::value,
                    {
                        {
                            [](IDescriptorPath &path) -> bool {
                                return path.has_parents(
                                        {
                                                {keys::mRID,              google::protobuf::StringValue::descriptor()},
                                                {keys::identified_object, commonmodule::IdentifiedObject::descriptor()},
                                                {keys::messageInfo,       commonmodule::MessageInfo::descriptor()}
                                        });
                            },
                            StringFieldType::Value::generated_uuid
                        },
                        {
                            [](IDescriptorPath &path) -> bool {
                                return path.has_parents(
                                        {{keys::mRID, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::optional_constant_uuid
                        }
                    }
                }
        };
        // clang-format on

        // look up the field name
        const auto elem = map.find(field_name);
        // not matching field name
        if (elem == map.end())
            return StringFieldType::Value::optional_string;

        // find a matching filter
        const auto match = std::find_if(elem->second.begin(), elem->second.end(), [&](const pair_t& pair) -> bool { return pair.first(path); });
        // no matching filter for field name
        if (match == elem->second.end())
            return StringFieldType::Value::optional_string;

        return match->second;
    }

    EnumFieldType::Value get_enum_type(google::protobuf::EnumDescriptor const* descriptor)
    {
        const static std::map<google::protobuf::EnumDescriptor const*, EnumFieldType::Value> map = {

            // static enums
            { commonmodule::TimeAccuracyKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::PhaseCodeKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::SourceKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::ValidityKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::UnitSymbolKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::UnitMultiplierKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::CalcMethodKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::PFSignKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::BehaviourModeKind_descriptor(), EnumFieldType::Value::optional_constant },
            { commonmodule::HealthKind_descriptor(), EnumFieldType::Value::optional_constant },

            // enums mapped to the protocol
            { commonmodule::DynamicTestKind_descriptor(), EnumFieldType::Value::mapped },
            { commonmodule::DbPosKind_descriptor(), EnumFieldType::Value::mapped },
            { commonmodule::GridConnectModeKind_descriptor(), EnumFieldType::Value::mapped },
            { commonmodule::StateKind_descriptor(), EnumFieldType::Value::mapped },
            { essmodule::ESSFunctionKind_descriptor(), EnumFieldType::Value::mapped },
            { essmodule::ESSFunctionParameterKind_descriptor(), EnumFieldType::Value::mapped },
        };

        const auto elem = map.find(descriptor);
        if (elem == map.end()) {
            throw Exception("Unknown type for enum: ", descriptor->full_name());
        }
        return elem->second;
    }

    FieldType::Value get_bool_type(const std::string& field_name, IDescriptorPath& path)
    {
        using pair_t = std::pair<match_fun_t, FieldType::Value>;
        using match_map_t = std::map<std::string, std::vector<pair_t>>;

        // clang-format off
        const static match_map_t map = {
                {
                    keys::value,
                    {
                            {
                                    [](IDescriptorPath& path) -> bool {
                                        return path.has_parents({
                                                                        { keys::mod_blk, google::protobuf::BoolValue::descriptor()},
                                                                        { keys::control_value, commonmodule::ControlValue::descriptor()},
                                                                });
                                    },
                                    FieldType::Value::ignored
                            },
                            {
                                    [](IDescriptorPath& path) -> bool {
                                        return path.has_parents({
                                                                        { keys::connected, google::protobuf::BoolValue::descriptor()},
                                                                        { keys::aCDCTerminal, commonmodule::ACDCTerminal::descriptor()},
                                                                });
                                    },
                                    FieldType::Value::ignored
                            }
                    }
                }
        };
        // clang-format on

        // default to mapped value
        const auto elem = map.find(field_name);
        if (elem == map.end())
            return FieldType::Value::mapped;

        // find a matching filter
        const auto match = std::find_if(elem->second.begin(), elem->second.end(), [&](const pair_t& pair) -> bool { return pair.first(path); });
        // no matching filter for field name
        if (match == elem->second.end())
            return FieldType::Value::mapped;

        return match->second;
    }

    FieldType::Value get_int32_type(const std::string& field_name, IDescriptorPath& path)
    {
        using pair_t = std::pair<match_fun_t, FieldType::Value>;
        using match_map_t = std::map<std::string, std::vector<pair_t>>;

        // clang-format off
        const static match_map_t map = {
            {
                keys::value,
                {
                    {
                        [](IDescriptorPath& path) -> bool {
                               return path.has_parents({ google::protobuf::Int32Value::descriptor(), commonmodule::ACDCTerminal::descriptor() });
                        },
                        FieldType::Value::ignored
                    }
                }
            }
        };
        // clang-format on

        // default to mapped value
        const auto elem = map.find(field_name);
        if (elem == map.end())
            return FieldType::Value::mapped;

        // find a matching filter
        const auto match = std::find_if(elem->second.begin(), elem->second.end(), [&](const pair_t& pair) -> bool { return pair.first(path); });
        // no matching filter for field name
        if (match == elem->second.end())
            return FieldType::Value::mapped;

        return match->second;
    }
}
}
