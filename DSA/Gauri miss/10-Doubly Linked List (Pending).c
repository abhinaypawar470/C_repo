#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head;
struct node *tail;

void start_insert()
{
	struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    
    printf("\n\nEnter the value in the node??\n");
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
    new_node->prev=head;
    printf("Node Inserted\n");
}
void last_insert()
{
	struct node *new_node, *temp;
	new_node=(struct node*)malloc(sizeof(struct node));
	
	printf("\n\nEnter the value in the node??\n");
    scanf("%d",&new_node->data);
    if(head==tail)  
    {  
        new_node->next=tail;
		head=new_node;  
		new_node->prev=head;
        printf("\nNode inserted");  
    }  
    else  
    {  
        temp=head;  
        while(temp->next!=tail)  
        {  
            temp=temp->next;  
        }  
        temp->next=new_node;  
        new_node->next=tail;
        new_node->prev=temp;
        printf("Node Inserted\n");
    }
	
}

void random_insert()
{  
    int i,pos;   
    struct node *new_node, *temp;  
    new_node=(struct node*)malloc(sizeof(struct node));  
    if(new_node==NULL)
	{  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter Data value\n");  
        scanf("%d",&new_node->data);  
        printf("\nEnter the location after which you want to insert???\n");  
        scanf("%d",&pos);
        temp=head;
        for(i=0;i<pos;i++)
        {
            temp=temp->next;
            if(temp==tail)
            {   
                printf("\ncan't insert\n");  
                return;  
            }  
        }  
        new_node->next=temp->next;
		temp->next->prev=new_node;   
        temp->next=new_node;   
        new_node->prev=temp;
        
        printf("\nNode inserted");  
    }  
}

void start_delete()
{
	struct node *new_node;
	if(head==tail)
	printf("\n\nList is Empty\n");
	else
	{
	    new_node=head;
	    head=new_node->next;
	    new_node->next->prev=head;
	    printf("\n\n%d Data \nNode Deleted\n",new_node->data);
	    free(new_node);
    }
}

void last_delete()
{  
    struct node *new_node,*temp; 
	new_node=head;
    
	if(head==tail)  
    {  
        printf("\nlist is empty");  
    }  
    else if(new_node->next==tail)  
    {
        head=tail;
        free(new_node);
        printf("\nOnly node of the list deleted ...\n");  
    }
    else
    {
        while(new_node->next!=tail)
        {  
            temp=new_node;  
            new_node=new_node->next;  
        }  
        temp->next=tail;
		tail->prev=temp;  
		printf("\n\n%d Data \n",new_node->data);
        free(new_node);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}

void random_delete()  
{  
    struct node *new_node,*temp;  
    int pos,i;
    printf("\nEnter the location of the node on which you want to perform deletion\n");  
    scanf("%d",&pos);  
    new_node=head;  
    for(i=0;i<pos;i++)  
    {  
        temp=new_node;       
        new_node=new_node->next;  
              
        if(new_node==NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    temp->next=new_node->next;  
    new_node->next->prev=temp;
    printf("\n\n%d Data \n",new_node->data);
    free(new_node);  
    printf("\nDeleted node from %d location",pos);  
}

void display()
{
	struct node *temp;
	temp=head;
	if(temp==tail)  
    printf("\n\nNothing to print");  
    else  
    {
        printf("\n\nprinting values . . . . .\n");   
        while(temp!=tail)  
        {  
            printf("%d\t",temp->data);  
            temp=temp->next;  
        }  
    }
}

int main()
{
	int choice;
	printf("Choose one option from the following list ...\n");
	printf("\n1.To Insert at Start\n2.To Insert at Last\n3.To Insert at Random Location\n4.To Delete a Node from Start\n5.To Delete a Node from Last\n6.To Delete a Node from Random Location\n7.To Display and Traverse\n8.To Exit\n\n");
	while(choice!=8)
	{
	    scanf("%d",&choice);
	    
		if(choice==1)
		start_insert();
		else if(choice==2)
		last_insert();
		else if(choice==3)
		random_insert();
		else if(choice==4)
		start_delete();
		else if(choice==5)
		last_delete();
		else if(choice==6)
		random_delete();
		else if(choice==7)
		display();
		else if(choice==8)
		break;
		else
		printf("\n\nInvalid value!!!!\n");
		printf("\n\n\nTell Your choice from above\n");
	}
	
	return 0;
}
