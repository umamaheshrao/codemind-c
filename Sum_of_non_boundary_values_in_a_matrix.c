#include<stdio.h>
int main()
{
    int a,b,i,j,ar[100][100],s=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i!=0 && i!=a-1 && j!=0 && j!=b-1)
            {
                s+=ar[i][j];
            }
        }
    }
    printf("%d",s);
}