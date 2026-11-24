#pragma once

#include <string>
#include <unordered_map>

#include "minidatabase/catalog/table.h"

namespace minidatabase {

class Database {
public:
    void create_table(Table table);

    bool has_table(const std::string& name) const;

    Table& get_table(const std::string& name);
    const Table& get_table(const std::string& name) const;

private:
    std::unordered_map<std::string, Table> tables_;
};

}  // namespace minidatabase