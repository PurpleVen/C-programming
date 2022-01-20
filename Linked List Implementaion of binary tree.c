#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct binary
{
	int info;
	struct binary *left, *right;
}node;

int count = 1;

struct binary *getnode(void)
{
	return((struct bt*)malloc (sizeof(struct binary)));
}
void freenode(struct binary *p)
{
	free(p);
}

struct binary *insert(struct binary *r, int x)
{
	struct binary *newnode;
	if(r==NULL)
	  {
	  	newnode = getnode();
	  	newnode -> info = x;
	  	newnode -> left = NULL;
	  	newnode -> right = NULL;
	  	r = newnode;
	  	
	  	count++;
	  }
	else
	  {
	  	if(count%2==0)
	  	  r -> left = insert(r->left,x);
	  	else  
	  	  r -> right = insert(r->right,x); 
		}  
	return(r);	
}

void display(struct binary *r)
{
	if(r->left!=NULL)
	   display(r->left);
	     printf("\n\t%d", r->info);
	if(r->right!=NULL)
	   display(r->right);     
}

void main()
{
	int ch,x;
	struct binary *root=NULL;
	while(1)
	{
		printf("\n*****Linked List Implementation Of Binary Tree*****");
		printf("\n\n1.Insert");
		printf("\n2.Display");
		printf("\n3.Exit");
		
		printf("\n\nEnter Your Choice: ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter The Node Value: ");
				scanf("\n %d",&x);
				root = insert(root,x);
				break;
				
			case 2:
				display(root);
				printf("\n");
				break;
				
			case 3:
				exit(0);
				
			default:
				printf("\nInvalid Choice");
		}
	}
}

