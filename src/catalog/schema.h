#pragma once

#include <cstddef>
#include <vector>

#include "minidatabase/catalog/column.h"

namespace minidatabase {

class Schema {
public:
    explicit Schema(std::vector<Column> columns);

    const std::vector<Column>& columns() const;
    std::size_t column_count() const;

private:
    std::vector<Column> columns_;
};

}  // namespace minidatabase