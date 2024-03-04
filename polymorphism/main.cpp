#include <iostream>
// final , que no puede heredar o overridear la funcion, tambien funca para
// classes: propiedades privadas por defecto o structs propiedades publicas

struct A {
  void virtual f() {
    std::cout << "A"
              << "\n";
  }
};
struct B final : A { // : -> hereda
  void f() override {
    std::cout << "B"
              << "\n";
  }
};

auto g(A &a) -> void { a.f(); }
auto h(B &b) -> void { b.f(); }

auto main() -> int {
  struct A a;
  struct B b;

  g(a);
  g(b); // la funcion g solo admite de tipo a, por lo tanto no hara un chequeo
        // de funciones que overridean, para que chequee, tengo que ponerle
        // virtual a la funcion de la clase padre

  return 0;
}
