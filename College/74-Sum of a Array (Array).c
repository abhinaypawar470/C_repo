#include<stdio.h>

int main()
{
    int a[5];
    int i,b=0;
    
    printf("Enter the values in ARRAY \n");

    for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("\n");
    
    for(i=0;i<5;i++)
	{
	    b=b+a[i];
	}
	printf("\tThe sum of values is %d ",b);

    return 0;
}
