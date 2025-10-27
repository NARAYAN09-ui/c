#include <stdio.h>
#include<string.h>
int main ()
{
      char str[] = "abac";
    int ln = strlen(str);
    for(int i =0;i<ln/2;i++){
        
for(int j=ln-1-i;j>i;j--){
            if(str[i]==str[j]){    
        for(int k=j;k<ln-1;k++){
        str[k]=str[k+1];
        }
        ln--;
        }
        }
    }
    str[ln]='\0';
    printf("%s",str);
    return 0;
}