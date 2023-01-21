#include<stdio.h>

int main()

{
	int i,sum; 
	i=0;
	sum=0;
	while(i<=10)
	{
		if(i%2==0)
		{
			sum=sum+i;
			printf("%d\n",i);
		}
		i++;
	}
	printf("\tThe SUM of EVEN NUMBERS is::%d",sum);
	
	return 0;
}
