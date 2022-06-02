#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=1;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[n-i]%2==0)
        {
            printf("%d",arr[n-i]);
            break;
        }
    }
}