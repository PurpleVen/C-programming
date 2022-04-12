//sum all the array elements



#include <stdio.h>



int main()

{

   // int a[50];  //max array size the user can mention

    int i, n, sum=0;

	

	

       printf("\n\nFind sum of all elements of array:\n");

       printf("--------------------------------------\n");	



       printf("Input the number of elements to be stored in the array [max 50]:");

       scanf("%d",&n);  //array size, taken from the user

   		int a[n];

       printf("Input %d elements in the array :\n",n);

       for(i=0;i<n;i++)	//n reprsents the upper limit

        {

	      printf("element - %d : ",i+1);

	      scanf("%d",&a[i]);

	    }



    for(i=0; i<n; i++)

    {

        sum += a[i];  //sum=sum+a[i]

    }



    printf("Sum of all elements stored in the array is : %d\n\n", sum);

}


