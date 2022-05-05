#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sume=0,sumi=0,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sume+=arr[i];
        }
        else
        {
            sumi+=arr[i];
        }
    }
    r=abs(sume-sumi);
    printf("%d",r);
}