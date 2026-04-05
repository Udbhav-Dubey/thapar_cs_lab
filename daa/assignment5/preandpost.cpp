#include <bits/stdc++.h>
using namespace std;
struct Node{
    Node*right;
    Node*left;
    int value;
    Node(int val){
        value=val;
        left=right=nullptr;
    }
};
void preorder(Node*curr){
    if (!curr){return ;}
    cout << curr->value << " ";
    preorder(curr->left);
    preorder(curr->right);
}
void postorder(Node*curr){
    if (!curr){return ;}
    postorder(curr->left);
    postorder(curr->right);
    cout << curr->value <<" ";
}
void inorder(Node*curr){
    if (!curr){return ;}
    inorder(curr->left);
    cout << curr->value << " ";
    inorder(curr->right);
}
    int main() {
    // Creating nodes
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Traversals
    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
