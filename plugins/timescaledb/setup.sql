-- Create database
CREATE DATABASE openfmb;
\c openfmb
CREATE EXTENSION IF NOT EXISTS timescaledb CASCADE;

-- Create the data table
CREATE TABLE data(
	message_uuid uuid not null,
    timestamp timestamptz not null,
    device_uuid uuid not null,
    tagname varchar(1024) not null,
    value numeric not null);
SELECT create_hypertable('data', 'timestamp');
