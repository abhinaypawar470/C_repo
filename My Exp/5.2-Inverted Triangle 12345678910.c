#include<stdio.h>

int main()
{
	int a,r,i=1;
	
	for(a=4;a>=1;a--)
	{
		for(r=1;r<=a;r++)
		{
			printf("%d  ",i);
			i++;
		}
		
		printf("\n");
	}
	
	return 0;
}
