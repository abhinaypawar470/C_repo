#include<stdio.h>

int main()
{
	int a[2][5];
	int i,j,f;
	
	printf("Enter the Temperature in Degrees!!\n");
	for(i=0;i<2;i++)
	{
		if(i==0)
		{
		    for(j=0;j<5;j++)
		    {
		        scanf("%d",&a[i][j]);
	        }
	    }
	    else
	    {
	    	for(j=0;j<5;j++)
		    {
		        f=(a[0][j]*9/5)+32;
		        a[i][j]=f;
	        }
		}
	}
	
    printf("\n\nCelsius To Fahrenheit\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
