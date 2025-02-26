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

void reverse_doubly(Node* head , Node* tail)
{
    for(Node* i = head , * j = tail ;  i != j && i->previous != j ; i = i->next , j= j->previous  )
    {
        swap(i->value,j->value);
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_at_tail(head,tail,value);
    }

    reverse_doubly(head,tail);

    print_link_list_forword(head);

    return 0;
}