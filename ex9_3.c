// Write a function gcd(m, n) that calculates the greatest common divisor of integers
// m and n (Programming Project 2 in Chapter 6 describes Euclid's algorithm for comput-
// ing GCD.)
// Answer:

#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
	int x, y;

	x = 4, y = 2;
	int total =  gcd(x, y); 
	printf("%d\n", total);
}
int gcd(int m, int n)
{
	if (m == 0)
	{
		return n;
	}
	return gcd(m % n, m);
}
