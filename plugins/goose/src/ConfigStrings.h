// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_GOOSE_CONFIGSTRINGS_H

namespace adapter {
namespace goose {
    namespace keys {

        constexpr const char* const goCb = "goCb";
        constexpr const char* const networkAdapter = "networkAdapter";
        constexpr const char* const appId = "appId";
        constexpr const char* const goCbRef = "goCbRef";
        constexpr const char* const profiles = "profiles";
        constexpr const char* const mapping = "mapping";

        constexpr const char* const goose_struct = "gooseStructure";
        constexpr const char* const name = "name";

        constexpr const char* const src_mac = "src-mac";
        constexpr const char* const dest_mac = "dest-mac";
        constexpr const char* const datSet = "datSet";
        constexpr const char* const goID = "goID";
        constexpr const char* const confRev = "confRev";
        constexpr const char* const ttl = "ttl";

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
    } // namespace keys
} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_CONFIGSTRINGS_H
