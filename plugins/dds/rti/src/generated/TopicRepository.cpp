#include "generated/TopicRepository.h"

namespace adapter {

namespace dds {

namespace rti {

TopicRepository::TopicRepository(const ::dds::domain::DomainParticipant& participant)
:
generationstatusprofile{participant, "openfmb.generationmodule.GenerationStatusProfile"},
esscontrolprofile{participant, "openfmb.essmodule.ESSControlProfile"},
regulatoreventprofile{participant, "openfmb.regulatormodule.RegulatorEventProfile"},
solareventprofile{participant, "openfmb.solarmodule.SolarEventProfile"},
breakerreadingprofile{participant, "openfmb.breakermodule.BreakerReadingProfile"},
loadeventprofile{participant, "openfmb.loadmodule.LoadEventProfile"},
breakereventprofile{participant, "openfmb.breakermodule.BreakerEventProfile"},
recloserreadingprofile{participant, "openfmb.reclosermodule.RecloserReadingProfile"},
switchstatusprofile{participant, "openfmb.switchmodule.SwitchStatusProfile"},
regulatorstatusprofile{participant, "openfmb.regulatormodule.RegulatorStatusProfile"},
switchreadingprofile{participant, "openfmb.switchmodule.SwitchReadingProfile"},
recloserdiscretecontrolprofile{participant, "openfmb.reclosermodule.RecloserDiscreteControlProfile"},
solarreadingprofile{participant, "openfmb.solarmodule.SolarReadingProfile"},
breakerstatusprofile{participant, "openfmb.breakermodule.BreakerStatusProfile"},
loadreadingprofile{participant, "openfmb.loadmodule.LoadReadingProfile"},
generationreadingprofile{participant, "openfmb.generationmodule.GenerationReadingProfile"},
meterreadingprofile{participant, "openfmb.metermodule.MeterReadingProfile"},
reclosereventprofile{participant, "openfmb.reclosermodule.RecloserEventProfile"},
switchcontrolprofile{participant, "openfmb.switchmodule.SwitchControlProfile"},
switchdiscretecontrolprofile{participant, "openfmb.switchmodule.SwitchDiscreteControlProfile"},
generationcontrolprofile{participant, "openfmb.generationmodule.GenerationControlProfile"},
loadcontrolprofile{participant, "openfmb.loadmodule.LoadControlProfile"},
breakerdiscretecontrolprofile{participant, "openfmb.breakermodule.BreakerDiscreteControlProfile"},
regulatorreadingprofile{participant, "openfmb.regulatormodule.RegulatorReadingProfile"},
resourcereadingprofile{participant, "openfmb.resourcemodule.ResourceReadingProfile"},
generationeventprofile{participant, "openfmb.generationmodule.GenerationEventProfile"},
loadstatusprofile{participant, "openfmb.loadmodule.LoadStatusProfile"},
switcheventprofile{participant, "openfmb.switchmodule.SwitchEventProfile"},
essreadingprofile{participant, "openfmb.essmodule.ESSReadingProfile"},
solarcontrolprofile{participant, "openfmb.solarmodule.SolarControlProfile"},
essstatusprofile{participant, "openfmb.essmodule.ESSStatusProfile"},
esseventprofile{participant, "openfmb.essmodule.ESSEventProfile"},
resourcestatusprofile{participant, "openfmb.resourcemodule.ResourceStatusProfile"},
solarstatusprofile{participant, "openfmb.solarmodule.SolarStatusProfile"},
recloserstatusprofile{participant, "openfmb.reclosermodule.RecloserStatusProfile"},
regulatorcontrolprofile{participant, "openfmb.regulatormodule.RegulatorControlProfile"},
reclosercontrolprofile{participant, "openfmb.reclosermodule.RecloserControlProfile"}
{}

} // end namespace rti

} // end namespace dds

} // end namespace adapter
