#include<stdio.h>

void add();         //function declaration
void sub();
void mul();
void div();
void mod();

int main()
{
	add();
	printf("\n");
	sub();
	printf("\n");
	mul();
	printf("\n");
	div();
	printf("\n");
	mod();
	printf("\n");
	
	return 0;
}

void add()
{
	int a,b;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d %d",&a,&b);
	a+=b;
	printf("\t The SUM of 2 NUMBERS is :: %d \n",a);
}
void sub()
{
	int a,b;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d %d",&a,&b);
	a-=b;
	printf("\t The SUB of 2 NUMBERS is :: %d \n",a);
}
void mul()
{
	int a,b;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d %d",&a,&b);
	a*=b;
	printf("\t The MUL of 2 NUMBERS is :: %d \n",a);
}
void div()
{
	float a,b;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%f %f",&a,&b);
	a/=b;
	printf("\t The DIV of 2 NUMBERS is :: %f \n",a);
}
void mod()
{
	int a,b;
	printf("Enter 2 NUMBERS :: \n");
	scanf("%d %d",&a,&b);
	a%=b;
	printf("\t The MOD of 2 NUMBERS is :: %d \n",a);
}
