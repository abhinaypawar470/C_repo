#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the Value:: \n");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("a::%d is Greater than b::%d",a,b);
	}
	else if(a<b)
	{
		printf("a::%d is Smaller than b::%d",a,b);
	}
	else
	{
		printf("a::%d is Equal to b::%d",a,b);
	}
	
	return 0;
}
