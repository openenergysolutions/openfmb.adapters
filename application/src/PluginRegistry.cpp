// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "PluginRegistry.h"

#include "log/PluginFactory.h"

#ifdef OPENFMB_USE_CAPTURE
#include "capture/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_REPLAY
#include "replay/PluginFactory.h"
#endif

#include <adapter-api/Exception.h>

#ifdef OPENFMB_USE_DNP3
#include "dnp3/master/PluginFactory.h"
#include "dnp3/outstation/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_MODBUS
#include "modbus/master/PluginFactory.h"
#include "modbus/outstation/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_GOOSE
#include "goose/PublishingPluginFactory.h"
#include "goose/SubscribingPluginFactory.h"
#endif

#ifdef OPENFMB_USE_ICCP
#include "iccp/client/PluginFactory.h"
#include "iccp/server/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_MQTT
#include "mqtt-paho/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_NATS
#include "nats/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_ZENOH
#include "zenoh/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_TWINOAKS_DDS
#include "twinoaks/DDSPluginFactory.h"
#endif

#ifdef OPENFMB_USE_RTI_DDS
#include "rti/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_TIMESCALEDB
#include "timescaledb/PluginFactory.h"
#endif

namespace adapter {

PluginRegistry::PluginRegistry()
{
    this->add<log::PluginFactory>();

#ifdef OPENFMB_USE_CAPTURE
    this->add<capture::PluginFactory>();
#endif

#ifdef OPENFMB_USE_REPLAY
    this->add<replay::PluginFactory>();
#endif

#ifdef OPENFMB_USE_DNP3
    this->add<dnp3::master::PluginFactory>();
    this->add<dnp3::outstation::PluginFactory>();
#endif

#ifdef OPENFMB_USE_MODBUS
    this->add<modbus::master::PluginFactory>();
    this->add<modbus::outstation::PluginFactory>();
#endif

#ifdef OPENFMB_USE_GOOSE
    this->add<goose::PublishingPluginFactory>();
    this->add<goose::SubscribingPluginFactory>();
#endif

#ifdef OPENFMB_USE_ICCP
    this->add<iccp::client::PluginFactory>();
    this->add<iccp::server::PluginFactory>();
#endif

#ifdef OPENFMB_USE_MQTT
    this->add<mqtt::PluginFactory>();
#endif

#ifdef OPENFMB_USE_NATS
    this->add<nats::PluginFactory>();
#endif

#ifdef OPENFMB_USE_ZENOH
    this->add<zenoh::PluginFactory>();
#endif


#ifdef OPENFMB_USE_TWINOAKS_DDS
    this->add<adapter::DDSPluginFactory>();
#endif

#ifdef OPENFMB_USE_RTI_DDS
    this->add<dds::rti::PluginFactory>();
#endif

#ifdef OPENFMB_USE_TIMESCALEDB
    this->add<timescaledb::PluginFactory>();
#endif
}

std::shared_ptr<const api::IPluginFactory> PluginRegistry::find(const std::string& name)
{
    const auto result = this->lookup.find(name);
    if (result == this->lookup.end()) {
        throw api::Exception("No plugin with name: ", name);
    }
    return result->second;
}

template <class T>
void PluginRegistry::add()
{
    auto factory = std::make_shared<T>();
    this->lookup[factory->name()] = factory;
}
}
