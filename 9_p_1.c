// Write a program that asks the user to enter a series of intgers (which it stores in an array),
// then sorts the integers by calling the function selection_sort. When given an array with
// n elements, selection_sort must do the following:
//	1. Search the array to find the largest element, then move it to the last position in the array.
//	2. Call itself recursively to sort the first n - 1 elements of the array.
#include <stdio.h>

void swap(int *xp, int *yp);
int selection_sort(int a[], int n);
void printArray(int a[], int size);

int main(void)
{
	int n;
	int series[n];

	printf("How many integers would you like to enter?");
	scanf("%d", &n); 

	printf("Enter integers: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &series[i]);
	}

	selection_sort(series, n);
	printf("Sorted array: \n");
	printArray(series, n);

	return 0;
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int selection_sort(int a[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (int i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_idx])
			{
				min_idx = j;
			}
		}

	}
}
	
void printArray(int a[], int size)
{
	int i; 
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
