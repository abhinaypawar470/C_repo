#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	for(a=1;a<=7;a++)
	{
		for(b=7;b>a;b--)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf("*");
		}
		for(d=1;d<a;d++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
