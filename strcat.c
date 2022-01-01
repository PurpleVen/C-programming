#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ( )
{
char x[10],y[10];
printf("enter two strings to x,y");
scanf("%s%s",&x,&y);
strcat(y,x); //here y characters added to x.
printf("\n x string is =%s",x);
printf("\n y string is =%s",y);
getch( );
}

