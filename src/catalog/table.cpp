#include "minidatabase/catalog/table.h"

#include <stdexcept>
#include <utility>

namespace minidatabase {

Table::Table(std::string name, Schema schema)
    : name_(std::move(name)),
      schema_(std::move(schema)) {}

const std::string& Table::name() const {
    return name_;
}

const Schema& Table::schema() const {
    return schema_;
}

void Table::insert(Row row) {
    if (row.size() != schema_.column_count()) {
        throw std::invalid_argument(
            "Row value count does not match table schema"
        );
    }

    rows_.push_back(std::move(row));
}

const std::vector<Row>& Table::rows() const {
    return rows_;
}

std::size_t Table::row_count() const {
    return rows_.size();
}

}  // namespace minidatabase