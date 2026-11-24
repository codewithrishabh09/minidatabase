#pragma once

#include <cstddef>
#include <string>
#include <vector>

#include "minidatabase/catalog/row.h"
#include "minidatabase/catalog/schema.h"

namespace minidatabase {

class Table {
public:
    Table(std::string name, Schema schema);

    const std::string& name() const;
    const Schema& schema() const;

    void insert(Row row);

    const std::vector<Row>& rows() const;
    std::size_t row_count() const;

private:
    std::string name_;
    Schema schema_;
    std::vector<Row> rows_;
};

}  // namespace minidatabase