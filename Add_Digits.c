#include<stdio.h>
int main()
{
    int n,r,sum,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>10)
    {
        sum=0;
        while(temp!=0)
        {
        r=temp%10;
        sum+=r;
        temp=temp/10;
        }
        temp=sum;
    }
        printf("%d",sum);
}