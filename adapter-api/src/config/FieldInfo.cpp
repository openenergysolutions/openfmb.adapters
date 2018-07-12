
#include "FieldInfo.h"

#include <proto-api/commonmodule/commonmodule.pb.h>

#include <map>

#include <functional>

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
}
