#include<stdio.h>

int main()

{
	char a,r,alphabet='A';
	
	for(a=1;a<=5;a++)
	{
		for(r=1;r<=a;r++)
		{
			printf("%c ",alphabet); //ascii values
			alphabet++;
		}
		
		printf("\n");
	}
	
	return 0;	
}
