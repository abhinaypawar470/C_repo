#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d%d",&a,&b);
	c=multiply(a,b);
	printf("\t %d * %d = %d ",a,b,c);
	
	return 0;
}
int multiply(int A, int B)
{
	int m;
	m=A*B;
	return m;
}
