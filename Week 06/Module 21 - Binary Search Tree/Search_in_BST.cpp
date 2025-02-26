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
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node* myleft , *myright;
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
bool search(Node* root, int val){
    if(root == NULL){
        return false;
    }
    if(root->value == val){
        return true;
    }
    if(val < root->value){
        bool l = search(root->left,val);
        return l;
    }
    else{
        bool r = search(root->right,val);
        return r;
    }
}
int main()
{
    Node* root = input_tree();
    int val;
    cin >> val;
    if(search(root,val)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    return 0;
}