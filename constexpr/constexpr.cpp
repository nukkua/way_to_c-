#include <iostream>

constexpr int cxf(int x) { return x * 2; }

auto main() -> int {
  std::cout << "Hello World!" << "\n";
  constexpr int i = cxf(2);
  std::cout << i << "\n";
}
