#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *front=NULL, *rear=NULL,*temp;

void enqueue();
void dequeue();
void display();

int main()
{
	int ch;
//	clrscr();
	do
	{
		printf("\n****MENU*****");
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Display");
		printf("\n4.Exit");
		
		printf("\nSelect your choice: ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				enqueue();
				break;
				
			case 2:
				dequeue();
				break;
				
			case 3:
				display();
				break;
				
			case 4: 
				return 1;
				
			default:
				printf("Invalid choice");
		}
	}while(1);
return 0;
}

void enqueue()
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	
	printf("\nEnter the value: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	
	if(rear==NULL)
	front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	rear->next=front;
}

void dequeue()
{
	temp=front;
	if(front==NULL)
	  printf("Underflow");
	else
	{
		if(front==rear)
		{
			front=rear=NULL;
		}
		else
		{
			front=front->next;
			rear->next=front;
		}
		printf("\nNode deleted: %d",front->data);
		temp->next=NULL;
		free(temp);
	}
}

void display()
{
	temp=front;
	if(front==NULL)
	printf("\nLinked List is empty");
	else
	{
	printf("\n");
	for(;temp!=rear; temp=temp->next)
	{
		printf("%d\n",temp->data);
	}
	printf("%d", temp->data);
}
}
