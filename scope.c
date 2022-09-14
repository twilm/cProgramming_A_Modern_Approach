// In a C program, same ID may have several different meanings. 
// C scope rules enable the programmer (and the compiler) to determine which meaning
// is relevant at a given point in the program
// When Declaration inside a block names an identifier that's already visible (because it has
// file scope or because its declared in an enclosing block). The new declaration temp "hides"
// the old one, and the identifier takes on a new meaning. At the end of the block, the identifier regai
// ns its old meaning
#include <stdio.h>

// in Declaration 1, i is a variable with static storage duration and file scope.
int i; /* Declaration 1 */

void f(int i)//(int i)- /* Declaration 2 */
{			 // i is a parameter with block scope
	i = 1; 
}

void g(void)
{
	int i = 2;	/* Declaration 3 */
				// i is an automatic variable with block
				// scope
	if (i > 0)
	{
		int i;  /* Declaration 4 */
		// ||goes to that one
		i = 3; // i  is also automatic and has block scope.
	}
	i = 4; // -> goes to Declaration 3
}
void h(void)
{
	i = 5; // Goes to the first Declaration.
}
