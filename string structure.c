#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	struct Date
	{
		int dd;
		int mm;
		int yyyy;
	}doj;
}e1;
int main()
{
	
	e1.id=101;
	strcpy(e1.name, "Vendra");
	e1.doj.dd= 04;
	e1.doj.mm= 8;
	e1.doj.yyyy=2002;
	
	printf("Employee id: %d\n", e1.id);
	printf("Employee name: %s\n", e1.name);
	printf("Employee date of joining (dd/mm/yyyy): %d/%d/%d\n", e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
	return 0;
}
