#include<iostream>
using namespace std;
#define underflow 1;
struct  Node
{
    int data;
    Node *next;
    int priority;
};
class PriorityQueue{
    Node *start;
    public:
    PriorityQueue();
    void insertElt(int data,int priority);
    void deletehigh();
    int peek();
    int highestPriority();
    ~PriorityQueue();
    bool isEmpty();
    int minQueue(PriorityQueue &s);
};
 PriorityQueue::PriorityQueue(){
 start=nullptr;
 }
//   int PriorityQueue::minQueue(PriorityQueue &s){
//     PriorityQueue v,r;
//     int min;
//     r=s;
//     min=r.peek();
//     r.deletehigh();
//     while(!r.isEmpty()){
//         if(r.peek()<min)
//         ;
//         v.insertElt(min,);

//     }
//   }
 PriorityQueue::~PriorityQueue(){
    while(start){
        deletehigh();
    }
    start=nullptr;
 }
 bool PriorityQueue::isEmpty(){
    if(start==nullptr)
    return true;
    else
    return false;
 }
 void PriorityQueue::deletehigh(){
    if(start==nullptr)
    cout<<"nothing to delete";
    else
    {
        Node* temp=start;
        start=start->next;
        delete temp;
    }
 }
 int PriorityQueue::highestPriority(){
    if(start==nullptr)
    cout<<"no elt";
    else{
        return start->priority;
    }
 }
 int PriorityQueue::peek(){
            if(start==nullptr){
                throw underflow;
            }
            else
            {
                return start->data;
            }
 }
 void PriorityQueue::insertElt(int data,int priority){
    Node *temp=new Node;
    temp->data=data;
    temp->priority=priority;
    temp->next=nullptr;
    if(start==nullptr){
        start=temp;
    }
    else{
        if(temp->priority>start->priority){
            temp->next=start;
            start=temp;
        }
        else{
            Node *t=start;
            while(t->next!=nullptr && t->next->priority > temp->priority)
            {
                t=t->next;}
                temp->next=t->next;
                t->next=temp;
            
        }
    }
 }
 int main(){
    PriorityQueue obj;
    obj.insertElt(2,1);
    obj.insertElt(3,4);
    obj.insertElt(2,2);
 }
