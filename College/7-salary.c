/* Program to calculate total salary after bonus*/
#include <stdio.h>

int main()
{
    int sal, salary;
    float bonus;
    printf("Enter salary");
    scanf("%d",&sal);
    bonus=sal*5/100;
    printf("bonus is %f\n",bonus);
    salary=sal+bonus;
    printf("The salary after bonus is %d",salary);
    
    

    return 0;
}
