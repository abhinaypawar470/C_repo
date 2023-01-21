
#include<stdio.h>

int main()
{
	int nr=3,nc=3,i,j;
	int num[nr][nc];
	
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			printf("Put the value in row index %d and in column index %d\n",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			printf("%d",num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
