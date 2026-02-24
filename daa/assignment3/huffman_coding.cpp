#include <bits/stdc++.h>
using namespace std;
struct Node{
    char ch;
    int freq;
    Node *left,*right;
    Node(int c,int f){
        ch=c;
        freq=f;
        left=right=nullptr;
    }
};
struct cmp{
    bool operator()(Node*a,Node*b){
    return a->freq>b->freq;
}
};
Node* huffman(vector<char>&chars,vector<int>&freq){
    int n=chars.size();
    priority_queue<Node*,vector<Node*>,cmp>pq;
    for (int i=0;i<n;i++){
        pq.push(new Node(chars[i],freq[i]));
    }
    while(pq.size()>1){
        Node*x=pq.top();
        pq.pop();
        Node*y=pq.top();
        pq.pop();
        Node*z=new Node('#',x->freq+y->freq);
        z->left=x;
        z->right=y;
        pq.push(z);
    }
    return pq.top();
}
void dfs(Node*root,string str){
    if (!root){return ;}
    if (!root->left&&!root->right){
        cout << root->ch << " : " << str << "\n";
        return ;
    }
    dfs(root->left,str+"0");
    dfs(root->right,str+"1");
}
void bfs(Node*root){
    if (!root){return ;}
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if (temp->ch!='#'){
            cout << temp->ch << " " << temp->freq << " ";
        }
        else {
            cout << "#" << temp->freq << " ";
        }
        if (temp->left)q.push(temp->left);
        if (temp->right)q.push(temp->right);
        cout << "\n";
    }

}
int main (){
    vector<char>chars={'a','b','c','d','e','f'};
    vector<int>freq={45,13,12,16,9,5};
    Node*root=huffman(chars,freq);
    cout << "tree using dfs \n ";
    dfs(root,"");
    cout << "\ntree using bfs\n";
    bfs(root);
return 0;
}
