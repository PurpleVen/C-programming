//53_IT_Vendra
#include<stdio.h>
#include<conio.h>
void DFS(int v);
typedef enum boolean{false,true}bool;
int n, arr[10][10];
bool visited[10];
void main(){
    int i, j,v;
    printf("Enter Total Number Of Nodes In The Graph: ");
    scanf("%d", &n);
    printf("Enter The Adjacency Matrix For The Graph \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter The Starting Node For DFS: ");
    scanf("%d",&v);
    for(i=0;i<=n;i++)
    visited[i]=false;
    DFS(v);
    getch();
}
void DFS(int v){
    int i, stack[10], top=-1,pop;
    top++;
    stack[top]=v;
    while (top>=0)
    {
        pop=stack[top];
        top--;
        if(visited[pop]==false)
        {
            printf("%d",pop);
            visited[pop]=true;
        }
        else
        continue;
        for(i=n;i>=1;i--)
        {
            if(arr[pop][i]==1 && visited[i]==false)
            {
                top++;
                stack[top]=i;
            }
        }
    }
}
