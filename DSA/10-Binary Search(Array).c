#include<stdio.h>

int main()
{
	int a[10]={2,4,7,9,10,13,16,20,25,30};
	int i,f,low,high,mid;
	
	/*printf("Enter the Elements in the Array\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);*/
	
	printf("Enter the Element to Search\n");
	scanf("%d",&f);
	
	low=0;
	high=9;
	
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==f)
		{
			printf("The Element is present in %d location\n",mid);
			break;
		}
		else if(a[mid]>f)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}	
	}
	
	return 0;
}
