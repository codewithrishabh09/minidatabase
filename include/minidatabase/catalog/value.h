#pragma once

#include <string>
#include <variant>

namespace minidatabase {

using Value = std::variant<int, std::string>;

}  // namespace minidatabase