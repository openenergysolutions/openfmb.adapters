
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

    EnumType get_enum_type(google::protobuf::EnumDescriptor const* descriptor)
    {
        const static std::map<google::protobuf::EnumDescriptor const*, EnumType> map = {

            // static enums
            { commonmodule::TimeAccuracyKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::PhaseCodeKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::SourceKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::ValidityKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::UnitSymbolKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::UnitMultiplierKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::CalcMethodKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::PFSignKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::BehaviourModeKind_descriptor(), EnumType::optional_static_enum },
            { commonmodule::HealthKind_descriptor(), EnumType::optional_static_enum },

            // enums mapped to the protocol
            { commonmodule::DynamicTestKind_descriptor(), EnumType::mapped },
            { commonmodule::DbPosKind_descriptor(), EnumType::mapped },
            { commonmodule::GridConnectModeKind_descriptor(), EnumType::mapped },
            { commonmodule::StateKind_descriptor(), EnumType::mapped },
            { essmodule::ESSFunctionKind_descriptor(), EnumType::mapped },
            { essmodule::ESSFunctionParameterKind_descriptor(), EnumType::mapped },
        };

        const auto elem = map.find(descriptor);
        if (elem == map.end()) {
            throw Exception("Unknown type for enum: ", descriptor->full_name());
        }
        return elem->second;
    }

    BoolType get_bool_type(const std::string& field_name, IDescriptorPath& path)
    {
        using pair_t = std::pair<match_fun_t, BoolType>;
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
                                    BoolType::mod_blk
                            },
                            {
                                    [](IDescriptorPath& path) -> bool {
                                        return path.has_parents({
                                                                        { keys::connected, google::protobuf::BoolValue::descriptor()},
                                                                        { keys::aCDCTerminal, commonmodule::ACDCTerminal::descriptor()},
                                                                });
                                    },
                                    BoolType::ignored
                            }
                    }
                }
        };
        // clang-format on

        // default to mapped value
        const auto elem = map.find(field_name);
        if (elem == map.end())
            return BoolType::mapped;

        // find a matching filter
        const auto match = std::find_if(elem->second.begin(), elem->second.end(), [&](const pair_t& pair) -> bool { return pair.first(path); });
        // no matching filter for field name
        if (match == elem->second.end())
            return BoolType::mapped;

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
