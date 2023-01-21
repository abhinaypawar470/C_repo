#include <stdio.h>

int main()
{
    int D,M,Y;
    printf("Enter today's Date\n");
    scanf("%d%d%d",&D,&M,&Y);
    printf("Today's date:: %d/%d/%d \n",D,M,Y);
    if(D==31 && M==12)
    {
       int d,m,y;
        d=1,m=1,y=Y+1;
        printf("tomorrow's Date::%d/%d/%d",d,m,y);
    }
    else if((D==31 && M==1) || (D==31 && M==3) || (D==31 && M==5) || (D==31 && M==7) || (D==31 && M==8) || (D==31 && M==10))
    {
        int d,m,y;
        d=1,m=M+1,y=Y;
        printf("tomorrow's Date::%d/%d/%d",d,m,y);
    }
    else if((D==30 && M==4) || (D==30 && M==6) || (D==30 && M==9) || (D==31 && M==11))
    {
        int d,m,y;
        d=1,m=M+1,y=Y;
        printf("tomorrow's Date::%d/%d/%d",d,m,y);
    }
    else if((D==28) && (M==2) && (Y%4!=0))
    {
        int d,m,y;
        d=1,m=M+1,y=Y;
        printf("tomorrow's Date::%d/%d/%d",d,m,y);
    }
    else if((D==29) && (M==2) && (Y%4==0))
    {
        int d,m,y;
        d=1,m=M+1,y=Y;
        printf("tomorrow's Date::%d/%d/%d",d,m,y);
    }
    else
    {
        int d,m,y;
        d=D+1,m=M,y=Y;
        printf("tomorrow's Date::%d/%d/%d",d,m,y);
    }

    return 0;
}
