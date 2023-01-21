#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char st[10];
    char st1[10];
    printf("Enter the name\n");
    scanf("%s%s",st,st1);
    strcat(st,st1);
    printf("\n%s\n",st);
    len=strlen(st);
    printf("%d",len);

    return 0;
}
