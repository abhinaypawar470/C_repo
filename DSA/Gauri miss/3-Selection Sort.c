#include<stdio.h>

int main()
{
	int a[10];
	int i,j,n,mini,temp,k;
	
	printf("How many values you want to Enter???\n");
	scanf("%d",&n);
	
	printf("Enter The values in the Array!!\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\n\nUnsorted Array is.......\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	for(i=0;i<n-1;i++)
	{
		printf("\n\n\ni=%d pass\n",i);
		mini=i;
		printf("mini=%d\n",mini);
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[mini])
			{
				printf("\nCondition true %d < %d \nj=%d\n",a[j],a[mini],j);
				mini=j;
				printf("mini=%d \na[mini]=%d\n",mini,a[mini]);
		    }
		}
		if(mini!=i)
		{
			temp=a[i];
			a[i]=a[mini];
			a[mini]=temp;
			for(k=0;k<5;k++)
	        printf("%d\t",a[k]);
	        printf("\n");
		}
	}
	
	printf("\n\nSorted Array is.......\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	return 0;
}
