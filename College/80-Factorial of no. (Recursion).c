#include<stdio.h>

int fac(int x);

int main()
{
	int a,res;
	printf("Enter the number\n");
	scanf("%d",&a);
	res=fac(a);
    printf("Factorial of %d :: %d",a,res);
	
	return 0;
}
int fac(int x)
{
    if(x>1)
    {
        return x*fac(x-1);
    }
    else
    {
        return x;
    }
}