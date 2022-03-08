#include<stdio.h>
#include<conio.h>

int main()
{
int marks;
char ch = 'y';
do
{
{
printf("Enter marks obtained: ");
scanf("%d",&marks);
printf("\nGrade obtained: ", marks); 

	if(marks >= 75)
	{
	printf("Grade I with distiction"); 
	}
	else if (marks >= 60)
	{ 
		printf("Grade A");
	}
	else if (marks >= 45)
	{
		printf("Grade B");
	}
	else if (marks <= 35)
	{
		printf("Grade C");
	}
	else if (marks <= 34)
	{	
		printf("Failed");
	}
}
printf("\nDo you want to continue?");
scanf(" %c", &ch);
}while(ch =='y');
getch();
}

