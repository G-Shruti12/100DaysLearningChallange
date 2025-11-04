#include<stdio.h>
int main(int argc,char* argv[]){
    int i=0;
    // printf("agruments are %d",argc);
    while(i<argc){
        printf("\n%d %s",i,argv[i]);
        i++;
    }
}
