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
    }
    tail->next = newtail;
    tail = newtail;
}
void print_link_list(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void remove_duplicates(Node* &head) 
{

    Node* temp_1 = head;
    while (temp_1 != NULL) 
    {
        Node* temp_2 = temp_1;
        while (temp_2->next != NULL) 
        {
            if (temp_1->value == temp_2->next->value) 
            {
                Node* duplicate_node = temp_2->next;
                temp_2->next = temp_2->next->next;
                delete duplicate_node;
            } 
            else 
            {
                temp_2 = temp_2->next;
            }
        }
        temp_1 = temp_1->next;
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
    remove_duplicates(head);
    print_link_list(head);
    

    
    return 0;
}