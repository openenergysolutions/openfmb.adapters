// 
//   _   _         ______    _ _ _   _             _ _ _
//  | \ | |       |  ____|  | (_) | (_)           | | | |
//  |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
//  | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
//  | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
//  |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                            __/ |
//                                           |___/
// 
//  This file is auto-generated. Do not edit manually
// 
#ifndef OPENFMB_RESOURCEREADINGPROFILEHELPER_H
#define OPENFMB_RESOURCEREADINGPROFILEHELPER_H
#include "ResourceReadingProfile.pb.h"
#include <map>
namespace openfmb {
class ResourceReadingProfileHelper {
    typedef AnalogValue* (analog_getter_t*)(ResourceReadingProfile&);
    typedef std::map<std::string, analog_getter_t> analog_map_t;
    typedef BCR* (bcr_getter_t*)(ResourceReadingProfile&);
    typedef std::map<std::string, bcr_getter_t> bcr_map_t;
    public:
    ResourceReadingProfileHelper();
    inline const analog_map_t& get_analogs() const { return this->analogs; }
    inline const bcr_map_t& get_bcrs() const { return this->bcrs; }
    private:
    analog_map_t analogs;
    bcr_map_t bcrs;
};
} // end namespace openfmb
#endif
