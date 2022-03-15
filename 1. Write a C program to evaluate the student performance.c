#include<stdio.h>
#include<conio.h>
int main()
{
int percentage;
printf("\nEnter percentage obtained: ");
scanf("%d",&percentage);
printf("\nStudent perfomance: ", percentage); 

	if(percentage >=90 )
	{
	printf("Excellent perfomance"); 
	}
	else if (percentage >=80)
	{ 
		printf("Very Good perfomance");
	}
	else if (percentage >=70)
	{
		printf("Good perfomance");
	}
	else if (percentage >=60)
	{
		printf("Average perfomance");
	}
	else if (percentage <=59)
	{
		printf("Poor perfomance");
	}
getch();
}
