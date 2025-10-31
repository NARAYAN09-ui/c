#include<stdio.h>
int check(int a[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(a[i]>a[i+1]){
        return 0;
    }
    return check(a,i+1,j);
}
int main(){
   int a[4]={1,2,3,4};
   int i=0;
   int j=3;
   int data = check(a,i,j);
   printf("%d",data);
}