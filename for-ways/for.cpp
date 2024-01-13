#include <iostream>
#include <vector>

int main() {
  std::vector<int> mierda;
  for (int i = 0; i < 10; i++) {
    std::cout << "hi " << i << "\n";
  }
  for (int i = 0; i < 10; ++i) {
    std::cout << "hi2 " << i << "\n";
  }
}

// they are the fucking same
