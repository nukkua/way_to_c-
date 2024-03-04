#include <cstddef>
#include <cstdint>
#include <iostream>
#include <memory>
#include <utility>
#include <vector>

#define forVec(a, b) for (const auto(&a) : (b))

namespace TypesT {
int32_t ala = 10;
}

namespace Enums {
enum class Day { Lunes, Martes, Miercoles, Jueves, Viernes };

} // namespace Enums

namespace Structs {
struct MeArdeElAno {
  int x;
  int y;
  int z;
};
struct Arithmetic {
  std::string literal_value;
  int number;
};

} // namespace Structs

namespace Classes {
class Rectangle {
public:
  int length;
  int breadth;

public:
  Rectangle() {
    length = 1;
    breadth = 1;
  }
  Rectangle(int length, int breadth);
};
} // namespace Classes

Classes::Rectangle::Rectangle(int length, int breadth) {
  this->length = length;
  this->breadth = breadth;
}

namespace ShittyFunctions {
constexpr inline auto justSum(int a, int b) noexcept -> int { return a + b; }

auto ternary(bool a, bool b) -> int {
  int k = (a == b) ? 1 : 2;
  return k;
}

} // namespace ShittyFunctions

auto bubblesortAnia(std::vector<int> &v) -> void {
  std::size_t n = v.size();
  bool is_sorted = true;

  for (std::size_t i = 0; i < n - 1; ++i) {
    is_sorted = true;
    for (std::size_t j = 0; j < n - i - 1; ++j) {
      if (v[j] > v[j + 1]) {
        std::swap(v[j], v[j + 1]);
        is_sorted = false;
      }
    }
    if (is_sorted) {
      break;
    }
  }
}

auto partition_lomuto(std::vector<int> &v, int low, int high) noexcept -> int {
  int pivot = v[high];
  int i = low - 1;

  for (int j = low; j < high; ++j) {
    if (v[j] <= pivot) {
      i++;
      std::swap(v[j], v[i]);
    }
  }
  std::swap(v[i + 1], v[high]);

  return i + 1;
}
auto quicksort(std::vector<int> &v, int low, int high) noexcept -> void {
  if (low < high) {
    int pl = partition_lomuto(v, low, high);

    quicksort(v, low, pl - 1);
    quicksort(v, pl + 1, high);
  }
}

auto main() -> int {
  std::vector<int> v = {1, 34, 4, 10, 20, 30, 14};
  quicksort(v, 0, v.size() - 1);
  /* bubblesortAnia(v); */
  forVec(x, v) { std::cout << x << " "; }
  std::cout << "\n";

  int a = 0, b = 9;
  std::cout << ShittyFunctions::justSum(a, b) << "\n";
  std::cout << ShittyFunctions::ternary(true, false) << "\n";

  // just init some class

  Classes::Rectangle r(10, 20);
  auto rptr = std::make_unique<Classes::Rectangle>(r);

  rptr->length = 20;
  std::cout << "Pointer to class:" << rptr->length << "\n";
  std::cout << "Member original of class: " << r.length << "\n";

  struct Structs::Arithmetic arith = {"ania", 10};

  // usando new or make_unique make_shared, siempre es heap allocation
  std::unique_ptr<Structs::Arithmetic> arithptr =
      std::make_unique<Structs::Arithmetic>(arith);

  // Modificación del valor a través del unique_ptr
  arithptr->number = 20;

  std::cout << "Unique_ptr: " << arithptr->number << " "
            << arithptr->literal_value << "\n";
  std::cout << "Original: " << arith.number << " "
            << arith.literal_value // no sirve de nada, pq crea en heap
            << "\n";

  // using enums
  Enums::Day d = Enums::Day::Jueves;
  std::cout << int(d) << "\n";

  // t types
  std::cout << sizeof(TypesT::ala) << "\n";

  // structs
  struct Structs::MeArdeElAno ala {
    1, 2, 3
  };

  // bro esto es syntax sugar
  struct Structs::MeArdeElAno ala2 {
    .x = 1, .y = 3, .z = 2
  };

  // loco desestructuracion pero para c++
  auto [u, i, k] = ala2;
  std::cout << "shit desestructered: " << u << "\n";

  return 0;
}
