#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,subt;
    float per;
    printf("Enter your marks\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    subt=sub1+sub2+sub3+sub4+sub5;
    printf("the total of subjects is %d \n",subt);
    per=subt/5;
    printf("Percentage is %f \n",per);
    if(per>=75)
    {
        printf("distinction");
    }
    else if(per>60 && per<75)
    {
        printf("First class");
    }
    else if(per>=50 && per<60)
    {
        printf("second class");
    }
    else if(per>=40 && per<50)
    {
        printf("third class");
    }
    else if(per>=35 && per<40)
    {
        printf("pass class");
    }
    else if(per<35)
    {
        printf("fail");
    }
    
    return 0;
}
