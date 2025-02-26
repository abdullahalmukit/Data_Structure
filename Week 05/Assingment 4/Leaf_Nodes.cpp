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

        Node* myLeft,* myRight;
        if (l == -1) myLeft = NULL;
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

void leaf_nodes(Node* root, vector<int>& v) 
{
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL) 
    {
        v.push_back(root->value);
         return;
    }

    leaf_nodes(root->left, v);
    leaf_nodes(root->right, v);
}

int main() 
{
    Node* root = input_tree();
    vector<int> v;

    leaf_nodes(root, v);

    sort(v.rbegin(), v.rend());

    for (auto val : v) 
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
