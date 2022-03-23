// C Program to Insert an element

// at a specific position in an Array



#include <stdio.h>



int main()

{

	int arr[100] = { 0 };

	int i, x, pos, n = 10;



	// initial array of size 10

	for (i = 0; i < 10; i++)

		arr[i] = i + 1; //putting numbers from 1 to 10 in the initial array



	// print the original array

	for (i = 0; i < n; i++)

		printf("%d ", arr[i]);

	printf("\n");



	// element to be inserted

	x = 50;   //new elements which is inserted in between



	// position at which element

	// is to be inserted

	pos = 5;   //place at which x=50 will be inserted



	// increase the size by 1

	n++;   //to accomodate new number 50, increase limit by 1



	// shift elements forward

	for (i = n-1; i >= pos; i--)

		arr[i] = arr[i - 1];



	// insert x at pos

	arr[pos - 1] = x;



	// print the updated array

	for (i = 0; i < n; i++)

		printf("%d ", arr[i]);

	printf("\n");



	return 0;

}
