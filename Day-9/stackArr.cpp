#include<iostream>
using namespace std;
class stack{
    private:
    int capacity;
    int top;
    int *p;
    public:
    stack(int cap);
    void push(int data);
    void peek();
     void pop();
     ~stack();
     void stackunderflow();
     void stackoverflow();
     void reverse();
     void minimum();
};
stack::stack(int cap){
        if(cap<1)
            capacity = 10;
        else{
        capacity=cap;
        }
        top=-1;
        p=new int[capacity];
}
void stack::push(int data){
    if(top==capacity-1)
     cout<<"invalid index";
     else{
        top++;
        p[top]=data;
     }
}
 void stack::peek(){
        if(top==-1)
        cout<<"does'nt contain anything";
        else{
            cout<<p[top];
        }
 }
 void stack::pop(){
        if(top==-1)
        cout<<"doesn't contain anything";
        else{
        p[top]=-1;
        top--;
        }
 }
stack::~stack(){
    delete []p;
 }
 void stack::stackoverflow(){
    if(top==capacity-1){
        cout<<"overflow"<<endl;
    }
    else{
    cout<<"not overflow"<<endl;
    }
 }
 void stack::stackunderflow(){
    if(top<=-1){
        cout<<"underflow"<<endl;
    }
    else{
    cout<<"not overflow"<<endl;
    }
 }
 void stack::reverse(){
    int c;
    if(top){
        for(int i=0;i<=top/2;i++){
            c=p[top-i];
            p[top-i]=p[i];
            p[i]=c;
        }
    }
    else{
        cout<<"doesn't contain anything";
    }
 }
 void stack::minimum(){
    if(top==-1)
    cout<<"does'nt contain anything";
    else
{
    int min=p[0];
    for(int i=1;i<=top;i++)
    if(p[i]<min)
    min=p[i];
    cout<<min;
} }
 int main(){
    stack obj(3);
      obj.push(10);
        obj.push(20);
          obj.push(30);
    obj.reverse();
    obj.peek();
    obj.minimum();
 }
