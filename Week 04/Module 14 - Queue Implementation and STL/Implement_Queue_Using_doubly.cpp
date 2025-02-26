#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* next ;
    Node* prev;

    Node(int value )
    {
        this->value = value ;
        this->next = NULL ;
        this->prev = NULL;
    }
};

class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int value)
    {
        sz++;
        Node* newNode = new Node(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        if(head == NULL)
        {
            return;
        }
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
        }
    }
    
    int front()
    {
        return head->value;
    }
    int back()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    while(n--)
    {
        int value ;
        cin >> value;
        q.push(value);
    }
    // q.pop();
    // cout << q.front() << endl;
    // cout << q.back() << endl;
    // cout << q.size() << endl;

    while(! q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}