#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 3, 4, 5};
  int i = 0;
  std::cin >> i;

  if (int x = 2 * i; x > 10) {
    std::cout << "This is the mf value \n";
    std::cout << x << "\n";
  }

  // Por lo tanto si i>=6, entrara al if, y el x existira dentro de ese scoped
  // y lo mismo aplica para el switch, la estructura es:
  // if ( statement; condition)

  // TERNARY OPERATIONS, LIKE JAVASCRIPT ONES
  int k = (i > 2) ? 1 : 2;
  std::cout << k << "K value";

  // LOOPS
  // theres nothing special with the natural for, while and do-while
  for (int i = 0; i < 10; i++) {
    std::cout << "Hello word " << i << "\n";
  }

  // BUTTTTTTTTTTTTT IT EXIST THIS VERSION OF THE FOR LOOP
  // CALLED RANGE-BASED LOOPS
  // for (variable : range) {}
  // range = object with standard iterator interface like a vector
  // Por referencia un iterator, es un puntero
  for (int x : v) {
    std::cout << x << "\n";
  }
}
