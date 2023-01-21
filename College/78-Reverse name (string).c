#include<stdio.h>
#include<string.h>

int main()
{
	int b;
	char a[7];
	
	printf("Enter the Name \n");
	scanf("%s",a);
	printf("\n");
	for(b=7;b>=0;b--)
	{
		printf("%c",a[b]);
	}
	
	return 0;
}
