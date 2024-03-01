#include <array>
#include <cstddef>
#include <cstdint>
#include <iostream>

int main() {

  std::array<std::size_t, 10> a;
  std::array<int, 10> a1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // aaaaaaa soy tonto, klsdajfowsfoauheao es un generico, y este size_t es
  // como representar un unsigned long, no siempre va significar un unsigned
  // int, correcion ya, las entiendo la convencion es zu, z es que sera size_t,
  // u de unsigned , bueno tenia razon el chango de stackoverflow, no es int xd

  for (const auto x : a1) {
    std::cout << x << " ";
  }

  std::cout << "\n";
  // Example with C++23 size_t literal
  for (auto i = 0zu; i != a.size(); ++i) {
    std::cout << (a[i] = i) << " ";
  }

  std::cout << "\n";
  // Example of decrementing loop
  for (std::size_t i = a.size() - 1; i != SIZE_MAX; i--) {
    std::cout << a[i] << " ";
  }
  std::cout << "\n";

  // Example of decrementing loop 2
  for (std::size_t i = a.size(); i--;) {
    std::cout << a[i] << " ";
  }
  std::cout << "\n";

  return 0;
}
