#include <iostream>
#include <print>
#include <vector>

int main() {
  std::vector<int> mierda;
  std::vector<int> foo(4, 0);
  for (int i = 0; i < 10; i++) {
    std::cout << "hi " << i << "\n";
  }
  for (int i = 0; i < 10; ++i) {
    std::cout << "hi2 " << i << "\n";
  }

  for (const auto &x : foo) {
    std::cout << x << " ";
  }
  std::print("Hello there {}", "world");
}

// they are the fucking same
