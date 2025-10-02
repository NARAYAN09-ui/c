#include <stdio.h>
int main()
{
    int num;
    int n;
    
    if(n<=1)
    {
        printf("Not prime");
        return 0;
    }
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}
