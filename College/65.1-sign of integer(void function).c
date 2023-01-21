#include<stdio.h>

void sign();

int main()
{
	sign();
	
	return 0;
}

void sign()
{
	int a;
	printf("Enter the Value \n");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("%d is a POSITIVE INTEGER",a);
	}
	else
	{
		printf("%d is a NEGATIVE INTEGER",a);
	}
}
