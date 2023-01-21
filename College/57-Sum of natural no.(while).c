#include<stdio.h>
int main() 
{
	int a,sum;
	a=1, sum=0;
	
	while(a<=20)
	{
		printf("%d \n",a);
		sum+=a;
		a++;
	}
	printf("\t %d \n",sum);
	
	return 0;
}
