
#ifndef OPENFMB_ADAPTER_REPETITIONTYPE_H
#define OPENFMB_ADAPTER_REPETITIONTYPE_H

namespace adapter {

enum class RepetitionType {
    /// a time-based schedule used in control profiles
    schedule,
    /// list of function parameters used in control profiles
    function_paramter,
    /// a repetition of readings (e.g. repeated SwitchReading)
    reading
};
}

#endif //OPENFMB_ADAPTER_REPETITIONTYPE_H
