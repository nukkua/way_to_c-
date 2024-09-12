#include <ios>
#include <iostream>
#include <vector>

#define endl '\n'

auto odd_even(int a) -> void {
  if ((a & 1)) {
    std::cout << "Es Impar" << "\n";
  } else {
    std::cout << "Es par" << "\n";
  }
}

#pragma GCC optimize("03")

#define fastio()                                                               \
  std::ios_base::sync_with_stdio(0);                                           \
  std::cin.tie(0);                                                             \
  std::cout.tie(0)

auto main() -> int {
  fastio();

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

  // not, de positivo a negativo suma 1 y multiplica por -1
  // de negativo a positivo multiplica por -1 y resta 1
  int f = -1;
  int g = -10;

  std::cout << "f not -> " << ~f;
  std::cout << "g not -> " << ~g;

  std::vector<int> someVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  someVector.reserve(10);

  for (int i = 10; ~i; --i) {
    std::cout << someVector[i] << endl;
  }

  return 0;
}
