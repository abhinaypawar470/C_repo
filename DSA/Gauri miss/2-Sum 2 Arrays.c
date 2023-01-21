#include<stdio.h>

int main()
{
	int a[10],b[10],c[10];
	int i;
	
	printf("Enter the Values in the 1st Array.....\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the Values in the 2st Array.....\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nThe SUM of 2 Separate Arrays are.....\n");
	for(i=0;i<=4;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d \n",c[i]);
	}
	return 0;
}
