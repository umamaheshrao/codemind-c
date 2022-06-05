#include<stdio.h>
int main()

{
    int n;
    long long int t=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t+=arr[i];
    }
    printf("%lld",t);
}