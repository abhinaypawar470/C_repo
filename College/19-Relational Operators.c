#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the Value of a :: \n");
	scanf("%d",&a);
	printf("Enter the value of b :: \n");
	scanf("%d",&b);
	
	if(a==b)
	{
	printf("a::%d is Equal to b::%d",a,b);
	}
	else if(a!=b)
	{
	printf("a::%d is not Equal to b::%d ",a,b);
	}
	else if(a>b)
	{
	printf("a::%d is Greater than b::%d ",a,b);
	}
	else if(a<b)
	{
	printf("a::%d is smaller than b::%d ",a,b);
	}
    else if(a>=b)
	{
	printf("a::%d is Greater than or Equal to b::%d ",a,b);
	}
    else if(a<=b)
	{
	printf("a::%d is smaller than or Equal to b::%d ",a,b);
	}
	else
	{
		printf("Others");
	}

	
	return 0;
}
