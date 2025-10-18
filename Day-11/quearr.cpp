#include<iostream>
using namespace std;
class queue{
    private:
    int capacity;
    int front;
    int rear;
    int *ptr;
    public:
    queue(int cap);
    void insert(int data);
    void veiwrear();
    void veiwfront();
};
queue::queue(int cap){
if(cap<1)
capacity=10;
else{
    capacity=cap;
}
front=0;
rear=-1;
ptr = new int[capacity];
}
void queue::insert(int data){
    rear++;
    if(rear<=capacity-1)
    ptr[rear]=data;
    else{
        rear=0;
        while(ptr[rear]==-1){
            rear++;
        }
        ptr[rear]=data;
    }
}
void queue::veiwrear(){
     cout<<ptr[rear];
}
void queue::veiwfront(){
     cout<<ptr[front];
}
int main(){
    queue obj(5);
    obj.insert(10);
      obj.insert(20);
        obj.insert(30);
          obj.insert(40);
            obj.insert(50);
            obj.veiwfront();
            // obj.veiwrear();
}
