#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float pn;
    scanf("%d%d%d",&a,&b,&c);
    d=pow(a,b);
    pn=d%c;
    printf("%.0f",pn);
}