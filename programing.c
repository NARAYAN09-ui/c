#include <stdio.h>
#include<string.h>
int main(){
char str[] = "C programing";
char target=' ';
char new[100];
int j =0;
int ln = strlen(str);
for ( int i =0; i<ln ; i++ ){
   if(str[i] != target){
       new[j] = str[i];
       j++;
   }
}
new[j] = '\0';
printf("%s", new);
return 0;
}