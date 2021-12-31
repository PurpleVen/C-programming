#include<stdio.h>
#include<conio.h>
#define SIZE 5

void Enqueue();
void Dequeue();
void Display();

int Myqueue[SIZE],front = -1, rear = -1, element;

void main()
{
	int choice;
	
	while(1){
		printf("\n*****Menu******\n");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
			    Enqueue();
			    break;
			case 2:
			     Dequeue();
				 break;
			case 3:
				Display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice!\n");     
		}
	}
}

void Enqueue()
{
	if((front == 0 && rear == SIZE-1) || (front == rear + 1))
	   printf("\nCircular Queue is FULL");
	else
	{
		printf("\nEnter the element to be insert: ");
		scanf("%d", &element);
		if(rear == SIZE-1 && front!=0)
		rear=-1;
		Myqueue[++rear]=element;
		
		if(front == -1)
        front = 0;
    }
}

void Dequeue()
{
	if(front == -1 && rear == -1)
	printf("\nCircular Queue is EMPTY");
	else
	{
		printf("\nDeleted element: %d\n", Myqueue[front++]);
		if(front == SIZE)
		front = 0;
		if(front-1 == rear)
		front = rear = -1;
	}
}

void Display()
{
	if(front == -1)
	printf("\nCircular queue is EMPTY\n");
	else
	{
		int i = front;
		printf("\nCircular queue elements are: \n");
		if(front<=rear)
		{
			while(i<=rear)
			printf("%d\t",Myqueue[i++]);
		}
		else
		{
			while(i<=SIZE-1)
			printf("%d\t",Myqueue[i++]);
			i=0;
			while(i<=rear)
			printf("%d\t",Myqueue[i++]);
		}
	}
}
