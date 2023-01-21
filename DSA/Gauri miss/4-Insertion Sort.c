#include<stdio.h>

int main()
{
	int a[5]={12,31,25,8,8};
	int i,temp,j,k;
	
	for(i=1;i<5;i++)
	{
		printf("\n\n\ni=%d pass\n",i);
		temp=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>temp)
		{
			printf("\nCondition true :: %d>%d \nj=%d\n\n",a[j],temp,j);
			a[j+1]=a[j];
			j--;
			for(k=0;k<5;k++)
		    {
	            printf("%d\t",a[k]);
	        }
		}
		a[j+1]=temp;
		printf("\n");
		for(k=0;k<5;k++)
		{
	        printf("%d\t",a[k]);
	    }
		printf("\n");
	}
	printf("\n\n\n");
	printf("Final Sort\n");
	for(k=0;k<5;k++)
	printf("%d\t",a[k]);
	
	return 0;
}
