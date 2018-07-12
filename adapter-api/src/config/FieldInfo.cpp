
#include "FieldInfo.h"

#include "adapter-api/ConfigStrings.h"

#include <proto-api/commonmodule/commonmodule.pb.h>

#include <functional>
#include <map>
#include <vector>

namespace adapter {
using message_filter_t = std::function<bool(const std::string& name, IDescriptorPath& path)>;

bool FieldInfo::is_message_ignored(const std::string& field_name, google::protobuf::Descriptor const* descriptor, IDescriptorPath& path)
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

StringType FieldInfo::get_string_type(const std::string& field_name, IDescriptorPath& path)
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
}
