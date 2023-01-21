#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d%d",&a,&b);
	c=sub(a,b);
	printf("\t %d - %d = %d",a,b,c);
	
	return 0;
}

int sub(int A, int B)
{
	int s;
	s=A-B;
	return s;
}
