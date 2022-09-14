#include <stdio.h>

/* STACK */
// Abstract concept, not exclusive to C. A stack, like an array, can store multipele data items
// of the same type. Howeveer the operations on a stack are limited. Can either
// push an item onto the stack - (add one to one eend - the "stack top" )
// or POP (remove it from the same end)
// Cant examine or modify an item thats not at the top of the stack
//
// IMPLEMENTATION
//	-	Store its items in an array, which we'll call cobntents. A seperate integer variable named top
//	marks the position of the stack top. When the stack is empty top hs the value 0.
//	To push an item on the top of stack, we simply store the item in contents at the position indicated by top, then increment top. Popping an item requires DECREMENTING top, then using it
//	as an index into contents to fetch the iteem that's being popped
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
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
	} else {
		contents[top++] = i;
	}
}

int pop(void)
{
	if (is_empty())
	{
		stack_underflow();
	} else{
		return contents[--top];
	}
}
