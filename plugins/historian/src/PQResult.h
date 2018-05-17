#ifndef OPENFMB_PLUGIN_HISTORIAN_PQRESULT_H
#define OPENFMB_PLUGIN_HISTORIAN_PQRESULT_H

#include "libpq-fe.h"

namespace adapter
{
namespace historian
{

class PQResult
{
public:
    PQResult(PGresult* result);
    virtual ~PQResult();

    bool is_successful() const;

private:
    PGresult* m_result;
};

}
}

#endif
