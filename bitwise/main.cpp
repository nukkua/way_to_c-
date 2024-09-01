#include <iostream>

auto odd_even(int a) -> void {
  if ((a & 1)) {
    std::cout << "Es Impar" << "\n";
  } else {
    std::cout << "Es par" << "\n";
  }
}

auto main() -> int {

  std::cin.tie(0);

  int ala = 100; // 1 1 0 0 1 0 0 // 0 1 1 0 0 1 0
  int ala2 = 1;  // 1  //
  int ala3 = 7;  // 1 1 1 // izquierda 1 1 1 0 // derecha 1 1

  int a = 103;
  int b = 202;
  odd_even(a);
  odd_even(b);

  // izquierda multiplica, derecha divide
  std::cout << (a << 1) << "\n";
  std::cout << (a << 2) << "\n";
  std::cout << (b >> 1) << "\n";

  // intercambiar dos variables con XOR
  int c = 10;
  int d = 5;
  std::cout << c << "\n";
  std::cout << d << "\n";
  c ^= d;
  d ^= c;
  c ^= d;
  std::cout << c << "\n";
  std::cout << d << "\n";
  // calcular el valor absoluto
  int x = -15;
  int absValueOfX = (x ^ (x >> 31)) - (x >> 31);
  std::cout << absValueOfX << "\n";

  return 0;
}
