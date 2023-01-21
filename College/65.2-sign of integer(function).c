#include<stdio.h>

int main()
{
	int a,c;
	printf("Enter The value \n");
	scanf("%d",&a);
	c=sign(a);
	printf("%d",c);	
	
	return 0;
}
int sign(int x)
{
	if(x>0)
	{
	    printf("Positive :: ");
		return x;
	}
	else
	{
		printf("Negative :: ");
		return x;
	}
}
