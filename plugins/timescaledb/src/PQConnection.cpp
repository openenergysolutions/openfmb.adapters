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
}
}
