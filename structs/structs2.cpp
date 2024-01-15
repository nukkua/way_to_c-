#include <iostream>

struct Rectangle {
  int heigth;
  int width;
};

int main() {

  struct Rectangle r1 = {1, 2};
  struct Rectangle *p = &r1; // los punteros y referencias siempre se las
                             // declara del mismo tipo ania

  struct Rectangle &ref = r1;
  std::cout << r1.width << "\n" << (*p).width << "\n";
  std::cout << "Imprimiendo con el operador arrow que es igual a \n "
               "(*pointer).atributte == pointer -> atributte "
            << p->width << "\n";
}
