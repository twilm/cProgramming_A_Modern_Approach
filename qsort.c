// Notes:
//		Although this version of Quicksort works, it's not the best. THere are a 
//		number of ways to improve the program's performans, including:
//		-	Improving the partitioning algorithm
//				ITS BETTER TO TAKE THE MEDIAN OF FIRST ELE AND MIDDLE ELE AND 
//				LAST ELE - the part.. process itself can also be sped up
//				its possible to avoid the low<high tests in 2 while loops
//		-	Using a different method to sort small arrays. 
//		-	Making quicksort non-recursive. Naturally more efficient when recursion 
//			removed
/* Sorts an array of integers using Quicksort algorithm */
#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
	int a[N], i;

	printf("Enter %d numbers to be sorted: ", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	
	quicksort(a, 0, N -1);

	printf("In sorted order: ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;

}

void quicksort(int a[], int low, int high)
{
	int middle;

	if (low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
	// create partition element
	int part_element = a[low];

	for (;;)
	{
		while (low < high && part_element <= a[high])
		{
			high-- ;
		}
		if (low >= high) break;
		a[low++] = a[high];

		while (low < high && a[low] <= part_element)
		{
			low++ ;
		}
		if (low >= high) break;
		a[high--] = a[low];
	}
	a[high] = part_element;
	return high;
}
