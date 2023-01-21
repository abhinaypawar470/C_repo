#include<stdio.h>

int main()

{
	char a;
	printf("Enter Your Gender :: ");
	scanf("%c",&a);
	
	switch (a)
	{
		case 'M':
		case 'm':
			printf("You are MALE !!!!");
			break;
		case 'F':
		case 'f':
			printf("You are FEMALE !!!!");
			break;
		default:
			printf("INVALID: Enter correct Info....");	
		
	}
	
	
	
	return 0;
}
