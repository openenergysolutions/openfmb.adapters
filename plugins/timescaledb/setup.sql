-- SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
--
-- SPDX-License-Identifier: Apache-2.0

-- Create database
CREATE DATABASE openfmb;
\c openfmb
CREATE EXTENSION IF NOT EXISTS timescaledb CASCADE;

-- Create the data table
CREATE TABLE data
(
    message_uuid uuid NOT NULL,
    "timestamp" timestamp with time zone NOT NULL,
    device_uuid uuid NOT NULL,
    tagname character varying(1024) NOT NULL,
    a_net_mag numeric,
    a_neut_mag numeric,
    a_phsa_mag numeric,
    a_phsb_mag numeric,
    a_phsc_mag numeric,
    hz_mag numeric,
    pf_neut_mag numeric,
    pf_net_mag numeric,
    pf_phsa_mag numeric,
    pf_phsb_mag numeric,
    pf_phsc_mag numeric,
    phv_neut_mag numeric,
    phv_neut_ang numeric,
    phv_net_mag numeric,
    phv_net_ang numeric,
    phv_phsa_mag numeric,
    phv_phsa_ang numeric,
    phv_phsb_mag numeric,
    phv_phsb_ang numeric,
    phv_phsc_mag numeric,
    phv_phsc_ang numeric,
    ppv_phsab_mag numeric,
    ppv_phsab_ang numeric,
    ppv_phsbc_mag numeric,
    ppv_phsbc_ang numeric,
    ppv_phsca_mag numeric,
    ppv_phsca_ang numeric,
    va_neut_mag numeric,
    va_net_mag numeric,
    va_phsa_mag numeric,
    va_phsb_mag numeric,
    va_phsc_mag numeric,
    var_neut_mag numeric,
    var_net_mag numeric,
    var_phsa_mag numeric,
    var_phsb_mag numeric,
    var_phsc_mag numeric,
    w_neut_mag numeric,
    w_net_mag numeric,
    w_phsa_mag numeric,
    w_phsb_mag numeric,
    w_phsc_mag numeric,
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

SELECT create_hypertable('data', 'timestamp', chunk_time_interval => INTERVAL '1 hour');

ALTER TABLE data OWNER to postgres;

GRANT SELECT ON TABLE data TO grafana;

GRANT ALL ON TABLE data TO postgres;

CREATE INDEX data_device_uuid_asc
    ON data USING btree
    (device_uuid)
    TABLESPACE pg_default;

ALTER TABLE data
    CLUSTER ON data_device_uuid_asc;
    
CREATE INDEX data_timestamp_asc_idx
    ON data USING btree
    ("timestamp")
    TABLESPACE pg_default;
    
-- Create raw_data table
CREATE TABLE raw_data
(
    message_uuid uuid NOT NULL,
    "timestamp" timestamp with time zone NOT NULL,
    device_uuid uuid NOT NULL,
    tagname character varying(1024) NOT NULL,
    value jsonb NOT NULL
)
WITH (
    OIDS = FALSE
)
TABLESPACE pg_default;

SELECT create_hypertable('raw_data', 'timestamp', chunk_time_interval => INTERVAL '1 hour');

ALTER TABLE raw_data
    OWNER to postgres;

GRANT SELECT ON TABLE raw_data TO grafana;

GRANT ALL ON TABLE raw_data TO postgres;

CREATE INDEX raw_data_device_uuid_asc
    ON raw_data USING btree
    (device_uuid)
    TABLESPACE pg_default;

ALTER TABLE raw_data
    CLUSTER ON raw_data_device_uuid_asc;

CREATE INDEX raw_data_tagname_idex
    ON raw_data USING btree
    (tagname COLLATE pg_catalog."en-US-x-icu" varchar_ops)
    TABLESPACE pg_default;

CREATE INDEX raw_data_tagname_idx
    ON raw_data USING btree
    (tagname COLLATE pg_catalog."default")
    TABLESPACE pg_default;