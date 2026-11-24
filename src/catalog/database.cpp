#include "minidatabase/catalog/database.h"

#include <stdexcept>
#include <utility>

namespace minidatabase {

void Database::create_table(Table table) {
    const std::string table_name = table.name();

    if (tables_.contains(table_name)) {
        throw std::invalid_argument(
            "Table already exists: " + table_name
        );
    }

    tables_.emplace(table_name, std::move(table));
}

bool Database::has_table(const std::string& name) const {
    return tables_.contains(name);
}

Table& Database::get_table(const std::string& name) {
    auto iterator = tables_.find(name);

    if (iterator == tables_.end()) {
        throw std::runtime_error(
            "Table not found: " + name
        );
    }

    return iterator->second;
}

const Table& Database::get_table(const std::string& name) const {
    auto iterator = tables_.find(name);

    if (iterator == tables_.end()) {
        throw std::runtime_error(
            "Table not found: " + name
        );
    }

    return iterator->second;
}

}  // namespace minidatabase