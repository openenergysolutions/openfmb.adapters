
#ifndef OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H
#define OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H

#include <cstdint>

namespace adapter {
namespace dnp3 {

    class ICommandPrioritySource {
    public:
        virtual ~ICommandPrioritySource() = default;

        virtual int get_binary_output_priority(uint16_t index) const = 0;
        virtual int get_analog_output_priority(uint16_t index) const = 0;
    };
}
}

#endif // OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H
