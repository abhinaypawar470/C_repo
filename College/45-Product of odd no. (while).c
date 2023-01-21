#include<stdio.h>

int main()
{
	int i,product;
	i=1;
	product=1;
	while(i<=10)
	{
		if(i%2!=0)
		{
			product=product*i;
			printf("%d\n",i);
		}
		i++;
	}
	printf("\tThe PRODUCT of ODD NUMBERS is::%d",product);
	
	return 0;
}
