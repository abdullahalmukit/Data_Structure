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
    if(root)q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node* mylelft,*myright;
        if(l== -1) mylelft = NULL;
        else mylelft = new Node(l);
        if(r==-1) myright = NULL;
        else myright = new Node(r);
        f->left = mylelft;
        f->right = myright;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
    

}

int count_nodes(Node* root)
{
    if(root == NULL){
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}
// int count_leaf_nodes(Node* root)
// {
//     if(root == NULL){
//         return 0;
//     }
//     if(root->left == NULL && root->right == NULL){
//         return 1;
//     }
//     int l = count_leaf_nodes(root->left);
//     int r = count_leaf_nodes(root->right);
//     return l+r;
// }
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
int main()
{
    Node* root = input_tree();
    cout << count_leaf_nodes(root);

    return 0;
}