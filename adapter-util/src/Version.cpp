// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "adapter-util/Version.h"

#define STR(str) #str
#define STRING(str) STR(str)

namespace adapter {
namespace util {
    namespace version {
        const char* git_commit_hash()
        {
            return STRING(MACRO_GIT_COMMIT_HASH);
        }

        const char* git_commit_date()
        {
            return STRING(MACRO_GIT_COMMIT_DATE);
        }
    }
}
}