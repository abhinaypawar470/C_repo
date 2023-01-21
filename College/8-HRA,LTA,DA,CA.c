/* To calculate total salary after addition of HRA, LTA, DA, CA */
#include <stdio.h>

int main()
{
    int bsal, tsal;
    float HRA,LTA,DA,CA;
    printf("Enter basic salary");
    scanf("%d",&bsal);
    HRA=bsal*5/100;
    LTA=bsal*2.5/100;
    DA=bsal*7/100;
    CA=bsal*3/100;
    printf("%f%f%f%f",HRA,LTA,DA,CA);
    tsal=bsal+HRA+LTA+DA+CA;
    printf("The total salary is %d",tsal);
    
    

    return 0;
}
