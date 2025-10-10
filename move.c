#include<stdio.h>
int main(){
   int a[] ={1,3,2,4,-8,-4,-5};
   int n[3];
   int p[4];
   int d[7];
   int k=0,j=0;
   for( int i =0; i<7 ; i++){
    if(a[i]<0){
        n[j]=a[i];
        j++;
    }
    else{
        
        p[k]=a[i];
        k++;
    }
   }
   int in =0;
    for(int i =0; i<3 ; i++){
     d[in]=n[i];
     in++;
    }
   for(int i =0; i<4 ; i++){
     d[in]=p[i];
     in++;
    }
    for(int i =0; i<7 ; i++){
     printf("%d ",d[i]);
    }
   return 0;
}