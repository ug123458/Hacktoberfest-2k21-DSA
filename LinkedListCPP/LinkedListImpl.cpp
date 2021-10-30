#include <iostream>
#include <vector>
using namespace std;
 
// A Linked List Node
class Node
{
  public:
    int key;        // data field
    Node* next;     // pointer to the next node
};
 
// Utility function to return new linked list node from the heap
Node* newNode(int key, Node* next)
{
    // allocate a new node in a heap and set its data
    Node* node = new Node;
    node->key = key;
 
    // set the `.next` pointer of the new node to point to the current
    // first node of the list.
    node->next = next;
 
    return node;
}
 
// Function for linked list implementation from a given set of keys
Node* constructList(vector<int> const &keys)
{
    Node* head, *node = nullptr;
 
    // start from the end of the array
    for (int i = keys.size() - 1; i >= 0; i--)
    {
        node = newNode(keys[i], node);
        head = node;
    }
 
    return head;
}
 
// Helper function to print a linked list
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        cout << ptr->key << " -> ";
        ptr = ptr->next;
    }
 
    cout << "nullptr";
}
 
int main()
{
    // input keys (in reverse order)
    vector<int> keys = { 4, 3, 2, 1 };
 
    // construct linked list
    Node *head = constructList(keys);
 
    // print linked list
    printList(head);
 
    return 0;
}

