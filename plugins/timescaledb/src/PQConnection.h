#ifndef OPENFMB_PLUGIN_TIMESCALEDB_PQCONNECTION_H
#define OPENFMB_PLUGIN_TIMESCALEDB_PQCONNECTION_H

#include "libpq-fe.h"
#include "PQResult.h"

namespace adapter
{
namespace timescaledb
{

class PQConnection
{
public:
    PQConnection(const char* connection_string);
    virtual ~PQConnection();

    PQConnection(PQConnection&&) = default;
    PQConnection(const PQConnection&) = delete;
    void operator=(const PQConnection&) = delete;

    bool connect();
    bool is_connected() const;
    PQResult exec(const char* query);

private:
    PGconn* m_conn;
};

}
}

#endif
