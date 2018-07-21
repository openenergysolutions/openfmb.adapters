
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

    EnumFieldType::Value get_enum_type(google::protobuf::EnumDescriptor const* descriptor)
    {
        const static std::map<google::protobuf::EnumDescriptor const*, EnumFieldType::Value> map = {

            // static enums
            { commonmodule::TimeAccuracyKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::PhaseCodeKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::SourceKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::ValidityKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::UnitSymbolKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::UnitMultiplierKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::CalcMethodKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::PFSignKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::BehaviourModeKind_descriptor(), EnumFieldType::Value::optional_const_enum },
            { commonmodule::HealthKind_descriptor(), EnumFieldType::Value::optional_const_enum },

            // enums mapped to the protocol
            { commonmodule::DynamicTestKind_descriptor(), EnumFieldType::Value::mapped_enum },
            { commonmodule::DbPosKind_descriptor(), EnumFieldType::Value::mapped_enum },
            { commonmodule::GridConnectModeKind_descriptor(), EnumFieldType::Value::mapped_enum },
            { commonmodule::StateKind_descriptor(), EnumFieldType::Value::mapped_enum },
            { essmodule::ESSFunctionKind_descriptor(), EnumFieldType::Value::mapped_enum },
            { essmodule::ESSFunctionParameterKind_descriptor(), EnumFieldType::Value::mapped_enum },
        };

        const auto elem = map.find(descriptor);
        if (elem == map.end()) {
            throw Exception("Unknown type for enum: ", descriptor->full_name());
        }
        return elem->second;
    }

    //using match_fun_t = std::function<bool(IDescriptorPath&)>;

    using match_fun_t = bool (*)(IDescriptorPath&);

    template <class E>
    using pair_t = std::pair<match_fun_t, E>;

    template <class E>
    constexpr pair_t<E> always(E value)
    {
        return pair_t<E>{
            [](IDescriptorPath&) -> bool { return true; },
            value
        };
    }

    template <class E>
    using field_map_t = std::map<std::string, std::vector<pair_t<E>>>;

    template <class E>
    E find_mapping_or_throw(const field_map_t<E>& map, const std::string& field_name, IDescriptorPath& path)
    {
        // look up the field name
        const auto elem = map.find(field_name);
        // not matching field name
        if (elem == map.end())
            throw Exception("Unknown field name: ", path.as_string(), ".", field_name);

        // find a matching filter
        const auto match = std::find_if(elem->second.begin(), elem->second.end(), [&](const pair_t<E>& pair) -> bool { return pair.first(path); });
        // no matching filter for field name
        if (match == elem->second.end())
            throw Exception("No mapping for field: ", path.as_string(), ".", field_name);

        return match->second;
    }

    StringFieldType::Value get_string_type(const std::string& field_name, IDescriptorPath& path)
    {
        // clang-format off
        const static field_map_t<StringFieldType::Value> map = {
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
                                return path.has_parents({{keys::mRID, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::optional_const_uuid
                        },
                        {
                            // all descriptions are optional constants
                            [](IDescriptorPath &path) -> bool {
                                return path.has_parents({{keys::description, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::optional_const_uuid
                        },
                        {
                            // all names are optional constants
                            [](IDescriptorPath &path) -> bool {
                                return path.has_parents({{keys::name, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::optional_const_uuid
                        },
                        {
                            // these labels are all optional descriptions
                            [](IDescriptorPath &path) -> bool {
                                std::initializer_list<const char *> names = {
                                        "setValExtension", "d", "xD", "xDU", "yD",  "yDU", "zD", "zDU"
                                };
                                for(const auto& name : names) {
                                    if(path.has_parents({{name, google::protobuf::StringValue::descriptor()}})) return true;
                                }
                                return false;
                            },
                            StringFieldType::Value::optional_string
                        },
                        {
                            // not sure what these are so
                            [](IDescriptorPath &path) -> bool {
                                std::initializer_list<const char *> names = {
                                        "operatingLimit"
                                };
                                for(const auto& name : names) {
                                    if(path.has_parents({{name, google::protobuf::StringValue::descriptor()}})) return true;
                                }
                                return false;
                            },
                            StringFieldType::Value::ignored_string
                        }
                    }
                }
        };
        // clang-format on

        return find_mapping_or_throw(map, field_name, path);
    }

    BoolFieldType::Value get_bool_type(const std::string& field_name, IDescriptorPath& path)
    {
        // clang-format off
        const static field_map_t<BoolFieldType::Value> map = {
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
                            BoolFieldType::Value::ignored_bool
                        },
                        {
                            [](IDescriptorPath& path) -> bool {
                                return path.has_parents({
                                                                { keys::connected, google::protobuf::BoolValue::descriptor()},
                                                                { keys::aCDCTerminal, commonmodule::ACDCTerminal::descriptor()},
                                                        });
                            },
                            BoolFieldType::Value::ignored_bool
                        },
                        {
                            [](IDescriptorPath& path) -> bool {
                                const std::initializer_list<const char*> names = {
                                        keys::interlockCheck,
                                        keys::synchroCheck
                                };
                                for(const auto& name : names) {
                                    if(path.has_parents({
                                                                { name, google::protobuf::BoolValue::descriptor()}
                                                        })) return true;
                                }
                                return false;
                            },
                            BoolFieldType::Value::mapped_bool
                        }
                    }
                },
                {
                    // any bool w/ this name is a control value
                    keys::ctlVal, { always(BoolFieldType::Value::mapped_bool) }
                },
                {
                    // any bool w/ this name is a status value
                    keys::stVal, { always(BoolFieldType::Value::mapped_bool) }
                }
        };
        // clang-format on

        return find_mapping_or_throw(map, field_name, path);
    }

    Int32FieldType::Value get_int32_type(const std::string& field_name, IDescriptorPath& path)
    {
        // clang-format off
        const static field_map_t<Int32FieldType::Value> map = {
            {
                keys::value,
                {
                    {
                        [](IDescriptorPath& path) -> bool {
                               return path.has_parents({ google::protobuf::Int32Value::descriptor(), commonmodule::ACDCTerminal::descriptor() });
                        },
                        Int32FieldType::Value::ignored_int32
                    },
                    {
                        // we're only using the float inside AnalogueValue for now
                        [](IDescriptorPath& path) -> bool {
                            return path.has_parents({ google::protobuf::Int32Value::descriptor(), commonmodule::AnalogueValue::descriptor() });
                        },
                        Int32FieldType::Value::ignored_int32
                    },
                    {
                        // not sure what this even is
                        [](IDescriptorPath& path) -> bool {
                            return path.has_parents({ essmodule::ENG_ESSFunctionParameter::descriptor() });
                        },
                        Int32FieldType::Value::ignored_int32
                    }
                }
            }
        };
        // clang-format on

        return find_mapping_or_throw(map, field_name, path);
    }
}
}
