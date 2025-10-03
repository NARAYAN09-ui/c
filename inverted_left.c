#include <stdio.h>  
int main() {
    int n=5;
    for (int i = n; i > 0; i--)
     {for (int k = n-i; k >= 0; k--)
     {
        printf(" ");
     }
     
      for (int j = i; j >=1 ; j--) {
            printf("*");
        }printf("\n");  
        }   return 0;   
    }   
