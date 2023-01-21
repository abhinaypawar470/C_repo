#include<stdio.h>

int main()
{
	int a,b;
	
	for(a=1;a<=7;a++)
	{
		for(b=1;b<=7;b++)
		{
			if((a==b) || (a+b==8))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
