#include<stdio.h>

int main()
{
	int age[50];
	int i;
	
	printf("Enter the age of Students\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&age[i]);
	}
	printf("The Age of Students is ......\n");
	for(i=0;i<10;i++)
	{
		printf("Student No.%d = %d\n",i,age[i]);
	}
	return 0;
}
