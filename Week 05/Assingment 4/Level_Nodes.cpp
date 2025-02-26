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
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
    return root;
}

int max_height(Node* root) 
{
    if (root == NULL) 
    {
        return 0; 
    }

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

void print_level_nodes(Node* root, int level) 
{
    if (root == NULL) 
    {
        cout << "Invalid" << endl;
        return;
    }

    int height = max_height(root);
    if (level > height) 
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    int current_level = 0;

    while (!q.empty()) 
    {
        int size = q.size();
        
        if (current_level == level) 
        {
            for (int i = 0; i < size; i++) 
            {
                Node* node = q.front();
                q.pop();
                cout << node->value << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < size; ++i) 
        {
            Node* node = q.front();
            q.pop();

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        current_level++;
    }

    cout << "Invalid" << endl;
}

int main() 
{
    Node* root = input_tree();

    int level;
    cin >> level;

    print_level_nodes(root, level);

    return 0;
}
