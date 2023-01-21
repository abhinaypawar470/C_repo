#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char st[]="Abhinay";
    char st1[]="Pawar";
    strcat(st,st1);
    printf("%s\n",st);
    len=strlen(st);
    printf("%d",len);

    return 0;
}
