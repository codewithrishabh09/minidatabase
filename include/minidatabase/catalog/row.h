#pragma once

#include <cstddef>
#include <vector>

#include "minidatabase/catalog/value.h"

namespace minidatabase {

class Row {
public:
    explicit Row(std::vector<Value> values);

    const Value& get(std::size_t index) const;
    std::size_t size() const;

private:
    std::vector<Value> values_;
};

}  // namespace minidatabase