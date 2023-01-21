#include<stdio.h>

int main()
{
	int a[15];
	int i,j,b;
	
	printf("Enter the Elements in the Array ::\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	printf("\t%d is the Smallest in the Array\n",a[0]);
	
	return 0;
}
