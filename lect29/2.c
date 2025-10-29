#include<stdio.h>
int main (){
 int a=4,b=6; 
    
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}