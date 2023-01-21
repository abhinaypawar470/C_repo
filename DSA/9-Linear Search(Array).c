#include<stdio.h>

int main()
{
	int a[6];
	int i,j,r,pos=-1;
	
	printf("Enetr the Values in the Array\n");
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the value you want to Search??\n");
	scanf("%d",&r);
	
	for(j=0;j<6;j++)
	{
		if(a[j]==r)
		{
			pos=j;
			printf("Position of the Value is %d\n",pos);
		}
	}
	if(pos==-1)
	printf("Value Not Found!!!!");
	
	
	return 0;
}
