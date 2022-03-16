#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int x, i, ch=0, ans;
	init();
	while (1){
	{
	//clrscr();
	printf("====Operations On Linked Lists======");
	printf("\n1.To Insert In The BEGINNING ");
	printf("\n2.To Insert In The END");
	printf("\n3.To Insert In A LOCATION");
	printf("\n4.To Delete In The BEGINNING");
	printf("\n5.To Delete In The END");
	printf("\n6.To Delete In A LOCATION");
	printf("\n7. Display");
	printf("\n8. Search");
	printf("\n9. Quit");
	
	printf("\\nEnter your choice: ");
	scanf("%d", &ch);

	switch(ch)
	{
	case 1: 
	insertbeg();
	printf("\nEnter the value to be inserted in the beginning: ");
	scanf("%d", &x);
	insertbeg(&ans,x);
	break;
	
	case 2: 
	insertend();
	printf("\nEnter the value to be inserted in the end: ");
	scanf("%d", &x);
	break;
	
	case 3:
	printf("\nEnter the value to be inserted in a location: ");
	scanf("%d", &x);
	break;
	
	case 4:
	delbeg();
	printf("\nEnter the value to be deleted in the beginning: ");
	scanf("%d", &x);
	break;
	
	case 5:
	delend();
	printf("\nEnter the value to be deleted in the end: ");
	scanf("%d", &x);
	break;
	
	case 6:
	delloc();
	printf("\nEnter the value to be deleted in a location: ");
	scanf("%d", &x);
	break;
	
	case 7:
	dispaly();
	printf("\nTo display the elements: ");
	scanf("%d", &x);
	break;
	
	case 8:
	search();
	printf("\nTo search the elements: ");
	scanf("%d", &x);
	break;
	
	case 9:
	//exit();
	break;
	//("\n Do you want to continue? ", 1=yes, 0=no);
	}
	}
}
}


//To insert in the Beginning
void insertbeg(int x)
{
	struct node *newnode;
	newnode = getnode();
	newnode-> info = x;
	newnode -> next list;
	list = newnode;
	display();

}

//To insert in the End
void insertend(int x)
{
	struct node *newnode , *temp;
	newnode = getnode();
	newnode -> info = x;
	newnode -> next = null;
	temp = list;
	if(temp == NULL)
	list = newnode;
	else
	{
		while(temp->next!=Null)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	display();
}

//To insert in a Location
void insertloc

//To Delete in Beginning
void delbeg()
{
	struct node*temp;
	temp=list;

	if(list==NULL)
	printf("List is already Empty");
	else
	{
	printf("Element %d successfully deleted", temp>info);
	list=temp->next;

	freenode(temp);
	display();
	}
}

//To Delete in the End
void delend()
{
	int x;
	struct node* temp* ptr;
	temp = list;

	if(list==NULL)
	printf("List is already Empty");
	else{
	if(temp->next==NULL)
	{
	x=temp->info;
	list=NULL;
	}
	else{
	while(temp->next!=NULL)
	{
	ptr=temp;
	temp=temp->next;
	}
	x=temp->info;
	ptr->next=NULL;
	}
	printf("Element %d successfully deleted", x);
	freenode(temp);
	display();
	}
}

//To Delete in a location
void delloc(int p){
	int x, i;
	struct node*temp,*ptr;
	temp=list;
	if(list==NULL)
	printf("List is already Empty");
	else
	{
	if(p==1)
	list=list->next;
	else
	{
	for(i=1;i<p;i++)
	{
	if(temp->next==NULL)
	{
	printf("There are less than %d elements in the Less", p);
	break;
	}
	ptr=temp;
	temp=temp->next;
	}
	}
	if(temp->next!=NULL)
	{
	printf("Element %d successfully deleted", temp->info);
	ptr->next=temp->next;
	freenode(temp);
	}
	//else
	//{
	//delend();
	//}
	display();
	}
}


//To Display
void dispaly()
{
	int i;
	struct node*t;
	t=list;
	
	if(t==NULL)
	printf("The linked list is empty.");
	else
	{
	while(t!=NULL)
	    {
		  printf("%d", t>info);
		  t=t->next;
		}	
	}
}

//To Search
void search(int x)
{
	int i;
	struct node*temp;
	temp=list;
	if(list==NULL)
	printf("List is Empty");
	else
	{
	i=1;
	while(temp->next!=NULL)
	{
	if(temp->info==x)
	{
	printf("Position of element %d is %d", x, i);
	break;
	}
	temp=temp->next;
	i++;

	}
	if(temp->next==NULL && temp->info==x)
	printf("Position of element %d is %d", x ,i);
	if(temp->next==NULL && temp->info!=x)
	printf("\n Element Not Found");
	}
}
