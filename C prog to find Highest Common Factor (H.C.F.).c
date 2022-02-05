// C prog to find Highest Common Factor (H.C.F.)

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, i, hcf;
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	for(i=2; i<=num1 || i<=num2; ++i)
	{
		if(num1%i==0 && num2%i==0)   //Checking whether i is a factor of both numbers
		hcf=i;
	}
	printf("H.C.F of %d and %d is %d", num1, num2, hcf);
	getch();
	return 0;
}
