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

class mystack
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
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {  // ek line e korte pari ->  return head == NULL; / return tail == NULL;
        if(head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    mystack st;
    
    int n;
    cin >> n;
    for(int i = 0 ; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // cout << st.top() << endl;
    // if(st.empty() == false)
    // {
    //     st.pop();
    // }
    // cout << st.size() << endl;
    while(st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}


