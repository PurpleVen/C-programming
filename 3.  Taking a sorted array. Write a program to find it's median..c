/*#include<stdio.h>
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
/*for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<5; i++)
    {
        printf("Element[%d]: %d\n",i+1,arr[i], arr[i]);
    }
	        printf("\n\n");*/

// to find median

 /* if (n%2==0) // Conditional Statement to find the Median for an Even length array
  median = arr[(n/2)-1]; 
 
 
else // Conditional Statement to find the Median for an Odd length array
 {
 int el1 = arr[((n-1)/2) -1]; 
 int el2 = arr[((n+1)/2) -1];
 median = (el1 + el2)/2.0;
 }
 printf ("Median of the Sorted Array = %d", arr[n]);
  getch();
  return 0;
}*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, el1, el2;
    double median;
    printf("enter length of array:\t");
    scanf("%d",&n);
    int arr[n];
   	//user input in the array
	for(i=0;i<n;i++)
	{
		printf("enter element[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	//printing the user given array
   // to find median
  if (n%2==0) // Conditional Statement to find the Median for an Even length array
  median=arr[(n+1)/2]; 
else // Conditional Statement to find the Median for an Odd length array
 {
 el1 = arr[((n-1)/2) -1]; 
 el2 = arr[((n+1)/2) -1];
 median = (el1 + el2)/2.0;
 }
 printf ("\nMedian of the Sorted Array = %.2f", median);
  getch();
  return 0;
}

