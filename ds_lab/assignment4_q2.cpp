#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next=nullptr;
    Node*prev=nullptr;
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
Node* insertAtFirst(Node*head,int data){
    Node* newnode=new Node(data);
    head->prev=newnode;
    newnode->prev=nullptr;
    newnode->next=head;
    return newnode;
}
Node* insertAtBack(Node*head,int data){
    Node*curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    Node*newnode=new Node(data);
    curr->next=newnode;
    newnode->next=nullptr;
    newnode->prev=curr;
    return head;
}
Node* deletefirstnode(Node *head){
    Node*temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
    return head;
}
Node* insertAtMiddle(Node*head,int data){
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* newnode=new Node(data);
    Node*temp=slow->next;
    slow->next=newnode;
    newnode->next=temp;
    temp->prev=newnode;
    newnode->prev=slow;
    return head;
}
Node* deleteatback(Node*head){
    Node*curr=head;
    while(curr->next->next!=nullptr){
        curr=curr->next;
    }
    curr->next=nullptr;
    return head;
}
Node *deleteAtMiddle(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    if (slow == head) {
        head = head->next;
        head->prev = nullptr;
    } 
    else {
        if (slow->prev) slow->prev->next = slow->next;
        if (slow->next) slow->next->prev = slow->prev;
    }

    delete slow;
    return head;
}
void printy(Node*head){
    Node*curr=head;
    while(curr!=nullptr){
        cout << curr->data << "-" ;
        curr=curr->next;
    }
    cout << "\n";
}
int main (){
    Node*head=nullptr;
    Node*tail=nullptr;
    int x;
    while(cin>>x){
        Node* newnode=new Node(x);
        if (head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        if (cin.peek()=='\n') break;
    }
    int fe;
    cout << "enter the element at first : ";
    cin >> fe;
    head=insertAtFirst(head,fe);
    printy(head);
    int be;
    cout << "enter the element at back : ";
    cin >> be;
    head=insertAtBack(head,be);
    printy(head);
    cout << "delettion of first node : ";
    head=deletefirstnode(head);
    printy(head);
    cout << "deletion at back : ";
    head=deleteatback(head);
    printy(head);
    cout << "insert a element at middle : ";
    int me;
    cin >> me;
    head=insertAtMiddle(head,me);
    printy(head);
    cout << "delete at middle : ";
    head=deleteAtMiddle(head);
    printy(head);
return 0;
}
