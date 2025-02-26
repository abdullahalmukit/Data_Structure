#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node {
public:
    int value;
    Node *left, *right;
    Node(int value) : value(value), left(NULL), right(NULL) {}
};

Node* input_tree() {
    int value;
    cin >> value;
    if (value == -1) return NULL;

    Node* root = new Node(value);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        if (l != -1) {
            current->left = new Node(l);
            q.push(current->left);
        }
        if (r != -1) {
            current->right = new Node(r);
            q.push(current->right);
        }
    }
    return root;
}

void print_left_boundary(Node* root) {
    if (!root) return;
    if (root->left || root->right) print_left_boundary(root->left);
    cout << root->value << " ";
}

void print_right_boundary(Node* root) {
    if (!root) return;
    cout << root->value << " ";
    if (root->right || root->left) print_right_boundary(root->right);
}

void print_outer_nodes(Node* root) {
    if (!root) return;
    print_left_boundary(root->left);
    cout << root->value << " ";
    print_right_boundary(root->right);
}

int main() {
    Node* root = input_tree();
    print_outer_nodes(root);
    return 0;
}
