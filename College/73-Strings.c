#include<stdio.h>
#include<string.h>

int main()
{
	char s1[10]="Abhinay";
	char s2[10]="Pawar";
	printf("\n string length of %s is %d",s1,strlen(s1));
	printf("\n string length of %s is %d",s2,strlen(s2));
	
	if(strcmp(s1,s2)!=0)
	{
		printf("\n\n strings are not equal ");
	}
	
	printf("\n\n string upper case of %s",strupr(s1));
	
	printf("\n\n string lower case of %s",strlwr(s2));
	
	printf("\n\n string concatenates gives %s",strcat(s1,s2));

	printf("\n\n strings copy gives  %s",strcpy(s1,s2));
	
	return 0;
}
