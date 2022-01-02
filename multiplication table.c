#include<stdio.h>
#include<conio.h>
int main()
{
  int arr[10], i, sum=0, n;
  printf("\nEnter a number whose table is to be printed: ");
  scanf("%d", &n);
  printf("\n---------------------------------------------");
  for (i=1;i<=10;i++)
  {
  	sum=n*i;
  	arr[i]=sum;
    printf("\n\n%d * %d =  %d \n", n, i, sum);
  }
  printf("\n---------------------------------------------");
  printf("\n");
  return 0;
}

