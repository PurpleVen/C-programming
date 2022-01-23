#include<stdio.h>

char stack[20];
int top =-1;

void push(char x)
{
	stack[++top] = x;
}

char pop()
{
	if(top == -1)
	return -1;
	else
	return stack[top--];
}

int priority(char x)
{
	if(x == '(')
	return 0;
	if(x == '+' || x == '-')
	return 1;
	if(x == '*' || x == '/')
	return 2;
}

int main()
{
	char exp[20];
	char *p, x;
	printf("Enter the expression: ");
	scanf("%s", exp);
	p = exp;
	while(*p != '\0')
	{
		if(isalnum(*p))           //is alpha numeric?
		printf("%c",*p);          //prints it if it is alphanumeric
		else if(*p == '(')         //is it open braces
		push(*p);                   // if yes push it in
		else if(*p ==')')          // is it closed braces
		{
			while((x = pop()) != '(')     //if closed braces then first pops it and then does it till closed braces comes and then stops doing it
			printf("%c", x);
		}
		else
		{
			while(priority(stack[top]) >= priority(*p))            //comparing + and open braces
			printf("%c",pop());                                  //pop it and print it
			push(*p); 
		}
		p++;
	}
	while(top != -1)            //while stack is -1 it keeps popping and since the stack will be empty so there is nothing to pop
	{ 
		printf("%c",pop());
	}
}

//(a+b*c+cd*e+f)*g
//(a/(b-c+d))*(e-a)*c


