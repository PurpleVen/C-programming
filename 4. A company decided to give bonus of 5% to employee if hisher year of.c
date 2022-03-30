#include<stdio.h>
#include<conio.h>
int main() 
{
 int service;
 double salary;
 float bonus = 0;
 
 printf("Enter your salary: "); 
 scanf("%lf",&salary);
 
 printf("\n\nEnter the no. of years of service: "); 
 scanf("%d",&service);
 if(service>5) 
 {
 bonus = 0.05*salary;
 printf("\n\nBonus amount = %0.2f",bonus);
 }
 else
 printf ("\n\n%d more year/years to avail the Bonus", (5-service));
 getch ();
}
