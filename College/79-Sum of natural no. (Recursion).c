#include<stdio.h>

int sum(int x);

int main()
{
	int a,res;
	printf("Enter the number\n");
	scanf("%d",&a);
	res=sum(a);
    printf("The sum of Natural Numbers is :: %d",res);
	
	return 0;
}
int sum(int x)
{
    if(x!=0)
    {
        return x+sum(x-1);
    }
    else
    {
        return x;
    }
}