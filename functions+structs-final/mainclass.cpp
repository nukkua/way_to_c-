#include <iostream>

using entero = int;

class Rectangle {

private:
  int length;
  int breadth;

public:
  Rectangle() {
    length = 1;
    breadth = 1;
  }
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }

  int area() { return length * breadth; }

  int getLength() { return length; }
  void setLength(int l) { length = l; }
  ~Rectangle();
};

int main() {
  Rectangle r(10, 5);
  std::cout << "Length de r : " << r.area() << "\n";
  std::cout << "Length de r : " << r.area() << "\n";

  return 0;
}
