#include <iostream>

struct ListNode {
  int val;
  ListNode *next;

  ListNode();
  ListNode(int x);
  ListNode(int x, ListNode *next);

  /* ListNode() : val(0), next(nullptr){}; */
  /* ListNode(int x) : val(x), next(nullptr){}; */
};

ListNode::ListNode(int x) {
  val = x;
  next = nullptr;
}
ListNode::ListNode() {
  val = 0;
  next = nullptr;
}
ListNode::ListNode(int x, ListNode *nextX) {
  val = x;
  next = nextX;
}

struct LinkedList {
  ListNode *head;

  LinkedList() : head(nullptr){};

  auto insert_back(int val) -> void {
    ListNode *newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
  }
  auto show_linked_list() -> void {
    ListNode *temp = new ListNode();
    temp = head;

    while (temp != nullptr) {
      std::cout << temp->val << " ";
      temp = temp->next;
    }
  }
};

auto main() -> int {
  LinkedList *linkedlist = new LinkedList();
  linkedlist->insert_back(10);
  linkedlist->insert_back(20);
  linkedlist->insert_back(30);
  linkedlist->show_linked_list();

  delete linkedlist;

  return 0;
}
