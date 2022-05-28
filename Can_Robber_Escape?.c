#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<n)
        {
         f=f+1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f>1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}