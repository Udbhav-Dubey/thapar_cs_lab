#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
Node* insertatFront(int data,Node*head){
    Node* newnode=new Node(data);
    newnode->next=head;
    return newnode;
}
Node* insertatBack(int data,Node*head){
    if (head==nullptr){return head;}
    Node*curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    Node* newnode=new Node(data);
    curr->next=newnode;
    newnode->next=nullptr;
    return head;
}
void printy(Node* head){
    Node*curr=head;
    while(curr!=nullptr){
        cout << curr->data << "-";
        curr=curr->next;
    }
    cout << "\n";
}
Node*deleteFirstNode(Node* head){
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node*deleteLastNode(Node* head){
    Node*curr=head;
    while(curr->next->next!=nullptr){
        curr=curr->next;
    }
    curr->next=nullptr;
    return head;
}
Node*insertAtMiddle(Node*head,int data){
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*newnode=new Node(data);
    Node*temp=slow->next;
    slow->next=newnode;
    newnode->next=temp;
    return head;
}
Node* deleteAtMiddle(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    if (slow->next != nullptr) {
    Node* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;
    }
    return head;
}
int main (){
    cout << "please insert data in linked list ";
    int x;
    Node*head=nullptr;
    Node*tail=nullptr;
    while(cin>>x){
        Node* new_node=new Node(x);
        if (head==nullptr){
            head=new_node;
            tail=new_node;
        }
        else {
            tail->next=new_node;
            tail=new_node;
        }
        if (cin.peek()=='\n') break;
    }
    cout << "enter the element to insert at front : ";
    int fe;
    cin>>fe;
    head=insertatFront(fe,head);
    printy(head);
    cout << "enter the element to insert at back : ";
    int be;
    cin>>be;
    head=insertatBack(be,head);
    printy(head);
    cout << "now deleting the first node : ";
    head=deleteFirstNode(head);
    printy(head);
    cout << "now deleting the last node : " ;
    head=deleteLastNode(head);
    printy(head);
    cout << "enter the element to insert at middle node : ";
    int me;
    cin>>me;
    head=insertAtMiddle(head,me);
    printy(head);
    cout << "delete at middle : ";
    head=deleteAtMiddle(head);
    printy(head);
return 0;
}
