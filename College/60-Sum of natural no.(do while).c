#include<stdio.h>

int main()
{
	int a=1, sum=0;
	
	do
	{
		printf("%d \n",a);
		sum=sum+a;
		a++;
	}
	while(a<=20);
	
	printf("\t %d",sum);
	
	
	return 0;
}
