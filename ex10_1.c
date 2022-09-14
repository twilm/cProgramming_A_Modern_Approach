// The following program outline shows only function definitions and variable declarations.
// For each of the following scopes, list all variable and parameter names visible in that scope
// a) the f function
// A:	int a, int c, int b.
// b) the g function
// A:	int a, int d, int e
// c) the block in which e is declared
// A:		int e, int d, int a
// d) the main function
// A;		int a, int b, int c


#include <stdio.h>

int a;

void f(int b)
{
	int c;
}

void g(void)
{
	int d;
	{
		int e;
	}
}

int main(void)
{
	int f;
}
