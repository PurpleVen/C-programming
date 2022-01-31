#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5];
    int i, n, num, count;
    printf("enter 5 elements in array:\n");
	//user input in the array
	for(i=0;i<5;i++)
	{
		printf("enter element[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	//printing the user given array
	printf("The elements in array:\n");
	for(i=0;i<5;i++)
	{
		printf("Element[%d]: %d\n",i+1,arr[i]);
	}
	 printf("Enter number to find Occurrence: ");
    scanf("%d", &num);
    //count occurance of num
    count = 0;
    for (i=0;i<5;i++) 
	{
        if (arr[i] == num)
            count++;
    }
    printf("Occurrence of %d is: %d\n", num, count);
    return 0;
}
