-- SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
--
-- SPDX-License-Identifier: Apache-2.0

<<<<<<< Updated upstream
-- Create database
CREATE DATABASE openfmb;
\c openfmb
CREATE EXTENSION IF NOT EXISTS timescaledb CASCADE;
=======
CREATE TABLE data
(
    message_uuid uuid NOT NULL,
    "timestamp" timestamp with time zone NOT NULL,
    device_uuid uuid NOT NULL,
    tagname character varying(1024) NOT NULL,
    a_net_mag_0 numeric,
    a_neut_mag_0 numeric,
    a_phsa_mag_0 numeric,
    a_phsb_mag_0 numeric,
    a_phsc_mag_0 numeric,
    hz_mag_0 numeric,
    pf_neut_mag_0 numeric,
    pf_net_mag_0 numeric,
    pf_phsa_mag_0 numeric,
    pf_phsb_mag_0 numeric,
    pf_phsc_mag_0 numeric,
    phv_neut_mag_0 numeric,
    phv_neut_ang_0 numeric,
    phv_net_mag_0 numeric,
    phv_net_ang_0 numeric,
    phv_phsa_mag_0 numeric,
    phv_phsa_ang_0 numeric,
    phv_phsb_mag_0 numeric,
    phv_phsb_ang_0 numeric,
    phv_phsc_mag_0 numeric,
    phv_phsc_ang_0 numeric,
    ppv_phsab_mag_0 numeric,
    ppv_phsab_ang_0 numeric,
    ppv_phsbc_mag_0 numeric,
    ppv_phsbc_ang_0 numeric,
    ppv_phsca_mag_0 numeric,
    ppv_phsca_ang_0 numeric,
    va_neut_mag_0 numeric,
    va_net_mag_0 numeric,
    va_phsa_mag_0 numeric,
    va_phsb_mag_0 numeric,
    va_phsc_mag_0 numeric,
    var_neut_mag_0 numeric,
    var_net_mag_0 numeric,
    var_phsa_mag_0 numeric,
    var_phsb_mag_0 numeric,
    var_phsc_mag_0 numeric,
    w_neut_mag_0 numeric,
    w_net_mag_0 numeric,
    w_phsa_mag_0 numeric,
    w_phsb_mag_0 numeric,
    w_phsc_mag_0 numeric,
    -- start load side
    a_net_mag_1 numeric,
    a_neut_mag_1 numeric,
    a_phsa_mag_1 numeric,
    a_phsb_mag_1 numeric,
    a_phsc_mag_1 numeric,
    hz_mag_1 numeric,
    pf_neut_mag_1 numeric,
    pf_net_mag_1 numeric,
    pf_phsa_mag_1 numeric,
    pf_phsb_mag_1 numeric,
    pf_phsc_mag_1 numeric,
    phv_neut_mag_1 numeric,
    phv_neut_ang_1 numeric,
    phv_net_mag_1 numeric,
    phv_net_ang_1 numeric,
    phv_phsa_mag_1 numeric,
    phv_phsa_ang_1 numeric,
    phv_phsb_mag_1 numeric,
    phv_phsb_ang_1 numeric,
    phv_phsc_mag_1 numeric,
    phv_phsc_ang_1 numeric,
    ppv_phsab_mag_1 numeric,
    ppv_phsab_ang_1 numeric,
    ppv_phsbc_mag_1 numeric,
    ppv_phsbc_ang_1 numeric,
    ppv_phsca_mag_1 numeric,
    ppv_phsca_ang_1 numeric,
    va_neut_mag_1 numeric,
    va_net_mag_1 numeric,
    va_phsa_mag_1 numeric,
    va_phsb_mag_1 numeric,
    va_phsc_mag_1 numeric,
    var_neut_mag_1 numeric,
    var_net_mag_1 numeric,
    var_phsa_mag_1 numeric,
    var_phsb_mag_1 numeric,
    var_phsc_mag_1 numeric,
    w_neut_mag_1 numeric,
    w_net_mag_1 numeric,
    w_phsa_mag_1 numeric,
    w_phsb_mag_1 numeric,
    w_phsc_mag_1 numeric
)
WITH (
    OIDS = FALSE
)
TABLESPACE pg_default;
>>>>>>> Stashed changes

-- Create the data table
CREATE TABLE data(
	message_uuid uuid not null,
    timestamp timestamptz not null,
    device_uuid uuid not null,
    tagname varchar(1024) not null,
    value numeric not null);
SELECT create_hypertable('data', 'timestamp');

-- Create raw message table
CREATE TABLE raw_data(
  message_uuid uuid not null,
  timestamp timestamptz not null,
  device_uuid uuid not null,
  tagname varchar(1024) not null,
  value bytea not null);
SELECT create_hypertable('raw_data', 'timestamp');

CREATE TABLE json_data(
  message_uuid uuid not null,
  timestamp timestamptz not null,
  device_uuid uuid not null,
  tagname varchar(1024) not null,
  value jsonb not null);
SELECT create_hypertable('json_data', 'timestamp');

-- Create measurement table
CREATE TABLE data(
	message_uuid uuid not null,
  timestamp timestamptz not null,
  device_uuid uuid not null,
  tagname varchar(1024) not null,
  A_net_mag numeric null,
  A_phsA_mag numeric null,
  A_phsB_mag numeric null,
  A_phsC_mag numeric null,
  Hz_mag numeric null,
  PF_neut_mag numeric null,
  PF_net_mag numeric null,
  PF_phsA_mag numeric null,
  PF_phsB_mag numeric null,
  PF_phsC_mag numeric null,
  PhV_neut_mag numeric null,
  PhV_neut_ang numeric null,
  PhV_net_mag numeric null,
  PhV_net_ang numeric null,
  PhV_phsA_mag numeric null,
  PhV_phsA_ang  numeric null,
  PhV_phsB_mag numeric null,
  PhV_phsB_ang numeric null,
  PhV_phsC_mag numeric null,
  PhV_phsC_ang numeric null,
  PPV_phsAB_mag numeric null,
  PPV_phsAB_ang  numeric null,
  PPV_phsBC_mag numeric null,
  PPV_phsBC_ang numeric null,
  PPV_phsCA_mag numeric null,
  PPV_phsCA_ang numeric null,
  VA_neut_mag numeric null,
  VA_net_mag numeric null,
  VA_phsA_mag numeric null,
  VA_phsB_mag numeric null,
  VA_phsC_mag numeric null,
  VAr_neut_mag numeric null,
  VAr_net_mag numeric null,
  VAr_phsA_mag numeric null,
  VAr_phsB_mag numeric null,
  VAr_phsC_mag numeric null,
  W_neut_mag numeric null,
  W_net_mag numeric null,
  W_phsA_mag numeric null,
  W_phsB_mag numeric null,
  W_phsC_mag numeric null);
SELECT create_hypertable('data', 'timestamp');

