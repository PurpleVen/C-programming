#include<stdio.h>
#include<conio.h>
#include<string.h>
int main( )
{
char x[10];
printf("enter a string");
scanf("%s",&x);
strupr(x);
printf("\n given string in upper case=%s",x);
//strlwr(x);
//printf("\n given string in lower case=%s",x);
getch( );
}

