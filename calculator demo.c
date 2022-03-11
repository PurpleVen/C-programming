#include<stdio.h>  
#include<conio.h>  
int main()  
{  
    float a, b;
    char choice; 
    printf("Enter your choice:\n");  
    printf("'+' for Addition\n'-' for Subtraction\n'*' for Multiplication\n'/' for Division\n\n");  
    scanf("%c", &choice);  
    printf("\nEnter any two numbers for calculation:\n");  
    scanf("%f %f", &a, &b);  
    
	switch(choice)  
    {  
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, (a+b));  
                break;  
  
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, (a-b));  
                break;  
  
        case '*': printf("%.2f x %.2f = %.2f\n", a, b, (a*b));  
                break;  
  
        case '/': if( b != 0)  
                    printf("%.2f / %.2f = %.2f\n", a, b, (a/b));  
                else  
                    printf("Number can't be divided by 0\n");  
                break;  
  
        default: printf("You entered wrong choice\n");  
                 break;  
    }  
    getch();
    return 0;  
}  
