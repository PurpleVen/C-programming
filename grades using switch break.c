// WAP using switch case to print grade based on the following distribuition of marks

//Marks  Grade
//>=90    A =>   marks/10 = 9
//80-89   B      marks/10 = 8
//70-79   C      marks/10 = 7
//60-69   D      marks/10 = 6
//<60    Bad perfomance

#include<stdio.h>
#include<conio.h>
int main()
{
	int marks, z;
	printf("Enter your marks: ");
	scanf("%d", marks);
	z=marks/10;
	
	switch(z)
	{
		case 9 : 
		     printf("Grade is A");
		     break;
		case 8 : 
		     printf("Grade is B");
		     break;
		case 7 : 
		     printf("Grade is C");
		     break;
		case 6 : 
		     printf("Grade is D");
		     break;
		default :
			printf("Bad perfomance");
			break;
	}
	getch();
	
	
}
