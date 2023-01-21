#include<stdio.h>

int fib(int x);

int main()
{
	int a,b;
	printf("Enter how many elements you want?? \n\n");
	scanf("%d",&a);
	printf("Fibonacci series\n");
	
	b=0;
	while(b<=a)
	{
	    printf("%d \n",fib(b));
	    b++;
	}

	return 0;
}
int fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return (fib(x-1)+fib(x-2));
    }
}
