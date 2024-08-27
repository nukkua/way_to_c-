#include <iostream>
#include <print>
inline auto ala() noexcept -> void { std::cout << "ala" << "ala2"; }

auto main() -> int {
  std::print("{} hi", 9);
  ala();

  return 0;
}
