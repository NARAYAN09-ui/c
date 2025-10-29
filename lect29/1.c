#include <stdio.h>
int main (){
    int a[5]={4,5,9,4,5};
    int xor = 0;
    for(int i =0; i<5;i++){
        xor=xor^a[i];
    }
    printf("😀 %d",xor);
    return 0;
}