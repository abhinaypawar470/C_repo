#include<stdio.h>
int main()
{
	int a,b;
	a=1;
	
	do
	{
		
		b=1;
		while(b<=a)
		{
			printf("%d",b);
			b++;
		}
		printf("\n");
		a++;
		
	}
	while(a<=10);
	
	return 0;
}
