#include <cstdio>
#include <iomanip>
#include <iostream>

#define MAX_SIZE 100000

auto main() -> int {

  float foo = 4.0153219f;
  int bar = 1e6;

  std::cout << bar;
  std::cout << '\n';

  std::cout << std::setprecision(5) << foo;
  std::cout << '\n';

  std::cout << MAX_SIZE << '\n';

  return 0;
}
