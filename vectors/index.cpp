#include <iostream>
#include <vector>

#define forIt(a, b) for (int(a) : (b))

typedef std::vector<int> vInt;

int main() {
  std::vector<int> v{2, 5, 6, 1, 1};

  vInt v1(10);
  // El primer parametro es el size del vector, el segundo parametro es con que
  // mierda voy a rellenar, y sino lo especifico llena con 0

  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << "\n";
  }
  forIt(i, v1) { std::cout << v1[i] << "\n"; }

  std::cout << v.front() << "first element of the vector\n";
  std::cout << v.back() << "last element of the vector\n";

  std::cout << v1.front() << "first element of the vector\n";
  std::cout << v1.back() << "last element of the vector\n";

  v1.push_back(122); // insertar al final del vector
  std::cout << v1.back() << "last element of the vector 1\n";

  v.resize(6, 0);
  std::cout << v.back() << "last element of the vector resizing it \n";

  v1.pop_back();
  for (int i = 0; i < v1.size(); ++i) {
    std::cout << v1[i] << "\n";
  }
  v1.clear(); // limpia totalmente el vector como si fuera el poto de chesco
}
