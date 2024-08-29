#include <iostream>
#include <type_traits>

// LL -> long long
// U ->  unsigned
// Z ->  std::size_t -> unsigned long
// I ->  int
// F -> float
// ZU -> por convencion, el u siempre va atras
int main() {

  int b = 101ll;

  std::cout << b;

  static_assert(std::is_same<decltype(0ll), long long>::value,
                "0LL no es long long"); // static_assert verificacion en tiempo
                                        // de compilacion
}
