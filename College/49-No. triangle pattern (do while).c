#include<stdio.h>

int main()
{
	int a,b,c,d;
	a=1;
	
	do
	{
		b=1;
		do
		{
			printf("%d",b);
			b++;
		}while(b<=a);
		
		printf("\n");
		a++;
	}while(a<=5);
	
	//2 nested loop for pattern
	
	c=4;
	do 
	{
		d=1;
		do
		{
			printf("%d",d);
			d++;
		}while(d<=c);
		
		printf("\n");
		c--;
	}while(c>=1);
	
	
	return 0;
}
