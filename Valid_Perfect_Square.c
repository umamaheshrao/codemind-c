#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,f,m;
    m=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);// 15 16
    }
    for(i=0;i<n;i++)
    {
     f=sqrt(arr[i]);
     
       if(arr[i]==f*f)
       printf("True
");
       else
       printf("False
");
    }
    
}