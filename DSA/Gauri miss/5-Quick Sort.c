#include<stdio.h>

void printArray(int A[], int n);              //function Declaration
void quickSort(int A[], int lb, int ub);      //function Declaration
int partition(int A[], int lb, int ub);       //function Declaration

int main()
{
    int A[]={9, 4, 4, 8, 7, 5, 6};
    int n=sizeof(A)/sizeof(A[0]);     //size of Array
    
    printf("Unsorted Array\n");
    printArray(A, n);
    quickSort(A, 0, n-1);
    printf("\n\nSorted Array\n");
    printArray(A, n);
    
    return 0;
}

//Functions
void printArray(int A[], int n)
{
	int i;
    for(i=0;i<n;i++)
    printf("%d  ",A[i]);
    printf("\n");
}

void quickSort(int A[], int lb, int ub)
{
    if (lb<ub)
    {
        int lock=partition(A, lb, ub); 
        quickSort(A, lb, lock-1);  // sort left subarray 
        quickSort(A, lock+1, ub); // sort right subarray
    }
}

int partition(int A[], int lb, int ub)
{
    int pivot=A[lb];
    int start=lb;
    int end=ub;
    int temp;

    while(start<end)
    {
        while (A[start]<=pivot)
        {
            start++;
        }

        while (A[end] > pivot)
        {
            end--;
        }

        if (start<end)
        {
        	// Swap A[start] and A[end]
            temp=A[start];
            A[start]=A[end];
            A[end]=temp;
        }
    }

    // Swap A[lb] and A[end]
    temp = A[lb];
    A[lb] = A[end];
    A[end] = temp;
    return end;
}
