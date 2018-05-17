-- Create database
CREATE DATABASE openfmb;
\c openfmb
CREATE EXTENSION IF NOT EXISTS timescaledb CASCADE;

-- Create the data table
CREATE TABLE data(
    time timestamptz not null,
    device uuid not null,
    message uuid not null,
    tagname varchar(255) not null,
    value numeric not null);
SELECT create_hypertable('data', 'time');
