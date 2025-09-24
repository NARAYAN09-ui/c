#include<stdio.h>

int main()
{ int l=0,r=3,t=0,b=3;
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
while(l<=r && t<=b)
{
    for(int i=l;i<=r;i++)
    {
        printf("%d ",a[t][i]);
    }
   t++;

    for(int i=t;i<=b;i++)
    {
        printf("%d ",a[i][r]);
    }
    r--;
    if(t<=b)
    {
        for(int i=r;i>=l;i--)
        {
            printf("%d ",a[b][i]);
        }
        b--;
    }
    if(l<=r)
    {
        for(int i=b;i>=t;i--)
        {
            printf("%d ",a[i][l]);
        }
        l++;
    }
    


}
    
    return 0;
}