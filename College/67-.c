#include<stdio.h>

int main()
{
	int a;
	printf("Enter the value \n");
	scanf("%d",&a);
	sum(a);
	
	return 0;
}
int sum(int n)
{
	if(n<=0)
	{
		return n+sum(n-1);
	}
	else
	{
		return n;
	}
}
