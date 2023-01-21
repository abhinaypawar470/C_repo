#include <stdio.h>

int main()
{
    int x[5];
    int i;
    printf("Enter the values in the ARRAY :: \n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("The Values stored in ARRAY is as follows :: \n");
    for(i=0;i<=5;i++)
    {
        printf("%d \n",x[i]);
    }
    return 0;
}
