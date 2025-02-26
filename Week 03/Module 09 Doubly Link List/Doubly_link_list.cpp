#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* next ;
    Node* previous;

    Node(int value )
    {
        this->value = value ;
        this->next = NULL ;
        this->previous = NULL;
    }
};

void print_link_list_forward(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " "; 
        temp = temp->next;
    }
    cout << endl;
}
void print_link_list_backward(Node* &tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->previous;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->previous = head;
    a->next = tail;
    tail->previous = a;

    print_link_list_forward(head);
    print_link_list_backward(tail);
    
    return 0;
}