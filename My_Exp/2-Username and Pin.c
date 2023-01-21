#include<stdio.h>

int main()
{
	int a;
	char n[16];
	printf("Enter User Name :: ");
	scanf("%s",n);
	printf("Enter PIN :: ");
	scanf("%d",&a);
	
	if((a==1289) && strcmp(n,"abhinaypawar470@")==0)
	{
		printf("\n\nApna aadmi hai!!!!! \n");
		printf("Name :: ABHINAY PRAMOD PAWAR \n");
		printf("Code Name :: REVENGER \n");
	}
	else
	{
		printf("\n\nPehli fursat mey nikal!!!!!");
	}

	return 0;
}
