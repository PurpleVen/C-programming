// WAP to check whether the voter is eligible for voting
// Age should be above 18

#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	printf("Enter your age : ");
	scanf("%d", &age); 
	if(age>0)
	{
	if(age>=18)
	printf("\nYou are eligible to vote!\n\n");
	else
	printf("You are ineligible to vote!");
    }
	else
	{
	printf("\nPlease enter a positive value of age\n\n");
    }
	getch();
	return 0;
}
