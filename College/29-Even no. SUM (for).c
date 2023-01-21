#include<stdio.h>

int main()

{
	int i,a;
	a=0;
	for(i=0;i<=20;i++)
	
	{
		if(i%2==0)
		{
			a=a+i;
			printf("%d \n",a);
		}
		
	}
	printf("\t");
	printf("The SUM of Even no. is :: %d \n ",a);
	
	return 0;
}
