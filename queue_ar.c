#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int queue[5];
int front=0;
int rear=-1;

void enqueue(int);
void dequeue();
void display();

/*Function Prototype : declaration of no of*/ 
//push method is used to insert element into the stack//
//void push(int);

//pop element is used to delete element from the stack//
//void pop();

//display method is used to traverse and print all the elements from the stack//
//void display();

/*Main Method*/
void main()
{
	int ch;
	int n1;

	while(1)
	{
//	clrscr();

	printf("\n----Queue Operation----");
	printf("\n1. Insert");
	printf("\n2. Delete");
	printf("\n3. Display the queue elements");
	printf("\n4. Exit");

	printf("\nEnter your choice: ");
	scanf("%d", &ch);

	switch(ch)
	{
	    case 1: printf("\nEnter the element to be inserted into the queue: ");
	    scanf("%d", &n1);
	    enqueue(n1);
	    break;

	    case 2: dequeue();
	    getch();
	    break;

	    case 3: display();
	    getch();
	    break;

	    case 4: exit(1);

	    default: printf("\nWrong choice");
	    break;
	    } //endof switch

	    }//end of while

	    }
	    /*End of Main Method*/

	    /*push method*/
	    void enqueue (int x)
	    {
	    if (rear==4)
	    {
	    printf("Queue is FULL");
	    }
	    else
	    {
	    rear++;
	    queue[rear]=x;
	    }
	    }/*End of push method*/

	    /*Pop method*/
	    void dequeue()
	    {
	    if(front>rear)
	    {
	    printf("Queue is EMPTY");
	    }
	    else
	    {
	    printf("\n\n%d element is dequeued out of the queue\n",queue[front++]);
	    }
	    }/*End of Pop method*/

	    /*Display method*/
	    void display()
	    {
	    int i;
	    if(front>rear)
	    {
		 printf("Queue is empty");
	    }
	    else
	    {
	    printf("\nElements in the queue are");
	    for(i=front;i<=rear;i++)
	    printf("\n %d", queue[i]);
     	}
	    }
	    

         
	/*End of Display method*/

