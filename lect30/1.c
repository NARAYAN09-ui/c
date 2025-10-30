#include<stdio.h>
int sum(int a){
    if(a==0){
        return 1;
    }
    return a*sum(a-1);
}
int main (){
    int data =sum(4);
    printf("%d",data);
}
