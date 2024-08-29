#include <iostream>
#include <memory>

struct Ala {
  int x, y, z;
};
// new and og ways of creating functions
auto maxi(int n1, int n2) -> int { return std::max(n1, n2); }

int maxi2(int n1, int n2) { return std::max(n1, n2); }

// POINTERS
auto ways_of_creating_pointers_og() -> int * {
  int *ptr = new int();
  (*ptr)++;
  std::cout << "og way:" << *ptr << "\n";
  return ptr;
}

auto ways_of_creating_pointers_new() -> std::unique_ptr<int> {
  // auto ptr == std::unique_ptr<int> ptr
  auto ptr = std::make_unique<int>(10);
  (*ptr)++;
  std::cout << "new way:" << *ptr << "\n";
  return ptr;
}

int main() {
  /* int *nullpointer = nullptr;  lit null pointer */

  int a = 10, b = 20;
  int *ptr1 = ways_of_creating_pointers_og();
  (*ptr1)++;
  std::cout << "Pointer 1: 2==" << *ptr1 << "\n";
  delete ptr1;

  std::unique_ptr<int> ptr2 = ways_of_creating_pointers_new();
  (*ptr2)++;
  std::cout << "Pointer 2: 12==" << *ptr2 << "\n";

  auto ania_oficial = [](int ania) -> int { return ania; };
  std::cout << "ania_oficial " << ania_oficial(10) << "\n";

  auto suma = [a](int &c, int &b) noexcept -> int { return c + b + a; };
  std::cout << "using lambdas functions: " << suma(a, b) << "\n";

  // desestruct
  struct Ala ala {
    1, 2, 3
  };
  auto [f, d, c] = ala;

  return 0;
}
