// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_ICCP_CONFIGSTRINGS_H

namespace adapter {
    namespace iccp {
        namespace keys {

            // top level
            constexpr const char* const clients = "clients";
            constexpr const char* const servers = "servers";
            constexpr const char* const thread_pool_size = "thread-pool-size";

            // TASE.2 Client
            constexpr const char* const auto_reconnect = "auto-reconnect";
            constexpr const char* const auto_reconnect_tries = "auto-reconnect-tries";
            constexpr const char* const auto_reconnect_wait_time_ms = "auto-reconnect-wait-time-ms";
            constexpr const char* const client_name = "name";

            // TASE.2 Server
            constexpr const char* const iccp_version = "iccp-version";
            constexpr const char* const server_name = "name";

            // Server/Client
            constexpr const char* const server_ip = "server-ip";
            constexpr const char* const server_port = "server-port";
            constexpr const char* const authentication_mechanism = "authentication-mechanism";

            // MMS
            constexpr const char* const mms_settings = "mms-settings";
            constexpr const char* const max_nesting_level = "max-nesting-level";
            constexpr const char* const max_pdu_size = "max-pdu-size";
            constexpr const char* const max_services_called = "max-services-called";
            constexpr const char* const max_services_calling = "max-services-calling";
            constexpr const char* const request_timeout = "request-timeout";

            // template
            constexpr const char* const name = "name";
            constexpr const char* const value = "value";
            constexpr const char* const control_value = "control-value";

            constexpr const char* const quality_templates = "quality-templates";
            constexpr const char* const quality_id = "template-id";
            constexpr const char* const quality_validity = "validity";
            constexpr const char* const quality_overflow = "overflow";
            constexpr const char* const quality_outofrange = "out_of_range";
            constexpr const char* const quality_badreference = "bad_reference";
            constexpr const char* const quality_oscillatory = "oscillatory";
            constexpr const char* const quality_failure = "failure";
            constexpr const char* const quality_olddata = "old_data";
            constexpr const char* const quality_inconsistent = "inconsistent";
            constexpr const char* const quality_inaccurate = "inaccurate";
            constexpr const char* const quality_source = "source";
            constexpr const char* const quality_test = "test";
            constexpr const char* const quality_operatorblocked = "operator_blocked";

            constexpr const char* const timequality_templates = "time-quality-templates";
            constexpr const char* const timequality_id = "template-id";
            constexpr const char* const timequality_name = "time-quality-name";
            constexpr const char* const timequality_clock_failure = "clock_failure";
            constexpr const char* const timequality_clock_not_synchronized = "clock_not_synchronized";
            constexpr const char* const timequality_leap_seconds_known = "leap_seconds_known";
            constexpr const char* const timequality_time_accuracy = "time_accuracy";

            // server/client specific
            constexpr const char* const client_specific = "client-specific";
            constexpr const char* const server_specific = "server-specific";
            constexpr const char* const ae_invoke_id = "ae-invoke-id";
            constexpr const char* const ae_qualifier = "ae-qualifier";
            constexpr const char* const ap_invoke_id = "ap-invoke-id";
            constexpr const char* const ap_title = "ap-title";
            constexpr const char* const presentation_selector = "presentation-selector";
            constexpr const char* const session_selector = "session-selector";
            constexpr const char* const transport_selector = "transport-selector";

            // password authentication
            constexpr const char* const password = "password";

            constexpr const char* const poll_period_second = "poll_period_second";

            constexpr const char* const dataset = "dataset";

            constexpr const char* const when_true_command = "when-true-command";
            constexpr const char* const when_false_command = "when-false-command";
        }
    }
}

#endif
