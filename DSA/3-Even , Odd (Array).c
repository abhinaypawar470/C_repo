#include<stdio.h>

int main()
{
	int a[15];
	int i;
	
	printf("Enter the Elements in the Array ::\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\nEven Numbers\n");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	
	printf("\n\nOdd Numbers\n");
	for(i=0;i<7;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\n",a[i]);
		}
	}
	
	return 0;
}
