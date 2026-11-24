#include "minidatabase/catalog/row.h"

#include <utility>

namespace minidatabase {

Row::Row(std::vector<Value> values)
    : values_(std::move(values)) {}

const Value& Row::get(std::size_t index) const {
    return values_.at(index);
}

std::size_t Row::size() const {
    return values_.size();
}

}  // namespace minidatabase