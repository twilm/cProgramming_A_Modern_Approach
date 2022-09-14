// Write a function num_digits that returns the number of digits in n (a positive integer)
// HINT:	To determine the number of digits in a number n, divide it by 10 repeatedly. When 
//			n reaches 0, the number of divisions indicates how many digits n originally had.
#include <stdio.h>

int num_digits(int n);

int main (void)
{
	int n;

	n = 1;
	int result = num_digits(n);
	printf("%d\n", result);
}

int num_digits(int n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}
