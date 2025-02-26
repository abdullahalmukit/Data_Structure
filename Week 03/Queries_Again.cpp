#include <bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int value;
    Node* next;
    Node* prev;

    Node(int value) 
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL; 
    }
};

void printList(Node* head, Node* tail) 
{
    Node* temp = head ;
    cout << "L -> ";
    while (temp != NULL) 
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = tail;
    cout << "R -> ";
    while (temp != NULL) 
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_head(Node*& head, Node*& tail, int value) 
{
    Node* newNode = new Node(value);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    } 
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node*& head, Node*& tail, int value) 
{
    Node* newNode = new Node(value);
    if (tail == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    } 
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any_position(Node*& head, Node*& tail, int index, int value) 
{
    Node* newNode = new Node(value);
    Node* temp = head;
    for (int i = 0; i < index; ++i) 
    {
        temp = temp->next;
    }
    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev->next = newNode;
    temp->prev = newNode;
}

void insert_at(Node* & head , Node* &tail, int index , int value,  int  &size) 
{
    if (index < 0 || index > size) 
    {
        cout <<  "Invalid" <<  endl ;
        return;
    }

    if (index == 0) 
    {
        insert_at_head(head, tail, value);
    } 
    else if (index == size) 
    {
        insert_at_tail(head, tail, value);
    } 
    else 
    {
        insert_at_any_position(head, tail, index, value);
    }
    size++; 
    printList(head, tail);
}

int main() 
{
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;
    for (int i = 0; i < n; ++i) 
    {
        int index, value ;
        cin >>  index >> value;
        insert_at(head, tail, index, value, size );
    }
    return 0;
}
