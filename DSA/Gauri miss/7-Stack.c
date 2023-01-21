#include<stdio.h>         //stack

void push();
void pop();

int stack[100];
int top=-1, n;

int main()
{
	printf("How many values to Enter???\n");
	scanf("%d",&n);
	stack[n];
	
	int i,c,r=0;
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
	
	printf("\n\nElements of Stack are....\n");
	for(i=0;i<=top;i++)
	printf("%d  ",stack[i]);
	
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
		stack[top]=data;
		printf("%d value inserted in the Stack\n\n\n",stack[top]);
	}
}

void pop()
{
	int loc;
	if(top==-1)
	printf("\nStack is Empty!!!\n\n");
	else
	{
		loc=stack[top];
		top--;
		printf("%d Value Popped from the Stack\n\n\n",loc);
	}
}
