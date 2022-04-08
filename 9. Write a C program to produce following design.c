#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j, A;
	for (j=1; j<=5; j++)
	{
		for(i=1; i<=j; i++)
		printf("%c ", 'A' + i - 1);
        printf("\n\n");
    }
getch();
}
