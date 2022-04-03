#include<stdio.h>
#include<conio.h>
int main()  
{  
    int sidea, sideb, sidec; 
    printf("Input three sides of triangle: ");  
    scanf("%d %d %d", &sidea, &sideb, &sidec);  
    if(sidea==sideb && sideb==sidec)   
    {  
        printf("This is an equilateral triangle.\n");  
    }  
    else if(sidea==sideb || sidea==sidec || sideb==sidec) 
    {  
        printf("This is an isosceles triangle.\n");  
    }  
    else
    {  
        printf("This is a scalene triangle.\n");  
    }  
    getch();  
} 

