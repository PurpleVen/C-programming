//LET us now take one structure with employee info
//we will enter data for 5 employees and display the report

#include<stdio.h>
#include<string.h>

struct employee
{
    int empId;
	char name[50];
	float salary;
	struct date
	{
		int dd;
		char mm[10];
		int yy;
	}doj;	
};emp[5];

int main()
{
	int i;
	
	printf("Enter data for 5 employees: ");
	for(i=0;i<5;i++)
	{
		printf("Employee[%d]:",i+1);
		printf("Enter Id: ");
		scanf("%d",&emp[i].empId);
		printf("Enter Name: ");
		scanf("%s",&emp[i].empname);
		printf("Enter Salary: ");
		scanf("%f",&emp[i].empsalary);
		printf("Enter Date of joining: ");
		printf("Enter date:\n");
		scanf("%d",&emp[i].doj.dd);
		printf("Enter month:\n");
		scanf("%d",&emp[i].doj.mm);
	    printf("Enter year:\n");
		scanf("%d",&emp[i].doj.yy);	
	//	fflush(stdin);
	//	printf("Enter Salary: ");
	//	scanf("%f",&emp[i].salary);
	}
	printf("Enter data for 5 employees: ");
	for(i=0;i<5;i++)
	{
		printf("Employee[%d]:",i+1);
		printf("\nEnter Id: ");
		scanf("%d",&emp[i].empId);
		
		printf("\nName: ");
		puts(emp[i].name);
		printf("\nSalary: %f",emp[i].salary);
	
		printf("\nEnter Date of joining:%d-%s-%d",emp[i].doj.dd,emp[i].doj.mm,emp[i].doj.yy);
    }
}

