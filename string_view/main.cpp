#include <cstddef>
#include <iostream>
#include <string>
#include <string_view>

auto print_with_string_view(std::string_view ala) -> void {
  std::cout << ala << "\n";
  std::cout << ala.max_size() << "\n";
}

auto main() -> int {
  size_t ala;
  std::string nye = "yo no soy ese";

  std::cout << sizeof ala << "\n";

  print_with_string_view(nye);

  std::string_view sv = "Ejemplo de std::string_view";
  std::cout << sv.front() << sv[8] << sv.back() << '\n';

  auto sub_sv = sv.substr(8, 7);
  std::cout << sub_sv << '\n';

  size_t pos = sv.find("std");
  std::cout << "Posición de 'std': " << pos << '\n';

  int a = 10;
  std::string stringsito = std::to_string(a); // convert int to string
  int b = std::stoi(stringsito);              // convert string to int

  return 0;
}
