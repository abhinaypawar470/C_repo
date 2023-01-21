#include<stdio.h>

int main()
{
    int input1,x,input2,y,c;
    printf("Enter a POSITIVE INTEGER :: \n");
    scanf("%d%d",&input1,&input2);
    printf("\n\n");
    
    for(x=input1;x<=input2;x++)
    {
        c=0;
        for(y=1;y<=x;y++)
        {
            if(x%y==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d is a PRIME NUMBER !!!!!!!!! \n",x);
        }
    }
    
    return 0;
}
