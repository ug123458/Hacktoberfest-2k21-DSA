#include <iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node* next;
};
void Middle(Node *head)
{
    Node *slow_ptr = head;
    Node *fast_ptr = head;
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        cout << "\nThe middle element is " << slow_ptr->data << endl;
    }
}
void print(Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
int main()
{
    Node* a = newNode(5);
    a->next = newNode(10);
    a->next->next = newNode(15);
    a->next->next->next = newNode(40);
    cout << "Given linked list\n";
    print(a);
    Middle(a);
    return 0;
}
