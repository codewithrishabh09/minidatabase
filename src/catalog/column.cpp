#include "minidatabase/catalog/column.h"

#include <utility>

namespace minidatabase {

Column::Column(std::string name, DataType type)
    : name_(std::move(name)),
      type_(type) {}

const std::string& Column::name() const {
    return name_;
}

DataType Column::type() const {
    return type_;
}

}  // namespace minidatabase