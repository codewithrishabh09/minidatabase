#pragma once

#include <string>

#include "minidatabase/catalog/data_type.h"

namespace minidatabase {

class Column {
public:
    Column(std::string name, DataType type);

    const std::string& name() const;
    DataType type() const;

private:
    std::string name_;
    DataType type_;
};

}  // namespace minidatabase