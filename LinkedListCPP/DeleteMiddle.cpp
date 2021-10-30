#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node* next;
};
struct Node* deleteMiddleNode(struct Node* head) {
   if (head == NULL) {
      return NULL;
   }
   if (head->next == NULL) {
      delete head;
      return NULL;
   }
   struct Node* slow_ptr = head;
   struct Node* fast_ptr = head;
   struct Node* prev;
   while (fast_ptr != NULL && fast_ptr->next != NULL) {
      fast_ptr = fast_ptr->next->next;
      prev = slow_ptr;
      slow_ptr = slow_ptr->next;
   }
   prev->next = slow_ptr->next;
   delete slow_ptr;
   return head;
}
void printLinkedList(struct Node* node) {
   while (node != NULL) {
      cout << node->data << " -> ";
      node = node->next;
   }
   cout << "Null" << endl;
}
Node* newNode(int data) {
   struct Node* temp = new Node;
   temp->data = data;
   temp->next = NULL;
   return temp;
}
int main() {
   struct Node* head = newNode(1);
   head->next = newNode(2);
   head->next->next = newNode(3);
   head->next->next->next = newNode(4);
   head->next->next->next->next = newNode(5);
   head->next->next->next->next->next = newNode(6);
   cout << "Linked list before deleting middle node: ";
   printLinkedList(head);
   head = deleteMiddleNode(head);
   cout << "Linked List after deleting middle node: ";
   printLinkedList(head);
   return 0;
}
