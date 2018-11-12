
#include "adapter-api/config/FieldInfo.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

#include <proto-api/commonmodule/commonmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>
#include <proto-api/solarmodule/solarmodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

#include <functional>
#include <map>
#include <vector>
#include <algorithm>

namespace adapter {
namespace fields {

    namespace names {
        constexpr const char* const t = "t";
        constexpr const char* const identified_object = "identifiedObject";
        constexpr const char* const messageInfo = "messageInfo";
        constexpr const char* const description = "description";
        constexpr const char* const mod_blk = "modBlk";
        constexpr const char* const control_value = "controlValue";
        constexpr const char* const connected = "connected";
        constexpr const char* const aCDCTerminal = "aCDCTerminal";
        constexpr const char* const interlockCheck = "interlockCheck";
        constexpr const char* const synchroCheck = "synchroCheck";
        constexpr const char* const stVal = "stVal";
        constexpr const char* const ctlVal = "ctlVal";
        constexpr const char* const actVal = "actVal";
        constexpr const char* const messageTimeStamp = "messageTimeStamp";
        constexpr const char* const mRID = "mRID";
        constexpr const char* const setValExtension = "setValExtension";
        constexpr const char* const d = "d";
        constexpr const char* const operatingLimit = "operatingLimit";
    }

    EnumFieldType::Value get_enum_type(google::protobuf::EnumDescriptor const* descriptor)
    {
        const static std::map<google::protobuf::EnumDescriptor const*, EnumFieldType::Value> map = {

            // static enums
            { commonmodule::TimeAccuracyKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::PhaseCodeKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::SourceKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::ValidityKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::UnitSymbolKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::UnitMultiplierKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::CalcMethodKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::PFSignKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::BehaviourModeKind_descriptor(), EnumFieldType::Value::constant },
            { commonmodule::HealthKind_descriptor(), EnumFieldType::Value::constant },

            // enums mapped to the protocol
            { commonmodule::DynamicTestKind_descriptor(), EnumFieldType::Value::mapped },
            { commonmodule::DbPosKind_descriptor(), EnumFieldType::Value::mapped },
            { commonmodule::GridConnectModeKind_descriptor(), EnumFieldType::Value::mapped },
            { commonmodule::StateKind_descriptor(), EnumFieldType::Value::mapped }
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
                    names::mRID,
                    {
                        {
                            [](IDescriptorPath &path) -> bool {
                                return path.has_exact_parents({commonmodule::ConductingEquipment::descriptor()});
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
                                return path.has_exact_parents(
                                        {
                                                {names::mRID,              google::protobuf::StringValue::descriptor()},
                                                {names::identified_object, commonmodule::IdentifiedObject::descriptor()},
                                                {names::messageInfo,       commonmodule::MessageInfo::descriptor()}
                                        });
                            },
                            StringFieldType::Value::generated_uuid
                        },
                        {
                            [](IDescriptorPath &path) -> bool {
                                return path.has_exact_parents({{names::mRID, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::constant_uuid
                        },
                        {
                            // all descriptions are optional constants
                            [](IDescriptorPath &path) -> bool {
                                return path.has_exact_parents({{names::description, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::constant
                        },
                        {
                            // all names are optional constants
                            [](IDescriptorPath &path) -> bool {
                                return path.has_exact_parents({{keys::name, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::constant
                        },
                        {
                            [](IDescriptorPath &path) -> bool {
                                // switchStatus.switchStatusXSWI.logicalNodeForEventAndStatus.EEHealth.d.value
                                return path.has_exact_parents({{names::d, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::ignored
                        },
                        {
                            [](IDescriptorPath &path) -> bool {
                                // essStatus.essStatusZBAT.GriMod.setValExtension.value
                                return path.has_exact_parents({{names::setValExtension, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::ignored
                        },
                        {
                            // not sure what these are so
                            [](IDescriptorPath &path) -> bool {
                                // energyConsumer.operatingLimit.value
                                return path.has_exact_parents({{names::operatingLimit, google::protobuf::StringValue::descriptor()}});
                            },
                            StringFieldType::Value::ignored
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
                                return path.has_exact_parents({
                                                                { names::mod_blk, google::protobuf::BoolValue::descriptor()},
                                                                { names::control_value, commonmodule::ControlValue::descriptor()},
                                                        });
                            },
                            BoolFieldType::Value::ignored
                        },
                        {
                            [](IDescriptorPath& path) -> bool {
                                return path.has_exact_parents({
                                                                { names::connected, google::protobuf::BoolValue::descriptor()},
                                                                { names::aCDCTerminal, commonmodule::ACDCTerminal::descriptor()},
                                                        });
                            },
                            BoolFieldType::Value::ignored
                        },
                        {
                            [](IDescriptorPath& path) -> bool {
                                const std::initializer_list<const char*> names = {
                                        names::interlockCheck,
                                        names::synchroCheck,
                                };
                                for(const auto& name : names) {
                                    if(path.has_exact_parents({
                                                                { name, google::protobuf::BoolValue::descriptor()}
                                                        })) return true;
                                }
                                return false;
                            },
                            BoolFieldType::Value::mapped
                        },
                        {
                                [](IDescriptorPath& path) -> bool {
                                    return path.has_parent_somewhere(essmodule::ESSFunction::descriptor());
                                },
                                BoolFieldType::Value::mapped
                        }
                    }
                },
                {
                    // any bool w/ this name is a control value
                    names::ctlVal, { always(BoolFieldType::Value::mapped) }
                },
                {
                    // any bool w/ this name is a status value
                    names::stVal, { always(BoolFieldType::Value::mapped) }
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
                               return path.has_exact_parents({ google::protobuf::Int32Value::descriptor(), commonmodule::ACDCTerminal::descriptor() });
                        },
                        Int32FieldType::Value::ignored
                    },
                    {
                        // we're only using the float inside AnalogueValue for now
                        [](IDescriptorPath& path) -> bool {
                            return path.has_exact_parents({ google::protobuf::Int32Value::descriptor(), commonmodule::AnalogueValue::descriptor() });
                        },
                        Int32FieldType::Value::ignored
                    }
                }
            }
        };
        // clang-format on

        return find_mapping_or_throw(map, field_name, path);
    }

    Int64FieldType::Value get_int64_type(const std::string& field_name, IDescriptorPath& path)
    {
        // clang-format off
        const static field_map_t<Int64FieldType::Value> map = {
                {
                        names::actVal,
                        {
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({commonmodule::BCR::descriptor() });
                                        },
                                        Int64FieldType::Value::mapped
                                }
                        }
                }
        };
        // clang-format on

        return find_mapping_or_throw(map, field_name, path);
    }

    FloatFieldType::Value get_float_type(const std::string& field_name, IDescriptorPath& path)
    {
        // clang-format off
        const static field_map_t<FloatFieldType::Value> map = {
                {
                        keys::value,
                        {
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            // this is the optional zVal inside of a schedule point
                                            return path.has_exact_parents({ google::protobuf::FloatValue::descriptor(), commonmodule::SchedulePoint::descriptor() });
                                        },
                                        FloatFieldType::Value::ignored
                                },
                                {
                                        // all other float values default to mapped
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ google::protobuf::FloatValue::descriptor() });
                                        },
                                        FloatFieldType::Value::mapped
                                },
                        }

                }
        };
        // clang-format on

        return find_mapping_or_throw(map, field_name, path);
    }

    TimestampFieldType::Value get_timestamp_type(const std::string& field_name, IDescriptorPath& path)
    {
        // clang-format off
        const static field_map_t<TimestampFieldType::Value> map = {
                {
                        names::messageTimeStamp,
                        {
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            // this is the optional zVal inside of a schedule point
                                            return path.has_exact_parents({ commonmodule::MessageInfo::descriptor() });
                                        },
                                        TimestampFieldType::Value::message
                                }
                        }

                },
                {
                        names::t,
                        {
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ commonmodule::BCR::descriptor() });
                                        },
                                        TimestampFieldType::Value::ignored
                                },
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ commonmodule::CMV::descriptor() });
                                        },
                                        TimestampFieldType::Value::ignored
                                },
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ commonmodule::MV::descriptor() });
                                        },
                                        TimestampFieldType::Value::ignored
                                },
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ commonmodule::ENS_BehaviourModeKind::descriptor() });
                                        },
                                        TimestampFieldType::Value::ignored
                                },
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ commonmodule::ENS_DynamicTestKind::descriptor() });
                                        },
                                        TimestampFieldType::Value::ignored
                                },
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ commonmodule::StatusDPS::descriptor() });
                                        },
                                        TimestampFieldType::Value::ignored
                                },
                                {
                                        [](IDescriptorPath& path) -> bool {
                                            return path.has_exact_parents({ commonmodule::StatusSPS::descriptor() });
                                        },
                                        TimestampFieldType::Value::ignored
                                }
                        }

                }
        };
        // clang-format on

        return find_mapping_or_throw(map, field_name, path);
    }
}
}
