#include <chrono>
#include <cmath>
#include <iostream>

#define eb emplace_back

auto main() -> int {

  auto start = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < 1e9; ++i)
    [[likely]];

  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> elapsed = end - start;

  std::cout << elapsed.count() << "\n";

  return 0;
}
