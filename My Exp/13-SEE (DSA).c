/*#include<stdio.h>        //Bubble sort

int main()
{
	int i,j,n,temp;
	
	printf("How many values you wnat to Enter???\n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the Values in the Array???\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The Array is......\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	//main sorting
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	
	printf("\n\nThe sorted Array is......\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	return 0;
}*/

/*#include<stdio.h>        //selection sort

int main()
{
	int i,j,n,mini,temp;
	
	printf("How many Values you want to Enter???\n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values in the Array???\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The Array is......\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	for(i=0;i<n-1;i++)
	{
		mini=i;
		for(j=i+1;j<n;j++)
		if(a[mini]>a[j])
		mini=j;
		
		if(mini!=i)
		{
			temp=a[i];
			a[i]=a[mini];
			a[mini]=temp;
		}
	}
	
	printf("\n\nThe Sorted Array is....\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	return 0;
}*/

/*#include<stdio.h>       //Insertion Sort

int main()
{
	int i,j,n,temp;
	
	printf("How many values you want to enter???\n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values in the Array???\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The Array is......\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
    	{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
	printf("\n\nThe sorted array is....\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	return 0;
}*/

/*#include<stdio.h>      //Linear Search

int main()
{
	int i,n,f,pos=-1;
	
	printf("How many values you want to Enter???\n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values in the Array???\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The Array is.....\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	printf("\nWhich Element you want to Find out???\n");
	scanf("%d",&f);
	
	for(i=0;i<n;i++)
	if(a[i]==f)
	{
		pos=i;
		printf("Element Found at %d location!!!\n",i);
	}
	
	if(pos==-1)
	printf("value not found!!!\n");
	
	return 0;
}*/

/*#include<stdio.h>        //Binary search

int main()
{
	int i,j,n,temp,f,low,high,mid;
	
	printf("How many values you want to Enter???\n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values in the Array???\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
        {
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	
	printf("The sorted Array is....\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	printf("\n\nWhich Element you want to find out???\n");
	scanf("%d",&f);
	
	low=0;
	high=n-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==f)
		{
			printf("\n\nValue found at %d location",mid);
			break;
		}
		else if(f<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	
	return 0;
}*/

/*#include<stdio.h>         //stack

void push();
void pop();

int a[100];
int top=-1, n;

int main()
{
	printf("How many values to Enter???\n");
	scanf("%d",&n);
	a[n];
	
	int c,r=0;
	printf("Enter Your choice???\n1.TO Push\n2.To Pop\n3.To Exit\n");
	while(r==0)
	{
		scanf("%d",&c);
		if(c==1)
		push();
		else if(c==2)
		pop();
		else if(c==3)
		break;
		else
		printf("Invalid Value!!!\n");
		
		printf("Enter Your choice from above!!!\n");
	}
	
	return 0;
}

void push()
{
	int data;
	
	if(top==n-1)
	printf("\nStack is Full!!!\n");
	else
	{
		printf("Enter the value in the Stack???\n");
	    scanf("%d",&data);
		top++;
		a[top]=data;
		printf("%d value inserted in the Stack\n\n\n",a[top]);
	}
}

void pop()
{
	int loc;
	if(top==-1)
	printf("\nStack is Empty!!!\n\n");
	else
	{
		loc=a[top];
		top--;
		printf("%d Value Popped from the Stack\n\n\n",loc);
	}
}*/

/*#include<stdio.h>         //Regular Queue

void enqueue();
void dequeue();

int f=-1, r=-1, n;
int a[100];

int main()
{
	printf("How many values to enter???\n");
	scanf("%d",&n);
	a[n];
	
	int c,j=0;
	printf("Enter Your choice???\n1.TO Enqueue\n2.To Dequeue\n3.To Display\n4.To Exit\n");
	while(j==0)
	{
		scanf("%d",&c);
		if(c==1)
		enqueue();
		else if(c==2)
		dequeue();
		else if(c==3)
		display();
		else if(c==4)
		break;
		else
		printf("Invalid Value!!!\n");
		
		printf("\n\nEnter Your choice from above???\n");
	}
	
	return 0;
}

void enqueue()
{
	if(r==n-1)
	printf("\n\nQueue is Full!!!\n");
	else
	{
		if(f==-1 && r==-1)
		f++;
		r++;
		printf("Enter the element in the Queue?\n");
		scanf("%d",a[r]);
		printf("\n\n%d Element Enqueued in the Queue!!!\n");
	}
}

void dequeue()
{
	if(f==-1 && r=-1)
	printf("\n\nQueue is Empty!!!\n");
	else
	{
		if(f==r)
		{
			printf("\n\n%d was the ONLY element who left the Queue!!!\n",a[f]);
			f=r=-1;
		}
		else
		{
			printf("\n\n%d Element left the Queue!!!\n",a[f]);
			f++;
		}
	}
}*/

/*#include<stdio.h>       //Circular Queue

void enqueue();
void dequeue();
void display();

int f=-1, r=-1, n;
int a[100];

int main()
{
	printf("How many values to enter???\n");
	scanf("%d",&n);
	a[n];
	
	int c,j=0;
	printf("Enter Your choice???\n1.TO Enqueue\n2.To Dequeue\n3.To Display\n4.To Exit\n");
	while(j==0)
	{
		scanf("%d",&c);
		if(c==1)
		enqueue();
		else if(c==2)
		dequeue();
		else if(c==3)
		display();
		else if(c==4)
		break;
		else
		printf("Invalid Value!!!\n");
		
		printf("\n\nEnter Your choice from above???\n");
	}
}

void enqueue()
{
	if(f==(r+1)%n)
	printf("\n\nQueue is Full!!!\n");
	else
	{
		if(f==-1 && r==-1)
		f++;
		
		r=(r+1)%n;
		printf("\n\nEnter the Element in the Queue???\n");
		scanf("%d",&a[r]);
		printf("%d Element Enqueued!!!",a[r]);
	}
}

void dequeue()
{
	if(f==-1 && r==-1)
	printf("\n\nQueue is Empty!!!\n");
	else
	{
		if(f==r)
		{
			printf("\n\n%d was the ONLY element who left the Queue!!!\n",a[f]);
			f=r=-1;
		}
		else
		{
			f=(f+1)%n;
			printf("\n\n%d Element Dequeued from the Queue!!!\n",a[f]);
		}
	}
}

void display()
{
	printf("\n\nThe Elements of Queue are.....\n");
	int i=f;
	while(i!=r)
	{
		printf("%d  ",a[i]);
		i=(i+1)%n;
	}
	printf("%d",a[r]);
}*/

/*#include<stdio.h>      //Quick Sort

int quicksort(int A[], int lb, int ub)
{
	if(lb<ub)
	{
		int lock=partition(A, lb, ub);
		quicksort(A, lb, lock-1);
		quicksort(A, lock+1, ub);
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
		while(A[start]<=pivot)
		start++;
		while(A[end]>pivot)
		end--;
		
		if(start<end)
		{
			temp=A[start];
			A[start]=A[end];
			A[end]=temp;
		}
	}
	
	temp=A[lb];
	A[lb]=A[end];
	A[end]=temp;
	
	return end;
}

int display(int A[], int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d  ",A[i]);
	printf("\n");
}


int main()
{
	int a[]={67,56,9,23,10,87,45,69};
	int n=sizeof(a)/sizeof(a[0]);
	
	printf("\nUNsorted Array\n");
	display(a, n);
	quicksort(a, 0, n-1);
	printf("\n\nSorted Array\n");
	display(a, n);
	
	return 0;
}*/

/*#include<stdio.h>         //merge sort

int mergesort(int A[], int lb, int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(A, lb, mid);
		mergesort(A, mid+1, ub);
		merge(A, lb, mid, ub);
	}
}

int merge(int A[], int lb, int mid, int ub)
{
	int i,j,k;
	int b[ub];
	i=lb;
	j=mid+1;
	k=lb;
	
	while(i<=mid && j<=ub)
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
		while(j<=ub)
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
	
	for(k=lb;k<=ub;k++)
	A[k]=b[k];
}

int display(int A[], int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d  ",A[i]);
	printf("\n");
}

int main()
{
	int a[]={90,54,69,87,23,10,4,3,1};
	int n=sizeof(a)/sizeof(a[0]);
	
	printf("\nUNsorted Array\n");
	display(a, n);
	mergesort(a, 0, n-1);
	printf("\n\nSorted Array\n");
	display(a, n);
	
	return 0;
}*/

