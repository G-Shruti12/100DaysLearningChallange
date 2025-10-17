#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
};
class CLL{
    private:
    Node * first;
    public:
    CLL();
    void insertFirst(int data);
    void display();
     Node*search(int);
    void insertLast(int data);
    Node *search(int data);
    void insertAfter(Node *temp,int data);
    void deleteFirst();

};
void CLL::deleteFirst(){
    if(first){
        if(first->next==first){
        delete first;
        first=nullptr;
        }
        else{
            Node *r;
            r=first->next;
            first->next=r->next;
            delete r;
        }
    }
}
Node * CLL::search(int data){
    if(first){
        if(first->next == first){
            if(first->data==data)
            return first;
            else
            cout<<"not found";
        }
        else{
            Node *temp=first;
            while(temp->next!=first){
                if(temp->data==data)
                return temp;
                temp=temp->next;
            }
        }
    }
}
void CLL::insertAfter(Node *temp,int data){
    if(first){
    Node *ptr=new Node;
    ptr->data=data;
    if(temp->next==first){
        insertFirst(data);
    }
    else{
        ptr->next=temp->next;
        temp->next=ptr;
    }
}
}
CLL::CLL(){
    first=nullptr;
}
 void CLL::insertLast(int data){
    if(first==nullptr){
        insertFirst(data);
    }
    else{
        Node*r=first;
        Node*t=new Node;
        t->data=data;
        while ((r->next!=first))
           r=r->next;
           r->next=t;
           t->next=first;
        
    }
 }
void CLL::insertFirst(int data){
    Node *ptr=new Node;
    ptr->data=data;
    if(first==nullptr){
        first=ptr;
        ptr->next=ptr;
    }
    else{
        Node * temp=first;
        while(temp->next !=first){
            temp=temp->next;
        }
        ptr->next=first;
        temp->next=ptr;
        first=ptr;  
    }
}
void CLL::display() {
    if (first == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = first;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp!= first);
    cout << endl;
}
int main(){
    CLL c;
    c.insertFirst(10);
    c.insertFirst(20);
    c.insertFirst(30);
    c.display();
}
