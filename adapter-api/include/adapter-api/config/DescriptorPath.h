
#ifndef OPENFMB_ADAPTER_DESCRIPTORPATH_H
#define OPENFMB_ADAPTER_DESCRIPTORPATH_H

#include "IDescriptorPath.h"

namespace adapter {

class DescriptorPath final : public IDescriptorPath {

    using field_vec_t = std::vector<Field>;

    field_vec_t fields;

public:
    /// ---- implement IDescriptorPath ----

    bool has_exact_parents(const std::initializer_list<descriptor_ptr_t>& parents) const final;

    bool has_exact_parents(const std::initializer_list<Field>& field) const final;

    bool has_parent_somewhere(descriptor_ptr_t descriptor) const final;

    std::string as_string() const final;

    /// ---- helpers ----

    void push(const std::string& field_name, google::protobuf::Descriptor const* descriptor);

    void pop();
};
}

#endif //OPENFMB_ADAPTER_DESCRIPTORPATH_H
