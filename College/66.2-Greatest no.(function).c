#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter The 3 values \n");
	scanf("%d %d %d",&a,&b,&c);
	d=greatest(a,b,c);
	printf("%d",d);	
	
	return 0;
}
int greatest(int x, int y, int z)
{
	if(x>y && x>z)
	{
		printf("The Greatest :: ");
		return x;
	}
	else if(y>x && y>z)
	{
		printf("The Greatest :: ");
		return y;
	}
	else
	{
		printf("The Greatest :: ",z);
		return z;
	}
}
