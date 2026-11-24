#include "minidatabase/catalog/schema.h"

#include <utility>

namespace minidatabase {

Schema::Schema(std::vector<Column> columns)
    : columns_(std::move(columns)) {}

const std::vector<Column>& Schema::columns() const {
    return columns_;
}

std::size_t Schema::column_count() const {
    return columns_.size();
}

}  // namespace minidatabase