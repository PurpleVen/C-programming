/*#include<stdio.h>
#include<conio.h>
int main()
{
	int array[5];
	int i, position, n, c, size;
	printf("enter 5 elements in array:\n");
	//user input in the array
	for(i=0;i<5;i++)
	{
		printf("enter element[%d]:",i+1);
		scanf("%d",&array[i]);
	}
	//printing the user given array
	printf("The elements in array:\n");
	for(i=0;i<5;i++)
	{
		printf("Element[%d]: %d\n",i+1,array[i]);
	}
 printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }
	
	getch();
}*/

#include <stdio.h>
int main()
{
   int array[100], position, c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}
