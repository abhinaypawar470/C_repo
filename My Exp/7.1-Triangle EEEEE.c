#include<stdio.h>

int main()

{
	char a,r;
	
	for(a=1;a<=5;a++)
	{
		for(r=1;r<=a;r++)
		{
			printf("%c ",64+a);
		}
		
		printf("\n");
	}
	
	return 0;	
}
