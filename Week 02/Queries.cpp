// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int value;
//     Node* next ;

//     Node(int value )
//     {
//         this->value = value ;
//         this->next = NULL ;
//     }
// };
// void insert_at_head(Node* &head,int value)
// {
//     Node* newhead = new Node(value);
//     newhead->next = head;
//     head = newhead;
// }
// void insert_at_tail(Node* &head, Node* &tail, int value)
// {
//     Node* newtail = new Node(value);
//     if(head == NULL)
//     {
//         head = newtail;
//         tail = newtail;
//         return;
//     }
//     tail->next = newtail;
//     tail = newtail;
// }
// void delete_at_node(Node* &head , int index)
// {
//     Node* temp = head;
//     for(int i = 0; i<index-1; i++)
//     {
//         temp = temp->next;
//     }
//     Node* deletenode = temp->next;
//     temp->next = temp->next->next;
//     delete deletenode;
// }
// void print_link_list(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout << temp->value << " " ;
//         temp = temp->next;
//     }
//     cout << endl;
// }   
// int main()
// {
//     int n;
//     cin >> n;

//     Node* head = NULL;
//     Node* tail = NULL;
    
//     for(int i = 0 ; i<n; i++)
//     {
        
//         int x,value;
//         cin >> x >> value;
//         if(x == 0)
//         {
//             insert_at_head(head,value);
//             print_link_list(head);
//         }
//         else if(x == 1)
//         {
//             insert_at_tail(head,tail,value);
//             print_link_list(head);
//         }
//         else if(x == 2)
//         {
//             delete_at_node(head,value);
//             print_link_list(head);
//         }
//     }

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int value;
//     Node* next ;

//     Node(int value )
//     {
//         this->value = value ;
//         this->next = NULL ;
//     }
// };
// void insert_at_head(Node* &head,Node* &tail, int value)
// {
//     Node* newhead = new Node(value);
//     newhead->next = head;
//     head = newhead;

//     if (tail == NULL) {
//         tail = newhead; // Update tail if the list was empty
//     }
// }
// void insert_at_tail(Node* &head, Node* &tail, int value)
// {
//     Node* newtail = new Node(value);
//     if(head == NULL)
//     {
//         head = newtail;
//         tail = newtail;
//         return;
//     }
//     tail->next = newtail;
//     tail = newtail;
// }
// void delete_at_node(Node* &head,int index)
// {
//     Node* temp = head;
//     for(int i = 0; i<index-1; i++)
//     {
//         temp = temp->next;
//     }
//     Node* deletenode = temp->next;
//     temp->next = temp->next->next;
//     delete deletenode;

// }
// void delete_at_head(Node* &head)
// {
//     Node* deletenote = head;
//     head = head->next;
//     delete deletenote;
// }
// void delete_tail(Node* &head, Node* &tail,int index)
// {
//     Node* temp = head;
//     for(int i = 0 ; i<index-1; i++)
//     {
//         temp = temp->next;
//     }
//     Node* deletenode = temp->next;
//     temp->next = temp->next->next;
//     // temp->next = deletenode->next;
//     delete deletenode;
//     tail = temp;
// }
// void print_link_list(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout << temp->value << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int size_link_list(Node* &head)
// {
//     Node* temp = head;
//     int count = 0;
//     while(temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     Node* head = NULL;
//     Node* tail = NULL;
    
//     for(int i = 0 ; i<n; i++)
//     {
//         int x,value;
//         cin >> x >> value;

//         if(x == 0)
//         {
//             insert_at_head(head,tail,value);
            
//         }
//         else if(x == 1)
//         {
//             insert_at_tail(head,tail,value);
           
//         }
//         else if( x == 2)
//         {
//             int size = size_link_list(head);
//             if(value == 0)
//             {
//                 delete_at_head(head);
//             }
//             else if(value == size )
//             {
//                 delete_tail(head,tail,size);
//             }
//             else if(value > 0 && size > value)
//             {
//                 delete_at_node(head,value);
//             }
            
            
//         }
//         print_link_list(head);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node 
// {
//     public:
//     int value;
//     Node* next;

//     Node(int value) 
//     {
//         this->value = value;
//         this->next = NULL;
//     }
// };

// void insert_at_head(Node* &head, Node* &tail, int value) 
// {
//     Node* newhead = new Node(value);
//     newhead->next = head;
//     head = newhead;
//     if (tail == NULL) 
//     {
//         tail = newhead; 
//     }
// }

// void insert_at_tail(Node* &head, Node* &tail, int value) 
// {
//     Node* newtail = new Node(value);
//     if (head == NULL) 
//     {
//         head = newtail;
//         tail = newtail;
//         return;
//     }
//     tail->next = newtail;
//     tail = newtail;
// }

// void delete_at_head(Node* &head, Node* &tail) 
// {
//     if (head == NULL) 
//     {
//         return; 
//     }
//     Node* temp = head;
//     head = head->next;
//     if (head == NULL) 
//     { 
//         tail = NULL;
//     }
//     delete temp;
// }

// void delete_at_tail(Node* &head, Node* &tail) 
// {
//     if (head == NULL) 
//     {
//         return; 
//     }
//     if (head == tail) 
//     { 
//         delete head;
//         head = NULL;
//         tail = NULL;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != tail) 
//     {
//         temp = temp->next;
//     }
//     delete tail;
//     temp->next = NULL;
//     tail = temp;
// }

// void delete_at_node(Node* &head, Node* &tail, int index) 
// {
//     if (head == NULL || index < 0) 
//     {
//         return; 
//     }
//     if (index == 0) 
//     {
//         delete_at_head(head, tail);
//         return;
//     }
//     Node* temp = head;
//     for (int i = 0; i < index - 1; i++) 
//     {
//         if (temp->next == NULL) 
//         {
//             return; 
//         }
//         temp = temp->next;
//     }
//     if (temp->next == NULL) 
//     {
//         return; 
//     }
//     Node* deletenode = temp->next;
//     temp->next = temp->next->next;
//     if (deletenode == tail) 
//     {
//         tail = temp; 
//     }
//     delete deletenode;
// }

// void print_link_list(Node* &head) 
// {
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->value << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     Node* head = NULL;
//     Node* tail = NULL;

//     for (int i = 0; i < n; i++) 
//     {
//         int x, value;
//         cin >> x >> value;

//         if (x == 0) 
//         {
//             insert_at_head(head, tail, value);
//         } 
//         else if (x == 1) 
//         {
//             insert_at_tail(head, tail, value);
//         } 
//         else if (x == 2) 
//         {
//             if (value == 0) 
//             {
//                 delete_at_head(head, tail);
//             } else 
//             {
//                 delete_at_node(head, tail, value);
//             }
//         }
//         print_link_list(head);
//     }

//     return 0;
// }
