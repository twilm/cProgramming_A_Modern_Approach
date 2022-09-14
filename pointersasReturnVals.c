#include <stdio.h>

int *max(int *a, int *b);

int main(void)
{
	int *p, i, j;

	i, j = 5;
	p = max(&i, &j);
}

int *max(int *a, int *b)
{
	if (*a > *b)
		return a;
	else
		return b;
}

int *f(void)
{
	int i;

	return &i;	/* Never return pointer to an automatic local variable */
} 

int *find_middle(int a[], int n)
{
	return &a[n/2];
}
