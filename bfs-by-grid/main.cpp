#include <iostream>

#pragma GCC optimize("03")

#define endl '\n'

#define INF 0x3f3f3f3f

#define fastio()                                                               \
  std::ios_base::sync_with_stdio(0);                                           \
  std::cin.tie(0);                                                             \
  std::cout.tie(0);

signed main() {
  fastio();

  int x, y;
  int z, w;
  std::cin >> x >> y; // le doy el grid
  std::cin >> z >> w; // le doy coordenadas y saco las coordenadas disponibles
                      // en funcion del grid

  int dx[] = {-1, +1, 0, 0};
  /* int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1}; */
  int dy[] = {0, 0, +1, -1};
  /* int dy[] = {0, 0, +1, -1, -1, +1, -1, +1}; */
  for (int i = 0; i < 4; i++) {
    int nx = z + dx[i]; // row
    int ny = w + dy[i]; // col
    // 0,0 -> veo arriba, veo abajo, veo derecha, veo izquierda

    if (nx < 0 || ny < 0 || nx >= x || ny >= y)
      continue;

    std::cout << "(" << nx << "," << ny << ")" << endl;
  }

  return 0;
}
