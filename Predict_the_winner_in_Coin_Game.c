#include<stdio.h>
int main()
{
    int n,a[n],i,s1=0,s2=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+a[i];
        }
        else
        {
            s2=s2+a[i];
        }
    }
    if(s1>s2)
    {
        diff=s1-s2;
    }
    else
    {
        diff=s2-s1;
    }
    if(diff%4==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}