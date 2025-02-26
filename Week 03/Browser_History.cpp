#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string value;
    Node* next;
    Node* prev;

    Node(string value) {
        this->value = value;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, string value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}




int main() {
    Node* head = NULL;
    Node* tail = NULL;

    string value;
    while (cin >> value ) 
    {
        if(value != "end")
        insert_at_tail(head, tail, value);
    }

    int n;
    cin >> n;

    string commend, address;
    while(n--)
    {
        cin >> commend;
        if(commend == "visit")
        {
            cin >> address;
        }
    }

    return 0;
}




// void process_queries(Node* head, int Q) {
//     Node* current = head; // Start at the head of the list
//     string command, address;

//     while (Q--) {
//         cin >> command;

//         if (command == "visit") {
//             cin >> address;
//             Node* temp = head;
//             bool found = false;
//             while (temp != NULL) {
//                 if (temp->value == address) {
//                     found = true;
//                     current = temp;
//                     break;
//                 }
//                 temp = temp->next;
//             }
//             if (found) {
//                 cout << current->value << endl;
//             } else {
//                 cout << "Not Available" << endl;
//             }
//         } 
//         else if (command == "next") {
//             if (current->next != NULL) {
//                 current = current->next;
//                 cout << current->value << endl;
//             } else {
//                 cout << "Not Available" << endl;
//             }
//         } 
//         else if (command == "prev") {
//             if (current->prev != NULL) {
//                 current = current->prev;
//                 cout << current->value << endl;
//             } else {
//                 cout << "Not Available" << endl;
//             }
//         }
//     }
// }