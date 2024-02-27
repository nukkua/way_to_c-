#include <iostream>
#include <memory>
#include <string>

auto returning_some_shit_string() -> std::unique_ptr<std::string> {
  auto ptr = std::make_unique<std::string>("name");

  return ptr;
}

auto returning_some_string_with_pointer() -> std::string {
  auto ptr = std::make_shared<std::string>("Princesa mono <3");

  return *ptr;
}

auto main() -> int {
  auto ptrPointerToString = returning_some_shit_string();
  auto ptrString = returning_some_string_with_pointer();

  std::cout << *ptrPointerToString << "\n";
  std::cout << ptrString << "\n";
  return 0;
}
