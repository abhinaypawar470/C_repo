#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	
	printf("First Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Put the value in row index %d and in column index %d\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	printf("Second Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Put the value in row index %d and in column index %d\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	
	printf("The Sum of 2 Matrix \n");
	for(j=0;j<3;j++)
	{
	    for(i=0;i<3;i++)
	    {
		    c[j][i]=a[j][i]+b[j][i];
		    printf("%d",c[j][i]);
	    }
	    printf("\n");
    }
	return 0;
}
