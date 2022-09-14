// Rewrite the following function to use pointer arithmetic instead of array subscripting.
// (in other words, eliminate the variable i and all uses of the [] operator) 
// Make as few chages as possible

#include <stdio.h>

int sum_array(const int a[], int n);

int main(void)

{
	int array[] = {1, 2, 3, 4, 5};
	printf("Sum of the array = %d", sum_array(array, 5));

}
int sum_array(const int a[], int n)
{
	int sum;
	const int *p;

	sum = 0;
	for (p = a; p < a + n; p++)
	{
		sum += *p;
	}
	return sum;
}

