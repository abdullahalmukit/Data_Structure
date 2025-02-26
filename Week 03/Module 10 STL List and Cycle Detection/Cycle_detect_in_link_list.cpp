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
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = b;

    Node* slow = head;
    Node* first = head;

    bool flag = false;

    while (first != NULL && first->next != NULL)
    {
        slow = slow->next;
        first = first->next->next;
        
        if(slow == first)
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
        cout << "Yes this is a Cycle" << endl;
    else
        cout << "No this is not a Cycle" << endl;
    

    return 0;
}