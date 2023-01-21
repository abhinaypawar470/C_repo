#include<stdio.h>

float div(float a, float b);          //function declaration 

int main()
{
	int x,y,z;
	float w;
	printf("ENTER THE VALUES\n");
	scanf("%d %d",&x,&y);
	
	printf("\n\n");
	
	z=add(x,y);
	printf("Add :: %d \n",z);
	
	z=sub(x,y);
	printf("Sub :: %d \n",z);
	
	z=mul(x,y);
	printf("Mul :: %d \n",z);
	
	w=div(x,y);
	printf("Div :: %f \n",w);
	
	z=mod(x,y);
	printf("Mod :: %d \n",z);

	return 0;
}
int add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a, int b)
{
	int c;
	c=a-b;
	return c;
}
int mul(int a, int b)
{
	int c;
	c=a*b;
	return c;
}
float div(float a, float b)
{
	float c;
	c=a/b;
	return c;
}
int mod(int a, int b)
{
	int c;
	c=a%b;
	return c;
}

