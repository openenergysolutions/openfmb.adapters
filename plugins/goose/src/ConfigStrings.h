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
    } // namespace keys
} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_CONFIGSTRINGS_H
