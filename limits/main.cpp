#include <cstdint>
#include <limits>

auto main() -> int {

  std::numeric_limits<int>::max();
  std::numeric_limits<int>::min();

  std::numeric_limits<int16_t>::max();

  return 0;
}
