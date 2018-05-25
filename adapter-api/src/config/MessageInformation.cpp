
#include "adapter-api/config/MessageInformation.h"

#include "proto-api/resourcemodule/resourcemodule.pb.h"
#include "proto-api/switchmodule/switchmodule.pb.h"

namespace adapter
{

    // resource reading

    template <>
    const commonmodule::MessageInfo& get_message_info(const resourcemodule::ResourceReadingProfile& profile)
    {
        return profile.readingmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const resourcemodule::ResourceReadingProfile& profile)
    {
        return profile.meter().conductingequipment();
    }

    // switch reading

    template <>
    const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchReadingProfile& profile)
    {
        return profile.readingmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchReadingProfile& profile)
    {
        return profile.protectedswitch().conductingequipment();
    }

    // switch status

    template <>
    const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchStatusProfile& profile)
    {
        return profile.statusmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchStatusProfile& profile)
    {
        return profile.protectedswitch().conductingequipment();
    }

    // switch control

    template <>
    const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchControlProfile& profile)
    {
        return profile.controlmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchControlProfile& profile)
    {
        return profile.protectedswitch().conductingequipment();
    }
}


