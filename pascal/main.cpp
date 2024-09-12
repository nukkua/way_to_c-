#include <chrono>
#include <iostream>

#define TAM 199

auto main() -> int {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  long long int C[TAM][TAM] = {0};

  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < TAM; i++) {
    C[i][0] = C[i][i] = 1;
    for (int j = 1; j < i; j++) {
      C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
    }
  }

  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      std::cout << C[i][j] << " ";
    }
    std::cout << "\n";
  }
  for (int i = 0; i < 1e9; i++)
    ;

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed = end - start;

  std::cout << "Time elapsed -> " << elapsed.count() << '\n';

  return 0;
}
