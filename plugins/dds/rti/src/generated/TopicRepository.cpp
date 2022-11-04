// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "generated/TopicRepository.h"

namespace adapter {

namespace dds {

namespace rti {

TopicRepository::TopicRepository(const ::dds::domain::DomainParticipant& participant)
:
breakerdiscretecontrolprofile{participant, "openfmb.breakermodule.BreakerDiscreteControlProfile"},
breakereventprofile{participant, "openfmb.breakermodule.BreakerEventProfile"},
breakerreadingprofile{participant, "openfmb.breakermodule.BreakerReadingProfile"},
breakerstatusprofile{participant, "openfmb.breakermodule.BreakerStatusProfile"},
capbankcontrolprofile{participant, "openfmb.capbankmodule.CapBankControlProfile"},
capbankdiscretecontrolprofile{participant, "openfmb.capbankmodule.CapBankDiscreteControlProfile"},
capbankeventprofile{participant, "openfmb.capbankmodule.CapBankEventProfile"},
capbankreadingprofile{participant, "openfmb.capbankmodule.CapBankReadingProfile"},
capbankstatusprofile{participant, "openfmb.capbankmodule.CapBankStatusProfile"},
circuitsegmentcontrolprofile{participant, "openfmb.circuitsegmentservicemodule.CircuitSegmentControlProfile"},
circuitsegmenteventprofile{participant, "openfmb.circuitsegmentservicemodule.CircuitSegmentEventProfile"},
circuitsegmentstatusprofile{participant, "openfmb.circuitsegmentservicemodule.CircuitSegmentStatusProfile"},
esscapabilityoverrideprofile{participant, "openfmb.essmodule.ESSCapabilityOverrideProfile"},
esscapabilityprofile{participant, "openfmb.essmodule.ESSCapabilityProfile"},
esscontrolprofile{participant, "openfmb.essmodule.ESSControlProfile"},
esseventprofile{participant, "openfmb.essmodule.ESSEventProfile"},
essreadingprofile{participant, "openfmb.essmodule.ESSReadingProfile"},
essstatusprofile{participant, "openfmb.essmodule.ESSStatusProfile"},
generationcapabilityoverrideprofile{participant, "openfmb.generationmodule.GenerationCapabilityOverrideProfile"},
generationcapabilityprofile{participant, "openfmb.generationmodule.GenerationCapabilityProfile"},
generationcontrolprofile{participant, "openfmb.generationmodule.GenerationControlProfile"},
generationdiscretecontrolprofile{participant, "openfmb.generationmodule.GenerationDiscreteControlProfile"},
generationeventprofile{participant, "openfmb.generationmodule.GenerationEventProfile"},
generationreadingprofile{participant, "openfmb.generationmodule.GenerationReadingProfile"},
generationstatusprofile{participant, "openfmb.generationmodule.GenerationStatusProfile"},
plannedinterconnectionscheduleprofile{participant, "openfmb.interconnectionmodule.PlannedInterconnectionScheduleProfile"},
requestedinterconnectionscheduleprofile{participant, "openfmb.interconnectionmodule.RequestedInterconnectionScheduleProfile"},
loadcontrolprofile{participant, "openfmb.loadmodule.LoadControlProfile"},
loadeventprofile{participant, "openfmb.loadmodule.LoadEventProfile"},
loadreadingprofile{participant, "openfmb.loadmodule.LoadReadingProfile"},
loadstatusprofile{participant, "openfmb.loadmodule.LoadStatusProfile"},
meterreadingprofile{participant, "openfmb.metermodule.MeterReadingProfile"},
recloserdiscretecontrolprofile{participant, "openfmb.reclosermodule.RecloserDiscreteControlProfile"},
reclosereventprofile{participant, "openfmb.reclosermodule.RecloserEventProfile"},
recloserreadingprofile{participant, "openfmb.reclosermodule.RecloserReadingProfile"},
recloserstatusprofile{participant, "openfmb.reclosermodule.RecloserStatusProfile"},
regulatordiscretecontrolprofile{participant, "openfmb.regulatormodule.RegulatorDiscreteControlProfile"},
regulatorcontrolprofile{participant, "openfmb.regulatormodule.RegulatorControlProfile"},
regulatoreventprofile{participant, "openfmb.regulatormodule.RegulatorEventProfile"},
regulatorreadingprofile{participant, "openfmb.regulatormodule.RegulatorReadingProfile"},
regulatorstatusprofile{participant, "openfmb.regulatormodule.RegulatorStatusProfile"},
reserveavailabilityprofile{participant, "openfmb.reservemodule.ReserveAvailabilityProfile"},
reserverequestprofile{participant, "openfmb.reservemodule.ReserveRequestProfile"},
resourcediscretecontrolprofile{participant, "openfmb.resourcemodule.ResourceDiscreteControlProfile"},
resourceeventprofile{participant, "openfmb.resourcemodule.ResourceEventProfile"},
resourcereadingprofile{participant, "openfmb.resourcemodule.ResourceReadingProfile"},
resourcestatusprofile{participant, "openfmb.resourcemodule.ResourceStatusProfile"},
solarcapabilityoverrideprofile{participant, "openfmb.solarmodule.SolarCapabilityOverrideProfile"},
solarcapabilityprofile{participant, "openfmb.solarmodule.SolarCapabilityProfile"},
solarcontrolprofile{participant, "openfmb.solarmodule.SolarControlProfile"},
solareventprofile{participant, "openfmb.solarmodule.SolarEventProfile"},
solarreadingprofile{participant, "openfmb.solarmodule.SolarReadingProfile"},
solarstatusprofile{participant, "openfmb.solarmodule.SolarStatusProfile"},
switchdiscretecontrolprofile{participant, "openfmb.switchmodule.SwitchDiscreteControlProfile"},
switcheventprofile{participant, "openfmb.switchmodule.SwitchEventProfile"},
switchreadingprofile{participant, "openfmb.switchmodule.SwitchReadingProfile"},
switchstatusprofile{participant, "openfmb.switchmodule.SwitchStatusProfile"}
{}

} // end namespace rti

} // end namespace dds

} // end namespace adapter
