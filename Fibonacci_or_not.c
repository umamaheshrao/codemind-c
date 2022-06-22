#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    a=0,b=1;
    for(i=1;i<n-1;i++)
    {
        c=a+b;
        if(c==n)
        {
            c=1;
            break;
        }
    a=b;
    b=c;
    }
        if(c==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}