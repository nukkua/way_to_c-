#include <iostream>
#include <vector>

#define PI 3.14159265
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define forVec(a, b) for (int(a) : (b))

int main() {
  const unsigned int ala = 10; // nunca a un unsigned meterle negativos

  std::vector<int> v1{1, 2, 3, 4, 5};

  std::cout << PI << "\n";

  for (int x : v1) {
    std::cout << x << "\n";
  }
  forVec(x, v1) { std::cout << x << "\n"; }
}
