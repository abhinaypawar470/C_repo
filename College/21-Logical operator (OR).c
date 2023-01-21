#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the Value of a:: \n");
	scanf("%d",&a);
	printf("Enter the Value of b:: \n");
	scanf("%d",&b);
	
	if(a==b || a<b || a>b)
	{
	printf("Condition is True");	
	}
	
	else
	{
	printf("Condition is False");
	}
	return 0;
}
