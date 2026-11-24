#include <iostream>
#include <string>
#include <vector>

#include "minidatabase/catalog/column.h"
#include "minidatabase/catalog/database.h"
#include "minidatabase/catalog/row.h"
#include "minidatabase/catalog/schema.h"
#include "minidatabase/catalog/table.h"

int main() {
    using namespace minidatabase;

    Schema user_schema({
        Column("id", DataType::INT),
        Column("name", DataType::STRING),
        Column("age", DataType::INT)
    });

    Table users("users", std::move(user_schema));

    users.insert(Row({
        1,
        std::string("Rishabh"),
        21
    }));

    users.insert(Row({
        2,
        std::string("Rahul"),
        22
    }));

    Database database;

    database.create_table(std::move(users));

    std::cout << "MiniDatabase v0.1.0\n";
    std::cout << "Table: "
              << database.get_table("users").name()
              << '\n';

    std::cout << "Columns: "
              << database.get_table("users").schema().column_count()
              << '\n';

    std::cout << "Rows: "
              << database.get_table("users").row_count()
              << '\n';

    return 0;
}