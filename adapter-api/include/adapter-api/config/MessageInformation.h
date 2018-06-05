
#ifndef OPENFMB_ADAPTER_MESSAGEINFORMATION_H
#define OPENFMB_ADAPTER_MESSAGEINFORMATION_H

#include "commonmodule/commonmodule.pb.h"

namespace adapter
{
    // --- specializations for these templates in cpp file ---

    template <class Profile>
    const commonmodule::MessageInfo& get_message_info(const Profile& profile);

    template <class Profile>
    const commonmodule::ConductingEquipment& get_conducting_equip(const Profile& profile);
}

#endif
