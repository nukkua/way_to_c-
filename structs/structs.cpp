#include <iostream>
struct Rectangle {
  int length;
  int breadth;
};

struct Complex {
  int real;
  int img;
};

struct Card {
  int face;
  int shape;
  int color;
};

int main() {
  /* struct Rectangle r; */

  struct Rectangle r = {10, 20};

  /* r.breadth = 20; */
  /* r.length = 10; */

  std::cout << "The area is " << r.length * r.breadth << "\n";
  std::cout << sizeof(r);

  // now array of struct
  struct Card deck[100];
}
// por ej imagina que tengo un char en algunos de los structs
// que va pasar que va hacer pairing, osea va rellenar la memoria
// para que a el procesador se le sea mas facil operar, en vez de ocupar
// 1 byte ocupara lo que ocupa el mas cercano
