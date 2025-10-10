#include<stdio.h>
int main (){
int arr[] = {3,1,5,6,4,7,3};
int s = sizeof(arr)/4;
for(int i =0 ; i<s-1; i ++){
    for( int j = i+1 ; j<s ; j++){
        int temp =0;
        if(arr[i]>arr[j]){
            temp =arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }  
}
int n ;
printf("enter a number: ");
scanf("%d",&n);
printf("%d", arr[n-1]);
return 0;
}