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

void insert_at_head(Node* &head, int value)
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
        return;
    }
    tail->next = newtail;
    tail = newtail;
    // tail = tail->next
}
void insert_at_any_position(Node* &head, int index, int value)
{
    Node* newnode = new Node(value);
    Node* temp = head;
    for(int i = 0 ; i<index-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void print_link_list(Node* head)
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

    insert_at_head(head,05);
    insert_at_tail(head,tail,50);
    insert_at_any_position(head,3,25);

    print_link_list(head);

    


    return 0;
}