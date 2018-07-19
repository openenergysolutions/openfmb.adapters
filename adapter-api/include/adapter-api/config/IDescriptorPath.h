
#ifndef OPENFMB_ADAPTER_IDESCRIPTORPATH_H
#define OPENFMB_ADAPTER_IDESCRIPTORPATH_H

#include <google/protobuf/descriptor.h>

using descriptor_ptr_t = google::protobuf::Descriptor const*;

namespace adapter {

class IDescriptorPath {

public:
    struct Field {

        Field(std::string name, const google::protobuf::Descriptor* descriptor)
            : name(std::move(name))
            , descriptor(descriptor)
        {
        }

        std::string name;
        descriptor_ptr_t descriptor;
    };

    virtual ~IDescriptorPath() = default;

    virtual bool has_parents(const std::initializer_list<descriptor_ptr_t>& parents) const = 0;

    virtual bool has_parents(const std::initializer_list<Field>& parents) const = 0;

    virtual std::string as_string() const = 0;
};
}

#endif //OPENFMB_ADAPTER_IDESCRIPTORPATH_H
