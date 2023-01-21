/*scanf*/
#include <stdio.h>

int main()
{
    int no1,no2,no3,sum;
    printf("Enter number 1");
    scanf("%d",&no1);
    printf("Enter number 2");
    scanf("%d",&no2);
    printf("Enter number 3");
    scanf("%d",&no3);
    sum=no1+no2+no3;
    printf("The sum of 3 numbers is %d",sum);
    
    return 0;
}
