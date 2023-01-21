#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 2 NUMBERS \n");
    scanf("%d%d",&a,&b);
    c=addition(a,b);
    printf("%d",c);

    return 0;
}
int addition(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
