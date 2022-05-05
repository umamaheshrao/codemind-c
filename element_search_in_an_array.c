#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size],i,flag=0;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	for(i=0;i<size;i++)
	{
		if(arr[i]==se)
		{
			flag=1;
			break;	
		}
		
	}
	if(flag==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
}