#include<stdio.h>

int main()
{
	char a[7],b;
	printf("Enter the Name???\n");
	scanf("%s",&a);
	printf("%s\n\n",a);
	
	for(b=6;b>=0;b--)
	{
		printf("%c",a[b]);
	}
		
	return 0;
}
