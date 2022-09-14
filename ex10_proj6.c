// Some calculators (notably those from Hewlett-Packard) use a system of writing mathemat-
// ical expressions known as Reverse Polish Notation (RPN). In this notation, operators are
// placed after their operands instead of between their operands. For example 1 + 2 wouldd be
// written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can
// easily be evaluated using a stack. The algorithm involves reading te operators and operands 
// in an expression from left to right, performing the following actions:
//		-	When an operand is encountered, push it onto the stack.
//		-	When an operator is encountered, pop its operands from the stack, perform the opera-
//			tion on those operands, and then push the result onto the stack.
//	Write a program that evaluates RPN expressions. The operands will be single-digit integers.
//	The operators are +,-,*,/,and =. The = operator causes the top stack item to be displayed;
//	afterwards, the stack is cleared and the user is prompted to enter another expression. The
//	process continues until the user enters a character that is not an operator or operand:
//	Enter an RPN expression: 1 2 3 * + =
//	Value of expression: 7
//	Enter an RPN expression: 5 8 * 4 9 - / =
//	Value of expression: -8
//	Enter an RPN expression: q
//	If the stack overflows, the program will display the message Expression is too complex and
//	terminate. If the stack underflows (because of an expression such as 1 2 + +) the program
//	will display the message Not enough operands in expression and terminate. 
//	HINTS: 
//		Incorporate the stack code from Section 10.2 into your program. Use scanf(" %c", &ch) to rea
//		d operators an operands.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* External Variables */
int contents[STACK_SIZE];
int top = 0;

/* function prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void process_switch(char ch);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	char ch;
	printf("Enter an RPN expression: ");

	for (;;) {
		ch = getchar();
		process_switch(ch);
	}
	return 0;

}
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

void stack_overflow(void)
{
	printf("Expression is too complex\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Not enough operandds in expression\n");
	exit(EXIT_FAILURE);
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else contents[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else return contents[--top];
}

void process_switch(char ch)
{
	int operand1, operand2;
	switch (ch) {
	case '0': push(0); break;
	case '1': push(1); break;
	case '2': push(2); break;
	case '3': push(3); break;
	case '4': push(4); break;
	case '5': push(5); break;
	case '6': push(6); break;
	case '7': push(7); break;
	case '8': push(8); break;
	case '9': push(9); break;
	
	case '+':	push(pop() + pop()); break;
	case '-':	operand1 = pop(); 
				operand2 = pop(); 
				push(operand1 - operand2);
				break;
	case '*':	operand1 = pop(); 
				operand2 = pop(); 
				push(operand1 * operand2);
				break;
	case '/':	push(pop() / pop()); break;
				operand1 = pop(); 
				operand2 = pop(); 
				push(operand1 / operand2);
				break;
	case '=':   printf("Value of expression: %d\n", pop());
				break;
	case ' ':   break;

	default:	exit(EXIT_FAILURE);
	}
}

