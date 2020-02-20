#include "Lines.h"

namespace adapter {
    namespace schema {

        std::string lines(std::initializer_list<const char*> lines) {
            std::ostringstream oss;
            for(const auto line : lines) {
                oss << line << std::endl;
            }
            return oss.str();
        }

    }
}
