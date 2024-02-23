#include <iostream>

class Rectangle {
private:
  int length;
  int breadth;

public:
  Rectangle() { length = breadth = 0; }

  Rectangle(int l, int b);

  int area();
  int perimeter();

  int getLength() { return length; }
  int getBreadth() { return breadth; }
  void setLength(int l) { length = l; }
  void setBreadth(int b) { breadth = b; }
  ~Rectangle();
};

Rectangle::Rectangle(int l, int b) {
  length = l;
  breadth = b;
}

int Rectangle::area() { return length * breadth; }

int Rectangle::perimeter() { return 2 * (length + breadth); }
Rectangle::~Rectangle() {
  std::cout << "Destructor executed"
            << "\n";
}

int main() { return 0; }
