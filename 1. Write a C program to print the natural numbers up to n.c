#include<stdio.h>  
#include<conio.h>
  
int main()  
{  
    int num, count = 1;  
    printf("Enter a positive number: ");  
    scanf("%d", &num);  
    printf("\nNatural numbers from %d to %d:\n", count, num);  
    while(count <= num)  
    {  
        printf("%d  ", count);  
        count++;  
    }  
   return 0;  
}  
