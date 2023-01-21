#include<stdio.h>

int main()

{
	int n1, n2;
	printf("Enter the two values ::\n");
	scanf("%d %d",&n1,&n2);
	
	char i;
	printf("Enter the Operator ::\n");
	scanf(" %c",&i);
	
	float Result;
	
	switch (i)
	{
		
		case '+':
		    Result=n1+n2;
		    break;
		case '-':
		    Result=n1-n2;
		    break;
		case '*':
		    Result=n1*n2;
		    break;
		case '/':
		    Result=n1/n2;
		    break;
		case '%':
		    Result=n1%n2;
			break;
		default:
			printf("INVALID: Enter correct values \n");	
		 
	}
	printf("RESULT :: %d %C %d = %f \n",n1,i,n2,Result);
	
	return 0;
}
