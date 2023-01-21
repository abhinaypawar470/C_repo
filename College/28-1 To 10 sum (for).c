#include <stdio.h>

int main()
{
    int i,temp;
    temp=0;
    
    for(i=1;i<=10;i++)
    {
        temp+=i;
        printf("%d \n",temp);
    }
    printf("\t");
    printf("The SUM of NUMBERS from 1 To 10  is :: %d",temp);

    return 0;
       
}
