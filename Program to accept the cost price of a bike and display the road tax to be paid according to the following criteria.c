#include<stdio.h>
#include<conio.h>
int main()
{
int bikeprice;
double tax;
printf("Enter the cost price of the bike: ");
scanf("%d",&bikeprice);
if( bikeprice>100000)
tax= 0.15 * bikeprice;
else if( bikeprice>50000 && bikeprice<=100000)
tax= 0.10 * bikeprice;
else if( bikeprice<=50000)
tax= 0.05 * bikeprice;
printf("Road tax to be paid= %.2f", tax);
getch();
}


