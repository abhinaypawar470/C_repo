#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d%d",&a,&b);
	c=divide(a,b);
	printf("\t %d / %d = %d ",a,b,c);
	
	return 0;
}
int divide(int A, int B)
{
	int d;
	d=A/B;
	return d;
}
