#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   Node *next;
};
void deleteAlternateNodes(Node *head) {
   if (head == NULL)
      return;
   Node *prev = head;
   Node *node = head->next;
   while (prev != NULL && node != NULL) {
      prev->next = node->next;
      free(node);
      prev = prev->next;
      if (prev != NULL) {
         node = prev->next;
      }
   }
}
void insertNode(Node** head_ref, int new_data) {
   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = (*head_ref);
   (*head_ref) = new_node;
}
void printLinkedList(Node *node) {
   while (node != NULL) {
      cout << node->data << " -> ";
      node = node->next;
   }
}
int main() {
   Node* head = NULL;
   insertNode(&head, 1);
   insertNode(&head, 2);
   insertNode(&head, 3);
   insertNode(&head, 4);
   insertNode(&head, 5);
   insertNode(&head, 6);
   cout << "Linked List before deletion:" << endl;
   printLinkedList(head);
   deleteAlternateNodes(head);
   cout << "\nLinked List after deletion:" << endl;
   printLinkedList(head);
   return 0;
}
