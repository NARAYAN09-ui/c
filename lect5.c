#include<stdio.h>
    int main(){
        int num =45;
        int sum =0;
        while(num>0)
        {
            int digit = num %10;
            sum = sum + digit;
            num = num /10;
        }
        printf("sum is %d",sum);
        return 0;
    }