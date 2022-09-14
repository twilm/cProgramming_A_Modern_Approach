#include <stdio.h>

int main(void)
{
	int 
}

// n is a copy of the original exponent.
// can be modified inside the function thus removing
// the need for i.
int power(int x, int n)
{
	int i, result = 1;

	for (i = 1; i <= n; i++)
	{
		result = result * x;
	}

	return result;
}
