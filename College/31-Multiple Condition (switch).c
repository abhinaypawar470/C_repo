#include<stdio.h>

int main()

{
	int a;
	printf("Enter the value \n");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("This is JAVA");
			break;
		case 2:
			printf("This is C");
			break;
		case 3:
			printf("This is C++");
			break;
		default:
			printf("INVALID: Enter correct values");	
		
	}
	
	
	return 0;
}
