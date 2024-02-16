#include <iostream>
#include <vector>

#define PI 3.14159265

#define forVec(a, b) for (int(a) : (b))
using vInt = std::vector<int>; // es la forma moderna de un typedef, la forma no
                               // ruca de hacer typedefinitions
using entero = int;

int main() {
  /* int v1[10] = {1,2,3,4,5,6,7,8,9,10}; */
  /* OG form */

  nameUan ania = 10;
  vInt v10(10);
  vInt v1{1, 2, 3, 4, 5};

  vInt copy{1, 2, 3, 4, 5};
  forVec(i, v1) { std::cout << i << "\n"; }

  // For appending or erasing from the last position
  v1.push_back(10);
  v1.pop_back();

  // Making new vectors
  vInt v2{0, 1, 2, 3, 4, 5};
  vInt v3(5, 0); // array of size 5, and filled with 0

  vInt copyOfAVector = v2;

  // Accesing elements of the vector, the first and the last, and the og way
  std::cout << v2.front() << "\n";
  std::cout << v2.back() << "\n";
  std::cout << v2[1] << "\n";

  // Size --> size of the vector, how many element are actually inside the
  // vector Capacity --> How much elements at most could have the vector
  std::cout << v2.size() << "\n";
  v2.resize(100);

  std::cout << v2.capacity() << "\n";
  v2.reserve(100);

  std::cout << "Capacity at the start" << copy.capacity() << "\n";
  copy.push_back(12);
  std::cout << "Capacity at the end" << copy.capacity() << "\n";
}
