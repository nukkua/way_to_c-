#include <iostream>

struct Rectangle {
  int length;
  int breadth;
};

int main() {
  int a = 10;

  struct Rectangle *p2;

  p2 = new struct Rectangle;

  p2->length = 10;
  p2->breadth = 20;

  int *p;

  p = &a; // p stores the memory direction of a, with the reference &

  std::cout << *p << " Using the pointer"
            << "\n"; // then access the actual value
  std::cout << a << " Using the value"
            << "\n";

  // we have malloc, that stores something in the heap
  // and how we access external resources of the program,
  // thats right pointers

  // Los array, el nombre en si es un "puntero", por lo tanto si a
  // un puntero le asignamos una variable array, simplemente le asigno sin la
  // posicion de memoria

  p = new int[10]; // crea un array de 5 enteros,en heap, es el equivalente al
                   // malloc, le estamos pidiendo memoria al heap
  // Y como estamos pidiendo memoria, hay que liberarla una vez la usemos
  p[0] = 10;
  p[1] = 10;
  p[2] = 10;
  p[3] = 10;
  p[4] = 10;

  for (int i = 0; i < 5; ++i) {
    std::cout << p[i] << "\n";
  }
  delete[] p;

  // no interesa el tipo del puntero, por que como vamos a representar,
  // una posicion de memoria, dependemos de cuantos bits,
  // es la maquina y de ese tamano sera el puntero

  char *p1;
  int *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;
}
