#include <chrono>
#include <cmath>
#include <iostream>

#define ll long long

using tint = long long;

ll fast_pow(ll x, ll n, ll m) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) {
      res = res * x % m;
    }
    x = x * x % m, n >>= 1;
  }
  return res;
}

tint powFast(tint b, tint e) {
  if (e == 0)
    return 1;

  tint result = 1;

  while (e > 0) {
    if (e & 1) { //
      result *= b;
    }
    b *= b;
    e >>= 1;
  }

  return result;
}

auto main() -> int {
  tint base = 2;
  tint exponente = 62;

  auto start = std::chrono::high_resolution_clock::now();

  tint result = powFast(base, exponente);

  auto end = std::chrono::high_resolution_clock::now();
  auto start2 = std::chrono::high_resolution_clock::now();

  tint result2 = std::pow(base, exponente);

  auto end2 = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> elapsed = end - start;
  std::chrono::duration<double> elapsed2 = end2 - start2;

  std::cout << result << "\n";
  std::cout << result2 << "\n";

  std::cout << "Seconds: " << elapsed.count() << "\n";
  std::cout << "Seconds: " << elapsed2.count() << "\n";
  std::cout << "Diference: " << elapsed2.count() - elapsed.count() << "\n";

  return 0;
}
