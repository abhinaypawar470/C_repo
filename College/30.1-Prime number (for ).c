#include <stdio.h>

int main()
{
    int a,b,c=0;
    printf("Enter a POSITIVE INTEGER :: \n");
    scanf("%d",&a);
    
    for(b=1;b<=a;b++)
    {
        if(a%b==0)
        {
            c++;
        }
    }
    
    if(c==2)
    {
        printf("%d is a PRIME NUMBER !!!!!!!!! \n",a);
    }
    else
    {
        printf("%d is not a PRIME NUMBER !!!!!!!!! \n",a);
    }

    return 0;
}
