#include<stdio.h>

int main()

{
	int a,r,b;
	for(a=1;a<=10;a++)
	{
		printf("TABLE OF %d :: \n\n",a);
		for(r=1;r<=10;r++)
		{
		    printf("%d * %d = %d \n",a,r,b=a*r);
	    }
	    printf("\n\n\n");
		
	}
	
	return 0;
}
