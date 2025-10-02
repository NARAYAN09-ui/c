#include<stdio.h>
 int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int candidate =n+1;
    while(1)
    {
        int isPrime =1;
        for(int i=2;i*i<=candidate;i++)
        {
            if(candidate % i==0)
            {
                isPrime =0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("Next prime is %d",candidate);
            break;
        }
        candidate++;
    }
    return 0;
}