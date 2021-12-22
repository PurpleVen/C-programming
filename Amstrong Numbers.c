/*Title : Amstrong Numbers
   Description: To check whether the entered no is amstrong no or not
   A number is armstrong if sum of the cube of each digit = the number
   eg: 153 = 1 + 125 + 27 */
   

#include<stdio.h>
#include<conio.h>
int main()
{
	int n, num, digit, ams = 0,z; 
	
	printf("Enter a number : ");
	scanf("%d", &n);    //153
	
	num = n;
	
	while(n!=0)   // control expression (no ! =0) loop counts till n equals to z 
	{
		digit = n%10;              //3          //5   //1
		ams = ams + digit * digit * digit;            //27       //27+125=152       153=152+1
		n /= 10;     //15     1      0
	}
	
	if(num == ams)
	{
		printf("%d",ams);
	}
	else
	{
		printf("The number is not an amstrong number");
	}
	getch();
	return 0;
}
