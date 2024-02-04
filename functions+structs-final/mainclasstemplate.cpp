#include <vector>

template <class T> class Rectangle {
private:
  int length;
  int breadth;

public:
  Rectangle(T l, T b);
  T area();
  T perimeter();
};
template <class T> Rectangle<T>::Rectangle(T l, T b) {
  length = l;
  breadth = b;
}
template <class T> T Rectangle<T>::area() { return length * breadth; }

template <class T> T Rectangle<T>::perimeter() {
  return 2 * (length + breadth);
}

int main() {
  std::vector<int> v1(0);

  return 0;
}
