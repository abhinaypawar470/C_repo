#include<stdio.h>
int main()
{ 
    int a,b,c,d;
    printf("Enter 3 numbers:- \n");
    scanf("%d%d%d",&a,&b,&c);
    d=addtion(a,b,c);
    printf("%d",d);
    
	return 0;
}
 
int addtion(int x,int y,int z)
{
    int a;
    a=x+y+z;

    return a;
}
