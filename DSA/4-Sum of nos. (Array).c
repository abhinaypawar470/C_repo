#include<stdio.h>

int main()
{
	int a[15];
	int i,b=0;
	
	printf("Enter the Elements in the Array ::\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		b+=a[i];
	}
	printf("The Sum of Values in the Array is ....%d\n",b);
    return 0;
}
