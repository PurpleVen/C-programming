//2 for loops 
  /*prog to print
  1   2   3   4   5
  1   2   3   4   5
  1   2   3   4   5*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j;
	
	for (j=1; j<=3; j++)
	
{
	for (i=1; i<=5; i++)
	printf("%d\t", j);
	printf("\n");
}
getch();
}
