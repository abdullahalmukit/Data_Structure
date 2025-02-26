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
        this->next = NULL;
    }
};
void insert_at_head(Node* &head, int value)
{
    Node* newhead = new Node(value);
    newhead->next = head;
    head->previous = newhead;
    head = newhead;
}
void print_link_list_forword(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_link_list_backward(Node* tail)
{
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->value;
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

    insert_at_head(head,40);
    insert_at_head(head,5);
    

    print_link_list_forword(head);

    return 0;
}