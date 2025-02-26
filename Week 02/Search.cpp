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
}
int find_index(Node* &head,int val)
{
    Node* temp = head;
    int index = 0;
    while(temp != NULL)
    {
        if(temp->value == val )
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
    
}
int main()
{
    int t;
    cin >> t;
    while(t--)
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
        int x;
        cin >> x;
        cout << find_index(head,x) << endl;

    }
    
    return 0;
}