//PROG to print first n fibonacci nos
// 0 1 1 2 3 5 8 13

#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n, f1=0, f2=1, f3;
	
	printf("Enter how many numbers of fibonacci series are to be printed : \n");
	scanf("%d", &n);  //n=5
	
	printf("\nFirst %d Fibonacci numbers are : \n", n);
	printf(" %d %d", f1, f2);
	for (i=1; i<=n-2; i++)
	{
		f3=f1+f2;
		printf("%d\t",f3);
		f1=f2;
		f2=f3;
	}
	
}
