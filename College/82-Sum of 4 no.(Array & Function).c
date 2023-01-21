#include <stdio.h>

int sum(int c[]);

int main()
{
    int a[]={2,4,8,12};
    int res;
    res=sum(a);
    printf("\nsum of element :: %d",res);

    return 0;
}
int sum(int c[])
{
    int i,ans=0;
    
    for(i=0;i<=3;i++)
    {
        ans+=c[i];
        printf("%d \n",ans);
    }
    return ans;
}
