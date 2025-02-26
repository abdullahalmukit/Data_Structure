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
    if (value == -1) 
        root = NULL;
    else 
        root = new Node(value);

    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) 
    {
        Node* f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;
        if (l == -1) myLeft = NULL;
        else  myLeft = new Node(l);

        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left)  q.push(f->left);
        if (f->right)  q.push(f->right);
    }
    return root;
}

int sum_without_leaf_nodes(Node* root) {
    if (root == NULL) 
        return 0;

    if (root->left == NULL && root->right == NULL) 
        return 0;

    int leftSum = sum_without_leaf_nodes(root->left);
    int rightSum = sum_without_leaf_nodes(root->right);

    return root->value + leftSum + rightSum;
}

int main() 
{
    Node* root = input_tree();
    cout << sum_without_leaf_nodes(root) << endl;

    return 0;
}
