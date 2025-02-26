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
    if(value==-1) root = NULL;
    else root = new Node(value);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int l,r;
        cin>> l>> r;
        Node* myleft,*myright;
        if(l==-1) myleft = NULL;
        else myleft = new Node(l);
        if(r==-1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
    

}

int sum_of_leaf_nodes(Node* root)
{
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return root->value;
    }
    int l = sum_of_leaf_nodes(root->left);
    int r = sum_of_leaf_nodes(root->right);
    return l+r;
}
int count_leaf_nodes(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = count_leaf_nodes(root->left);
    int r= count_leaf_nodes(root->right);
    return l+r;
}
int count_nodes(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l+r+1;
}
int main()
{
    Node* root = input_tree();
    cout << count_nodes(root);

    return 0; 
}