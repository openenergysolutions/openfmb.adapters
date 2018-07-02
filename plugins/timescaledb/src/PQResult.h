#ifndef OPENFMB_PLUGIN_TIMESCALEDB_PQRESULT_H
#define OPENFMB_PLUGIN_TIMESCALEDB_PQRESULT_H

#include "libpq-fe.h"
#include <string>

namespace adapter {
namespace timescaledb {

    class PQResult {
    public:
        PQResult(PGresult* result);
        virtual ~PQResult();

        PQResult(PQResult&&) = default;
        PQResult(const PQResult&) = delete;
        void operator=(const PQResult&) = delete;

        bool is_successful() const;
        std::string get_error() const;
        int get_num_rows() const;

    private:
        PGresult* m_result;
    };
}
}

#endif
