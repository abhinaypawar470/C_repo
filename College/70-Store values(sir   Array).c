#include<stdio.h>

int main()
{
	int n,i;
	int num[100];
	
	printf("How many values you want to enter ????? \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Put the value in %d index ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("num[%d]=%d\n",i,num[i]);
	}
	
	return 0;
}
