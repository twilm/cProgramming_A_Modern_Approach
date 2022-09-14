// Write the following function:
// bool search(const int a[], int n, int key);
// a is an array to be searched, n is the number of elements in the array, and key is 
// the search key. search should return true if key matches some element of a, and
// false if it doesnt. Use pointer arithmetic - not subscripting to visit array elements.

#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(const int a[], int n, int key);

int main(void)
{
    int k;
	const int sear_arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Key? ");
	scanf("%d", &k);

	bool result = search(sear_arr, N, k);
	printf("%d \n", result);

	if (result == true)
	{
		printf("%d is in array\n", k, result);
	}

	
}

bool search(const int a[], int n, int key)
{
	const int *p; 
	
	for (p = a; p < a + n; p++)
	{
		if (*p == key)
		{
			return true;
		}
	}
	return false;

}
