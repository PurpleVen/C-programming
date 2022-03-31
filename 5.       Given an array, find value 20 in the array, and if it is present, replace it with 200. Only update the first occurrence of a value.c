#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5];
    int i, n, c=0;
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
	for (i=0; i<5;i++)
 {
 if(arr[i] == 20) // To check if its 20
 {
 c = c +1;
 arr[i]=200; // if its 20 then replacing with 200
 break; 
 }
 }
 
 if (c==0)
 printf("Value 20 is not present");
 else
 {
 printf("\nArray after the replacement of 20 : ");
 for (i=0; i<5; i++)
 printf ("%d ",arr[i]);
 }
 return 0;
}

