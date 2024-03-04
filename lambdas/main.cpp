#include <iostream>

auto main() -> int {

  auto lambdita = [](short a, short b) noexcept -> short { return a > b; };

  std::cout << lambdita(10, 5) << " ";

  auto lambdita2 = [](short a, short b) constexpr -> short { return a > b; };
  std::cout << lambdita2(10, 5) << " ";

  auto lambdita3 = [=](short a, short b) mutable -> short {
    return a > b;
  }; // con el igual le digo que pase por valor lo de fuera
  auto lambdita4 = [&](short a, short b) -> short { return a > b; };
  return 0;
}
