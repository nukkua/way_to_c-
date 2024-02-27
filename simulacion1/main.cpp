#include <iostream>
#include <vector>
int main() {
  std::vector<int> tiempoIntervaloLlegada = {9, 2,  6, 8, 6, 9, 4, 3, 5, 5,
                                             5, 10, 2, 2, 4, 8, 8, 3, 6, 3};
  std::vector<int> tiempoServicio = {3, 2, 4, 6, 4, 4, 3, 3, 4, 4,
                                     6, 3, 1, 4, 3, 2, 2, 3, 5, 2};
  int horaLlegada = 9;
  int horaInicioServicio = horaLlegada;
  int horaFinServicio = horaLlegada + tiempoServicio[0];
  int te = 0;
  int to = 9;

  for (int i = 2; i < 21; i++) {
    horaLlegada += tiempoIntervaloLlegada[i - 1];
    if (horaLlegada < horaFinServicio) {
      horaInicioServicio = horaFinServicio;
      te = horaFinServicio - horaLlegada;
    } else {
      horaInicioServicio = horaLlegada;
      te = -1000;
    }
    horaFinServicio = horaInicioServicio - te;
    std::cout << horaLlegada << " " << horaInicioServicio << " "
              << horaFinServicio << " " << te << " "
              << "\n";
  }
}
