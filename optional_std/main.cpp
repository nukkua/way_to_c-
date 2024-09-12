#include <iostream>
#include <optional>

std::optional<int> division(int number1, int number2) {
  if (number2 == 0) {
    return std::nullopt;
  }
  return number1 / number2;
}

int main() {
  int a = 10;
  int b = 10;
  auto divisionania = division(a, b);

  if (divisionania.has_value()) {
    std::cout << "Result has value" << divisionania.value() << "\n";
  } else {
    std::cout << "Division by zero" << "\n";
  }

  return 0;
}
