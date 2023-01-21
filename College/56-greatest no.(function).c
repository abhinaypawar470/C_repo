#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d %d",&a,&b);
	c=greatest(a,b);
	printf("GREATEST NUMBER is %d ",c);
	
	
	return 0;
}
int greatest(int x, int y)
{
	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
