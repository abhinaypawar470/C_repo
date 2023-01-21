#include<stdio.h>

int main()

{
	int a,b;
	a=7;
	b=7;
	
	/*helps to save result in the same variable after the operation is performed, 
	no need to declare another variable for result*/
	
	a+=b;
	printf("Add value :: %d \n",a);
	
	a-=b;
	printf("Minus value :: %d \n",a);
	
	a*=b;
	printf("Multiply value :: %d \n",a);
	
	a/=b;
	printf("Divide value :: %d \n",a);

	a%=b;
	printf("Modulo value :: %d \n",a);
	
	return(0);
}
