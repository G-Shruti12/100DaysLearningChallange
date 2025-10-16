#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;
};

class DDL {
private:
    Node *first;
public:
    DDL();
    void insertAtFirst(int x);
    void insertAtEnd(int data);
    Node* search(int data);
    void insertBet(Node*, int);
    void deleteBet(Node *temp);
    void deleteItem(int data);
    void deleteLast();
    ~DDL();
};

DDL::DDL() { first = nullptr; }

void DDL::insertAtFirst(int x) {
    Node *ptr = new Node;
    ptr->data = x;
    ptr->prev = nullptr;
    ptr->next = first;
    if (first != nullptr)
        first->prev = ptr;
    first = ptr;
}

void DDL::insertAtEnd(int data) {
    Node *ptr = new Node;
    ptr->data = data;
    ptr->next = nullptr;
    if (first == nullptr) {
        ptr->prev = nullptr;
        first = ptr;
        return;
    }
    Node *temp = first;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = ptr;
    ptr->prev = temp;
}

Node* DDL::search(int data) {
    Node *t = first;
    while (t != nullptr && t->data != data)
        t = t->next;
    return t;
}

void DDL::insertBet(Node *ptr, int data) {
    if (ptr == nullptr) return;
    Node *temp = new Node;
    temp->data = data;
    temp->next = ptr->next;
    temp->prev = ptr;
    if (ptr->next != nullptr)
        ptr->next->prev = temp;
    ptr->next = temp;
}

void DDL::deleteBet(Node *temp) {
    if (temp == nullptr) return;
    if (temp == first) {
        first = temp->next;
        if (first != nullptr)
            first->prev = nullptr;
        delete temp;
        return;
    }
    if (temp->next != nullptr)
        temp->next->prev = temp->prev;
    if (temp->prev != nullptr)
        temp->prev->next = temp->next;
    delete temp;
}

void DDL::deleteItem(int data) {
    Node *temp = search(data);
    deleteBet(temp);
}

void DDL::deleteLast() {
    if (first == nullptr)
        return;
    if (first->next == nullptr) {
        delete first;
        first = nullptr;
        return;
    }
    Node *temp = first;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
}

DDL::~DDL() {
    while (first != nullptr)
        deleteLast();
}

int main() {
    DDL a;
    a.insertAtFirst(10);
    a.insertAtEnd(20);
    a.insertAtEnd(30);
    a.deleteItem(20);
}
