#include <stdio.h>
#include <stdlib.h>
//creating structure of a node
struct node {
   int data;
   struct node* next;
};
//function to find and print alternate node
void alternate(struct node* head) {
   int count = 0;
   while (head != NULL) {
      if (count % 2 == 0)
         printf(" %d ", head->data);
      count++;
      head = head->next;
   }
}
//pushing element into the list
void push(struct node** header, int newdata) {
   struct node* newnode =
   (struct node*)malloc(sizeof(struct node));
   newnode->data = newdata;
   newnode->next = (*header);
   (*header) = newnode;
}
int main() {
   printf("alternate nodes are :");
   struct node* head = NULL;
   push(&head, 1); //calling push function to push elements in list
   push(&head, 9);
   push(&head, 10);
   push(&head, 21);
   push(&head, 80);
   alternate(head);
   return 0;
}
