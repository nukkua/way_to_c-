#include <iostream>

auto main() -> int {
  int ala = 100; // 1 1 0 0 1 0 0 // 0 1 1 0 0 1 0
  int ala2 = 1;  // 1  //
  int ala3 = 7;  // 1 1 1 // izquierda 1 1 1 0 // derecha 1 1
  std::cout << (ala2 << 11) << "\n";

  float fo = 1.2e10f;

  return 0;
}
