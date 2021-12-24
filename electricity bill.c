#include<stdio.h>
#include<conio.h>
int main()
{
	float amount,bill;
	int units;
	printf("Enter the number of units: ");
	scanf("%d", &units);
	
	if(units <=50)
	{
	amount = units * 0.75;
	}
	else if(units >50 && units <=100)
	{
		amount= 0.75*50+ 0.85*(units-50);
	}
	else if(units >100 && units <=200)
	{
		amount=(0.75*50) + (0.85*50) + (1.5 *(units-100));
	}
	else if(units >200 && units<=300)
	{
		amount=(0.75*50) + (0.85*50) + (1.5*100) + (2.20 * (units-200));
	}
	else 
	{
		amount=(0.75*50) + (0.85*50) + (1.5 *100) +(2.20*100) +(3.0*(units-300)); 
	}
	amount=amount+(0.2*amount);
	printf("The total electricity bill is: %f", amount);
	getch();
}
