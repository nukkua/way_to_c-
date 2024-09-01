#include <iostream>

struct Node {
  int x;
  Node *next;
  Node(int x, Node *next);
  Node(int x);
  Node();
  ~Node();
};

Node::Node(int x) {
  this->x = x;
  next = nullptr;
}
Node::Node() {
  x = 0;
  next = nullptr;
}
Node::Node(int x, Node *next) {
  this->x = x;
  this->next = next;
}

struct LinkedList {
  Node *head = new Node();

  LinkedList() { head = nullptr; }

  auto insert_last() -> void {
    Node *val = new Node();
    std::cout << "Insert value at the end " << "\n";
    std::cin >> val->x;
    if (head == nullptr) {
      head = val;
      return;
    }
    Node *temp = head;
    while (temp->next) {
      temp = temp->next;
    }
    temp->next = val;
  }

  auto insert_front() -> void {
    Node *val = new Node();
    std::cout << "Insert value at the front " << "\n";
    std::cin >> val->x;

    val->next = head;
    head = val;
  }

  auto delete_node() -> void {
    int z = 0;
    std::cout << "Insert the value of the node to delete" << "\n";

    std::cin >> z;

    Node *one = head;
    Node *twice = head;

    if (z == head->x) {
      head = one->next;
      one->next = nullptr;
      return;
    }
    while (twice) {
      if (twice->x == z) {
        one->next = twice->next;
        twice->next = nullptr;
      }
      one = twice;
      twice = twice->next;
    }
  }

  auto iterate_lk() -> void {
    Node *temp = head;
    while (temp) {
      std::cout << temp->x << " ";
      temp = temp->next;
    }
    std::cout << "\n";
  }
};

auto main() -> int {
  LinkedList *l1 = new LinkedList();

  l1->insert_front();
  l1->insert_front();
  l1->insert_front();
  l1->insert_last();
  l1->insert_last();
  l1->iterate_lk();
  l1->delete_node();
  l1->iterate_lk();

  return 0;
}
