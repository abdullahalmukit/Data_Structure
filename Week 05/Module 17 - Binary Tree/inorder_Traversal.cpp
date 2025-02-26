#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* left ;
    Node* right;

    Node(int value )
    {
        this->value = value ;
        this->left = NULL ;
        this->right = NULL;
    }
};
void preorder(Node* root)  // Preorder Traversal - video 17_10 dekhle clear hobe
{
    if(root == NULL)
    {
        return;
    }
    cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root) // Inorder Traversal - vedio 17_12 dekhle clear hobe
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    preorder(root);
    cout << endl;
    inorder(root);

    return 0;
}