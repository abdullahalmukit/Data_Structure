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

void insert_at_head(Node* &head,Node* &tail, int value)
{
    Node* newhead = new Node(value);
    if(head == NULL)
    {
        head = newhead;
        tail = newhead;
    }
    newhead->next = head;
    head->previous = newhead;
    head = newhead;
}

void insert_at_tail(Node* &head, Node* &tail,int value)
{
    Node* newtail = new Node(value);
    if(head == NULL)
    {
        head = newtail;
        tail = newtail;
    }
    tail->next = newtail;
    newtail->previous = tail;
    tail = newtail;
}

void insert_any_position(Node* &head,int index,int value)
{
    Node* newnode = new Node(value);
    Node* temp = head;
    for(int i = 0 ; i<index-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->previous = newnode;
    temp->next = newnode;
    newnode->previous = temp;
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

void delete_at_head(Node* &head,Node* &tail)
{
    Node* deletenoe = head;
    head = head->next;
    delete deletenoe;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->previous = NULL;
}

void delete_at_tail(Node* &head,Node* &tail)
{
    Node* deletenode = tail;
    tail = tail->previous;
    delete deletenode;
    if(tail== NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_any_position(Node* &head,int index)
{
    Node* temp = head;
    for(int i = 0; i<index-1; i++)
    {
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    temp->next->previous = temp;
    delete deletenode;
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

    insert_at_head(head,tail,40);
    insert_at_head(head,tail,5);

    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,60);

    insert_any_position(head,2,25);

    delete_at_head(head,tail);

    delete_at_tail(head,tail);

    delete_at_any_position(head,1);
    
    

    

    print_link_list_forword(head);

    return 0;
}