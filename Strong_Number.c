#include<stdio.h>
int main()
{
    int n,i,r,f=0,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        f=1;
        for(i=r;i>=1;i--)
        {
            f=f*i;
        }
        sum+=f;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}