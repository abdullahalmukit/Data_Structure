#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insertion_at_head(Node* &head, int value)
{
    Node* newhead = new Node(value);
    newhead->next = head;
    head = newhead;
}
void insertion_at_tail(Node* &head ,int value)
{
    Node* newtail = new Node(value);
    if(head == NULL)
    {
        head = newtail;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newtail;
}
void pirnt_link_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
int main()
{
    Node* head = NULL;
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);

    // head->next = a;
    // a->next = b;

    insertion_at_head(head,5);
    insertion_at_head(head,1);

    insertion_at_tail(head,40);
    insertion_at_tail(head,50);

    pirnt_link_list(head);

    return 0 ;
}