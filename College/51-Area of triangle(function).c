#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Base and Height of TRIANGLE \n");
    scanf("%d%d",&a,&b);
    c=area(a,b);
    printf("%d",c);

    return 0;
}
int area(int base,int h)
{
    int t;
    t=0.5*base*h;
    return t;
}