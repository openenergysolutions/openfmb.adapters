
#include "adapter-api/util/EnumUtil.h"

#include "adapter-api/util/Exception.h"

namespace adapter {
namespace enumeration {

    int try_get_value(const std::string& name, const ::google::protobuf::EnumDescriptor& desc)
    {
        const auto value = desc.FindValueByName(name);
        if (value) {
            return value->number();
        } else {
            throw Exception("Unknown enum name: ", name, " for enum: ", desc.name());
        }
    }
}
}
