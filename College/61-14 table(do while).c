#include<stdio.h>
int main()
{
	int a,b;
	a=1;
	 
	do
	{
		b=a*14;
		printf("14 * %d = %d \n",a,b);
		a++;
	}
	while(a<=10);
	
	return 0;
}
