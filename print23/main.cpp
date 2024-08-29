#include <print>

auto main() -> int {
  std::print("{}+{}={}", 9, 10, 19);

  std::print("{0}+{2}={1}", 9, 19, 10);

  return 0;
}
