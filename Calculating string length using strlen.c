//Calculating string length using strlen
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[100]; int i;
	printf("Enter a string: ");
	scanf("%s",s);
	i=strlen(s);
	printf("Length of string: %d",i);
	
	getch();
}
