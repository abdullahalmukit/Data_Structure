#include<bits/stdc++.h>
using namespace std;
class Node{
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
Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == NULL) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        int l,r;
        cin >> l>> r;
        Node* myleft,*myright;
        if(l==-1)  myleft = NULL;
        else myleft = new Node(l);
        if(r==-1) myright = NULL;
        else myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
int count_leaf_node(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l+r;
}
int max_height(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r) + 1;
}
int main(){
    Node* root = input_tree();
    cout << max_height(root) << endl;

    return 0;
}