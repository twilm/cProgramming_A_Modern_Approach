#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if (is_full())
	{
		stack_overflow();
	}else {
		contents[top++] = i;
	}
}

int pop(void)
{
	if (is_empty())
	{
		stack_underflow();
	}else{
		return contents[--top];
	}
}

int main(void)
{
	char c;

	printf("Enter parentheses and/or braces: ");
	while ((c = getchar()) != '\n')
	{
		if (c == '(' || (c == '{')) {
			push(c);
		} else if (c == ')' && pop() != '(') {
			printf("Parentheses not nested properly.");
			break;
		} else if (c == '}' && pop() != '{') {
			printf("Parentheses not nested properly.");
			break;
		}
	}

	if (is_empty()) 
		printf("All parentheses and braces are matched");
	else 
		printf("Parentheses and braces are not matched");

	return 0;
}
