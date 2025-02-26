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
void insertion_at_head (Node* &head, int value)
{
    Node* newhead = new Node(value);
    newhead->next = head;
    head = newhead;
}
void insertion_at_tail (Node* &head, Node* &tail, int value)
{
    Node* newtail = new Node(value);
    if(head == NULL)
    {
        head = newtail;
        tail = newtail;
        return;
    }
    tail->next = newtail;
    tail = tail->next;
    // tail = newnode;  // eta korlew hobe

}
void insertion_at_any_place (Node* &head, int index, int value)
{
    Node* newnode = new Node(value);
    Node* temp = head;
    for(int i = 1; i<index ; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}
void print_link_list (Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
void print_reverse (Node* temp)
{
    if(temp == NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout << temp->value << endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insertion_at_tail(head,tail,value);
    }
    
    print_reverse(head);
    

    return 0;
}