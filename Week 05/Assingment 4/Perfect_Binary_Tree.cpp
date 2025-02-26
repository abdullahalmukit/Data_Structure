#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int value) 
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() 
{
    int value;
    cin >> value;

    Node* root;
    if (value == -1) root = NULL;
    else root = new Node(value);

    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) 
    {
        Node* f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;

        Node* myLeft, * myRight;
        if (l == -1) myLeft = NULL ;
        else myLeft = new Node(l);

        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left)  q.push(f->left);
        if (f->right)  q.push(f->right);
    }
        return root;
}

int max_height(Node* root) 
{
    if (root == NULL) 
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) 
    {
        return 0; 
    }
    int l = max_height(root->left);  
    int r = max_height(root->right); 
    return max(l, r) + 1;
}

int count_nodes(Node* root) 
{
    if (root == NULL) 
    {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + 1; 
}

int main() 
{
    Node* root = input_tree(); 
    
    int height = max_height(root);
    int total_nodes = count_nodes(root); 

    int p_nodes = pow(2, height + 1) - 1;

    if (total_nodes == p_nodes) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
