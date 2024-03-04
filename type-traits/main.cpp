#include <type_traits>
// un typetraits define una interfaz al momento de compilacion para buscar o
// modificar las propiedades de los tipos

// type traits que acceden al tipo
/* std::is_floating_point_v<T>; */
/* std::is_const_v<T>; */
/* std::is_arithmetic_v<T>; */
/* is_integral_v; */
/* is_signed; */
/* is_unsigned; */
/* is_enum; */
/* is_void; */
/* is_pointer; */
/* is_null_pointer; */
/* is_convertible_v; */
/* is_same_v; */
// type traits que modifican el tipo
/* make_unsigned; */
/* make_signed; */
/* remove_const; */
/* add_const; */
// uso real
/* using R = std::add_const_t<T>; */

template <typename T> auto integral_div(T a, T b) -> T {
  static_assert(std::is_integral_v<T>,
                "integral_div accepts only integral types");
  return a / b;
}

auto main() -> int {
  integral_div(7, 2);
  integral_div(71, 21);
  /* integral_div(8.0, 3.0); // Esto causará un error en tiempo de compilación
   */
  // debido a static_assert

  return 0;
}
