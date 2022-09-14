// Rewrite the following function to use pointer arithmetic instead of array subscripting. (
// in other words, eliminate the variable i and all uses of the [] operator).
// Make as few changes as possible.
#include <stdio.h>

void store_zeros(int a[], int n);

#define N 5
int main(void)
{
	int zero[N];
	store_zeros(zero, N);

	for (int i = 0; i < N; i++)
	{
		printf("%d", zero[i]);
	}
}

void store_zeros(int a[], int n)
{
	int *p;

	for (p = a; p < a + n; p++)
	{
		*p = 0;
	}
}
