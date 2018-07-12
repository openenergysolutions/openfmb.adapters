
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
            { commonmodule::Timestamp::descriptor(), always }
        };

        const auto elem = ignore_when.find(descriptor);

        // no entry, never ignored
        if (elem == ignore_when.end())
            return false;

        //  invoke the filter
        return elem->second(field_name, path);
    }

    StringType get_string_type(const std::string& field_name, IDescriptorPath& path)
    {
        using match_fun_t = std::function<bool(IDescriptorPath&)>;
        using pair_t = std::pair<match_fun_t, StringType>;
        using match_map_t = std::map<std::string, std::vector<pair_t>>;

        const static match_map_t map = {
            { keys::mRID,
                { { [](IDescriptorPath& path) -> bool {
                       return path.has_parents({ commonmodule::ConductingEquipment::descriptor() });
                   },
                    StringType::required_static_mrid } } },
            { keys::value,
                { { [](IDescriptorPath& path) -> bool {
                       return path.has_parents(
                           { { keys::mRID, google::protobuf::StringValue::descriptor() },
                               { keys::identified_object, commonmodule::IdentifiedObject::descriptor() },
                               { keys::messageInfo, commonmodule::MessageInfo::descriptor() } });
                   },
                      StringType::message_mrid },
                    { [](IDescriptorPath& path) -> bool {
                         return path.has_parents(
                             { { keys::mRID, google::protobuf::StringValue::descriptor() } });
                     },
                        StringType::optional_static_mrid } } }
        };

        // look up the field name
        const auto elem = map.find(field_name);
        // not matching field name
        if (elem == map.end())
            return StringType::optional;

        // find a matching filter
        const auto match = std::find_if(elem->second.begin(), elem->second.end(), [&](const pair_t& pair) -> bool { return pair.first(path); });
        // no matching filter for field name
        if (match == elem->second.end())
            return StringType::optional;

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
            { commonmodule::DynamicTestKind_descriptor(), EnumType::mapped_enum },
            { commonmodule::DbPosKind_descriptor(), EnumType::mapped_enum },
            { commonmodule::GridConnectModeKind_descriptor(), EnumType::mapped_enum },
            { commonmodule::StateKind_descriptor(), EnumType::mapped_enum },
            { essmodule::ESSFunctionKind_descriptor(), EnumType::mapped_enum },
            { essmodule::ESSFunctionParameterKind_descriptor(), EnumType::mapped_enum },
        };

        const auto elem = map.find(descriptor);
        if (elem == map.end()) {
            throw Exception("Unknown type for enum: ", descriptor->full_name());
        }
        return elem->second;
    }
}
}
