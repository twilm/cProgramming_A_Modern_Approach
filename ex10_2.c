// The following program outline shows only function definitions and variable declarations.
//
// For each of the following scopes, list all variable and parameter names visible in
// that scope/  If theres more than 1 variable or parameter with the same name, indicate which 
// one is visible
//
// a) the f function
// A:	int b, c int b, d
// b) the g function
// A:	int b, c int c, int a, d
// c) the block in which a and d are declared.
// A:	int b,c int c, int a,d
// d) the main function
// A;	int c, d int b, c
#include <stdio.h>

int b, c;

void f(void)
{
	int b, d;
}

void g(int a)
{
	int c;
	{
		int a, d;
	}
}

int main(void)
{
	int c, d;
}
