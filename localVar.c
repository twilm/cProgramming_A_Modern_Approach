// By default local vars have the following properties:
// -	Automatic storage duration.
//		The storage duration (or extent) of a variable is the portion of program
//		execution during which storage for the var exists. 
//		For local var its automatically allocated when the function is called and deallocated. 
// 
// -	Block Scope. The scope of the var is the portion of the program text in which the var 
//		can be referenced. Local has BLOCK scope - it is visible from its
//		point of declaration - to the end of the enclosing function body.
#include <stdio.h>


int main(void)
{
}

int sum_digits(int n)
{
	int sum = 0; /* local variable */

	while (n > 0) 
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void f(void)
{
	int i; // ---|
		   //	 |-- Scope of i
		   // ---|
}
