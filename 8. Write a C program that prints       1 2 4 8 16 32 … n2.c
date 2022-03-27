#include<stdio.h>
#include<conio.h>
int main()
{
    int number,a;
    printf("Enter the range of number to print till: ");
    scanf("%d",&number);
    for(a=1;a<=number;a*=2)
    {
        printf("%d ",a);
    }
    getch ();
}

