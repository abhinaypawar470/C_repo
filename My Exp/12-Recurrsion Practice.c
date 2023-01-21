#include<stdio.h>

int dis(int n)
{
	if(n==0)
	{
	    return n;
	}
	else
	{
		printf("%d\n",n);
		dis(n-1);
		printf("\n");
		printf("%d",n);
	}
}

int main()
{
	int num=3;
	
	printf("To understand Recurrsion the Stack is build then distroyed respectively\n\n");
	dis(num);
	return 0;
}
