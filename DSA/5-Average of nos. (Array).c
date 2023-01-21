#include<stdio.h>

int main()
{
	float a[15],b=0;
	int i;
	
	printf("Enter the Elements in the Array ::\n");
	for(i=0;i<7;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		b+=a[i];
	}
	printf("Sum :: %f\n",b);
	b/=7;
	printf("Average :: %f",b);
	return 0;
}
