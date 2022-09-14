#include <stdio.h>


void store_zeros(int a[], int n);
#define LEN 10

int main (void)
{
	int a[60];
	store_zeros(a, 30);
}

void store_zeros(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

int sum_two_dimensional_array(int a[][LEN], int n)
{
	int i, j, sum = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < LEN; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}

