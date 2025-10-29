#include<stdio.h>
int main (){
 int a[4]={1,2,4,5};
 int xor1=0;
 int xor2=0;
 for(int i=1;i<=5;i++){
    xor1=xor1^i;
 }
 for(int i=0;i<4;i++){
    xor2=xor2^a[i];
 }
 printf("%d",xor1^xor2);
return 0;
}