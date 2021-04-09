// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_IDESCRIPTORPATH_H
#define OPENFMB_ADAPTER_IDESCRIPTORPATH_H

#include <google/protobuf/descriptor.h>

namespace adapter {
namespace util {

    using descriptor_ptr_t = google::protobuf::Descriptor const*;

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

        /**
     * Verify that the bath (from bottom to top) contains this exact list of descriptors
     */
        virtual bool has_exact_parents(const std::initializer_list<descriptor_ptr_t>& parents) const = 0;

        /**
     * Verify that the bath (from bottom to top) contains this exact list of descriptors + field names
     */
        virtual bool has_exact_parents(const std::initializer_list<Field>& parents) const = 0;

        /**
     * Verify that the path contains this parent *somewhere* but not necessarily immediate
     */
        virtual bool has_parent_somewhere(descriptor_ptr_t descriptor) const = 0;

        virtual std::string as_string() const = 0;
    };
}
}

#endif //OPENFMB_ADAPTER_IDESCRIPTORPATH_H
