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

int index_of(Node* &head)
{
    Node *temp = head;
    int sz = 0;

    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }

    return sz;
}
void print_link_list(Node* & head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int compare_link_list(Node* &head1, Node* &head2)
{
    Node* temp_1 = head1;
    Node* temp_2 = head2;
    int flag = 0;
    while(temp_1 != NULL && temp_2 != NULL)
    {
        if(temp_1->value != temp_2->value)
        {
            return 1;
        }
        temp_1= temp_1->next;
        temp_2 = temp_2->next;
    }
    return flag;
    
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_at_tail(head1,tail1,value);
    }
    
    while (true)
    {
            int value;
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,value);
    }
    int size_1 = index_of(head1);
    int size_2 = index_of(head2);

    if(size_1 != size_2)
    {
        cout << "NO" << endl;
    }
    else
    {
        int ans = compare_link_list(head1,head2);
        if(ans == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    

    return 0;
}