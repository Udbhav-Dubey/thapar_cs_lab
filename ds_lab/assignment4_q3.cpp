#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        this->next = this->prev = nullptr;
    }
};
Node* insertAtFirst(Node* head, int data) {
    Node* newnode = new Node(data);
    if (!head) {
        newnode->next = newnode;
        newnode->prev = newnode;
        return newnode;
    }
    Node* tail = head->prev;
    newnode->next = head;
    newnode->prev = tail;
    tail->next = newnode;
    head->prev = newnode;
    return newnode;
}
Node* insertAtLast(Node* head, int data) {
    Node* newnode = new Node(data);
    if (!head) {
        newnode->next = newnode;
        newnode->prev = newnode;
        return newnode;
    }
    Node* tail = head->prev;
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = head;
    head->prev = newnode;
    return head;
}
Node* deleteAtFirst(Node* head) {
    if (!head) return nullptr;
    if (head->next == head) {
        delete head;
        return nullptr;
    }
    Node* tail = head->prev;
    Node* newhead = head->next;
    tail->next = newhead;
    newhead->prev = tail;
    delete head;
    return newhead;
}

Node* deleteAtLast(Node* head) {
    if (!head) return nullptr;
    if (head->next == head) {
        delete head;
        return nullptr;
    }
    Node* tail = head->prev;
    Node* newtail = tail->prev;
    newtail->next = head;
    head->prev = newtail;
    delete tail;
    return head;
}

Node* insertAtMiddle(Node* head, int data) {
    if (!head) return insertAtFirst(head, data);
    Node* slow = head, *fast = head;
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newnode = new Node(data);
    Node* nxt = slow->next;
    slow->next = newnode;
    newnode->prev = slow;
    newnode->next = nxt;
    nxt->prev = newnode;
    return head;
}

Node* deleteAtMiddle(Node* head) {
    if (!head) return nullptr;
    if (head->next == head) {
        delete head;
        return nullptr;
    }
    Node* slow = head, *fast = head;
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow == head) return deleteAtFirst(head);
    Node* prev = slow->prev;
    Node* nxt = slow->next;
    prev->next = nxt;
    nxt->prev = prev;
    delete slow;
    return head;
}

void printList(Node* head) {
    if (!head) {
        cout << "List empty\n";
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << "\n";
}

int main() {
    Node* head = nullptr;
    cout << "Enter elements for initial list (end with newline): ";
    int x;
    while (cin >> x) {
        head = insertAtLast(head, x);
        if (cin.peek() == '\n') break;
    }
    cout << "Initial circular doubly linked list: ";
    printList(head);

    cout << "Enter element to insert at first: ";
    int f; cin >> f;
    head = insertAtFirst(head, f);
    printList(head);

    cout << "Enter element to insert at last: ";
    int l; cin >> l;
    head = insertAtLast(head, l);
    printList(head);

    cout << "Enter element to insert at middle: ";
    int m; cin >> m;
    head = insertAtMiddle(head, m);
    printList(head);

    cout << "Deleting first...\n";
    head = deleteAtFirst(head);
    printList(head);

    cout << "Deleting last...\n";
    head = deleteAtLast(head);
    printList(head);

    cout << "Deleting middle...\n";
    head = deleteAtMiddle(head);
    printList(head);

    return 0;
}

