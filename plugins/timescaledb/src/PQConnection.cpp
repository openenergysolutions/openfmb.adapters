// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "PQConnection.h"

namespace adapter {
namespace timescaledb {

    PQConnection::PQConnection(const char* connection_string)
    {
        m_conn = PQconnectdb(connection_string);
    }

    PQConnection::~PQConnection()
    {
        PQfinish(m_conn);
    }

    bool PQConnection::is_connected() const
    {
        return PQstatus(m_conn) == CONNECTION_OK;
    }

    PQResult PQConnection::exec(const char* query)
    {
        auto res = PQexec(m_conn, query);
        return PQResult{ res };
    }

    PQResult PQConnection::exec(const char* query, char *binary, size_t size)
    {
        const char *paramValues[1];
        int paramLengths[1];
        int paramFormats[1];

        paramValues[0] = binary;
        paramLengths[0] = size;
        paramFormats[0] = 1;

        auto res = PQexecParams(m_conn,
                query,
                1, // One parameter
                NULL,
                paramValues,
                paramLengths,
                paramFormats,
                0);

        return PQResult{ res };
    }
}
}
