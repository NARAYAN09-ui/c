#include <stdio.h>
#include<string.h>
int main(){
char str[] = "hello";

int ln = strlen(str);
for ( int i =0; i<ln ; i++ ){
    for( int j = i+1; j<ln; j++)
{
        if(str[i]>str[j]){
        char temp =str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
}
printf("%s\n", str);
}
