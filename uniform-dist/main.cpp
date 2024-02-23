#include <iostream>
#include <random>

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<float> dis(0, 360);
  std::cout << dis(gen);

  return 0;
}
