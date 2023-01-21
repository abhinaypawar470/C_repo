#include<stdio.h>

int main()
{
	int a,r;
	
	for(a=5;a>=1;a--)
	{
		for(r=1;r<=a;r++)
		{
			printf("%d",a);
		}
		
		printf("\n");
	}
	
	return 0;
}
