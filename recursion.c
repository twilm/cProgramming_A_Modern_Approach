#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main(void)
{
	int i = fact(3);
}

// fact(3) finds that 3 is not less than or equal to 1, so it calls
	// fact(2), which finds that 2 is not less than or equal to 1, so it calls
		// fact(1) , which finds that 1 is less than or equal to 1, so it returns 1,
		// causting // fact(2) to return 2 x 1 = 2, causing 
// fact(3) to return 3 x 2 = 6.
// x(n) = x * x(n-1) - computes x(n) 
int fact(int n)
{
	if (n <= 1)
	{
		return 1;
	}else {
		return n * fact(n - 1);
	}
}
// power(5, 3) executes as follows:
// power(5, 3) finds that 3 is != 0, so it calls:
	// power(5, 2) which finds that 2 is not equal to 0 so it calls:
		// power(5, 1) which finds that 1 is not equal to 0 so it calls:
			// power(5, 0) which finds that 0 is equal to 0, so t returns 1, causing:
		// power(5, 1) to return 5 x 1 = 5, causing:
	// power(5, 2) to return 5 x 5 == 25, causing:
// power(5, 3) to return 5 x 25 = 125
int power(int x, int n)
{
	if (n == 0) // Termination condition
	{
		return 1;
	}else {
		return x * power(x, n -1);
	}
}
