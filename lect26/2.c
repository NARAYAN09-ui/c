#include <stdio.h>
#include<string.h>
int main ()
{
      char str[] = "abac";
    int ln = strlen(str);
    for(int i =0;i<ln/2;i++){
        if(str[i]!=str[ln-i-1]){
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;


}