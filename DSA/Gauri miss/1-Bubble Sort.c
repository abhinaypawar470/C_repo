#include<stdio.h>

int main()
{
	int a[10],b,i,j,k;
	
	printf("Enter the elements in the Array...\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4-1;i++)
	{
		for(j=0;j<=4-1;j++)
		{
			if(a[j]>a[j+1])
			{
				printf("Pass %d Condition True - %d > %d\nThe Updated Array is ::\n",i,a[j],a[j+1]);
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
				for(k=0;k<=4;k++)
			    {
				    printf("a[%d]=%d\n",k,a[k]);
			    }
			    printf("\n\n");
			}
		}
	}
	printf("\tAfter Sorting:-\n");
	for(i=0;i<=4;i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
	}
	
	return 0;
}
