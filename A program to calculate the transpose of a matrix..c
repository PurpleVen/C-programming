#include<stdio.h>
#include<conio.h>
int main()
{
    int m, n, i, j;                 //Matrix Size Declaration
    printf("Enter the number of rows: ");
    scanf("%d",&m);   //Matrix Size Initialization
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    int arr[10][10];        //Matrix Size Declaration
    for(i=0;i<m;i++)    //Matrix Initialization
    {
    	printf("\nEnter elements of row[%d]: \n",i+1);
        for(j=0;j<n;j++)
        {
        	printf("Enter elements on row[%d][%d]:",i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(i=0;i<m;i++)     //Print the matrix
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int brr[10][10];         //Transpose Matrix Declaration
    for(i=0;i<m;i++)     //Transpose Matrix initialization
    {
        for(j=0;j<n;j++)
        {
            brr[j][i]=arr[i][j];     //Store elements in the transpose matrix
        }
    }
    printf("\nThe transpose of the elements in the matrix are: \n");
    for(i=0;i<m;i++)      //Print the transpose matrix
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
    getch();
}

