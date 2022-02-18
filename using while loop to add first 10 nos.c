// prog to print sum of first 10 nos using while
#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 1, sum = 0;
	while (a<=10)
	{
		sum = sum+a;    ////initial value 0+1=1
		printf("sum = sum of first %d nos is %d \n",a,sum);
		a++;          // a=2
	}
	
	getch();
}
////  1  3  6      10  15    21   28   36   45   55

