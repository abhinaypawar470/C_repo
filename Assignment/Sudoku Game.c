#include<stdio.h>

int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,r;
	
	r=1;
	while(r>0)
	{
	printf("Enter the Values in the 1st Matrix!!\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Row=%d And Column=%d\n",i,j);
		    scanf("%d",&a[i][j]);
		}
	}
	printf("\n\nEnter the Values in the 2nd Matrix!!\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Row=%d And Column=%d\n",i,j);
		    scanf("%d",&b[i][j]);
		}
	}
	printf("\n\nThe Sum of 2 Matrices !!\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    c[i][j]=a[i][j]+b[i][j];
		    printf(" %d |",c[i][j]);
	    }
	    printf("\n");
	    for(j=0;j<2;j++)
		{
		    printf("___|");
	    }
	    printf("\n");
	}
	
	int choice;
	printf("\nDo You Want to Exit???\nPress 1 to Continue and 0 to Exit.\n");
	scanf("%d",&choice);
	if(choice==0)
	break;
	else
	{
	continue;
	printf("\n\n");

    }
	
	r++;
}

	return 0;
}
