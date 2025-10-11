//Find the maximum and minimum element in an array
#include<stdio.h>
void main()
{
    int a[100],i,n,max,min;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The maximum element in the array is: %d\n",max);
    printf("The minimum element in the array is: %d\n",min);
}