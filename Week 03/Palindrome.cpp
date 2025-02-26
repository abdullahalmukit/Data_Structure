// #include<bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int value;
//     Node* next;
//     Node* prev;

//     Node(int value) {
//         value = value;
//         next = NULL;
//         prev = NULL;
//     }
// };


// void insert_at_tail(Node* head,Node* tail,int value) 
// {
//     Node* newNode = new Node(value);
//     if (head==NULL) 
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     } 
 
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
    
// }

// bool isPalindrome(Node* head, Node* tail) 
// {
//     Node* temp1 = head;
//     Node* temp2 = tail;
//     while (temp1 != NULL && temp2 != NULL && temp1 != temp2 && temp1->prev != temp2) 
//     {
//         if (temp1->value != temp2->value) 
//         {
//             return false;
//         }

//         temp1 = temp1->next; 
//         temp2 = temp2->prev; 
//         return true;
//     }
// }
// int main() 
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     int value;
//     while(cin >> value)
//     {
//         if(value == -1)
//         {
//             break;
//         }
//         insert_at_tail(head,tail,value);
//     }

//     if(isPalindrome(head,tail))
//     {
//         cout << "YES"<< endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
   
    

    

//     return 0;
// }



#include<bits/stdc++.h>
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
        next = NULL;
        prev = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int value) 
{
    Node* newNode = new Node(value);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool isPalindrome(Node* head, Node* tail) 
{
    Node* temp1 = head; 
    Node* temp2 = tail; 

    while (temp1 != temp2 && temp1->prev != temp2) 
    {
        if (temp1->value != temp2->value) 
        { 
            return false;
        }
        temp1 = temp1->next; 
        temp2 = temp2->prev; 
    }
    return true; 
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while (cin >> value) 
    {
        if (value == -1) 
        {
            break; 
        }
        insert_at_tail(head, tail, value);
    }

    if (isPalindrome(head, tail)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
