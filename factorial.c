#include<stdio.h>
#include<conio.h>
int main()
{
 int number,a,factorial;
 factorial=a=1;
 printf("Enter a number to find its factorial: ");
 scanf("%d",&number);
 while(a<=number)
 {
 factorial*=a;
 a++;
 }
 printf("The factorial of %d is : %d",number,factorial);
 getch ();
 return 0;
}

