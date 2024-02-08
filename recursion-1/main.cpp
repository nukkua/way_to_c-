#include <iostream>

void recursive_shit(int n) {
  if (n > 0) {
    recursive_shit(n - 1);
    std::cout << n << "\n";
  }
}

int func1(int n) {

  if (n > 0) {
    return func1(n - 1) + n;
  }
  return 0;
}
int func2(int n) {
  static int x = 0;
  if (n > 0) {
    ++x;
    return func2(n - 1) + x;
  }
  return 0;
}
int main() {
  int x = 3;
  std::cout << func1(x) << "\n";
  std::cout << func2(x) << "\n";
  return 0;
}
