#include <algorithm>
#include <iostream>
#include <memory>

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
  int *nullpointer = nullptr; // lit null pointer

  int *ptr1 = ways_of_creating_pointers_og();
  (*ptr1)++;
  std::cout << "Pointer 1: 2==" << *ptr1 << "\n";
  delete ptr1;

  std::unique_ptr<int> ptr2 = ways_of_creating_pointers_new();
  (*ptr2)++;
  std::cout << "Pointer 2: 12==" << *ptr2 << "\n";

  // using anonymus functions, or lambdas whatever;

  auto ania_oficial = [](int ania) -> int { return ania; };

  auto suma = [](int a, int b) -> int { return a + b; };
  std::cout << "using lambdas functions: " << suma(10, 20) << "\n";

  return 0;
}