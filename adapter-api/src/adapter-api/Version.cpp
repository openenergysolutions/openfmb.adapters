
#include "Version.h"

#define STR(str) #str
#define STRING(str) STR(str)

namespace adapter
{
    namespace version
    {
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