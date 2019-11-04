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
esscontrolprofile{participant, "openfmb.essmodule.ESSControlProfile"},
esseventprofile{participant, "openfmb.essmodule.ESSEventProfile"},
essreadingprofile{participant, "openfmb.essmodule.ESSReadingProfile"},
essstatusprofile{participant, "openfmb.essmodule.ESSStatusProfile"},
generationcontrolprofile{participant, "openfmb.generationmodule.GenerationControlProfile"},
generationeventprofile{participant, "openfmb.generationmodule.GenerationEventProfile"},
generationreadingprofile{participant, "openfmb.generationmodule.GenerationReadingProfile"},
generationstatusprofile{participant, "openfmb.generationmodule.GenerationStatusProfile"},
loadcontrolprofile{participant, "openfmb.loadmodule.LoadControlProfile"},
loadeventprofile{participant, "openfmb.loadmodule.LoadEventProfile"},
loadreadingprofile{participant, "openfmb.loadmodule.LoadReadingProfile"},
loadstatusprofile{participant, "openfmb.loadmodule.LoadStatusProfile"},
meterreadingprofile{participant, "openfmb.metermodule.MeterReadingProfile"},
reclosercontrolprofile{participant, "openfmb.reclosermodule.RecloserControlProfile"},
recloserdiscretecontrolprofile{participant, "openfmb.reclosermodule.RecloserDiscreteControlProfile"},
reclosereventprofile{participant, "openfmb.reclosermodule.RecloserEventProfile"},
recloserreadingprofile{participant, "openfmb.reclosermodule.RecloserReadingProfile"},
recloserstatusprofile{participant, "openfmb.reclosermodule.RecloserStatusProfile"},
regulatorcontrolprofile{participant, "openfmb.regulatormodule.RegulatorControlProfile"},
regulatoreventprofile{participant, "openfmb.regulatormodule.RegulatorEventProfile"},
regulatorreadingprofile{participant, "openfmb.regulatormodule.RegulatorReadingProfile"},
regulatorstatusprofile{participant, "openfmb.regulatormodule.RegulatorStatusProfile"},
resourcereadingprofile{participant, "openfmb.resourcemodule.ResourceReadingProfile"},
resourcestatusprofile{participant, "openfmb.resourcemodule.ResourceStatusProfile"},
solarcontrolprofile{participant, "openfmb.solarmodule.SolarControlProfile"},
solareventprofile{participant, "openfmb.solarmodule.SolarEventProfile"},
solarreadingprofile{participant, "openfmb.solarmodule.SolarReadingProfile"},
solarstatusprofile{participant, "openfmb.solarmodule.SolarStatusProfile"},
shuntcontrolprofile{participant, "openfmb.shuntmodule.ShuntControlProfile"},
shuntdiscretecontrolprofile{participant, "openfmb.shuntmodule.ShuntDiscreteControlProfile"},
shunteventprofile{participant, "openfmb.shuntmodule.ShuntEventProfile"},
shuntstatusprofile{participant, "openfmb.shuntmodule.ShuntStatusProfile"},
shuntreadingprofile{participant, "openfmb.shuntmodule.ShuntReadingProfile"},
switchcontrolprofile{participant, "openfmb.switchmodule.SwitchControlProfile"},
switchdiscretecontrolprofile{participant, "openfmb.switchmodule.SwitchDiscreteControlProfile"},
switcheventprofile{participant, "openfmb.switchmodule.SwitchEventProfile"},
switchreadingprofile{participant, "openfmb.switchmodule.SwitchReadingProfile"},
switchstatusprofile{participant, "openfmb.switchmodule.SwitchStatusProfile"}
{}

} // end namespace rti

} // end namespace dds

} // end namespace adapter
