#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5];
    int i, n, j, tmp, a;
    double median;
    printf("enter 5 elements in array:\n");
	//user input in the array
	for(i=0;i<5;i++)
	{
		printf("enter element[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	//printing the user given array
	printf("\nThe elements in array:\n");
	for(i=0;i<5;i++)
	{
		printf("Element[%d]: %d\n",i+1,arr[i]);
	}
	for (i=0; i<5; i++)
 {
 arr[i]= arr[i]*arr[i]; // Squaring each elemnt
 }
 printf("\nThe squared elements: ");
 for (i=0; i<5;i++)
 {
 printf("%d ",arr[i]); // Printing the Squared Array
 }
 return 0;
}
