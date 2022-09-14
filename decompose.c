#include <stdio.h>

void decompose(double x, long int_part, double frac_part);
int main(void)
{
	long i = 15;
	double d = 10;
	double d = decompose(3.14159, i, d);
}	


void decompose(double x, long int_part, double frac_part)
{
	int_part = (long) x; /* Drops the fractional part of x */
	frac_part = x - int_part;
}
