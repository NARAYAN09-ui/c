#include<stdio.h>
int sum(int a[],int n){
    if(n==0){
        return 0;
    }
    return a[n-1]+sum(a,n-1);
}
int main(){
    int a[3]={4,5,6};
    int n=3;
    int data = sum(a,n);
    printf("%d",data);
}