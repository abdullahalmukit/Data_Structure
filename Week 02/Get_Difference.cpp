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
void insert_at_tail(Node* &head , Node* &tail, int value)
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
}

int get_difference(Node* head)
{
    Node* temp = head;
    int max_v = temp->value;
    int min_v = temp->value;
    while (temp != NULL)
    {
        max_v = max(max_v,temp->value);
        min_v = min(min_v,temp->value);
        temp = temp->next;
    }
    return max_v - min_v;
    
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
    int difference = get_difference(head);
    cout << difference << endl;
    return 0;
}