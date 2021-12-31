#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char x[10],y[10];
int l;
printf("enter two strings to x,y");
scanf("%s%s",&x,&y);
l=strcmp(x,y);
if(l>0)
printf("x is big");
else if(l<0)
printf("y is big");
else
printf("both are equal");
getch( );
}


