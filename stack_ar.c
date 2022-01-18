#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int stack[5];
int top=-1;

/*Function Prototype : declaration of no of*/ 
//push method is used to insert element into the stack//
void push(int);

//pop element is used to delete element from the stack//
void pop();

//display method is used to traverse and print all the elements from the stack//
void display();

/*Main Method*/
void main()
{
	int ch;
	int n1;

	while(1)
	{
//	clrscr();

	printf("\n----Stack Operation----");
	printf("\n1. Push an element into the stack");
	printf("\n2. Pop out an element from the stack");
	printf("\n3. Display the stack elements");
	printf("\n4. Exit");

	printf("\n Enter your choice: ");
	scanf("%d", &ch);

	switch(ch)
	{
	    case 1: printf("\n Enter the element to be pushed into the stack: ");
	    scanf("%d", &n1);
	    push(n1);
	    break;

	    case 2: pop();
	    getch();
	    break;

	    case 3: display();
	    getch();
	    break;

	    case 4: exit(1);

	    default: printf("\n wrong choice");
	    break;
	    } //endof switch

	    }//end of while

	    }
	    /*End of Main Method*/

	    /*push method*/
	    void push(int x)
	    {
	    if (top==4)
	    {
	    printf("Stack is FULL");
	    }
	    else
	    {
	    top++;
	    stack[top]=x;
	    }
	    }/*End of push method*/

	    /*Pop method*/
	    void pop()
	    {
	    if(top==-1)
	    {
	    printf("Stack is EMPTY");
	    }
	    else
	    {
	    printf("\n %d element is popped out of the stack",stack[top--]);
	    }
	    }/*End of Pop method*/

	    /*Display method*/
	    void display()
	    {
	    int i;
	    if(top==-1)
	    printf("\n Elements in the stack are");
	    for(i=top;i>=0;i--)
	    {
	    printf("\n %d", stack[i]);
	    }
	    }

         
	/*End of Display method*/

