#include <bits/stdc++.h>

struct Rectangle {
  int length;
  int breadth;
};

void initialize(struct Rectangle *r, int l, int b) {
  r->length = l;
  r->breadth = b;
}

void changeLength(struct Rectangle *r, int newLength) { r->length = newLength; }

int area(struct Rectangle r) { return r.length * r.breadth; }

int main() {
  struct Rectangle ptr1;

  initialize(&ptr1, 10, 5);
  area(ptr1);
  changeLength(&ptr1, 20);

  return 0;
}
