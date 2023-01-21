#include <stdio.h>          //Merge sort

void merge(int A[], int low, int mid, int high)
{
	int b[high];
	int i, j, k;
	i=low;
	j=mid+1;
	k=low;
	
	while(i<=mid && j<=high)
	{
		if(A[i]<=A[j])
		{
			b[k]=A[i];
			i++;
		}
		else
		{
			b[k]=A[j];
			j++;
		}
		k++;
	}
	
	if(i>mid)
	{
		while(j<=high)
		{
			b[k]=A[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=A[i];
			i++;
			k++;
		}
	}
	
	for(k=low;k<=high;k++)
	A[k]=b[k];
}

void mergeSort(int A[], int low, int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;

		mergeSort(A,low,mid);
		mergeSort(A,mid+1,high);

		merge(A,low,mid,high);
	}
}

void printArray(int A[], int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d ",A[i]);
	printf("\n");
}

int main()
{
	int i,n;
	
	printf("How Many values you want to Enter???\n");
	scanf("%d",&n);
	int a[n];

	printf("Enter the Values in the Array???\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("\n\nGiven array is \n");
	printArray(a, n);

	mergeSort(a, 0, n-1);

	printf("\nSorted array is \n");
	printArray(a, n);
	return 0;
}
