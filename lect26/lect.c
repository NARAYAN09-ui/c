#include <stdio.h>
int main(){
    int a[]={4,0,3,5,0};
    int j = 0;
    for(int i =0; i<5; i++){
       if(a[i]!=0){
        
           a[j]=a[i];
    
           j++;
       }
    }

    for(int i = j; i < 5; i++){
        a[i] = 0;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    return 0;   
}