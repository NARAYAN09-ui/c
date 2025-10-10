#include<stdio.h>
int main (){
 int a[]={1,2,3,4,5,6,7};
 int b[]= {2,4,7,8,22,11,33,44,55};
 int d;
 int m = sizeof(a)/2;
 int n = sizeof(b)/2;
 if (m>n){
    d = m ;
 }
 else{
    d =n;
 }
    int c[d];   
    for(int i =0; i<d ; i++){
        if(i<m && i<n){
            c[i]= a[i]+b[i];
        }
        else if(i<m){
            c[i]= a[i];
        }
        
    }
    for(int i =0; i<d ; i++){
        printf("%d ",c[i]);     
    }
return 0;   
}