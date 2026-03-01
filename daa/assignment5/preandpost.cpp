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
int main (){
    
return 0;
}
