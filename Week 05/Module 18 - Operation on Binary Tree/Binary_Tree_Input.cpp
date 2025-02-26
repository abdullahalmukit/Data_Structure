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

Node* input_tree()
{
    int value;
    cin >> value;
    Node* root;
    if(value == -1) root = NULL;
    else root = new Node(value);
    queue<Node*> q;
    if(root != NULL) q.push(root);
    // if(root) q.push(root);
    while (!q.empty())
    {
        // 1. Ber kore ante hobe
        Node* p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
        int l,r;
        cin >> l >> r;
        Node* myleft, *myright;
        if(l == -1){
            myleft = NULL;
        }else{
            myleft = new Node(l);
        }
        if(r == -1){
            myright = NULL;
        }else{
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;

        // 3. children push korte hobe
        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
void levelorder(Node* root)
{
    if(root == NULL)
    {
        cout << "No Tree"<< endl;
        return;
    }
    queue<Node*> q; 
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->value << " ";

        if(f->left != NULL)
        {
            q.push(f->left);
        }
        if(f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    Node* root = input_tree();
    levelorder(root);

    return 0;
}