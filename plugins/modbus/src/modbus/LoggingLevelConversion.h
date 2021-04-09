// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_LOGGING_LEVEL_CONVERSION_H
#define OPENFMB_ADAPTER_LOGGING_LEVEL_CONVERSION_H

#include <modbus/logging/LoggingLevel.h>
#include "generated/LogLevel.h"

namespace adapter {
namespace modbus {

static ::modbus::LoggingLevel get_modbus_logging_level(const LogLevel::Value level)
    {
        switch (level) {
        case LogLevel::Value::Trace:
            return ::modbus::LoggingLevel::Trace;
        case LogLevel::Value::Debug:
            return ::modbus::LoggingLevel::Debug;
        case LogLevel::Value::Info:
            return ::modbus::LoggingLevel::Info;
        case LogLevel::Value::Warn:
            return ::modbus::LoggingLevel::Warn;
        case LogLevel::Value::Error:
            return ::modbus::LoggingLevel::Error;
        case LogLevel::Value::Critical:
            return ::modbus::LoggingLevel::Critical;
        default:
            return ::modbus::LoggingLevel::Info;
        }
    }

}
}

#endif
