#include <stdio.h>

int main()
{
    int a[5],b[5],c[5];
    int i,j;
    
    printf("Enter the values in FIRST ARRAY \n");
    for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("\n");
    
    printf("Enter the values in SECOND ARRAY \n");
    for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
    printf("\n");
    
    printf("\tThe sum of 2 ARRAYS is :: \n");
	for(j=0;j<5;j++)
	{
	    c[j]=a[j]+b[j];
	    printf("\t %d \n",c[j]);
	}

    return 0;
}
