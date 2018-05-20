#include "PQResult.h"

namespace adapter
{
namespace historian
{

PQResult::PQResult(PGresult* result)
    : m_result(result)
{

}

PQResult::~PQResult()
{
    PQclear(m_result);
}

bool PQResult::is_successful() const
{
    return PQresultStatus(m_result) == PGRES_COMMAND_OK;
}

std::string PQResult::get_error() const
{
    return std::string{ PQresultErrorMessage(m_result) };
}

}
}