//program to demonstrate scanf()

#include<stdio.h>

int main()
{
	
	int roll_no;
	int marks;
	float result;
	
	printf("Please enter your roll number:\n");
	scanf("%d",&roll_no);
	
	printf("please enter marks out of 20:\n");
	scanf("%d",&marks);
	
	result=marks*0.5;
	
	printf("Roll Number=%d,Original Marks=%d and Your converted Marks are=%.2f\n",roll_no,marks,result);
	return 0;
}
