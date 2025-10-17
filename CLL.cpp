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
};
CLL::CLL(){
    first=nullptr;
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
        temp->next=first;
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
