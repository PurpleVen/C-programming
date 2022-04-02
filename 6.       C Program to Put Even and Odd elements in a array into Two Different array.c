#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[6];
    int i, n, odd, even;
    printf("enter 6 elements in array:\n");
	//user input in the array
	for(i=0;i<6;i++)
	{
		printf("enter element[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	//printing the user given array
	printf("\nThe elements in array:\n");
	for(i=0;i<6;i++)
	{
		printf("Element[%d]: %d\n",i+1,arr[i]);
	}
     printf("\nEven numbers of the array are:  ");
     for(i=0; i<6; i++)
	{
        if(arr[i]%2==0)
		{
            printf("%d \t",arr[i]);
        }
    }
    printf("\nOdd numbers of the array are:  ");
     for(i=0; i<6; i++)
	{
        if (arr[i]%2==1)
		{
            printf("%d \t",arr[i]);
        }
    }
    getch();
    return 0;
}
