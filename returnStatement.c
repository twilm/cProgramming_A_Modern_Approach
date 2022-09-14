#include <stdio.h>

int main(void)
{
}


int func(int a)
{
	int n, status;
	return a * a;
	// return expression ;
	// expression is often just const or variable:
	return 0;
	return status;

	// more complex expressions are possible. 
	// For example conditional operator being used:
	return n >= 0 ? n : 0;
	// n >= 0 ? n : 0; evaluated first
	// statement returns the value of n if its not negative; otherwise
	// it returns 0.
}

void print_int(int i)
{
	// Putting expression in void return statement will 
	// get compile-time error.
	if (i < 0)	// if i is less than 0, print_int will return without calling
				// printf. 
	{
		return;
	}
	printf("%d", i)
	// return; /* return in a void function */
}

// A return statement may appear at teh end of a void function:
void print_pun(void)
{
	printf("To C, or not to C: that is the question.\n");
	return; /* ok but not needed */
}	// using return is unnecessary though, since the function will return automatically
	// after its last statement has been executed.
