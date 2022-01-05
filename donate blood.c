// WAP to check if blood donor is eligible for donating blood
// Age should be above 18 but not more than 55
// Weight should be more than 45
#include<stdio.h>
#include<conio.h>
int main()
{
	int age , weight;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your weight: ");
	scanf("%d", &weight);
	if(age>0)
	{
	if(age>18 && age<=55 && weight>=45)
	printf("You are eligible to donate blood");
	else
	printf("You are ineligible to donate blood");
    }
    
    getch();
    
	
}
