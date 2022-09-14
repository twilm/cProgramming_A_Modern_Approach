// Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use pointer variable
// top_ptr instead of the integer variable top.
//	Answer:
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int *top_ptr;
int contents[STACK_SIZE];
// int top = 0;

int main (void)
{
}

void make_empty(void)
{
	*top_ptr = &contents[0];
}

bool is_empty(void)
{
	return *top_ptr == &contents[0];
}

bool is_full(void)
{
	return *top_ptr == &contents[STACK_SIZE];
}

void push(int i)
{
	if (is_full())
	{
		stack_overflow();
	}else{
		contents[*top_ptr++] = i;
	}
}

int pop(void)
{
	if (is_empty())
	{
		stack_underflow();
	}else {
		return contents[--*top_ptr];
	}
}
