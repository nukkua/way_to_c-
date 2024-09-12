#include <iostream>

#pragma GCC optimize("03")

#define fastio()                                                               \
  std::ios_base::sync_with_stdio(0);                                           \
  std::cin.tie(0);                                                             \
  std::cout.tie(0);

#define endl '\n'

signed main() {

  /* fastio(); */

  int a = 10;
  int d = 6;

  std::cout << a / d << endl;
  std::cout << (a + d - 1) / d << endl;

  return 0;
}
