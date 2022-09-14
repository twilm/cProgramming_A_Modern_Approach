// Write the following function:
// int *find_largest(int a[], int n);
// When passed an array a of length n, the function will return a pointer to the array's largest element
#include <stdio.h>

int *find_largest(int a[], int n);

#define N 10

int main(void)
{
	int num_array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d\n", find_largest(num_array, N));
}

int *find_largest(int a[], int n)
{
	int i;
	int *p_num = &a[0];
	int temp;

	for (i = 0; i < n; i++)
	{
		if (a[i] > *p_num) {
			*p_num = a[i];
		}
	}
	return p_num;
}


