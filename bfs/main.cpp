#include <cmath>
#include <iostream>
#include <limits>
#include <queue>
#include <vector>

#define INF std::numeric_limits<int>::max()

#define endl '\n'

#define fastio()                                                               \
  std::ios_base::sync_with_stdio(0);                                           \
  std::cin.tie(0);                                                             \
  std::cout.tie(0);

#define int long long

auto bfs(std::vector<std::vector<int>> &list,
         int initialNode) -> std::vector<int> {
  int n = list.size();

  std::vector<int> d(n, INF);
  std::queue<int> q;

  q.push(initialNode);
  d[initialNode] = 0;

  while (!q.empty()) {
    int x = q.front();
    q.pop();

    for (const int &y : list[x]) {
      if (d[y] == INF) {
        d[y] = d[x] + 1;
        q.push(y);
      }
    }
  }

  return d;
}

signed main() {
  fastio();

  int initialNode = 0;

  std::vector<std::vector<int>> list = {
      {1, 2, 3}, {0, 2}, {0, 1}, {0, 4}, {3},
  };

  auto d = bfs(list, initialNode);

  for (const auto &z : d) {
    std::cout << z << ",";
  }
  return 0;
}
