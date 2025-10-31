#include<stdio.h>
int palindrom(int a[],int i, int j){
    if(i>=j){
        return 1;
    }
    if(a[i]!=a[j]){
        return 0;
    }
    return palindrom(a,++i,--j);
}
 int main(){
    int a[3]={1,2,1};
    int s = 0;
    int e= 2;
  int data = palindrom(a,s,e);
if(data==1){
    printf("palindrom");
}
else{ printf("not a palindrom");}
 }