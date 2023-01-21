/* Program to calculate total marks obtained by student and percentage*/
#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,total;
    float percentage;
    printf("Enter 5 subjects marks \n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    printf("The total marks obtained are %d \n",total);
    percentage=total/5;
    printf("Percentage is %f",percentage);

    return 0;
}
