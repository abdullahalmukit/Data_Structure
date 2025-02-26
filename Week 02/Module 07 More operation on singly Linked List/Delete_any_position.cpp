#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* next ;

    Node(int value )
    {
        this->value = value ;
        this->next = NULL ;
    }
};
void insert_at_head(Node* head, int value)
{
    Node* newhead = new Node(value);
    newhead->next = head;
    head = newhead;
}
void insert_at_tail(Node* &head, Node* &tail, int value)
{
    Node* newtail = new Node(value);
    if(head == NULL)
    {
        head = newtail;
        tail = newtail;
    }
    tail->next = newtail;
    tail = newtail;
}
void insert_at_any_position(Node* &head, int index, int value)
{
    Node* newnode = new Node(value);
    Node* temp = head;
    for(int i = 0; i<index-1 ; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void delete_head(Node* &head)
{
    Node* deletehead = head;
    head = head->next;
    delete deletehead;
}

// delete Node any position
void delete_any_position(Node* &head,int index)
{
    Node* temp = head;
    for(int i = 0 ; i<index-1; i++)
    {
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = deletenode->next;
    delete deletenode;
}
void print_link_list(Node* &head)
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
    // delete_head(head);
    delete_any_position(head,1);
    print_link_list(head);
    

    return 0;
}