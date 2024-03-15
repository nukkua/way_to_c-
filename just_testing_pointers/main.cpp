#include <iostream>

auto kelvin(int a, int *b) -> void { *b = a + 1; }

auto main() -> int {

  int ol = 10;

  int *b = new int(0); // puntero que apunta al heap
  int a = 10;          // variable en el stack

  kelvin(a, &ol);

  std::cout << ol << " ";

  return 0;
}
