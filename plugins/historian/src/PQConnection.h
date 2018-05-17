#ifndef OPENFMB_PLUGIN_HISTORIAN_PQCONNECTION_H
#define OPENFMB_PLUGIN_HISTORIAN_PQCONNECTION_H

#include "libpq-fe.h"
#include "PQResult.h"

namespace adapter
{
namespace historian
{

class PQConnection
{
public:
    PQConnection(const char* connection_string);
    virtual ~PQConnection();

    bool connect();
    bool is_connected() const;
    PQResult exec(const char* query);

private:
    PGconn* m_conn;
};

}
}

#endif
