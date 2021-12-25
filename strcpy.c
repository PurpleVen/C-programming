#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char x[10],y[10];
printf("Enter A String To That You Want To Copy : ");
scanf("%s",&x);
strcpy(y,x); //??here x characters copied to y.
printf("\nThe Copied String Is = %s",y);
printf("\n");
return 0;
}


