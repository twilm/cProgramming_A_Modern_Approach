// Suppose that a program has only one function (main). How many different variables
// named i could this program contain?
// ANSWER:
//		3 as below
#include <stdio.h>

int i = 0;

int main(void)
{
	int i = 0;
	while (i < 0)
	{
		int i = 0;
	}
}
