#include <iostream>
#include <vector>

#define forVec(a, b) for (const unsigned short(&a) : (b)) // macro qliao

struct Rectangle {
  int length;
  int breadth;
};

int area(struct Rectangle *r) {
  r->length = 15;
  return (r->length * r->breadth);
}
int area2(struct Rectangle r) { return r.length * r.breadth; }
int area3(struct Rectangle &r) {
  r.length++;
  return r.length * r.breadth;
}

// los arrays de por si se pasan por address
void arrayParameterPassing(int A[], int n) {
  A[0] = 10;
  for (int i = 0; i < n; ++i) {
    std::cout << A[i] << "\n";
  }
}

int *pointerToArray(int n) {
  int *p;
  p = new int[n];

  for (int i = 0; i < n; ++i) {
    p[i] = i + 1;
  }
  return p;
}

void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
// Cuando paso por referencia puede como tambien no, convertirse en inline
// functions la funciones

inline short add(int a, int b) {
  short c;
  c = a + b;
  return c;
}

inline int addOne(int &a) {
  ++a;
  return a;
}

inline int multiplyByTwo(int *b) {
  *b *= 2;
  return *b;
}
void iterate_vector(std::vector<short> &v1) {
  forVec(x, v1) { std::cout << x << "\n"; }
}

int main() {
  std::vector<short> v1 = {1, 2, 3, 4, 5};
  int x, y, z;
  int swap1 = 10, swap2 = 20;

  x = 10;
  y = 10;
  z = add(x, y);
  std::cout << "La suma es " << z << "\n";
  addOne(x);
  std::cout << "Sumar uno " << x << "\n";
  multiplyByTwo(&y);
  std::cout << "Multiplicar por dos " << y << "\n";
  iterate_vector(v1);

  std::cout << "Swap 1: " << swap1 << "\n";
  std::cout << "Swap 2: " << swap2 << "\n";
  swap(swap1, swap2);
  std::cout << "Swap 1: " << swap1 << "\n";
  std::cout << "Swap 2: " << swap2 << "\n";

  // Pasando arrays a funciones

  int vector1[] = {1, 2, 3, 4, 5};
  int *A;
  A = pointerToArray(5);

  std::cout << "returning pointer from a function, am from function " << A
            << "\n";
  std::cout << "returning pointer from a function am from first element "
            << A[1] << "\n";
  arrayParameterPassing(vector1, 5);

  // Pasando structs a funciones
  struct Rectangle r1 = {10, 10};
  std::cout << "Los valores del struct antes de la funcion"
            << "\t";

  std::cout << "lenght: " << r1.length << "\t"
            << "breadth: " << r1.breadth << "\n";

  std::cout << "El area del rectangulo es " << area(&r1) << "\n";

  std::cout << "Los valores del struct luego de la funcion"
            << "\t";

  std::cout << "lenght: " << r1.length << "\t"
            << "breadth: " << r1.breadth << "\n";
}
