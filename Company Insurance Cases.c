#include<stdio.h>
#include<conio.h>
int main ()
{
	int age;
	char gender, martialstatus;
	printf("Enter gender in 'm' or 'f': ");
	scanf("%c",&gender);
	printf("\n\nEnter Age: ");
	scanf("%d",&age);
	printf("\n\nEnter martial status in 'y' or 'n': ");
	scanf(" %c",&martialstatus);
	if(martialstatus=='y')
	printf("\n\nThe driver is eligible for a insurance");
  	else if((martialstatus=='n')&&(gender=='m') && age>30)
	printf("\n\nThe driver is eligible for a insurance");
   	else if((martialstatus=='n') &&( gender=='f')&& age>25)
	printf("\n\nThe driver is eligible for a insurance");
    else
	printf("\n\nThe driver is not eligible for a insurance");
    getch ();
}
