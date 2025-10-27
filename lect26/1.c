#include <stdio.h>
int main(){
    int a[]={6,3,1,5,1};
    int min=a[0];
    int max =0;
    for(int i=0;i<5;i++ ){
        if(min>a[i]){
            min =a[i];
        }else 
        {
            int profit = a[i]-min;
            if(profit>max){
              max=profit;  
            }
     }
    }
    printf("%d",max);
    return 0;
}
