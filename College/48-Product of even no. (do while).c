#include<stdio.h>

int main()
{
    int i,k;
    i=1, k=1;
    
    do
    {
        if(i%2==0)
        {
            k=k*i;
            printf("%d \n",i);
        }
        
        i++;
    }while(i<=20);
    
    printf("\n\t %d",k=k*i);
    
    
    return 0;
}
