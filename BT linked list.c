//craeting a binary tree

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct bt
{
	int info;
	struct bt * left, *right;
}node;

int count = 1;
struct bt* getnode (void)
{
	return((struct bt*)malloc(sizeof(struct bt)));
}
void freenode(struct bt *p)
{
	free(p);
}
struct bt* insert(struct bt *r, int x)
{
	struct bt *newnode;
	if(r==NULL)
	{
		newnode=getnode();
		newnode->info=x;
		newnode->left = NULL;
		newnode->right=NULL;
		r=newnode;
		
		count++;
	}
	else
	{
		if(count%2==0)
		r->left=insert(r->left,x);
		else
		r->right=insert(r->right,x);
	}
	return(r);
}
void display(struct bt *r)
{
	if(r->left!=NULL)
	display(r->left);
	printf("\n\t %d", r->info);
	if(r->right!=NULL)
	display(r->right);
}

void main()
{
	int ch, x;
	struct bt *root=NULL;
	while(1)
	{
		//clrscr();
		printf("\n----Linked list------");
		printf("\n1.Insert");
		printf("\n2.Display");
		printf("\n3.Exit");
		
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the node value: ");
				scanf("\n %d",&x);
				root = insert(root,x);
				break;
				
			case 2:
			display(root);
			break;
			
			case 3:
			exit(1);
			
			default:
			printf("\n Wrong Choice");	
		}
		
	}//end of while
}
