#include <stdio.h>
#include<string.h>
int main(){
int max =0;
char result ;
char str[] = "abca";
int ln = strlen(str);
int frq[256]={0};
for ( int i =0; i<ln ; i++ ){
    frq[str[i]]++;

}
for(int i =0; i<256 ; i ++){
    if(frq[str[i]]>max){
        max=frq[str[i]];
        result = str[i];
    }
}
printf("%c -> %d",result,max);
return 0;
}