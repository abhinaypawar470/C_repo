#include <stdio.h>
int main()
{
    int years;
    printf("Enter your year");
    scanf("%d",&years);
    if(years>=10)
    {
        printf("permanent");
    }
    else
    {
        printf("temporary");
    }

    return 0;
}
