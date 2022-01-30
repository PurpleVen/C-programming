#include<stdio.h>
#include<conio.h>

int main()
{
    int matrix[100][100],max1[100],max2[100];
    int i,j,m,n,o,p;

    printf("Enter number of Rows :");
    scanf("%d",&m);
    printf("Enter number of Columns :");
    scanf("%d",&n);

    printf("\nEnter matrix elements :\n");
    for(i=0;i< m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nMatrix is :\n");
    for(i=0;i< m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Enter Row number :");
    scanf("%d",&i);
    for(i=i;i<i+1;i++);
    {
        max1[i]=matrix[i][j];
        for(j=0;j<n;j++);
        {
            if(matrix[i][j]>max1[i]);
            {
                max1[i]=matrix[i][j];
            }
        }
    }
    printf("Enter Column number :");
    scanf("%d",&j);
    for(i=0;i<m;i++);
    {
        max2[j]=matrix[i][j];
        for(j=j;j<j+1;j++);
        {
            if(matrix[i][j]>max2[j]);
            {
                max2[j]=matrix[i][j];
            }
        }
    }
    printf("%d",max1);
    printf("%d",max2);

    return 0;
}
