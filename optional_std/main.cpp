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
  // que: 9:20 me piro, o esa juguemos lethal, pero le estaria transmitiendo en
  // dc a ella, le gusta verme jugar esa mierda pq chillo como perra, varias
  // veces ya transmiti, aksfjasfskfs, sabe como hablamos, ya prendo la pc
  // ashdflkasfkjdasflksjfosfjsklfa, que indio, en la plazita lo enfriaron al
  // pobre wicky, vayanse a la mierda, ya jskfsjkf, no creo,  el cabo es un
  // gigachad
  if (divisionania.has_value()) {
    std::cout << "Result has value" << divisionania.value() << "\n";
  } else {
    std::cout << "Division by zero"
              << "\n";
  }

  return 0;
}
