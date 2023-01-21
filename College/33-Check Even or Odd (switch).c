#include<stdio.h>

int main()
{
	int i,r;
	printf("Enter the No. :: ");
	scanf("%d",&i);
	
	//r=i%2;
	
	switch  (i%2)
	{
		case 0:
			printf("Even Number \n");
			break;
		case 1:
			printf("Odd Number \n");
			break;
		default:
			printf("INVALID: Enter correct values");
				
	}
	
	
	return 0;
}
