#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,sum,diff,product,quotient;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("\nEnter 2nd number : ");
	scanf("%d",&b);
	//Calculating witth formulas
	sum=a+b;
	diff=a-b;
	product=a*b;
	quotient=a/b;
	printf("\nSum is : %d\n",sum);
	printf("\nDifference is : %d\n",diff);
	printf("\nProduct is : %d\n",product);
	printf("\nQuotient is : %d\n",quotient);
	return 0;
}
