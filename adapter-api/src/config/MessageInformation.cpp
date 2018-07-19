
#include <proto-api/solarmodule/solarmodule.pb.h>
#include "adapter-api/config/MessageInformation.h"

#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>

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

    // ess reading

    template <>
    const commonmodule::MessageInfo& get_message_info(const essmodule::ESSReadingProfile& profile)
    {
        return profile.readingmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSReadingProfile& profile)
    {
        return profile.ess().conductingequipment();
    }

    // ess status

    template <>
    const commonmodule::MessageInfo& get_message_info(const essmodule::ESSStatusProfile& profile)
    {
        return profile.statusmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSStatusProfile& profile)
    {
        return profile.ess().conductingequipment();
    }

    // ess control

    template <>
    const commonmodule::MessageInfo& get_message_info(const essmodule::ESSControlProfile& profile)
    {
        return profile.controlmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSControlProfile& profile)
    {
        return profile.ess().conductingequipment();
    }

    // solar reading

    template <>
    const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarReadingProfile& profile)
    {
        return profile.readingmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarReadingProfile& profile)
    {
        return profile.solarinverter().conductingequipment();
    }

    // solar status

    template <>
    const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarStatusProfile& profile)
    {
        return profile.statusmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarStatusProfile& profile)
    {
        return profile.solarinverter().conductingequipment();
    }

    // solar control

    template <>
    const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarControlProfile& profile)
    {
        return profile.controlmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarControlProfile& profile)
    {
        return profile.solarinverter().conductingequipment();
    }

    // load reading

    template <>
    const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadReadingProfile& profile)
    {
        return profile.readingmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadReadingProfile& profile)
    {
        return profile.energyconsumer().conductingequipment();
    }

    // load status

    template <>
    const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadStatusProfile& profile)
    {
        return profile.statusmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadStatusProfile& profile)
    {
        return profile.energyconsumer().conductingequipment();
    }

    // load control

    template <>
    const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadControlProfile& profile)
    {
        return profile.controlmessageinfo().messageinfo();
    }

    template <>
    const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadControlProfile& profile)
    {
        return profile.energyconsumer().conductingequipment();
    }
}


