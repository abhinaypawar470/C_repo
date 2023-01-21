/*#include<stdio.h>        //Regular Queue

void enqueue();
void dequeue();
void display();

int f=-1, r=-1, n;
int queue[100];

int main()
{
	printf("How Many Values You want to Enter in the Queue???\n");
	scanf("%d",&n);
	queue[n];
	
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
	int data;
	
	if(r==n-1)
	{
		printf("\n\nQueue is Full!!!\n");
	}
	else
	{
		printf("\n\nEnter the Element in the Queue???\n");
	    scanf("%d",&data);
	    
		if(f==-1)
		f++;
		
		r++;
		queue[r]=data;
	}
}

void dequeue()
{
	int loc;
	if(f==-1 && r==-1)
	printf("\n\nQueue is Empty!!!\n");
	else
	{
		if(f==r)
		{
			loc=queue[f];
			printf("\n\n%d was the ONLY element which left the Queue\n",loc);
			f=r=-1;
		}
		else
		{
		    loc=queue[f];
		    f++;
		    printf("\n\n%d Element has left the Queue\n",loc);
	    }
	}
}

void display()
{
	int i;
	printf("\n\nElements of Queue are....\n");
	for(i=0;i<=r;i++)
	if(i>=f)
	printf("%d  ",queue[i]);
}*/

#include<stdio.h>       //Circular Queue

void enqueue();
void dequeue();
void display();

int f=-1, r=-1, n;
int queue[100];

int main()
{
	printf("How many Values to Enter???\n");
	scanf("%d",&n);
	queue[n];
	
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
	int data;
	
	if((r+1)%n==f)
	{
		printf("\n\nThe Queue is Full!!!\n");
	}
	else
	{
		printf("\n\nEnter the Element in the Queue???\n");
	    scanf("%d",&data);
	    
		if(f==-1 && r==-1)
		f++;
		
		r=(r+1)%n;
		queue[r]=data;
	}
}

void dequeue()
{
	int loc;
	if(f==-1 && r==-1)
	printf("\n\nThe Queue is Empty!!!\n");
	else
	{
		if(f==r)
		{
			loc=queue[f];
			printf("\n\n%d was the ONLY element which left the Queue\n",loc);
			f=r=-1;
		}
		else
		{
		    loc=queue[f];
		    f=(f+1)%n;
		    printf("\n\n%d Element has left the Queue\n",loc);
	    }
	}
}

void display()
{   
    printf("\n\nElements of Queue are....\n");
	int i=f;
	while(i!=r)
	{
		printf("%d  ",queue[i]);
		i=(i+1)%n;
	}
	printf("%d",queue[r]);
}
