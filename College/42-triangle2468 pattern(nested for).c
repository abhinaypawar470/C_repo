#include<stdio.h>

int main()
{
    int a,b,c;
    for(a=1;a<=4;a++)
    {
        for(b=1,c=2;b<=a;b++,c+=2)
        {
            printf("%d",c);
        }
        
        printf("\n");
    }
    
    
    return 0;
}