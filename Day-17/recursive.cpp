#include<stdio.h>
void print(int n){
    if(n>1)
    print(n-1);
    printf("%d",n);
}
void rev_print(int n){
    if(n==0)
    return;
     printf("%d",n);
    rev_print(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    rev_print(n);
}
