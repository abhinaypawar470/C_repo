#include <stdio.h>

int main()
{
	int b;
    char a[30];
    printf("enter a string\n");
    fgets(a,sizeof(a),stdin);
    printf("\n\n");
    puts(a);
    printf("%s\n\n",a);
    b=strlen(a);
    printf("%d",b);

    return 0;
}
