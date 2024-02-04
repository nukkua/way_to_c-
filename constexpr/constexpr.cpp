#include <iostream>

constexpr int cxf(int x) { return x * 2; }

int main() {
  std::cout << "Hello World!"
            << "\n";

  constexpr int i = 2;
  std::cout << i << "\n";
}

// se ejecuta en tiempo de compilacion
