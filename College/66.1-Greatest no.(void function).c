#include<stdio.h>

void greatest();

int main()
{
	greatest();
	
	return 0;
}

void greatest()
{
	int a,b,c;
	printf("Enter The 3 values \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("The Greatest :: %d",a);
	}
	else if(b>a && b>c)
	{
		printf("The Greatest :: %d",b);
	}
	else
	{
		printf("The Greatest :: %d",c);
	}
}
