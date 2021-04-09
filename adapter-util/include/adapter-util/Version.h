// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_VERSION_H
#define OPENFMB_ADAPTER_VERSION_H

namespace adapter {
namespace util {
    namespace version {
        const char* git_commit_hash();
        const char* git_commit_date();
    }
}
}

#endif //OPENFMB_ADAPTER_VERSION_H
