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
Node* input_tree(){
    int val; 
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node* myleft,*myright;
        if(l==-1) myleft = NULL;
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
void print_levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout << f->value << " ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
// void insert(Node* &root, int val){
//     if(root == NULL){
//         root = new Node(val);
//         return;
//     }
//     if(root->value > val){
//         if(root->left == NULL){
//             root->left = new Node(val);
//         }
//         else{
//             insert(root->left,val);
//         }
//     }
//     else{
//         if(root->right == NULL){
//             root->right = new Node(val);
//         }
//         else{
//             insert(root->right,val);
//         }
//     }
// }

void insert(Node* &root,int val){
    if(root == NULL){
        root = new Node(val);
        return;
    }
    if(root->value > val){
        if(root->left == NULL){
            root->left = new Node(val);
        }
        else insert(root->left,val);
    }
    else{
        if(root->right == NULL){
            root->right = new Node(val);
        }
        else insert(root->right,val);
    }
}
int main()
{
    Node* root = input_tree();
    int n;
    cin >> n;
    insert(root,n);
    insert(root,11);
    print_levelorder(root);

    return 0;
}