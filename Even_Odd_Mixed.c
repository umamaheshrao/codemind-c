#include<stdio.h>
int main()
{
    int n,r,e=0,g=0,o=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
          {
             e++;
          }
        else if(r%2==1)
          o++;
        else
          g++;
         n=n/10;
    }
    if(o==0&&g==0)
    {
        printf("Even");
    }
    else if(e==0&&g==0)
    {
        printf("Odd");
    }
    else
     {
         printf("Mixed");
     }
}