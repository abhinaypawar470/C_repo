#include <stdio.h>

int main()
{
    int a,b;
    a=1;
    
    while(a<=5)
    {
        b=1;
        while(b<=a)
        {
            printf("*");
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}