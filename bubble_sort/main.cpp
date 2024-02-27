#include <iostream>
#include <vector>

int max(std::vector<unsigned int> v) {
  int n = v.size();
  int maxi = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] > maxi) {
      maxi = v[i];
    }
  }
  return maxi;
}

auto main() -> int {
  std::vector<unsigned int> v1 = {2, 7, 3, 4, 10};
  int n = v1.size();
  bool band;

  for (int i = 0; i < n - 1; ++i) {
    band = true;
    for (int j = 0; j < n - i - 1; ++j) {
      if (v1[j] > v1[j + 1]) {
        std::swap(v1[j], v1[j + 1]);
        band = false;
      }
    }
    if (band) {
      break;
    }
  }

  for (const unsigned short &x : v1) {
    std::cout << x << " ";
  }
  std::cout << "\n";

  for (auto i = 0; i < n; ++i) {
    std::cout << v1[i] << " ";
  }
  std::cout << "\n Maximo es:" << max(v1) << "\n";
  return 0;
}
