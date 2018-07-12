
#ifndef OPENFMB_ADAPTER_FIELDINFO_H
#define OPENFMB_ADAPTER_FIELDINFO_H

#include "adapter-api/config/IDescriptorPath.h"

namespace adapter {
class FieldInfo {
public:
    static bool is_message_ignored(const std::string& field_name, google::protobuf::Descriptor const* descriptor, IDescriptorPath& path);
};
}

#endif //OPENFMB_ADAPTER_FIELDINFO_H
