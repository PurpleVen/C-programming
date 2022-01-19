//53_IT_Vendra
#include<stdio.h>

typedef struct nodedata
{
    int data;
    struct nodedata *left, *right;
    int ht
}nodedata;

nodedata *insert(nodedata *, int);
nodedata *Delete(nodedata *, int);

void preorder(nodedata *);
void inorder(nodedata *);
int height(nodedata *);
nodedata *rotateright(nodedata *);
nodedata *rotateleft(nodedata *);
nodedata *RR(nodedata *);
nodedata *LL(nodedata *);
nodedata *LR(nodedata *);
nodedata *RL(nodedata *);
int BF(nodedata *);

int main()
{
    nodedata *root=NULL;
    int x, i, n, op;

    do
    {
       printf("-----Linked List Implementation Of AVL Tree-----");
       printf("\n1.Create");
       printf("\n2.Insert");
       printf("\n3.Delete");
       printf("\n4.Print");
       printf("\n5.Quit");
       printf("\n\nEnter Your Choice: ");
       scanf("%d", &op);

       switch (op)
       {
       case 1:
               printf("\nEnter No. Of Elements: ");
               scanf("%d", &n);
               printf("\nEnter Tree Data: ");
               root = NULL;
               for(i=0;i<n;i++)
               {
                   scanf("%d", &x);
                   root = insert(root,x);
               }
               break;

        case 2:
                printf("\nEnter A Data: ");
                scanf("%d", &x);
                root= insert(root,x);
                break;

        case 3:
                printf("\nEnter A Data: ");
                scanf("%d", &x);
                root=Delete(root,x);
                break;

        case 4:
                printf("\nPreorder Sequence:\n");
                preorder(root);
                printf("\n\nInorder Sequence:\n");
                inorder(root);
                printf("\n");
                break;                       
       }


    } while (op!=5);

    return 0;    
}

nodedata *insert(nodedata *T, int x)
{
    if(T==NULL)
    {
        T=(nodedata*)malloc(sizeof(nodedata));
        T->data=x;
        T->left=NULL;
        T->right=NULL;
    }
    else
        if(x>T->data)
        {
            T->right=insert(T->right,x);
            if(BF(T)==-2)
               if(x>T->right->data)
               T=RR(T);
               else
               T=RL(T);
        }
        else
        if(x<T->data)
        {
            T->left=insert(T->left,x);
            if(BF(T)==2)
            if(x<T->left->data)
            T=LL(T);
            else
            T=LR(T);
        }

        T->ht=height(T);

        return(T);
}

nodedata *Delete(nodedata *T, int x)
{
    nodedata *p;

    if(T==NULL)
    {
        return NULL;
    }
    else
    if(x>T->data) //insert in right subtree
    {
        T->right=Delete(T->right,x);
        if(BF(T->left)>=0)
        T=LL(T);
        else
        T=LR(T);
    }
    else
    if(x<T->data)
    {
        T->left=Delete(T->left,x);
        if(BF(T)==-2)
        if(BF(T->right)<=0)
        T=RR(T);

        else
        T=RL(T);
    }
    else
    {
        //data to be deleted is found
        if(T->right!=NULL)
        {
            p=T->right;

            while (p->left!=NULL)
            p=p->left;

            T->data=p->data;
            T->right=Delete(T->right,p->data);

            if(BF(T)==2) //Rebalance

            if(BF(T->left)>=0)
            T=LL(T);

            else
            T=LR(T);
        }
        else
        return(T->left);
            
        }

        T->ht=height(T);
        return(T);
    }

    int height(nodedata *T)

    {
        int lh,rh;
        if(T==NULL)
        return(0);

        if(T->left==NULL)
        lh=0;
        else
        lh=1+T->left->ht;

        if(T->right==NULL)
        rh=0;

        else
        rh=1+T->right->ht;

        if(lh>rh)
        return(lh);

        return(rh);
    }

    nodedata * rotateright(nodedata *x)
    {
        nodedata *y;
        y=x->left;
        x->left=y->right;
        y->right=x;
        x->ht=height(x);
        y->ht=height(y);
        return(y);
    }

    nodedata * rotateleft(nodedata *x)
    {
        nodedata *y;
        y=x->right;
        x->right=y->left;
        y->left=x;
        x->ht=height(x);
        y->ht=height(y);

        return(y);
    }

    nodedata *RR(nodedata *T)
    {
        T=rotateleft(T);
        return(T);
    }

    nodedata *LL(nodedata *T)
    {
        T=rotateright(T);
        return(T);
    }

    nodedata *LR(nodedata *T)
    {
        T->left=rotateleft(T->left);
        T=rotateright(T);

        return(T);
    }

    nodedata *RL(nodedata *T)
    {
        T->right=rotateright(T->right);
        T=rotateleft(T);
        return(T);
    }

    int BF(nodedata *T)
    {
        int lh,rh;
        if(T==NULL)
        return(0);

        if(T->left==NULL)
        lh=0;

        else
        lh=1+T->left->ht;

        if(T->right==NULL)
        rh=0;
        else
        rh-1+T->right->ht;

        return(lh-rh);
    }

    void preorder(nodedata *T)
    {
        if(T!=NULL)
        {
            printf("%d(Bf=%d)",T->data,BF(T));
            preorder(T->left);
            preorder(T->right);
        }
    }

    void inorder(nodedata *T)
    {
        if(T!=NULL)
        {
            inorder(T->left);
            printf("%d(Bf=%d)",T->data,BF(T));
            inorder(T->right);
        }
    }




