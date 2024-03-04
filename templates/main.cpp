#include <iostream>

template <class T> class Arithmetic {
private:
  T a;
  T b;

public:
  Arithmetic(T a, T b);
  T add();
  T sub();
};
template <class T> Arithmetic<T>::Arithmetic(T a, T b) {
  this->a = a;
  this->b = b;
}
template <class T> T Arithmetic<T>::add() {
  T c;
  c = a + b;
  return c;
}
template <class T> T Arithmetic<T>::sub() {
  T c;
  c = a - b;
  return c;
}

template <int A = 10, typename T> auto print1(T value) -> void {
  std::cout << A << " " << value << "\n";
}

template <typename T> constexpr T pi{3.14159265};

auto main() -> int {
  Arithmetic<short> ar1(1, 2);
  std::cout << ar1.add() << "\n";

  std::string value = "ala";

  print1<11>(value);
  std::cout << pi<double>;

  return 0;
}
